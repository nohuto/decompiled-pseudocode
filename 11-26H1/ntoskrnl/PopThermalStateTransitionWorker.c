/*
 * XREFs of PopThermalStateTransitionWorker @ 0x1407D4D40
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopThermalStandbyEndTracking @ 0x140423E3C (PopThermalStandbyEndTracking.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopOkayToQueueNextWorkItem @ 0x1404D7A98 (PopOkayToQueueNextWorkItem.c)
 *     PopExecutePowerAction @ 0x1409F3918 (PopExecutePowerAction.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopThermalStateTransitionWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+20h] [rbp-48h]
  __int64 v19; // [rsp+28h] [rbp-40h]
  unsigned __int64 v20; // [rsp+30h] [rbp-38h] BYREF
  __int64 v21; // [rsp+38h] [rbp-30h]
  _OWORD v22[2]; // [rsp+40h] [rbp-28h] BYREF

  v4 = 0;
  memset(v22, 0, sizeof(v22));
  v5 = 2;
  while ( 1 )
  {
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopThermalStateTransitionContext, a2, a3, a4);
    if ( !byte_140F0FCF1 && (!byte_140F0FCF3 || byte_140F0FCF4 == byte_140F0FCF1) )
      break;
    if ( !byte_140F0FCF0 )
      break;
    if ( byte_140F0FCF1 )
    {
      if ( !byte_140F0FCF2 )
      {
        v4 = 3;
        byte_140F0FCF2 = 1;
        v5 = 2;
      }
      byte_140F0FCF1 = 0;
    }
    if ( byte_140F0FCF3 && byte_140F0FCF4 )
    {
      v4 = 6;
      byte_140F0FCF3 = 0;
      v5 = 3;
    }
    PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
    PopAcquireRwLockExclusive((unsigned __int64 *)&PopSystemThermalInfo, v6, v7, v8);
    PopThermalStandbyEndTracking(v5, v9, v10);
    PopReleaseRwLock((struct _KTHREAD *)&PopSystemThermalInfo);
    LODWORD(v21) = 0;
    memset((char *)v22 + 8, 0, 24);
    v20 = v4 | 0xC000000400000000uLL;
    *(_QWORD *)&v22[0] = 0x8000000001LL;
    PopAcquirePolicyLock(v12, v11);
    if ( v4 == 6 )
      PopCriticalShutdownInProgress = 1;
    PopExecutePowerAction((unsigned int)v22, 0, (unsigned int)&v20, 5, 1);
    PopReleasePolicyLock(v14, v13, v15, v16, v18, v19, v20, v21, *(_QWORD *)&v22[0], *((_QWORD *)&v22[0] + 1));
  }
  PopOkayToQueueNextWorkItem((__int64)&PopThermalStateTransitionWorkItem);
  return PopReleaseRwLock((struct _KTHREAD *)&PopThermalStateTransitionContext);
}
