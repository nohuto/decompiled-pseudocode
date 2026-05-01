/*
 * XREFs of ?_AddViewItem@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x1804B12C4
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804B0EA0 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 *     ?_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z @ 0x1804B1468 (-_AddViews@SwitchItemCollection@@AEAAJPEAUIObjectArray@@@Z.c)
 *     ?_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z @ 0x1804B16BC (-_UpdateShowInSwitchers@SwitchItemCollection@@AEAAJPEAUIApplicationView@@_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x1800F21F4 (-IsApplicationViewHolographic@HolographicViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?_AddItem@ObservableObjectArray@@IEAAJAEBV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4ObservableArrayOperation@@@Z @ 0x1804BDFC0 (-_AddItem@ObservableObjectArray@@IEAAJAEBV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@W4Observabl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SwitchItemCollection::_AddViewItem(
        SwitchItemCollection *this,
        int (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *))
{
  unsigned int v4; // esi
  int (__fastcall *v5)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v6; // rax
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64 *); // rdi
  int v9; // eax
  struct IApplicationView *v10; // rdx
  int v11; // ebx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, struct IApplicationView *, _QWORD, GUID *, int *); // rbx
  __int64 v14; // rdx
  int v16[2]; // [rsp+30h] [rbp-10h] BYREF
  __int64 v17; // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v19; // [rsp+78h] [rbp+38h] BYREF
  int v20; // [rsp+80h] [rbp+40h] BYREF
  __int64 v21; // [rsp+88h] [rbp+48h] BYREF

  v4 = 0;
  v17 = 0LL;
  v5 = **a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v17);
  if ( v5((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v6) >= 0 )
  {
    v21 = 0LL;
    v19 = 0;
    v7 = v17;
    v8 = *(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 24LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
    if ( v8(v7, &v21) < 0 || (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v21 + 56LL))(v21, &v19) < 0 || !v19 )
    {
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
      goto LABEL_18;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v21);
  }
  v20 = 0;
  v9 = ((__int64 (__fastcall *)(int (__fastcall ***)(struct IApplicationView *, GUID *, __int64 *), int *))(*a2)[27])(
         a2,
         &v20);
  v11 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x99,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_17:
    v4 = v11;
    goto LABEL_18;
  }
  if ( v20 && !HolographicViewHelpers::IsApplicationViewHolographic((HolographicViewHelpers *)a2, v10) )
  {
    *(_QWORD *)v16 = 0LL;
    v12 = *((_QWORD *)this + 26);
    v13 = *(__int64 (__fastcall **)(__int64, struct IApplicationView *, _QWORD, GUID *, int *))(*(_QWORD *)v12 + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
    v11 = v13(v12, (struct IApplicationView *)a2, 0LL, &GUID_f6f4d0ff_fce6_40ef_a647_2738c4375c27, v16);
    if ( v11 >= 0 )
    {
      v11 = ObservableObjectArray::_AddItem((char *)this + 8, v16, 0LL);
      if ( v11 >= 0 )
      {
LABEL_16:
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)v16);
        goto LABEL_17;
      }
      v14 = 175LL;
    }
    else
    {
      v14 = 174LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_16;
  }
LABEL_18:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v17);
  return v4;
}
