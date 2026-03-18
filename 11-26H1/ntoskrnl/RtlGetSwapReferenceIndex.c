/*
 * XREFs of RtlGetSwapReferenceIndex @ 0x140B313AC
 * Callers:
 *     CmFcManagerStartRuntimePhase @ 0x140CF0AF0 (CmFcManagerStartRuntimePhase.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlGetSwapReferenceIndex(_QWORD *a1)
{
  return *a1 & 1LL;
}
