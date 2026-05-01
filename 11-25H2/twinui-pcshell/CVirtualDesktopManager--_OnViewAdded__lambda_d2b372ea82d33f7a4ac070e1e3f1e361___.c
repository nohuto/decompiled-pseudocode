/*
 * XREFs of CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___ @ 0x18052D02C
 * Callers:
 *     ?OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z @ 0x1805305B0 (-OnPinnedViewAddedInternal@CVirtualDesktopManager@@UEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18003A540 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18006C670 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA?AV?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800F4048 (-GetCurrentDesktopCollection@CVirtualDesktopManager@@AEAA-AV-$vector@V-$com_ptr_t@UIVirtualDeskt.c)
 *     ?UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V?$vector@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIVirtualDesktop@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@Z @ 0x1800F4380 (-UpdateViewVisibility@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@V-$vector@V-$com_ptr_t@.c)
 *     _lambda_d2b372ea82d33f7a4ac070e1e3f1e361_::operator() @ 0x18052EDD4 (_lambda_d2b372ea82d33f7a4ac070e1e3f1e361_--operator().c)
 *     ?_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180534CD8 (-_PropagateVisibilityPolicyToOwnershipTree@CVirtualDesktopManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualDesktopManager::_OnViewAdded__lambda_d2b372ea82d33f7a4ac070e1e3f1e361___(
        CVirtualDesktopManager *this,
        struct IApplicationView *a2,
        __int64 a3)
{
  int (__fastcall *v6)(struct IApplicationView *, struct IUnknown **); // rbx
  int updated; // eax
  unsigned int v8; // ebx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *CurrentDesktopCollection; // rax
  _QWORD v14[4]; // [rsp+20h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  struct IUnknown *v16; // [rsp+68h] [rbp+28h] BYREF

  v16 = 0LL;
  v6 = *(int (__fastcall **)(struct IApplicationView *, struct IUnknown **))(*(_QWORD *)a2 + 360LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  if ( v6(a2, &v16) < 0 )
  {
    updated = lambda_d2b372ea82d33f7a4ac070e1e3f1e361_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1141LL;
      goto LABEL_17;
    }
    CurrentDesktopCollection = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, CurrentDesktopCollection);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1142LL;
      goto LABEL_17;
    }
  }
  else if ( SHIsSameObject(v16, (struct IUnknown *)a2) )
  {
    updated = lambda_d2b372ea82d33f7a4ac070e1e3f1e361_::operator()(a3);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1128LL;
LABEL_17:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (int)"pcshell\\twinui\\virtualdesktops\\lib\\virtualdesktopmanager.cpp",
        (const char *)(unsigned int)updated);
      goto LABEL_18;
    }
    v10 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v10);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1129LL;
      goto LABEL_17;
    }
    updated = CVirtualDesktopManager::_PropagateVisibilityPolicyToOwnershipTree(this, a2);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1130LL;
      goto LABEL_17;
    }
  }
  else
  {
    updated = (*(__int64 (__fastcall **)(_QWORD, struct IApplicationView *, struct IUnknown *))(**((_QWORD **)this + 15)
                                                                                              + 96LL))(
                *((_QWORD *)this + 15),
                a2,
                v16);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1135LL;
      goto LABEL_17;
    }
    v11 = CVirtualDesktopManager::GetCurrentDesktopCollection((__int64)this, v14);
    updated = CVirtualDesktopManager::UpdateViewVisibility((__int64)this, (__int64)a2, v11);
    v8 = updated;
    if ( updated < 0 )
    {
      v9 = 1136LL;
      goto LABEL_17;
    }
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
  return v8;
}
