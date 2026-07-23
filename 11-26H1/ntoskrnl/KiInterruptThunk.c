/*
 * XREFs of KiInterruptThunk @ 0x140737A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KiInterruptThunk(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  return FsRtlTruncateSmallMcb(a1, a2, a3, a4);
}
