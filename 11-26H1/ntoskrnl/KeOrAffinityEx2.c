/*
 * XREFs of KeOrAffinityEx2 @ 0x14025A960
 * Callers:
 *     <none>
 * Callees:
 *     RtlOrAffinityEx @ 0x14025A978 (RtlOrAffinityEx.c)
 */

__int64 __fastcall KeOrAffinityEx2(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlOrAffinityEx(a1, a2, a3);
}
