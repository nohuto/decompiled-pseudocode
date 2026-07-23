/*
 * XREFs of VfUtilEqualUnicodeString @ 0x140C262F4
 * Callers:
 *     ViDifCheckCallbackInterception @ 0x140C26288 (ViDifCheckCallbackInterception.c)
 *     ViFaultsIsAppTarget @ 0x140C3AF44 (ViFaultsIsAppTarget.c)
 * Callees:
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 */

_BOOL8 __fastcall VfUtilEqualUnicodeString(const void **a1, __int64 a2)
{
  int v2; // eax

  v2 = *(unsigned __int16 *)a1;
  return (_WORD)v2 == *(_WORD *)a2 && RtlCompareMemory(a1[1], *(const void **)(a2 + 8), *(unsigned __int16 *)a1) == v2;
}
