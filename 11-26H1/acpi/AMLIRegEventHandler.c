/*
 * XREFs of AMLIRegEventHandler @ 0x140051350
 * Callers:
 *     UnRegisterOperationRegionHandler @ 0x1400B56D4 (UnRegisterOperationRegionHandler.c)
 *     RegisterOperationRegionHandler @ 0x1400D4214 (RegisterOperationRegionHandler.c)
 *     OSInitializeCallbacks @ 0x1400DD408 (OSInitializeCallbacks.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RegRSAccess @ 0x140036D68 (RegRSAccess.c)
 *     Simulator_Pre_RegEventHandler @ 0x1400515E8 (Simulator_Pre_RegEventHandler.c)
 *     Simulator_Free_Arguments @ 0x14006C93C (Simulator_Free_Arguments.c)
 *     Simulator_TestNotifyRet @ 0x14006CD8C (Simulator_TestNotifyRet.c)
 *     RegEventHandler @ 0x14006E754 (RegEventHandler.c)
 *     RegOpcodeHandler @ 0x14006E7B0 (RegOpcodeHandler.c)
 */

__int64 AMLIRegEventHandler(unsigned int a1, unsigned int a2, ...)
{
  __int64 v2; // r9
  __int64 v3; // rsi
  unsigned __int64 v4; // rdi
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax
  __int64 *v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // r9
  unsigned int v12; // ebx
  int v13; // eax
  _QWORD v14[3]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF
  va_list va; // [rsp+60h] [rbp+18h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF
  va_list va1; // [rsp+68h] [rbp+20h]
  va_list va2; // [rsp+70h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v15 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v17 = va_arg(va2, _QWORD);
  v2 = v17;
  v3 = 0LL;
  v4 = a1;
  v5 = v17;
  v6 = v15;
  v14[0] = 0LL;
  dword_14008ED38 = 0;
  pszDest = 0;
  if ( g_SimulatorCallbackObject )
  {
    result = Simulator_Pre_RegEventHandler(a1, a2, (unsigned int)va, (unsigned int)va1, (__int64)v14);
    if ( (_DWORD)result )
      return result;
    v5 = v17;
    v6 = v15;
    v3 = v14[0];
  }
  if ( (unsigned int)v4 > 0xB )
  {
    if ( (_DWORD)v4 != 12 )
    {
      switch ( (_DWORD)v4 )
      {
        case 0xD:
          v9 = &ghMapTable;
          goto LABEL_14;
        case 0xE:
          v9 = (__int64 *)&ghGetAcpiTableVersion;
          goto LABEL_14;
        case 0xF:
          v9 = (__int64 *)&ghCheckOsiString;
          goto LABEL_14;
        case 0x10:
          v9 = &ghMutexObject;
          goto LABEL_14;
        case 0x11:
          v9 = &ghQueryDLMSupportHandler;
          goto LABEL_14;
        case 0x12:
          v9 = &ghLoadTable;
          goto LABEL_14;
        case 0x13:
          v9 = &ghUnloadTable;
          goto LABEL_14;
        case 0x14:
          v9 = (__int64 *)&ghNativeMethodEvalObject;
          goto LABEL_14;
      }
      goto LABEL_38;
    }
    v11 = 0x80000000LL;
    goto LABEL_48;
  }
  if ( (_DWORD)v4 == 11 )
  {
    v9 = &ghDestroyObj;
    goto LABEL_14;
  }
  if ( (unsigned int)v4 > 6 )
  {
    if ( (_DWORD)v4 != 7 )
    {
      if ( (_DWORD)v4 == 8 )
      {
        v9 = (__int64 *)&qword_14008ED18;
      }
      else if ( (_DWORD)v4 == 9 )
      {
        v9 = &qword_14008ED28;
      }
      else
      {
        v9 = (__int64 *)&ghCreate;
      }
      goto LABEL_14;
    }
    LOBYTE(v2) = 1;
    goto LABEL_20;
  }
  switch ( (_DWORD)v4 )
  {
    case 6:
      v2 = 0LL;
LABEL_20:
      v10 = RegRSAccess(a2, v6, v5, v2);
      goto LABEL_49;
    case 1:
      v11 = 0LL;
LABEL_48:
      v10 = RegOpcodeHandler(a2, v6, v5, v11);
LABEL_49:
      v12 = v10;
      if ( v10 == 32772 )
        v12 = 259;
      goto LABEL_51;
    case 2:
      v9 = &ghNotify;
      goto LABEL_14;
    case 3:
      v9 = &ghFatal;
      goto LABEL_14;
    case 4:
      v9 = &ghValidateTable;
      goto LABEL_14;
    case 5:
      v9 = (__int64 *)&ghGlobalLock;
LABEL_14:
      v10 = RegEventHandler(v9, v6, v5);
      goto LABEL_49;
  }
LABEL_38:
  v12 = -1072431091;
  LogError(-1072431091);
  AcpiDiagTraceAmlError(0LL, -1072431091);
  PrintDebugMessage(0xA4u, (const void *)v4, 0LL, 0LL, 0LL);
LABEL_51:
  if ( g_SimulatorCallbackObject )
  {
    if ( v3 )
    {
      v12 = Simulator_TestNotifyRet((PVOID)v3);
      v13 = *(_DWORD *)(v3 + 4);
      if ( v13 == 1 || (unsigned int)(v13 - 2) <= 1 )
        Simulator_Free_Arguments(*(unsigned int *)(v3 + 32), *(_QWORD *)(v3 + 40));
      ExFreePoolWithTag((PVOID)v3, 0);
    }
    else
    {
      return (unsigned int)-1073741823;
    }
  }
  return v12;
}
