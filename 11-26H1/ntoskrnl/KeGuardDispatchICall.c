/*
 * XREFs of KeGuardDispatchICall @ 0x140C7B6F0
 * Callers:
 *     KiDecodeMcaFault @ 0x140540440 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x140540C30 (KiSwInterruptDispatch.c)
 *     sub_140542730 @ 0x140542730 (sub_140542730.c)
 *     sub_1405516D0 @ 0x1405516D0 (sub_1405516D0.c)
 *     sub_1405518EC @ 0x1405518EC (sub_1405518EC.c)
 *     sub_14055195C @ 0x14055195C (sub_14055195C.c)
 *     sub_1405519DC @ 0x1405519DC (sub_1405519DC.c)
 *     sub_140552AE4 @ 0x140552AE4 (sub_140552AE4.c)
 *     RtlpComputeEpilogueOffset @ 0x1405531C8 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C62010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C74754 @ 0x140C74754 (sub_140C74754.c)
 *     sub_140C76E10 @ 0x140C76E10 (sub_140C76E10.c)
 *     sub_140C787A8 @ 0x140C787A8 (sub_140C787A8.c)
 *     sub_140C79A90 @ 0x140C79A90 (sub_140C79A90.c)
 *     sub_140C7AA80 @ 0x140C7AA80 (sub_140C7AA80.c)
 *     sub_140C8113C @ 0x140C8113C (sub_140C8113C.c)
 *     sub_140C82940 @ 0x140C82940 (sub_140C82940.c)
 *     sub_140CA83C4 @ 0x140CA83C4 (sub_140CA83C4.c)
 *     sub_140CA8B24 @ 0x140CA8B24 (sub_140CA8B24.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
