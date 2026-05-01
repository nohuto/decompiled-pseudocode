/*
 * XREFs of ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180558710
 * Callers:
 *     CVirtualDesktopManager::_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___ @ 0x180550048 (CVirtualDesktopManager--_OnViewAdded__lambda_34ee246322c155ae103acce2d12cb4c3___.c)
 *     CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___ @ 0x1805501C8 (CVirtualDesktopManager--_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___.c)
 *     ?MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180553820 (-MoveViewToDesktopNoGroupPropagateInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@PE.c)
 *     ?MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1805538C0 (-MoveViewToHolographicDesktopInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x180558340 (-ViewOwnerChangedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 *     ?_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z @ 0x180558670 (-_MoveViewToDesktop@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@PEAUIVirtualDesktop@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800482C8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationVi.c)
 *     ??0?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1800781E4 (--0-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Microsoft@@@det.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x180132568 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1801328B0 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIApplicationView@@V?$ComPtr@UIApplicationView@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1802099B8 (--0Iterator@-$ObjectArrayAdapterImpl@UIApplicationView@@V-$ComPtr@UIApplicationView@@@WRL@Micros.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2)
{
  unsigned int v4; // edi
  int (__fastcall *v5)(struct IApplicationView *, __int64 *); // rbx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // esi
  _QWORD *CurrentDesktopCollection; // rax
  int updated; // eax
  int v11; // ebx
  __int64 v13; // [rsp+20h] [rbp-60h] BYREF
  int v14; // [rsp+28h] [rbp-58h]
  unsigned int v15; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16[2]; // [rsp+38h] [rbp-48h] BYREF
  int v17; // [rsp+48h] [rbp-38h] BYREF
  __int64 v18[2]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19[4]; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]
  __int64 v21; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+C0h] [rbp+40h] BYREF

  v4 = 0;
  v21 = 0LL;
  v5 = *(int (__fastcall **)(struct IApplicationView *, __int64 *))(*(_QWORD *)a2 + 368LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
  if ( v5(a2, &v21) < 0 )
  {
LABEL_10:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    return v4;
  }
  else
  {
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>(
      (__int64)&v13,
      v21);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v15,
      (__int64)&v13,
      0);
    details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::Iterator(
      (__int64)&v17,
      (__int64)&v13,
      v14);
    while ( 1 )
    {
      if ( v15 == v17 && v16[1] == v18[1] )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
        return 0LL;
      }
      v6 = v16[0];
      v22 = v16[0];
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v22);
      v7 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct IApplicationView *))(**((_QWORD **)this + 15) + 96LL))(
             *((_QWORD *)this + 15),
             v6,
             a2);
      v8 = v7;
      if ( v7 < 0 )
        break;
      CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v19);
      updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, v6, CurrentDesktopCollection);
      v11 = updated;
      if ( updated < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1F5,
          (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
          (const char *)(unsigned int)updated);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
        v4 = v11;
        goto LABEL_10;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
      ++v15;
      details::ObjectArrayAdapterImpl<IApplicationView,Microsoft::WRL::ComPtr<IApplicationView>>::Iterator::GetCurrentObject(&v15);
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F4,
      (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
      (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v18);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v21);
    return v8;
  }
}
