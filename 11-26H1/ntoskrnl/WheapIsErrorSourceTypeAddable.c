/*
 * XREFs of WheapIsErrorSourceTypeAddable @ 0x1406D8E7C
 * Callers:
 *     WheaAddErrorSource @ 0x14084D9D0 (WheaAddErrorSource.c)
 *     WheaRemoveErrorSource @ 0x14084DC80 (WheaRemoveErrorSource.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapIsErrorSourceTypeAddable(__int64 a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  bool result; // al

  result = (*(_DWORD *)(a1 + 36) & 0x40000000) != 0
        || (v1 = *(_DWORD *)(a1 + 8), v1 == 5)
        || v1 <= 0xD && (v2 = 12560, _bittest(&v2, v1))
        || (int)v1 >= 14;
  return result;
}
