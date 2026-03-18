/*
 * XREFs of ?CalcPresentMode@CConversionSwapChain@@IEAAJPEAI@Z @ 0x180036788
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??9@YA_NAEBUtagRECT@@0@Z @ 0x1800E2864 (--9@YA_NAEBUtagRECT@@0@Z.c)
 *     ?CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@2@Z @ 0x180128560 (-CheckDirectFlipSupport@CLegacySwapChain@@UEBA_NPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TY.c)
 */

__int64 __fastcall CConversionSwapChain::CalcPresentMode(CConversionSwapChain *this, unsigned int *a2)
{
  char v2; // di
  unsigned int v4; // ebp
  unsigned int v5; // r8d
  int v6; // ecx
  unsigned int v7; // r9d
  _BYTE *v8; // r10
  unsigned int v9; // eax
  int v10; // ecx
  _OWORD *v11; // rdx
  _OWORD *v12; // rcx
  unsigned __int64 v14; // rsi
  int v15; // ecx
  int v16; // edx
  int v17; // r8d
  __int64 v18; // rdx
  _DWORD v19[4]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v20[6]; // [rsp+40h] [rbp-18h] BYREF

  v2 = 0;
  v4 = 0;
  v5 = -1;
  v6 = 0;
  v7 = 0;
  v8 = (char *)this + 548;
  do
  {
    if ( *v8 )
    {
      ++v6;
      v9 = v7;
      if ( v5 != -1 )
        v9 = v5;
      v5 = v9;
    }
    ++v7;
    v8 += 128;
  }
  while ( v7 < 2 );
  *a2 = v5;
  v10 = v6 - 1;
  if ( v10 )
  {
    if ( v10 == 1 )
    {
      v11 = (_OWORD *)((char *)this + 872);
      v12 = (_OWORD *)((char *)this + 596);
      if ( *((_DWORD *)this + 135) == 2 || (unsigned __int8)operator!=(v12, v11) )
        *((_BYTE *)this + 904) = 1;
      *((_DWORD *)this + 135) = 3;
      *v11 = *v12;
    }
    else
    {
      v4 = -2003292412;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003292412, 0x243u, 0LL);
    }
  }
  else
  {
    v14 = (unsigned __int64)v5 << 7;
    if ( IsDesktopOverlayPlaneResource(*(const struct IOverlayPlaneResource **)((char *)this + v14 + 552)) )
    {
      *((_DWORD *)this + 135) = 0;
    }
    else
    {
      if ( *(int *)((char *)this + v14 + 564) >= 0 )
      {
        v15 = *(_DWORD *)((char *)this + v14 + 568);
        if ( v15 >= 0 )
        {
          v16 = *(_DWORD *)((char *)this + v14 + 580);
          if ( v16 >= 0 )
          {
            v17 = *(_DWORD *)((char *)this + v14 + 584);
            if ( v17 >= 0 && *(_DWORD *)((char *)this + v14 + 612) == 1 )
            {
              v20[0] = *(_DWORD *)((char *)this + v14 + 564);
              v20[2] = *(_DWORD *)((char *)this + v14 + 572);
              v20[3] = *(_DWORD *)((char *)this + v14 + 576);
              v19[2] = *(_DWORD *)((char *)this + v14 + 588);
              v19[3] = *(_DWORD *)((char *)this + v14 + 592);
              v20[1] = v15;
              v19[0] = v16;
              v18 = *(_QWORD *)((char *)this + v14 + 552);
              v19[1] = v17;
              v2 = CLegacySwapChain::CheckDirectFlipSupport(
                     (char *)this + 24,
                     v18,
                     *(unsigned int *)((char *)this + v14 + 636),
                     v20,
                     v19);
            }
          }
        }
      }
      *((_DWORD *)this + 135) = (v2 != 0) + 1;
    }
  }
  return v4;
}
