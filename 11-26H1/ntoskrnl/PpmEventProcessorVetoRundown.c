/*
 * XREFs of PpmEventProcessorVetoRundown @ 0x1404BF6D8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x1407E0E70 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212E70 (EtwEventEnabled.c)
 *     EtwWriteEx @ 0x140213050 (EtwWriteEx.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PpmEventTracePreVetoAccounting @ 0x1404BF8CC (PpmEventTracePreVetoAccounting.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall PpmEventProcessorVetoRundown(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edx
  _BYTE *v3; // rdi
  unsigned __int8 *i; // rsi
  KIRQL v5; // al
  unsigned int v6; // edx
  KIRQL v7; // r14
  unsigned int v8; // ecx
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  int v11; // [rsp+40h] [rbp-29h] BYREF
  __int16 v12; // [rsp+44h] [rbp-25h] BYREF
  _DWORD v13[2]; // [rsp+48h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+50h] [rbp-19h] BYREF
  _BYTE *v15; // [rsp+60h] [rbp-9h]
  __int64 v16; // [rsp+68h] [rbp-1h]
  int *v17; // [rsp+70h] [rbp+7h]
  __int64 v18; // [rsp+78h] [rbp+Fh]
  _QWORD *v19; // [rsp+80h] [rbp+17h]
  __int64 v20; // [rsp+88h] [rbp+1Fh]
  char *v21; // [rsp+90h] [rbp+27h]
  __int64 v22; // [rsp+98h] [rbp+2Fh]

  v1 = *(_QWORD *)(a1 + 34880);
  memset(v13, 0, 7);
  if ( v1 )
  {
    v2 = 1;
    v11 = 1;
    v3 = (_BYTE *)(a1 + 209);
    for ( i = (unsigned __int8 *)(a1 + 208); v2 < *(_DWORD *)(v1 + 40); v11 = v2 )
    {
      LOWORD(v13[0]) = *i;
      BYTE2(v13[0]) = *v3;
      UserData.Ptr = (ULONGLONG)v13;
      *(_DWORD *)((char *)v13 + 3) = v2;
      *(_QWORD *)&UserData.Size = 7LL;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PROCESSOR_PRE_VETO_ACCOUNTING_RUNDOWN);
      v2 = v11 + 1;
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN) )
    {
      v12 = *i;
      UserData.Ptr = (ULONGLONG)&v12;
      *(_QWORD *)&UserData.Size = 2LL;
      v15 = v3;
      v16 = 1LL;
      v5 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v6 = 0;
      v7 = v5;
      v11 = 0;
      if ( *(_DWORD *)(v1 + 40) )
      {
        v8 = 0;
        do
        {
          v18 = 4LL;
          v17 = &v11;
          v9 = (_QWORD **)(v1 + 352LL * v8 + 1360);
          v10 = *v9;
          if ( *v9 != v9 )
          {
            do
            {
              v19 = v10 + 2;
              v20 = 4LL;
              v21 = (char *)v10 + 20;
              v22 = 4LL;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PROCESSOR_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 5u, &UserData);
              v10 = (_QWORD *)*v10;
            }
            while ( v10 != v9 );
            v6 = v11;
          }
          v11 = ++v6;
          v8 = v6;
        }
        while ( v6 < *(_DWORD *)(v1 + 40) );
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v7);
    }
  }
}
