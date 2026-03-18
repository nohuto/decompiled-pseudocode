/*
 * XREFs of ?vDec_cRef@SURFACE@@QEAAXXZ @ 0x1400121C4
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z @ 0x1400372F0 (-GrepRestoreDCOBJ@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vDeleteIcmDIBs@BRUSH@@QEAAXXZ @ 0x1401A02C8 (-vDeleteIcmDIBs@BRUSH@@QEAAXXZ.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall SURFACE::vDec_cRef(SURFACE *this)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(this);
  HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), this);
  if ( (*((_DWORD *)this + 42))-- == 1 )
    *((_QWORD *)this + 20) = 0LL;
}
