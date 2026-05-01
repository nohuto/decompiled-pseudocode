/*
 * XREFs of ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1804B1468
 * Callers:
 *     ?RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@W4SwitchItemFilterBehavior@@@Z @ 0x1804B10B4 (-RuntimeClassInitialize@SwitchItemCollection@@QEAAJPEAUISwitchItemFactory@@PEAUIApplicationViewC.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B12C4 (-_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SwitchItemCollection::_AddViews(SwitchItemCollection *this, struct IObjectArray *a2)
{
  char v4; // si
  int v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // edi
  HRESULT (__stdcall *GetAt)(IObjectArray *, UINT, const IID *const, void **); // rbx
  __int64 *v10; // rax
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  unsigned int v15; // [rsp+58h] [rbp+10h] BYREF
  struct IApplicationView *v16; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0;
  v4 = 0;
  v5 = ((__int64 (__fastcall *)(struct IObjectArray *, unsigned int *))a2->lpVtbl->GetCount)(a2, &v15);
  if ( v5 < 0 )
  {
    v6 = 119LL;
    goto LABEL_3;
  }
  v8 = 0;
  if ( !v15 )
    return 0LL;
  do
  {
    v16 = 0LL;
    GetAt = a2->lpVtbl->GetAt;
    v10 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v16);
    v11 = ((__int64 (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64 *))GetAt)(
            a2,
            v8,
            &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513,
            v10);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 123LL;
LABEL_7:
      wil::details::in1diag3::_Log_Hr(
        v12,
        (void *)v13,
        (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
        (const char *)(unsigned int)v11);
      goto LABEL_11;
    }
    v11 = SwitchItemCollection::_AddViewItem(
            this,
            (int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *))v16);
    v12 = retaddr;
    if ( v11 < 0 )
    {
      v13 = 124LL;
      goto LABEL_7;
    }
    v4 = 1;
LABEL_11:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v16);
    ++v8;
  }
  while ( v8 < v15 );
  if ( v4 || !v15 )
    return 0LL;
  v5 = -2147019873;
  v6 = 131LL;
LABEL_3:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v6,
    (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)(unsigned int)v5);
  return (unsigned int)v5;
}
