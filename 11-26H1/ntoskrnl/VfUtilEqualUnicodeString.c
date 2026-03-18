/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140C202E8
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x140C2027C (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140C34F34 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140730D90 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  int v2; // eax

  v2 = *(unsigned __int16 *)a1;
  return (_WORD)v2 == *(_WORD *)a2 && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == v2;
}
