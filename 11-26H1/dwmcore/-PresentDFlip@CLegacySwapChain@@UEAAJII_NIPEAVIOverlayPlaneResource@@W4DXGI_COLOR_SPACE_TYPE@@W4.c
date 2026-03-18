/*
 * XREFs of ?PresentDFlip@CLegacySwapChain@@UEAAJII_NIPEAVIOverlayPlaneResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@5@Z @ 0x1801A8440
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 * Callees:
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180013268 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z @ 0x180034104 (-IsDesktopOverlayPlaneResource@@YA_NPEBVIOverlayPlaneResource@@@Z.c)
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x180034350 (-PresentMPO@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBU_DXGI_P.c)
 *     ?Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z @ 0x180056978 (-Present@CD3DDevice@@QEAAJPEAUIDXGISwapChainDWM1@@IIIPEAUIDXGIResource@@PEBUtagRECT@@I@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     McTemplateU0x_EventWriteTransfer @ 0x1800F8600 (McTemplateU0x_EventWriteTransfer.c)
 *     ?DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801A8700 (-DirectFlipRectRequiresPanelFitter@COverlaySwapChain@@IEBA_NAEBV-$TMilRect@IUMilRectU@@UMil3DRec.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::PresentDFlip(
        __int64 a1,
        int a2,
        int a3,
        char a4,
        unsigned int a5,
        struct IOverlayPlaneResource *a6,
        enum DXGI_COLOR_SPACE_TYPE a7,
        enum DXGI_HDR_METADATA_TYPE a8,
        void *a9,
        int *a10,
        __int128 *a11)
{
  __int64 v12; // rbx
  unsigned int v13; // ebx
  int v14; // eax
  int v15; // r13d
  bool v16; // r14
  char v17; // al
  char v18; // cl
  int v19; // eax
  CD3DDevice *v20; // rcx
  struct IDXGISwapChainDWM1 *v21; // rdx
  __int64 v22; // rcx
  enum DXGI_HDR_METADATA_TYPE v24; // [rsp+20h] [rbp-D9h]
  _DWORD v26[3]; // [rsp+44h] [rbp-B5h] BYREF
  void *v27; // [rsp+50h] [rbp-A9h]
  int v28; // [rsp+60h] [rbp-99h]
  int v29; // [rsp+64h] [rbp-95h]
  __int64 v30; // [rsp+68h] [rbp-91h]
  int v31; // [rsp+70h] [rbp-89h]
  int v32; // [rsp+74h] [rbp-85h]
  int v33; // [rsp+78h] [rbp-81h]
  int v34; // [rsp+7Ch] [rbp-7Dh]
  int v35; // [rsp+80h] [rbp-79h]
  int v36; // [rsp+84h] [rbp-75h]
  int v37; // [rsp+88h] [rbp-71h]
  __int128 v38; // [rsp+8Ch] [rbp-6Dh]
  __int128 v39; // [rsp+9Ch] [rbp-5Dh]
  __int64 v40; // [rsp+ACh] [rbp-4Dh]
  int v41; // [rsp+B4h] [rbp-45h]
  __int64 v42; // [rsp+B8h] [rbp-41h]
  int v43; // [rsp+C0h] [rbp-39h]
  enum DXGI_COLOR_SPACE_TYPE v44; // [rsp+C4h] [rbp-35h]
  __int64 v45; // [rsp+C8h] [rbp-31h]
  __int64 v46; // [rsp+D0h] [rbp-29h]
  __int64 v47; // [rsp+D8h] [rbp-21h]
  int v48; // [rsp+E0h] [rbp-19h]
  int v49; // [rsp+E4h] [rbp-15h]

  v12 = 0LL;
  v26[1] = a3;
  v26[2] = a2;
  v27 = a9;
  v26[0] = 0;
  if ( !IsDesktopOverlayPlaneResource(a6) )
  {
    v12 = (*(__int64 (__fastcall **)(struct IOverlayPlaneResource *, _DWORD *))(*(_QWORD *)a6 + 40LL))(a6, v26);
    if ( !v12 )
    {
      v13 = -2003304442;
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2003304442, 0x21Du, 0LL);
      return v13;
    }
  }
  v14 = ConvertSDRBoostToSDRWhiteLevel(*(float *)(a1 - 24 + 120), a7);
  v15 = v14;
  v16 = *(_DWORD *)(a1 + 64) == 2 || v14;
  if ( (unsigned __int8)COverlaySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 24, a10)
    || (v17 = COverlaySwapChain::DirectFlipRectRequiresPanelFitter(a1 - 24, a11), v18 = 0, v17) )
  {
    v18 = 1;
  }
  if ( v16 || v18 )
  {
    v28 = 0;
    v32 = 0;
    v49 = 0;
    v31 = v26[0];
    v29 = 1;
    v30 = v12;
    v33 = a4 != 0 ? 0x40 : 0;
    if ( v18 )
      v33 = (a4 != 0 ? 0x40 : 0) | 4;
    v20 = *(CD3DDevice **)(a1 + 40);
    v34 = *a10;
    v35 = a10[1];
    v36 = a10[2];
    v37 = a10[3];
    v38 = *a11;
    v44 = a7;
    v41 = 0;
    v42 = 0LL;
    v43 = 0;
    v21 = *(struct IDXGISwapChainDWM1 **)(a1 + 264);
    v39 = v38;
    v40 = 1LL;
    v45 = 0LL;
    v46 = 0LL;
    v47 = 2LL;
    v48 = v15;
    v19 = CD3DDevice::PresentMPO(v20, v21);
    v13 = v19;
    if ( v19 < 0 )
    {
      v24 = 608;
      goto LABEL_21;
    }
  }
  else
  {
    v19 = CD3DDevice::Present(*(CD3DDevice **)(a1 + 40), *(struct IDXGISwapChainDWM1 **)(a1 + 264));
    v13 = v19;
    if ( v19 < 0 )
    {
      v24 = 618;
LABEL_21:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v19, v24, 0LL);
      return v13;
    }
  }
  CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), 0, v13 == 142213121);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
    McTemplateU0x_EventWriteTransfer(v22, &EVTDESC_ETWGUID_DIRECTFLIP_PRESENTEVENT, *(unsigned int *)(a1 + 88));
  return v13;
}
