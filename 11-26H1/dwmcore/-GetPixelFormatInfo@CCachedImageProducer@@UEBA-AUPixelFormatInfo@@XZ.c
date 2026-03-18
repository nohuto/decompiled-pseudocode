/*
 * XREFs of ?GetPixelFormatInfo@CCachedImageProducer@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801D3E10
 * Callers:
 *     ?GetPixelFormatInfo@CCachedImageProducer@@WBA@EBA?AUPixelFormatInfo@@XZ @ 0x180259730 (-GetPixelFormatInfo@CCachedImageProducer@@WBA@EBA-AUPixelFormatInfo@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCachedImageProducer::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_DWORD *)a2 = 87;
  result = a2;
  *(_QWORD *)(a2 + 4) = 1LL;
  return result;
}
