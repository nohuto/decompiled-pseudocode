/*
 * XREFs of ?Initialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1800FF2C4
 * Callers:
 *     ?On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z @ 0x1800FFDA0 (-On3DCompositorRunningChanged@MPCInputRouter@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x18000DD50 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180029AA4 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ?Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z @ 0x18002AAC8 (-Create@DWMFocusedInputTarget@@SAJPEAUIInputTarget@@KK_KPEAPEAU2@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002D364 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ??4?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z @ 0x18004BAD4 (--4-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInputTarget@@@Z.c)
 *     ?GetInstance@MPC3DStateHelper@@SAPEAV1@XZ @ 0x180056F88 (-GetInstance@MPC3DStateHelper@@SAPEAV1@XZ.c)
 *     ?GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ @ 0x180057000 (-GetPostProcessor@MPC3DStateHelper@@QEAAPEAUIMPCInputPostProcessor@@XZ.c)
 *     ?GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z @ 0x180065D40 (-GetInputHostTargetForProcessId@DWMInputRouter@@IEAAPEAUIInputTarget@@K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180097E2C (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ?SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z @ 0x1800BB658 (-SetMPCInputRouter@MPCHolographicInputManager@@QEAAXPEAUISystemInputRouter@@@Z.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KPEAUIMPCTarget@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KPEAUIMPCTarget@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x1800FDE5C (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KPEAUIMPCTarget@@V-$_Uhash_compare@_KU-$hash@_.c)
 *     ?Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z @ 0x180100408 (-Set3DFocusTarget@MPCInputRouter@@AEAAXPEAUIMPCFocusTarget@@@Z.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180100E18 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCInputRouter::Initialize3DComponents(MPCInputRouter *this)
{
  char v2; // r14
  _BYTE *v3; // rcx
  const char *v4; // r9
  struct IMPCFocusTarget **v5; // r15
  MPCHolographicInputManager *Instance; // rax
  __int64 v7; // r8
  const char *v8; // r9
  int v9; // eax
  const char *v10; // r9
  struct IInputTarget *v11; // rbx
  struct IInputTarget *InputHostTargetForProcessId; // rax
  const char *v13; // r9
  int v14; // eax
  int v15; // eax
  void *v16; // rsi
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  struct IMPCFocusTarget *v21; // rbx
  RTL_SRWLOCK *v22; // rax
  struct IMPCInputPostProcessor *PostProcessor; // rax
  int v24; // eax
  int v25; // [rsp+20h] [rbp-40h]
  int v26; // [rsp+20h] [rbp-40h]
  __int64 v27; // [rsp+40h] [rbp-20h] BYREF
  void *v28; // [rsp+48h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  struct IInputTarget *v31; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF
  struct IInputTarget *v33; // [rsp+B8h] [rbp+58h] BYREF

  v2 = 0;
  LODWORD(v30) = 0;
  if ( !std::_Atomic_storage<bool,1>::load((__int64)this + 728) )
  {
    *v3 = 1;
    if ( !*((_QWORD *)this + 85) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x186,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v4);
    v5 = (struct IMPCFocusTarget **)((char *)this + 672);
    if ( *((_QWORD *)this + 84) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x187,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        v4);
    Instance = MPCHolographicInputManager::GetInstance();
    MPCHolographicInputManager::SetMPCInputRouter(Instance, this, v7, v8);
    v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 85) + 24LL))(
           *((_QWORD *)this + 85),
           (char *)this + 688);
    if ( v9 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x18E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v9,
        v25);
    v11 = 0LL;
    v33 = 0LL;
    if ( !ISMTestMode::s_instance )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x21,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\utilities\\ismstatics\\system\\ismtestmode.cpp",
        v10);
    if ( !*(_BYTE *)ISMTestMode::s_instance )
    {
      InputHostTargetForProcessId = DWMInputRouter::GetInputHostTargetForProcessId(this, *((_DWORD *)this + 172));
      Microsoft::WRL::ComPtr<IInputTarget>::operator=((__int64 *)&v33, (__int64)InputHostTargetForProcessId);
      v11 = v33;
      if ( !v33 )
        wil::details::in1diag3::_FailFast_Unexpected(
          retaddr,
          (void *)0x194,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
          v13);
    }
    v31 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v14 = DWMFocusedInputTarget::Create(v11, *((_DWORD *)this + 173), 0, 0LL, &v31);
    if ( v14 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x19E,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v14,
        v26);
    v32 = 0LL;
    v15 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
            (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v31,
            &v32);
    if ( v15 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1A1,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v15,
        v26);
    v16 = RefCountedObject::operator new(0x70uLL);
    v28 = v16;
    if ( v16 )
    {
      InputSiteManager = ISMStatics::GetInputSiteManager();
      v18 = InputSiteManager::GetOrCreateInputSiteFromId((__int64)InputSiteManager, &v27, 1u, 0LL);
      v2 = 1;
      LODWORD(v30) = 1;
      v26 = 5;
      v19 = MPCFocusTarget::MPCFocusTarget(v16, v32, *v18, 0LL);
    }
    else
    {
      v19 = 0LL;
    }
    Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach(
      (__int64 *)this + 84,
      (v19 + 80) & -(__int64)(v19 != 0));
    if ( (v2 & 1) != 0 )
    {
      v20 = v27;
      if ( v27 )
      {
        v27 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
    }
    MPCInputRouter::Set3DFocusTarget(this, *v5);
    v21 = *v5;
    v30 = 0LL;
    *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,IMPCTarget *,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,IMPCTarget *>>,0>>::_Try_emplace<unsigned __int64 const &,>(
                             (_QWORD *)this + 96,
                             (__int64)&v28,
                             (unsigned __int8 *)&v30)
              + 24LL) = v21;
    v22 = (RTL_SRWLOCK *)MPC3DStateHelper::GetInstance();
    PostProcessor = MPC3DStateHelper::GetPostProcessor(v22);
    v24 = (*(__int64 (__fastcall **)(struct IMPCInputPostProcessor *, unsigned __int64))(*(_QWORD *)PostProcessor + 96LL))(
            PostProcessor,
            ((unsigned __int64)this + 640) & -(__int64)(this != 0LL));
    if ( v24 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x1B4,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
        (const char *)(unsigned int)v24,
        v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v33);
  }
}
