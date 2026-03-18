/*
 * XREFs of GetNameSpaceObjectNoLock @ 0x140007700
 * Callers:
 *     ParseSuperName @ 0x140001A40 (ParseSuperName.c)
 *     ParseOpcode @ 0x140007B60 (ParseOpcode.c)
 *     Field @ 0x1400102A0 (Field.c)
 *     CreateNameSpaceObject @ 0x140010FE0 (CreateNameSpaceObject.c)
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     ACPIInterruptDispatchEventDpc @ 0x140020600 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIIoctlEvalPreProcessingV1 @ 0x14002298C (ACPIIoctlEvalPreProcessingV1.c)
 *     ACPIIoctlEvalPreProcessingV2 @ 0x140024044 (ACPIIoctlEvalPreProcessingV2.c)
 *     GetNameSpaceObject @ 0x140030FE0 (GetNameSpaceObject.c)
 * Callees:
 *     LogError @ 0x140007244 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x1400072EC (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140007434 (PrintDebugMessage.c)
 *     RtlStringCchPrintfA @ 0x140008FC0 (RtlStringCchPrintfA.c)
 *     RtlStringCbPrintfA @ 0x14000903C (RtlStringCbPrintfA.c)
 *     WPP_RECORDER_SF_Ds @ 0x14003DC80 (WPP_RECORDER_SF_Ds.c)
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 *     memmove @ 0x140072440 (memmove.c)
 */

__int64 __fastcall GetNameSpaceObjectNoLock(const char *a1, __int64 a2, __int64 *a3, int a4)
{
  __int64 v4; // r15
  char v6; // cl
  const char *v8; // rbx
  unsigned __int64 v9; // rax
  char v10; // r12
  _QWORD *v11; // rdi
  __int64 v12; // rax
  unsigned int v13; // edi
  __int64 v14; // rsi
  const char **j; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 v20; // rsi
  _QWORD *i; // rax
  int UserData; // [rsp+20h] [rbp-E0h]
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+48h] [rbp-B8h]
  struct _EVENT_DATA_DESCRIPTOR v25; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v26; // [rsp+60h] [rbp-A0h]
  __int64 v27; // [rsp+68h] [rbp-98h]
  int *v28; // [rsp+70h] [rbp-90h]
  __int64 v29; // [rsp+78h] [rbp-88h]
  __int64 v30; // [rsp+80h] [rbp-80h] BYREF
  __int16 v31; // [rsp+88h] [rbp-78h]
  __int64 v32; // [rsp+90h] [rbp-70h] BYREF
  __int16 v33; // [rsp+98h] [rbp-68h]
  char pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  v4 = a2;
  v24 = a4;
  if ( !a2 )
    v4 = gpnsNameSpaceRoot;
  v6 = *a1;
  if ( v6 == 92 )
  {
    v8 = a1 + 1;
    v4 = gpnsNameSpaceRoot;
  }
  else
  {
    v8 = a1;
    if ( v6 == 94 )
    {
      do
      {
        if ( !v4 )
          break;
        v4 = *(_QWORD *)(v4 + 16);
        ++v8;
      }
      while ( *v8 == 94 );
    }
  }
  *a3 = v4;
  if ( !v4 )
  {
    v13 = -1073741772;
    goto LABEL_26;
  }
  if ( !*v8 )
  {
LABEL_39:
    if ( (gdwfAMLI & 4) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 112));
    return 0LL;
  }
  if ( (a4 & 1) != 0 )
    goto LABEL_48;
  if ( ((*a1 - 92) & 0xFD) == 0 )
    goto LABEL_48;
  v9 = -1LL;
  do
    ++v9;
  while ( a1[v9] );
  if ( v9 > 4 )
LABEL_48:
    v10 = 0;
  else
    v10 = 1;
LABEL_13:
  while ( 1 )
  {
    v11 = (_QWORD *)(v4 + 24);
    if ( (_QWORD *)*v11 != v11 )
      break;
LABEL_33:
    v13 = -1073741772;
    if ( v10 )
    {
      v4 = *(_QWORD *)(v4 + 16);
      if ( v4 )
        continue;
    }
    goto LABEL_26;
  }
  v12 = (__int64)strchr(v8, 46);
  if ( v12 )
  {
    LODWORD(v12) = v12 - (_DWORD)v8;
  }
  else
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v8[v12] );
  }
  if ( (unsigned int)v12 <= 4 )
  {
    v23 = 1600085855;
    v20 = (unsigned int)v12;
    memmove(&v23, v8, (unsigned int)v12);
    for ( i = (_QWORD *)*v11; v11 != i && i[2]; i = (_QWORD *)*i )
    {
      if ( *((_DWORD *)i + 10) == v23 )
      {
        v8 += v20;
        v4 = (__int64)i;
        if ( *v8 == 46 )
        {
          ++v8;
          goto LABEL_13;
        }
        if ( *v8 )
          goto LABEL_13;
        *a3 = (__int64)i;
        goto LABEL_39;
      }
    }
    goto LABEL_33;
  }
  v13 = -1073741773;
  dword_14008ED38 = -1073741773;
  v14 = 0LL;
  for ( j = (const char **)&unk_14008DC50; j[1]; j += 2 )
  {
    if ( *(_DWORD *)j == -1073741773 )
    {
      RtlStringCchPrintfA(&::pszDest, 0x100uLL, "AMLI_ERROR(%08x): %s", -1073741773, j[1]);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ds(
          WPP_GLOBAL_Control->DeviceExtension,
          v16,
          v17,
          v18,
          UserData,
          51,
          *((_QWORD *)&unk_14008DC50 + 2 * v14 + 1));
      break;
    }
    ++v14;
  }
  v23 = -1073741773;
  v33 = 0;
  v31 = 0;
  v32 = 0x41002F004ELL;
  v25.Ptr = (unsigned __int64)&v30;
  v30 = 0x41002F004ELL;
  v26 = &v32;
  v28 = &v23;
  *(_QWORD *)&v25.Size = 6LL;
  v27 = 6LL;
  v29 = 4LL;
  EtwWrite(*(REGHANDLE *)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters, &ACPI_ETW_EVENT_AMLI_ERROR, 0LL, 3u, &v25);
  if ( (_BYTE)KdDebuggerEnabled )
  {
    DbgPrintEx(0x19u, 0, off_14008D0F8, a1, 0LL, 0LL, 0LL);
    if ( (gDebugger & 0x40000) != 0 )
    {
      RtlStringCbPrintfA(pszDest, 0x100uLL, "!amli err 0x%x %p %p %p %p;g", 57, a1, 0LL, 0LL, 0LL);
      DbgCommandString("ACPI", pszDest);
    }
  }
  else
  {
    RtlStringCbPrintfA(pszDest, 0x100uLL, "AMLIDBG: !amli err 0x%x %p %p %p %p", 57, a1, 0LL, 0LL, 0LL);
    DbgPrintEx(0x19u, 0, "%s\n", pszDest);
  }
LABEL_26:
  if ( v24 < 0 && v13 == -1073741772 )
  {
    LogError(-1073741772);
    AcpiDiagTraceAmlError(0LL, -1073741772);
    PrintDebugMessage(0x3Au, a1, 0LL, 0LL, 0LL);
  }
  *a3 = 0LL;
  return v13;
}
