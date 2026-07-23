/*
 * XREFs of ?SmHighMemPriorityWatchdogTimerCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KTIMER2@@PEAX@Z @ 0x1404DFDD0
 * Callers:
 *     <none>
 * Callees:
 *     SmQueueExWorkItem @ 0x1404DFE54 (SmQueueExWorkItem.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmHighMemPriorityWatchdogTimerCallback(__int64 a1, __int64 a2)
{
  signed __int64 v2; // rbx
  __int64 result; // rax
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = a2 + 2080;
  v5 = 0LL;
  result = guard_dispatch_icall_no_overrides(a2, &v5);
  if ( (int)result >= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v2 + 24), v2, 0LL) )
      return guard_dispatch_icall_no_overrides(a2, 0LL);
    else
      return SmQueueExWorkItem(v2, 3LL, v5);
  }
  return result;
}
