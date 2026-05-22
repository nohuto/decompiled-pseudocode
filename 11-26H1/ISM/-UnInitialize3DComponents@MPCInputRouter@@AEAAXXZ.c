/*
 * XREFs of ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801004F4
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FFDA0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180056F88 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180057000 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C (-OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ?clear@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x180100D24 (-clear@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall MPCInputRouter::UnInitialize3DComponents(MPCInputRouter *this)
{
  _BYTE *v1; // rsi
  RTL_SRWLOCK *Instance; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-38h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (char *)this + 728;
  if ( std::_Atomic_storage<bool,1>::load((__int64)this + 728) )
  {
    std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::clear((char *)this + 768);
    Instance = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(Instance);
    v5 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, _QWORD))(*(_QWORD *)PostProcessor + 96LL))(
           PostProcessor,
           0LL);
    if ( v5 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1C3,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v5,
        v6);
    *((_OWORD *)this + 43) = 0LL;
    *((_OWORD *)this + 44) = 0LL;
    *((_QWORD *)this + 90) = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 84);
    MPCInputRouter::Set3DFocusTarget(this, 0LL);
    *v1 = 0;
    *((_BYTE *)this + 736) = 0;
    _InterlockedExchange((volatile __int32 *)this + 185, 0);
    _InterlockedExchange64((volatile __int64 *)this + 93, 0LL);
    MPCInputRouter::OnExclusiveModeStateChangedInputThread(this);
  }
}
