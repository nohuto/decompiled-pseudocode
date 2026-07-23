/*
 * XREFs of PpmEventPlatformVetoRundown @ 0x1404BF58C
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

void PpmEventPlatformVetoRundown()
{
  KIRQL v0; // al
  __int64 v1; // r8
  unsigned int v2; // edx
  KIRQL v3; // si
  unsigned int v4; // ecx
  _QWORD **v5; // rdi
  _QWORD *v6; // rbx
  unsigned int i; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  _QWORD *v9; // [rsp+58h] [rbp-28h]
  __int64 v10; // [rsp+60h] [rbp-20h]
  char *v11; // [rsp+68h] [rbp-18h]
  __int64 v12; // [rsp+70h] [rbp-10h]

  if ( PpmPlatformStates )
  {
    for ( i = 0; i < *(_DWORD *)PpmPlatformStates; ++i )
    {
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&i;
      PpmEventTracePreVetoAccounting(&PPM_ETW_PLATFORM_PRE_VETO_ACCOUNTING_RUNDOWN);
    }
    if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN) )
    {
      v0 = KeAcquireSpinLockRaiseToDpc(&PpmIdleVetoLock);
      v1 = PpmPlatformStates;
      v2 = 0;
      i = 0;
      v3 = v0;
      if ( *(_DWORD *)PpmPlatformStates )
      {
        v4 = 0;
        do
        {
          *(_QWORD *)&UserData.Size = 4LL;
          UserData.Ptr = (ULONGLONG)&i;
          v5 = (_QWORD **)(448LL * v4 + v1 + 88);
          v6 = *v5;
          if ( *v5 != v5 )
          {
            do
            {
              v9 = v6 + 2;
              v10 = 4LL;
              v11 = (char *)v6 + 20;
              v12 = 4LL;
              EtwWriteEx(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_VETO_RUNDOWN, 0LL, 0, 0LL, 0LL, 3u, &UserData);
              v6 = (_QWORD *)*v6;
            }
            while ( v6 != v5 );
            v2 = i;
          }
          v1 = PpmPlatformStates;
          i = ++v2;
          v4 = v2;
        }
        while ( v2 < *(_DWORD *)PpmPlatformStates );
      }
      KeReleaseSpinLock(&PpmIdleVetoLock, v3);
    }
  }
}
