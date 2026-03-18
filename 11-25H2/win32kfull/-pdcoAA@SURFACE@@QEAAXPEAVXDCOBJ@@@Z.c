/*
 * XREFs of ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1400DA6C0
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKA.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 * Callees:
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 */

void __fastcall SURFACE::pdcoAA(SURFACE *this, struct XDCOBJ *a2)
{
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rcx

  *((_QWORD *)this + 13) = a2;
  CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(this, a2);
  v4 = 0LL;
  if ( CurrentThreadNonPaged )
    v4 = *CurrentThreadNonPaged;
  v5 = v4 + 8;
  v6 = -v4;
  if ( (v5 & -(__int64)(v6 != 0)) != 0 )
    *(_QWORD *)((v5 & -(__int64)(v6 != 0)) + 0x120) = a2;
}
