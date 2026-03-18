/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x14001C2F0
 * Callers:
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1401245F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140177760 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x14019E190 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x14001CA40 (HmgDecrementShareReferenceCountEx.c)
 *     GreMakeBitmapNonStock @ 0x14006F4E0 (GreMakeBitmapNonStock.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 v3; // rcx

  HmgDecrementShareReferenceCountEx(this, 0LL);
  if ( (*((_DWORD *)this + 42))-- == 1 )
  {
    if ( (*(_DWORD *)this & 0x800000) != 0 )
    {
      if ( _bittest16((const signed __int16 *)this + 51, 0xAu) )
      {
        v3 = *(_QWORD *)this;
        *((_WORD *)this + 51) &= ~0x400u;
        GreMakeBitmapNonStock(v3);
      }
    }
    *((_QWORD *)this + 20) = 0LL;
  }
}
