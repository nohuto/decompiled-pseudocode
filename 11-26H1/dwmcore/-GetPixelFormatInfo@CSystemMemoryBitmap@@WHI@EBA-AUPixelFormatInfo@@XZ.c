/*
 * XREFs of ?GetPixelFormatInfo@CSystemMemoryBitmap@@WHI@EBA?AUPixelFormatInfo@@XZ @ 0x180225010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSystemMemoryBitmap::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  return CBitmap::GetPixelFormatInfo(a1 - 120, a2);
}
