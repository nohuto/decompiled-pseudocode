/*
 * XREFs of ?vInc_cRef@SURFACE@@QEAAXXZ @ 0x140012190
 * Callers:
 *     ?GrepSelectBitmap@@YA?AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z @ 0x140013360 (-GrepSelectBitmap@@YA-AVGSBResult@@AEAVXDCOBJ@@PEAUHBITMAP__@@W4GSBOptions@@@Z.c)
 *     ?bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z @ 0x1401ECCD0 (-bAddIcmDIB@BRUSH@@QEAAHPEAXPEAUHBITMAP__@@@Z.c)
 * Callees:
 *     HmgIncrementShareReferenceCount @ 0x140019050 (HmgIncrementShareReferenceCount.c)
 */

void __fastcall SURFACE::vInc_cRef(SURFACE *this)
{
  __int64 SessionState; // rax

  SessionState = W32GetSessionState(this);
  HmgIncrementShareReferenceCount(*(_QWORD *)(SessionState + 88), this);
  ++*((_DWORD *)this + 42);
}
