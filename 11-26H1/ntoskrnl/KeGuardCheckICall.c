/*
 * XREFs of KeGuardCheckICall @ 0x140C7B700
 * Callers:
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C79338 @ 0x140C79338 (sub_140C79338.c)
 *     sub_140C79A90 @ 0x140C79A90 (sub_140C79A90.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall KeGuardCheckICall(__int64 a1)
{
  guard_check_icall_no_overrides(a1);
}
