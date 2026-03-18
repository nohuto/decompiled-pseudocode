/*
 * XREFs of ??0CWindowBackgroundTreatment@@AEAA@PEAVCComposition@@PEAVCBrush@@@Z @ 0x18014DD98
 * Callers:
 *     ?Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z @ 0x18014DD04 (-Create@CWindowBackgroundTreatment@@SAJPEAVCComposition@@PEAVCBrush@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?RegisterNotifier@CResource@@QEAAXPEAV1@@Z @ 0x180024BFC (-RegisterNotifier@CResource@@QEAAXPEAV1@@Z.c)
 *     ?UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ @ 0x1800D77DC (-UpdateBackdropFlags@CWindowBackgroundTreatment@@AEAAXXZ.c)
 */

CWindowBackgroundTreatment *__fastcall CWindowBackgroundTreatment::CWindowBackgroundTreatment(
        CWindowBackgroundTreatment *this,
        struct CComposition *a2,
        struct CBrush *a3)
{
  struct CResource *v4; // rdx

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = a2;
  *((_QWORD *)this + 4) = 2LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_DWORD *)this + 10) = 0;
  *((_QWORD *)this + 9) = a3;
  *(_QWORD *)this = &CWindowBackgroundTreatment::`vftable';
  *((_QWORD *)this + 10) = 0LL;
  *(_OWORD *)((char *)this + 88) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 13) = 0LL;
  *((_OWORD *)this + 7) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 16) = 0LL;
  *(_OWORD *)((char *)this + 136) = TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  *((_QWORD *)this + 19) = 0LL;
  *(_QWORD *)((char *)this + 220) = 1065353216LL;
  *((_QWORD *)this + 20) = 1065353216LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_DWORD *)this + 44) = 0;
  *(_QWORD *)((char *)this + 180) = 1065353216LL;
  *(_QWORD *)((char *)this + 188) = 0LL;
  *((_DWORD *)this + 49) = 0;
  *((_QWORD *)this + 25) = 1065353216LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_DWORD *)this + 54) = 0;
  *((_BYTE *)this + 225) &= 0xE9u;
  *((_BYTE *)this + 225) |= 0x29u;
  *((_BYTE *)this + 224) = -86;
  *((_DWORD *)this + 57) = 0;
  *(_QWORD *)((char *)this + 292) = 1065353216LL;
  *((_QWORD *)this + 29) = 1065353216LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *(_QWORD *)((char *)this + 252) = 1065353216LL;
  *(_QWORD *)((char *)this + 260) = 0LL;
  *((_DWORD *)this + 67) = 0;
  *((_QWORD *)this + 34) = 1065353216LL;
  *((_QWORD *)this + 35) = 0LL;
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 297) &= 0xE9u;
  *((_BYTE *)this + 297) |= 0x29u;
  *((_BYTE *)this + 296) = -86;
  v4 = (struct CResource *)*((_QWORD *)this + 9);
  *((_WORD *)this + 150) = 0;
  *((_BYTE *)this + 302) = 0;
  *((_QWORD *)this + 38) = 0LL;
  *((_QWORD *)this + 39) = 0LL;
  CResource::RegisterNotifier(this, v4);
  CWindowBackgroundTreatment::UpdateBackdropFlags((CBrush **)this);
  return this;
}
