/*
 * XREFs of PopEsWorker @ 0x140B72400
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopEsUpdateState @ 0x14051C1C0 (PopEsUpdateState.c)
 *     PopEsPublishStateV2 @ 0x1407DB984 (PopEsPublishStateV2.c)
 *     PopEsUpdateSetting @ 0x1407DBAE4 (PopEsUpdateSetting.c)
 *     ExSubscribeWnfStateChange @ 0x140948A90 (ExSubscribeWnfStateChange.c)
 *     PopEsStartTelemetry @ 0x140B4F63C (PopEsStartTelemetry.c)
 */

__int64 __fastcall PopEsWorker(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  char v4; // di
  unsigned __int32 v5; // eax
  unsigned __int32 v6; // ett
  unsigned int v7; // ecx
  __int64 v8; // r8
  int v9; // edx
  int v10; // ecx
  unsigned int v11; // ebx
  __int64 result; // rax
  int v13; // edx
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _KLOCK_ENTRIES *v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9

  do
  {
    do
    {
      v4 = 0;
      _m_prefetchw(&PopEsWorkItemDue);
      v5 = PopEsWorkItemDue;
      do
      {
        v6 = v5;
        v5 = _InterlockedCompareExchange(&PopEsWorkItemDue, v5, v5);
      }
      while ( v6 != v5 );
      _BitScanForward(&v7, v5);
      v8 = v5;
      v9 = 1 << v7;
      v10 = v5 & ~(1 << v7);
      if ( (v10 & 8) != 0 && ((v9 - 2) & 0xFFFFFFFD) == 0 )
      {
        v4 = 1;
        v10 &= ~8u;
      }
      v11 = v10 & 0xFFFFFFFB;
      if ( v9 != 2 )
        v11 = v10;
      result = (unsigned int)_InterlockedCompareExchange(&PopEsWorkItemDue, v11, v5);
    }
    while ( (_DWORD)v8 != (_DWORD)result );
    v13 = v9 - 1;
    if ( v13 )
    {
      v14 = (unsigned int)(v13 - 1);
      if ( (_DWORD)v14 )
      {
        if ( (_DWORD)v14 != 2 )
          continue;
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, v14, v8, a4);
      }
      else
      {
        PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, v14, v8, a4);
        PopEsUpdateSetting();
      }
      PopEsUpdateState(v4);
      result = PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
    }
    else
    {
      PopEsPublishStateV2(1);
      PopAcquireRwLockExclusive((unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink, v15, v16, v17);
      PopEsStartTelemetry(v19, v18, v20, v21);
      PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
      ExSubscribeWnfStateChange(
        (__int64)&PopModernStandbyStateNotify.MutantListHead,
        (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE);
      ExSubscribeWnfStateChange(
        (__int64)&PopModernStandbyStateNotify.SuspendEvent.Header.WaitListHead.Blink,
        (__int64)&WNF_GPOL_SYSTEM_CHANGES);
      result = ExSubscribeWnfStateChange(
                 (__int64)&PopModernStandbyStateNotify.ThreadListEntry,
                 (__int64)&WNF_PO_ENERGY_SAVER_OVERRIDE_MDM);
    }
  }
  while ( v11 );
  return result;
}
