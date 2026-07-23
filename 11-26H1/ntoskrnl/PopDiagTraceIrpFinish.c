/*
 * XREFs of PopDiagTraceIrpFinish @ 0x14021BC90
 * Callers:
 *     PopDequeueQuerySetIrp @ 0x1403BDC38 (PopDequeueQuerySetIrp.c)
 *     PopRequestCompletion @ 0x1403BE4B0 (PopRequestCompletion.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     PopDiagTraceIrpFinishTelemetry @ 0x14021BE34 (PopDiagTraceIrpFinishTelemetry.c)
 *     PopFxAddLogEntry @ 0x14021BFD0 (PopFxAddLogEntry.c)
 *     PopDiagGetDriverName @ 0x1404809A8 (PopDiagGetDriverName.c)
 *     IoFindDeviceThatFailedIrp @ 0x1404CD600 (IoFindDeviceThatFailedIrp.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

BOOLEAN __fastcall PopDiagTraceIrpFinish(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v2; // r9
  const WCHAR *v3; // r11
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 DeviceThatFailedIrp; // rax
  int v11; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-B0h] BYREF
  int *v14; // [rsp+60h] [rbp-A0h]
  __int64 v15; // [rsp+68h] [rbp-98h]
  const WCHAR *v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+78h] [rbp-88h]
  int v18; // [rsp+7Ch] [rbp-84h]
  _BYTE v19[128]; // [rsp+80h] [rbp-80h] BYREF

  v12 = a1;
  result = PopDiagTraceIrpFinishTelemetry();
  if ( PopDiagHandleRegistered )
  {
    result = EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH);
    if ( result )
    {
      v3 = &SourceString;
      v4 = *(_QWORD *)(v12 + 72LL * *(char *)(v12 + 66) + 200);
      v5 = *(int *)(v12 + 48);
      v11 = v5;
      LOBYTE(v2) = *(_BYTE *)(v4 + 184);
      v6 = *(_DWORD *)(v4 + 188);
      if ( (int)v5 >= 0 || v6 )
      {
        if ( v6 == 1 && (_BYTE)v2 == 2 )
        {
          v7 = *(_QWORD *)(v4 + 24);
          if ( v7 )
            v8 = *(_QWORD *)(*(_QWORD *)(v7 + 312) + 40LL);
          else
            v8 = 0LL;
          PopFxAddLogEntry(v8, 0LL, 23LL, v5);
          v3 = &SourceString;
        }
      }
      else
      {
        DeviceThatFailedIrp = IoFindDeviceThatFailedIrp(v12, v5, v4, v2);
        if ( (int)PopDiagGetDriverName(DeviceThatFailedIrp, v19) >= 0 )
          v3 = (const WCHAR *)v19;
      }
      *(_QWORD *)&UserData.Size = 8LL;
      UserData.Ptr = (ULONGLONG)&v12;
      v14 = &v11;
      v9 = -1LL;
      v15 = 4LL;
      v16 = v3;
      do
        ++v9;
      while ( v3[v9] );
      v17 = 2 * v9 + 2;
      v18 = 0;
      return EtwWriteEx(PopDiagHandle, &POP_ETW_EVENT_IRPFINISH, 0LL, 0, 0LL, 0LL, 3u, &UserData);
    }
  }
  return result;
}
