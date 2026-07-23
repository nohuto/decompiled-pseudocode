/*
 * XREFs of KeGuardCheckICall @ 0x140C81700
 * Callers:
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7F338 @ 0x140C7F338 (sub_140C7F338.c)
 *     sub_140C7FA90 @ 0x140C7FA90 (sub_140C7FA90.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall KeGuardCheckICall(__int64 a1)
{
  guard_check_icall_no_overrides(a1);
}
