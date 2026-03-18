/*
 * XREFs of FxFreeToNPagedLookasideListNoTracking @ 0x1400702CC
 * Callers:
 *     ?SelfDestruct@FxRequestFromLookaside@@MEAAXXZ @ 0x14002AF50 (-SelfDestruct@FxRequestFromLookaside@@MEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 */

void __fastcall FxFreeToNPagedLookasideListNoTracking(_NPAGED_LOOKASIDE_LIST *Lookaside, _SLIST_ENTRY *Entry)
{
  USHORT Depth; // bx

  Depth = Lookaside->L.Depth;
  if ( ExQueryDepthSList(&Lookaside->L.ListHead) >= Depth )
    ((void (__fastcall *)(_SLIST_ENTRY *))Lookaside->L.FreeEx)(Entry);
  else
    ExpInterlockedPushEntrySList(&Lookaside->L.ListHead, Entry);
}
