/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1401764E8
 * Callers:
 *     GreSetDIBColorTable @ 0x1401760E0 (GreSetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x140176240 (GreMakeBitmapStock.c)
 *     GreGetDIBColorTable @ 0x140176390 (GreGetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x1403113B0 (NtGdiGetColorSpaceforBitmap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SURFACE::bDIBSection(SURFACE *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( !*((_WORD *)this + 50) )
  {
    if ( *((_QWORD *)this + 24) )
      return 1LL;
  }
  return result;
}
