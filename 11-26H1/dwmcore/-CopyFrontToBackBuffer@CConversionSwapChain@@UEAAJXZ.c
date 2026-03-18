/*
 * XREFs of ?CopyFrontToBackBuffer@CConversionSwapChain@@UEAAJXZ @ 0x180105110
 * Callers:
 *     <none>
 * Callees:
 *     ?CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ @ 0x1800358F0 (-CopyFrontToBackBuffer@COverlaySwapChain@@UEAAJXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1800ECB30 (-NotifyRenderedRect@COverlaySwapChain@@UEAAXPEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTAN.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 */

__int64 __fastcall CConversionSwapChain::CopyFrontToBackBuffer(CConversionSwapChain *this)
{
  int v1; // eax
  int v3; // eax
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  FastRegion::Internal::CRgnData *v8; // rcx
  int v9[4]; // [rsp+30h] [rbp-48h] BYREF
  _BYTE v10[8]; // [rsp+40h] [rbp-38h] BYREF
  unsigned __int64 v11; // [rsp+48h] [rbp-30h]
  int *v12; // [rsp+50h] [rbp-28h]
  __int64 v13; // [rsp+58h] [rbp-20h]
  int v14; // [rsp+60h] [rbp-18h]

  v1 = *((_DWORD *)this + 129);
  if ( !v1 || v1 == 3 )
  {
    FastRegion::CRegion::BeginIterator((int **)this + 97, (__int64)v10);
    while ( (unsigned __int64)v12 < v11 )
    {
      v9[1] = *v12;
      v9[3] = v12[2];
      v7 = 2 * v14;
      v9[0] = *(_DWORD *)(v13 + 4 * v7);
      v9[2] = *(_DWORD *)(v13 + 4 * v7 + 4);
      COverlaySwapChain::NotifyRenderedRect((__int64)this, v9);
      FastRegion::Internal::CRgnData::StepIterator(v8, (struct FastRegion::CRegion::Iterator *)v10);
    }
  }
  v3 = *((_DWORD *)this + 129);
  if ( (v3 == 1 || v3 == 3) && *((_BYTE *)this + 880) )
    COverlaySwapChain::NotifyRenderedRect((__int64)this, (int *)this + 216);
  v4 = COverlaySwapChain::CopyFrontToBackBuffer(this);
  v5 = v4;
  if ( v4 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v4, 0x9Eu, 0LL);
  return v5;
}
