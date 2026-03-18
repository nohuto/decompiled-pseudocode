/*
 * XREFs of ??0CColorBrush@@QEAA@PEAVCComposition@@AEBU_D3DCOLORVALUE@@@Z @ 0x1802297EC
 * Callers:
 *     ?Initialize@CComposition@@MEAAJXZ @ 0x1800779B0 (-Initialize@CComposition@@MEAAJXZ.c)
 * Callees:
 *     ?SetColor@?$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z @ 0x18017FC70 (-SetColor@-$CColorBrushGeneratedT@VCColorBrush@@VCBrush@@@@QEAAJU_D3DCOLORVALUE@@@Z.c)
 */

CColorBrush *__fastcall CColorBrush::CColorBrush(
        CColorBrush *this,
        struct CComposition *a2,
        const struct _D3DCOLORVALUE *a3)
{
  __int128 v5; // [rsp+20h] [rbp-18h] BYREF

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *(_QWORD *)this = &CColorBrush::`vftable'{for `CContent'};
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 9) = &CBackdropBrush::`vftable'{for `IBrushChangeNotification'};
  v5 = *(_OWORD *)&a3->r;
  CColorBrushGeneratedT<CColorBrush,CBrush>::SetColor(this, &v5);
  return this;
}
