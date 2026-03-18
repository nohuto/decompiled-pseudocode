/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x1404A53C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFinalizeTimerDeletion(unsigned __int64 P)
{
  unsigned __int64 v2; // rcx

  if ( stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink != (struct _LIST_ENTRY *)_byteswap_uint64(P ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(P + 136), KiWaitNever)) )
  {
    v2 = (unsigned __int64)stru_140FC01F0.WaitBlock[2].WaitListEntry.Flink ^ _byteswap_uint64(P ^ __ROL8__(
                                                                                                    KiWaitNever ^ *(_QWORD *)(P + 144),
                                                                                                    KiWaitNever));
    guard_dispatch_icall_no_overrides(v2, v2);
  }
  *(_BYTE *)(P + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)P, 0x6D547845u);
}
