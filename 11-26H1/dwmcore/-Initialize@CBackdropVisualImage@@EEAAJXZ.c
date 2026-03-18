/*
 * XREFs of ?Initialize@CBackdropVisualImage@@EEAAJXZ @ 0x18014BD10
 * Callers:
 *     ?Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@@Z @ 0x18014BB1C (-Create@CBackdropVisualImage@@SAJPEAVCComposition@@PEBVCVisual@@AEBVCVisualTreePath@@_NPEAPEAV1@.c)
 * Callees:
 *     ?ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ @ 0x18014BD88 (-ChoosePixelFormat@CCachedVisualImage@@IEAAXXZ.c)
 *     ?GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ @ 0x18014C07C (-GetWindowBackgroundTreatmentInternal@CVisual@@QEBAPEAVCWindowBackgroundTreatment@@XZ.c)
 */

__int64 __fastcall CBackdropVisualImage::Initialize(CBackdropVisualImage *this)
{
  bool v2; // zf
  __int64 v3; // rcx
  char v4; // al
  char v5; // al

  CCachedVisualImage::ChoosePixelFormat(this);
  v2 = *((_BYTE *)this + 1786) == 0;
  *((_BYTE *)this + 1600) = 1;
  if ( !v2 )
    *((_QWORD *)this + 163) = this;
  v3 = *((_QWORD *)this + 201);
  *((_BYTE *)this + 1784) = 1;
  v4 = *(_BYTE *)(v3 + 102);
  if ( v4 >= 0 || (v5 = v4 & 1, (*((_BYTE *)this + 1784) = v5) != 0) )
  {
    if ( (**(_DWORD **)(v3 + 224) & 0x800000) != 0 )
      *((_BYTE *)this + 1784) = *((_BYTE *)CVisual::GetWindowBackgroundTreatmentInternal((CVisual *)v3) + 302);
  }
  return 0LL;
}
