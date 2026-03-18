/*
 * XREFs of ??0BRUSHSELOBJ@@QEAA@PEAUHBRUSH__@@@Z @ 0x1400E3CF0
 * Callers:
 *     GreFillRgn @ 0x1400E2308 (GreFillRgn.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     ?cjGetBrushOrPen@@YAJPEAXH0@Z @ 0x1400E3294 (-cjGetBrushOrPen@@YAJPEAXH0@Z.c)
 *     GreExtCreatePen @ 0x1400E35BC (GreExtCreatePen.c)
 *     GreGetObjectBitmapHandle @ 0x1400E43A0 (GreGetObjectBitmapHandle.c)
 *     GreMarkDeletableBrush @ 0x1400E4460 (GreMarkDeletableBrush.c)
 *     ?GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z @ 0x14033D6B4 (-GrepIcmQueryBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAXPEAK4PEAH@Z.c)
 *     ?GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z @ 0x14033D8F8 (-GrepIcmSetBrushBitmap@@YAHAEAVXDCOBJ@@PEAUHBRUSH__@@PEAUtagBITMAPINFO@@PEAX@Z.c)
 * Callees:
 *     ?bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ @ 0x1401A3D94 (-bSaveAttributes@XEBRUSHOBJ@@IEAAHXZ.c)
 */

BRUSHSELOBJ *__fastcall BRUSHSELOBJ::BRUSHSELOBJ(BRUSHSELOBJ *this, HBRUSH a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax

  *((_DWORD *)this + 2) = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  PushThreadGuardedObject(
    (char *)this + 16,
    (unsigned __int64)this & ((unsigned __int128)-(__int128)((unsigned __int64)this + 16) >> 64),
    EPALOBJ::~EPALOBJ,
    a4);
  LOBYTE(v6) = 16;
  v7 = HmgShareLockCheck(a2, v6);
  *(_QWORD *)this = v7;
  if ( v7 && !(unsigned int)XEBRUSHOBJ::bSaveAttributes(this) )
  {
    DEC_SHARE_REF_CNT(*(_QWORD *)this);
    *(_QWORD *)this = 0LL;
  }
  return this;
}
