/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400823D4
 * Callers:
 *     GreFrameRgn @ 0x140080F30 (GreFrameRgn.c)
 *     GreFillRgn @ 0x140081834 (GreFillRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x140082158 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     GreGetObjectBitmapHandle @ 0x140083A9C (GreGetObjectBitmapHandle.c)
 *     GreMarkDeletableBrush @ 0x140083F20 (GreMarkDeletableBrush.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x140330114 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x140330354 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x140082D78 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2)
{
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rax
  __int64 v6; // r8
  struct Gre::Base::SESSION_GLOBALS *v7; // rsi
  __int64 v8; // rax

  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 16,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    EPALOBJ::~EPALOBJ);
  v5 = Gre::Base::Globals(v4);
  LOBYTE(v6) = 16;
  v7 = v5;
  v8 = HmgShareLock(v5, a2, v6, 0LL);
  *(_QWORD *)this = v8;
  if ( v8 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(v7, *(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
