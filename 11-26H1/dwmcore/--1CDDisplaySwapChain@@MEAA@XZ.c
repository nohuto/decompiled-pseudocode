/*
 * XREFs of ??1CDDisplaySwapChain@@MEAA@XZ @ 0x18029A3D8
 * Callers:
 *     ??_GCDDisplaySwapChain@@MEAAPEAXI@Z @ 0x18029A730 (--_GCDDisplaySwapChain@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAPEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@00@Z @ 0x18000A70C (--$_Copy_memmove@PEAPEAUProcessAttributionRecord@CProcessAttributionManager@@PEAPEAU12@@std@@YAP.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Tidy@?$vector@EV?$allocator@E@std@@@std@@AEAAXXZ @ 0x180050318 (-_Tidy@-$vector@EV-$allocator@E@std@@@std@@AEAAXXZ.c)
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@QEAV12@AEAV?$allocator@V?$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x18009B620 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCCachedTexture@@Uerr_returncode_policy@wil@@@wil@@@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18013194C (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ??1DDisplayTaskPoolResources@@QEAA@XZ @ 0x1801319A8 (--1DDisplayTaskPoolResources@@QEAA@XZ.c)
 *     ??$destruct_range@V?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x1801CBAA0 (--$destruct_range@V-$com_ptr_t@VCLegacySwapChainBuffer@@Uerr_returncode_policy@wil@@@wil@@@detai.c)
 *     ?ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ @ 0x1801D2430 (-ReleaseComputeScribbleResources@CScribbleSwapChain@@IEAAXXZ.c)
 *     ?clear@?$vector@VCDDisplayCachedScanout@@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAXXZ @ 0x1801D7D00 (-clear@-$vector@VCDDisplayCachedScanout@@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@QEAAX.c)
 *     ??$_Destroy_range@V?$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanout@@QEAV1@AEAV?$allocator@VCDDisplayCachedScanout@@@0@@Z @ 0x1801D7D30 (--$_Destroy_range@V-$allocator@VCDDisplayCachedScanout@@@std@@@std@@YAXPEAVCDDisplayCachedScanou.c)
 *     ?clear@?$list@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@V?$allocator@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@@2@@std@@QEAAXXZ @ 0x1801D7E1C (-clear@-$list@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$default_delete@VCDDisplayAgedCachedS.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@std@@@?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$unique_ptr@VCDDisplayAgedCachedScanout@@U?$default_delete@VCDDisplayAgedCachedScanout@@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801D7E50 (--$_Free_non_head@V-$allocator@U-$_List_node@V-$unique_ptr@VCDDisplayAgedCachedScanout@@U-$defau.c)
 *     ??1DDisplayTargetResources@@QEAA@XZ @ 0x1801FF524 (--1DDisplayTargetResources@@QEAA@XZ.c)
 *     ?ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z @ 0x180205098 (-ProcessDelayUnpinForTarget@CD3DDevice@@QEAAXU_LUID@@II@Z.c)
 *     __std_find_trivial_8 @ 0x180220100 (__std_find_trivial_8.c)
 *     ??1?$_Hash@V?$_Umap_traits@IVCDDisplayFlipAwayFence@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIVCDDisplayFlipAwayFence@@@std@@@3@$0A@@std@@@std@@QEAA@XZ @ 0x18029A324 (--1-$_Hash@V-$_Umap_traits@IVCDDisplayFlipAwayFence@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CDDisplaySwapChain::~CDDisplaySwapChain(CDDisplaySwapChain *this)
{
  unsigned __int64 v2; // rbx
  __m128i *trivial_8; // rax
  unsigned int *v4; // rbx
  CD3DDevice *v5; // rcx
  __int64 v6; // rcx
  CDDisplayCachedScanout **v7; // rbx
  __int64 *v8; // r14
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx

  *(_QWORD *)this = &CDDisplaySwapChain::`vftable'{for `COverlaySwapChain'};
  v2 = (unsigned __int64)this + 288;
  *((_QWORD *)this + 3) = &CDDisplaySwapChain::`vftable'{for `IDeviceResource'};
  *((_QWORD *)this + 4) = &CDDisplaySwapChain::`vftable'{for `IPixelFormat'};
  *((_QWORD *)this + 32) = &CDDisplaySwapChain::`vftable'{for `IScribbleSwapChain'};
  *((_QWORD *)this + 35) = &CDDisplaySwapChain::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 36) = &CDDisplaySwapChain::`vftable'{for `IDDisplayEventListener'};
  CScribbleSwapChain::ReleaseComputeScribbleResources((volatile signed __int32 **)this);
  trivial_8 = (__m128i *)_std_find_trivial_8(
                           (const __m128i *)qword_1803DE728,
                           (const __m128i *)qword_1803DE730,
                           v2 & -(__int64)(this != 0LL));
  std::_Copy_memmove<CProcessAttributionManager::ProcessAttributionRecord * *,CProcessAttributionManager::ProcessAttributionRecord * *>(
    &trivial_8->m128i_u64[1],
    qword_1803DE730,
    trivial_8);
  qword_1803DE730 -= 8LL;
  v4 = (unsigned int *)((char *)this + 456);
  v5 = (CD3DDevice *)*((_QWORD *)this + 8);
  if ( v5 )
    CD3DDevice::ProcessDelayUnpinForTarget(v5, *(struct _LUID *)((char *)this + 104), *v4, 0);
  v6 = *((_QWORD *)this + 51);
  if ( v6 )
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v6 + 112LL))(v6, *v4);
  v7 = (CDDisplayCachedScanout **)((char *)this + 296);
  std::vector<CDDisplayCachedScanout>::clear((__int64)this + 296);
  v8 = (__int64 *)((char *)this + 320);
  std::list<std::unique_ptr<CDDisplayAgedCachedScanout>>::clear((_QWORD *)this + 40);
  std::_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>::~_Hash<std::_Umap_traits<unsigned int,CDDisplayFlipAwayFence,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,CDDisplayFlipAwayFence>>,0>>((__int64 *)this + 75);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 74);
  std::vector<unsigned char>::_Tidy((__int64)this + 568);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 68);
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 67);
  v9 = (__int64 *)*((_QWORD *)this + 61);
  if ( v9 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CCachedTexture,wil::err_returncode_policy>>>(
      v9,
      *((__int64 **)this + 62));
    std::_Deallocate<16>(
      *((void **)this + 61),
      (*((_QWORD *)this + 63) - *((_QWORD *)this + 61)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 61) = 0LL;
    *((_QWORD *)this + 62) = 0LL;
    *((_QWORD *)this + 63) = 0LL;
  }
  v10 = *((_QWORD *)this + 58);
  if ( v10 )
  {
    detail::destruct_range<wil::com_ptr_t<CLegacySwapChainBuffer,wil::err_returncode_policy>>(
      v10,
      *((_QWORD *)this + 59));
    std::_Deallocate<16>(
      *((void **)this + 58),
      (*((_QWORD *)this + 60) - *((_QWORD *)this + 58)) & 0xFFFFFFFFFFFFFFF8uLL);
    *((_QWORD *)this + 58) = 0LL;
    *((_QWORD *)this + 59) = 0LL;
    *((_QWORD *)this + 60) = 0LL;
  }
  DDisplayTargetResources::~DDisplayTargetResources((CDDisplaySwapChain *)((char *)this + 368));
  DDisplayTaskPoolResources::~DDisplayTaskPoolResources((CDDisplaySwapChain *)((char *)this + 336));
  std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>::_Free_non_head<std::allocator<std::_List_node<std::unique_ptr<CDDisplayAgedCachedScanout>,void *>>>(
    v11,
    *v8);
  std::_Deallocate<16>((void *)*v8, 0x18uLL);
  if ( *v7 )
  {
    std::_Destroy_range<std::allocator<CDDisplayCachedScanout>>(*v7, *((CDDisplayCachedScanout **)this + 38));
    std::_Deallocate<16>(*v7, 8 * ((__int64)(*((_QWORD *)this + 39) - *((_QWORD *)this + 37)) >> 3));
    *v7 = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  CScribbleSwapChain::~CScribbleSwapChain((volatile signed __int32 **)this);
}
