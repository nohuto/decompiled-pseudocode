/*
 * XREFs of ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x1402515C4
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x140328240 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z @ 0x1400FD7BC (-DestroyFont@PDEVOBJ@@QEAAXPEAU_FONTOBJ@@@Z.c)
 *     ?vFreepfdg@PFEOBJ@@QEAAXXZ @ 0x140101C04 (-vFreepfdg@PFEOBJ@@QEAAXXZ.c)
 */

void __fastcall RFONTOBJ::vDestroyFont(struct _FONTOBJ **this, __int64 a2)
{
  __int64 v2; // r8
  int v4; // ebx
  SIZE sizLogResPpi; // rdi
  __int64 v6; // r8
  __int64 **pvProducer; // [rsp+30h] [rbp+8h] BYREF
  SIZE v8; // [rsp+40h] [rbp+18h] BYREF

  v2 = (__int64)*this;
  v4 = a2;
  sizLogResPpi = (*this)[1].sizLogResPpi;
  pvProducer = (__int64 **)(*this)[1].pvProducer;
  v8 = sizLogResPpi;
  PFEOBJ::vFreepfdg(&pvProducer, a2, v2);
  if ( v4 )
  {
    if ( *(_QWORD *)(*(_QWORD *)&sizLogResPpi + 3024LL) )
      PDEVOBJ::DestroyFont((PDEVOBJ *)&v8, *this, v6);
  }
}
