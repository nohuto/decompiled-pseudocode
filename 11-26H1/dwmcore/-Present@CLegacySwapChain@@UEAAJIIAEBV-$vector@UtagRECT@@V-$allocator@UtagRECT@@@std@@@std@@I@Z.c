/*
 * XREFs of ?Present@CLegacySwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x180034610
 * Callers:
 *     ?PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLANE_OVERLAY@@I@Z @ 0x1800363C0 (-PresentMPO@CConversionSwapChain@@UEAAJIIW4DXGI_HDR_METADATA_TYPE@@PEBXPEBUDWM_PRESENT_MULTIPLAN.c)
 *     ?Present@CConversionSwapChain@@UEAAJIIAEBV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@I@Z @ 0x1802A7A60 (-Present@CConversionSwapChain@@UEAAJIIAEBV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@.c)
 * Callees:
 *     ?PostPresent@CLegacySwapChain@@IEAAX_N0@Z @ 0x180034184 (-PostPresent@CLegacySwapChain@@IEAAX_N0@Z.c)
 *     ?CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z @ 0x18003457C (-CheckForLeakedDWMSwapChain@CD3DDevice@@CAXPEAUIDXGISwapChainDWM1@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEAA_NXZ @ 0x180035C1C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_UnpinForNoFlip@@@details@wil@@QEA.c)
 *     McTemplateU0qqq_EventWriteTransfer @ 0x180036278 (McTemplateU0qqq_EventWriteTransfer.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x1800691D0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TempDisableHardwareProtection@CD2DContext@@IEAAXXZ @ 0x18021E4D0 (-TempDisableHardwareProtection@CD2DContext@@IEAAXXZ.c)
 *     ?NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z @ 0x18021F19C (-NotifyNoSequencePresent@CD3DDevice@@QEAAXU_LUID@@I@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacySwapChain::Present(__int64 a1, unsigned int a2, unsigned int a3, __int64 *a4, int a5)
{
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  unsigned int v10; // ebp
  struct IDXGISwapChainDWM1 *v11; // r12
  int v12; // edi
  __int64 v13; // rax
  int v14; // ecx
  int v16; // eax
  int v17; // ecx
  int v18; // r9d
  int v19[18]; // [rsp+60h] [rbp-48h] BYREF
  char v20; // [rsp+B0h] [rbp+8h]

  if ( (a3 & 2) != 0 )
  {
    v20 = 1;
    v7 = 0LL;
    LODWORD(v8) = 0;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_UnpinForNoFlip>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_UnpinForNoFlip>::GetImpl'::`2'::impl) )
    {
      CD3DDevice::NotifyNoSequencePresent(*(CD3DDevice **)(a1 + 40), *(struct _LUID *)(a1 + 52), *(_DWORD *)(a1 + 48));
      v20 = 1;
    }
  }
  else
  {
    v7 = *a4;
    v20 = 0;
    v8 = (a4[1] - *a4) >> 4;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 136LL))(a1);
    if ( !(_DWORD)v8 )
      v7 = 0LL;
  }
  v9 = *(_QWORD *)(a1 + 40);
  v10 = -2003304307;
  v11 = *(struct IDXGISwapChainDWM1 **)(a1 + 264);
  if ( *(_DWORD *)(v9 + 1124) )
  {
    v12 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304307, 0x3ABu, 0LL);
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD, struct IDXGISwapChainDWM1 *, _QWORD, _QWORD, __int64, _DWORD, _QWORD, _DWORD, _QWORD, int))(**(_QWORD **)(v9 + 224) + 104LL))(
            *(_QWORD *)(v9 + 224),
            v11,
            a2,
            a3,
            v7,
            v8,
            0LL,
            0,
            0LL,
            a5);
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x3B5u, 0LL);
    }
    else
    {
      v13 = 0LL;
      if ( g_pComposition )
        v13 = *((_QWORD *)g_pComposition + 110);
      *(_QWORD *)(v9 + 1472) = v13;
      *(_BYTE *)(v9 + 1491) = 0;
      if ( v12 == 142213121 )
        CD3DDevice::CheckForLeakedDWMSwapChain(v11);
    }
  }
  if ( *(_DWORD *)(v9 + 1124)
    || v12 != -2005532292 && v12 != -2147024882 && v12 != -2005270523
    || !*(_DWORD *)(v9 + 440) )
  {
LABEL_14:
    if ( v12 >= 0 )
      goto LABEL_15;
    goto LABEL_24;
  }
  if ( v12 != -2005270523 )
  {
LABEL_33:
    CD2DContext::TempDisableHardwareProtection((CD2DContext *)(v9 + 16));
    goto LABEL_14;
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v9 + 544) + 312LL))(*(_QWORD *)(v9 + 544));
  v17 = *(_DWORD *)(v9 + 1124);
  if ( v16 == -2005270480 )
  {
    if ( !v17 )
      *(_DWORD *)(v9 + 1124) = -2005270480;
    goto LABEL_33;
  }
  if ( !v17 )
    *(_DWORD *)(v9 + 1124) = -2005270523;
LABEL_24:
  if ( *(_DWORD *)(v9 + 1124) )
  {
LABEL_25:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x2B4u, 0LL);
    return v10;
  }
LABEL_15:
  v19[0] = 0;
  if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext((unsigned int)v12, 1LL, v19) )
  {
    v18 = v19[0];
    if ( v19[0] == -2003304307 )
    {
      if ( v12 >= 0 )
        v12 = -2003304307;
      if ( !*(_DWORD *)(v9 + 1124) )
        *(_DWORD *)(v9 + 1124) = v12;
    }
    v12 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0xB71u, 0LL);
  }
  v10 = v12;
  if ( v12 < 0 )
    goto LABEL_25;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qqq_EventWriteTransfer(v14, (unsigned int)&EVTDESC_ETWGUID_PRESENT, a5, 0, a3);
  CLegacySwapChain::PostPresent((CLegacySwapChain *)(a1 - 24), v20, v12 == 142213121);
  return v10;
}
