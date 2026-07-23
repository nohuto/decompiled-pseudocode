/*
 * XREFs of ExpFinalizeTimerDeletion @ 0x14049EA50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExpFinalizeTimerDeletion(unsigned __int64 P)
{
  unsigned __int64 v2; // rcx

  if ( stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink != (struct _LIST_ENTRY *)_byteswap_uint64(P ^ __ROL8__(KiWaitNever ^ *(_QWORD *)(P + 136), KiWaitNever)) )
  {
    v2 = (unsigned __int64)stru_140FC11F0.WaitBlock[2].WaitListEntry.Blink ^ _byteswap_uint64(P ^ __ROL8__(
                                                                                                    KiWaitNever ^ *(_QWORD *)(P + 144),
                                                                                                    KiWaitNever));
    guard_dispatch_icall_no_overrides(v2, v2);
  }
  *(_BYTE *)(P + 152) = ~ExpTimerFreedCookie;
  ExFreePoolWithTag((PVOID)P, 0x6D547845u);
}
