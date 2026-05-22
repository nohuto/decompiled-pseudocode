/*
 * XREFs of ?OnExclusiveModeStateChangedInputThread@MPCInputRouter@@AEAAXXZ @ 0x1800FFE4C
 * Callers:
 *     _lambda_ec705bf725d52d27b1686ede0253a48a_::_lambda_invoker_cdecl_ @ 0x1800FDD60 (_lambda_ec705bf725d52d27b1686ede0253a48a_--_lambda_invoker_cdecl_.c)
 *     ?UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ @ 0x1801004F4 (-UnInitialize3DComponents@MPCInputRouter@@AEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x18000D7E0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Instance@ISMTracing@@KAPEAV1@XZ @ 0x18000DE08 (-Instance@ISMTracing@@KAPEAV1@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z @ 0x1800290E8 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJKKK_KPEAPEAUIInputTarget@@@Z.c)
 *     ??$As@UIFocusInputTarget@@@?$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIFocusInputTarget@@@WRL@Microsoft@@@Details@12@@Z @ 0x180029AA4 (--$As@UIFocusInputTarget@@@-$ComPtr@UIInputTarget@@@WRL@Microsoft@@QEBAJV-$ComPtrRef@V-$ComPtr@U.c)
 *     ??4?$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18002A9EC (--4-$ComPtr@UIMPCFocusTarget@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ @ 0x18002C510 (-GetInputSiteManager@ISMStatics@@SAPEAVInputSiteManager@@XZ.c)
 *     ?GetOrCreateInputSiteFromId@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@W4InputSiteIdNamespace@@_K@Z @ 0x18002D364 (-GetOrCreateInputSiteFromId@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@W4Inpu.c)
 *     ?GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ @ 0x18004A64C (-GetViewHierarchy@ISMStatics@@SAAEAVViewHierarchyWithWindowManager@@XZ.c)
 *     ?GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z @ 0x18004A690 (-GetViewIdFromWindowId@ViewHelper@@SAIAEAVViewHierarchyWithWindowManager@@_K@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180089534 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?load@?$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z @ 0x1800898D8 (-load@-$_Atomic_storage@_K$07@std@@QEBA_KW4memory_order@2@@Z.c)
 *     ?load@?$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA?AW4GestureOperationState@@W4memory_order@2@@Z @ 0x180094358 (-load@-$_Atomic_storage@W4GestureOperationState@@$03@std@@QEBA-AW4GestureOperationState@@W4memor.c)
 *     ?Attach@?$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAdapter@@@Z @ 0x180097E2C (-Attach@-$ComPtr@VMessageProxyReconnectAdapter@@@WRL@Microsoft@@QEAAXPEAVMessageProxyReconnectAd.c)
 *     ?load@?$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z @ 0x1800BC6F8 (-load@-$_Atomic_storage@_N$00@std@@QEBA_NW4memory_order@2@@Z.c)
 *     ?GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA?AW4FrameworkViewType@@PEAUIFocusInputTarget@@@Z @ 0x1800FE7F0 (-GetFrameworkViewTypeFromFocusTarget@MPCInputRouter@@AEAA-AW4FrameworkViewType@@PEAUIFocusInputT.c)
 *     ?MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z @ 0x1800FF9F4 (-MPCInputRouter_OnExclusiveModeStateChangedInputThread_@ISMTracing@@QEAAX_NK_K@Z.c)
 *     ?Update3DFocusWNF@MPCInputRouter@@AEAAXXZ @ 0x1801005E0 (-Update3DFocusWNF@MPCInputRouter@@AEAAXXZ.c)
 *     ??0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z @ 0x180100E18 (--0MPCFocusTarget@@QEAA@PEAUIFocusInputTarget@@PEAVInputSite@@1W4FrameworkViewType@@K_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall MPCInputRouter::OnExclusiveModeStateChangedInputThread(MPCInputRouter *this)
{
  char v2; // r12
  __int64 v3; // rdx
  char *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r9
  __int64 v7; // rbx
  __int64 v8; // r9
  unsigned __int64 v9; // rbx
  struct ViewHierarchyWithWindowManager *ViewHierarchy; // rax
  unsigned int ViewIdFromWindowId; // eax
  int v12; // eax
  int v13; // eax
  __int64 v14; // rcx
  void *v15; // r14
  struct InputSiteManager *InputSiteManager; // rax
  __int64 *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  ISMTracing *v20; // rcx
  int v21; // [rsp+20h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IInputTarget *v23; // [rsp+98h] [rbp+48h] BYREF
  struct IInputTarget *v24; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v25; // [rsp+A8h] [rbp+58h] BYREF

  v2 = 0;
  if ( *((_BYTE *)this + 752) != std::_Atomic_storage<bool,1>::load((__int64)this + 736)
    || *((_DWORD *)this + 189) != (unsigned int)std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)this + 185)
    || *((_QWORD *)this + 95) != std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 744) )
  {
    *((_BYTE *)this + 752) = std::_Atomic_storage<bool,1>::load(v3);
    *((_DWORD *)this + 189) = std::_Atomic_storage<enum GestureOperationState,4>::load((unsigned int *)this + 185);
    *((_QWORD *)this + 95) = std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 744);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 81);
    if ( *((_BYTE *)this + 752) )
    {
      v4 = (char *)this + 656;
      if ( *((_QWORD *)this + 82)
        && (v5 = std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 744),
            v5 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6))
        || (v4 = (char *)this + 664, *((_QWORD *)this + 83))
        && (v7 = std::_Atomic_storage<unsigned __int64,8>::load((__int64)this + 744),
            v7 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 56LL))(v8)) )
      {
        Microsoft::WRL::ComPtr<IMPCFocusTarget>::operator=((__int64 *)this + 81, v4);
      }
      else
      {
        v24 = 0LL;
        v23 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
        v9 = *((_QWORD *)this + 95);
        ViewHierarchy = ISMStatics::GetViewHierarchy();
        ViewIdFromWindowId = ViewHelper::GetViewIdFromWindowId(ViewHierarchy, v9);
        v12 = DWMInputRouter::CreateAndRegisterTarget(this, *((_DWORD *)this + 189), 0, ViewIdFromWindowId, v9, &v24);
        if ( v12 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x300,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v12,
            v21);
        v13 = Microsoft::WRL::ComPtr<IInputTarget>::As<IFocusInputTarget>(
                (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v24,
                (__int64 *)&v23);
        if ( v13 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x301,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\mpc\\lib\\mpcinputrouter.cpp",
            (const char *)(unsigned int)v13,
            v21);
        v15 = RefCountedObject::operator new(0x70uLL);
        if ( v15 )
        {
          MPCInputRouter::GetFrameworkViewTypeFromFocusTarget(v14, v23);
          InputSiteManager = ISMStatics::GetInputSiteManager();
          v2 = 1;
          v17 = InputSiteManager::GetOrCreateInputSiteFromId(
                  (__int64)InputSiteManager,
                  &v25,
                  1u,
                  *((_QWORD *)this + 95));
          v18 = MPCFocusTarget::MPCFocusTarget(v15, v23, *v17, 0LL);
        }
        else
        {
          v18 = 0LL;
        }
        Microsoft::WRL::ComPtr<MessageProxyReconnectAdapter>::Attach(
          (__int64 *)this + 81,
          (v18 + 80) & -(__int64)(v18 != 0));
        if ( (v2 & 1) != 0 )
        {
          v19 = v25;
          if ( v25 )
          {
            v25 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          }
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v23);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v24);
      }
      if ( ISMTracing::IsEnabled() )
      {
        ISMTracing::Instance();
        ISMTracing::MPCInputRouter_OnExclusiveModeStateChangedInputThread_(
          v20,
          *((_BYTE *)this + 752),
          *((_DWORD *)this + 189),
          *((_QWORD *)this + 95));
      }
    }
    MPCInputRouter::Update3DFocusWNF(this);
  }
}
