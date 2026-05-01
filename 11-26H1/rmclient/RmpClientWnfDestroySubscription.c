/*
 * XREFs of RmpClientWnfDestroySubscription @ 0x18000422C
 * Callers:
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 *     HampConnectionDestroy @ 0x1800041CC (HampConnectionDestroy.c)
 *     HamIpcChannelRundown @ 0x18000532C (HamIpcChannelRundown.c)
 * Callees:
 *     RmSubscriptionRundown @ 0x18000517C (RmSubscriptionRundown.c)
 */

__int64 __fastcall RmpClientWnfDestroySubscription(__int64 a1)
{
  RmSubscriptionRundown();
  if ( *(_QWORD *)(a1 + 56) )
    TpReleaseWork();
  return HamFreeBuffer(a1);
}
