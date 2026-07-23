/*
 * XREFs of KeGuardDispatchICall @ 0x140C816F0
 * Callers:
 *     KiDecodeMcaFault @ 0x1405428C0 (KiDecodeMcaFault.c)
 *     KiSwInterruptDispatch @ 0x1405430B0 (KiSwInterruptDispatch.c)
 *     sub_140544BB0 @ 0x140544BB0 (sub_140544BB0.c)
 *     sub_140553B50 @ 0x140553B50 (sub_140553B50.c)
 *     sub_140553D6C @ 0x140553D6C (sub_140553D6C.c)
 *     sub_140553DDC @ 0x140553DDC (sub_140553DDC.c)
 *     sub_140553E5C @ 0x140553E5C (sub_140553E5C.c)
 *     sub_140554F64 @ 0x140554F64 (sub_140554F64.c)
 *     RtlpComputeEpilogueOffset @ 0x140555648 (RtlpComputeEpilogueOffset.c)
 *     FsRtlMdlReadCompleteDevEx @ 0x140C68010 (FsRtlMdlReadCompleteDevEx.c)
 *     sub_140C7A754 @ 0x140C7A754 (sub_140C7A754.c)
 *     sub_140C7CE10 @ 0x140C7CE10 (sub_140C7CE10.c)
 *     sub_140C7E7A8 @ 0x140C7E7A8 (sub_140C7E7A8.c)
 *     sub_140C7FA90 @ 0x140C7FA90 (sub_140C7FA90.c)
 *     sub_140C80A80 @ 0x140C80A80 (sub_140C80A80.c)
 *     sub_140C8713C @ 0x140C8713C (sub_140C8713C.c)
 *     sub_140C88940 @ 0x140C88940 (sub_140C88940.c)
 *     sub_140CAE3C4 @ 0x140CAE3C4 (sub_140CAE3C4.c)
 *     sub_140CAEB24 @ 0x140CAEB24 (sub_140CAEB24.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall KeGuardDispatchICall()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
