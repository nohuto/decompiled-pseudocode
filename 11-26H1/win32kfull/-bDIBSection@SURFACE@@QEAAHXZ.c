/*
 * XREFs of ?bDIBSection@SURFACE@@QEAAHXZ @ 0x1400A4624
 * Callers:
 *     GreGetDIBColorTable @ 0x1400A44D0 (GreGetDIBColorTable.c)
 *     GreMakeBitmapStock @ 0x1400A4690 (GreMakeBitmapStock.c)
 *     GreSetDIBColorTable @ 0x1401BE270 (GreSetDIBColorTable.c)
 *     NtGdiGetColorSpaceforBitmap @ 0x140333690 (NtGdiGetColorSpaceforBitmap.c)
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
