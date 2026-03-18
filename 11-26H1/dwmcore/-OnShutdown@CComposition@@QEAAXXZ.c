/*
 * XREFs of ?OnShutdown@CComposition@@QEAAXXZ @ 0x18014F3A4
 * Callers:
 *     ?MainCompositionThreadLoop@CConnection@@AEAAJXZ @ 0x18002E3F4 (-MainCompositionThreadLoop@CConnection@@AEAAJXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ @ 0x180093B60 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCResourceDeleter@@@@IEAAKXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ?InternalRelease@?$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AAF14 (-InternalRelease@-$ComPtr@VCBrushRenderingGraph@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseExclusive@CTreeLock@@QEAAXXZ @ 0x18014F560 (-ReleaseExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?DestroyDelayDeleteResources@CComposition@@QEAAXXZ @ 0x18014F628 (-DestroyDelayDeleteResources@CComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CTreeLock@@QEAAXXZ @ 0x18014F6D0 (-AcquireExclusive@CTreeLock@@QEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18014F7A0 (-InternalRelease@-$ComPtr@VDataProviderManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?clear@?$vector_facade@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@$07$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x18014F7C0 (-clear@-$vector_facade@V-$com_ptr_t@UIUnknown@@Uerr_returncode_policy@wil@@@wil@@V-$buffer_impl@.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180150EAC (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180215300 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseNotificationChannels@CComposition@@AEAAXXZ @ 0x18021B59C (-ReleaseNotificationChannels@CComposition@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDeviceManager@@QEAV12@AEAV?$allocator@VDeviceInfo@CDeviceManager@@@0@@Z @ 0x18021B758 (--$_Destroy_range@V-$allocator@VDeviceInfo@CDeviceManager@@@std@@@std@@YAXPEAVDeviceInfo@CDevice.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CComposition::OnShutdown(CComposition *this)
{
  CTreeLock *v1; // rbp
  CResource *v3; // rcx
  __int64 v4; // rcx
  __int64 *v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rbx

  v1 = (CComposition *)((char *)this + 5696);
  *((_BYTE *)this + 6466) = 1;
  CTreeLock::AcquireExclusive((CComposition *)((char *)this + 5696));
  detail::vector_facade<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<IUnknown,wil::err_returncode_policy>,8,1,detail::liberal_expansion_policy>>::clear((char *)this + 5784);
  CComposition::DestroyDelayDeleteResources(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cpHalfBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)&CProjectedShadow::s_cp1xBlurNineGrid);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset(&CProjectedShadow::s_cp2xBlurNineGrid);
  v3 = CProjectedShadow::s_cp2xBlurSurface;
  CProjectedShadow::s_cp2xBlurSurface = 0LL;
  if ( v3 )
    CMILCOMBaseWeakRefSource<CResourceDeleter>::InternalRelease(v3);
  v4 = CCommonRenderingEffectFactory::s_cpSolidColorEffect;
  CCommonRenderingEffectFactory::s_cpSolidColorEffect = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (__int64 *)*((_QWORD *)this + 812);
  v6 = (__int64 *)*((_QWORD *)this + 811);
  if ( v6 != v5 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(v6, v5);
    *((_QWORD *)this + 812) = *((_QWORD *)this + 811);
  }
  wil::details::SetEvent(*((wil::details **)this + 800), v5);
  if ( qword_1803DE688 != (_QWORD)xmmword_1803DE690 )
  {
    std::_Destroy_range<std::allocator<CDeviceManager::DeviceInfo>>();
    *(_QWORD *)&xmmword_1803DE690 = qword_1803DE688;
  }
  CComposition::ReleaseNotificationChannels(this);
  while ( *((_DWORD *)this + 214) )
    CComposition::CloseChannel(
      this,
      *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 104) + 8LL * (unsigned int)(*((_DWORD *)this + 214) - 1)) + 24LL));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 798) + 64LL))(*((_QWORD *)this + 798));
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 798) + 16LL))(*((_QWORD *)this + 798));
  *((_QWORD *)this + 798) = 0LL;
  v7 = *((_QWORD *)this + 799);
  Microsoft::WRL::ComPtr<DataProviderRegistrarConnection>::InternalRelease(v7 + 24);
  Microsoft::WRL::ComPtr<CBrushRenderingGraph>::InternalRelease((__int64 *)(v7 + 32));
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(v7 + 16));
  Microsoft::WRL::ComPtr<DataProviderManager>::InternalRelease((char *)this + 6392);
  CTreeLock::ReleaseExclusive(v1);
  (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 711) + 24LL))(*((_QWORD *)this + 711), 5LL);
}
