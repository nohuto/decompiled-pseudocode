/*
 * XREFs of ?GetOnscreenViewsForMonitor@CShellSnapComponent@@UEAAJPEAUIImmersiveMonitor@@PEAUIObjectArray@@PEAPEAU3@@Z @ 0x18059F3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x180034DF0 (-IsSnappedWindow@SnapLayoutHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180046480 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x1800464B8 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z @ 0x180048DA8 (-IsViewOnMonitor@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@PEAUIImmersiveMonitor@@@Z.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180052CE8 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z @ 0x1800622C8 (-IsUnoccluded@SnapLayoutHelpers@@YAJPEAUIApplicationView@@PEAUIObjectArray@@0PEA_N@Z.c)
 *     ?IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z @ 0x18067FF24 (-IsMaximizedView@ApplicationViewHelpers@@YA_NPEAUIApplicationView@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CShellSnapComponent::GetOnscreenViewsForMonitor(
        CShellSnapComponent *this,
        struct IImmersiveMonitor *a2,
        struct IObjectArray *a3,
        struct IObjectArray **a4)
{
  const struct _GUID *v8; // rdx
  __int64 v9; // rcx
  int Instance; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64 *); // rbx
  unsigned int i; // esi
  __int64 v17; // rbx
  __int64 (__fastcall *v18)(__int64, _QWORD, GUID *, __int64 *); // rdi
  __int64 *v19; // rax
  int v20; // eax
  struct IImmersiveMonitor *v21; // r8
  wil::details::in1diag3 *v22; // rcx
  __int64 v23; // rdx
  struct IApplicationView *v24; // rdx
  bool IsSnappedWindow; // bl
  struct IApplicationView *v26; // rdx
  bool IsMaximizedView; // al
  int IsUnoccluded; // eax
  int v29; // eax
  unsigned int v31; // [rsp+30h] [rbp-20h] BYREF
  int v32; // [rsp+34h] [rbp-1Ch] BYREF
  struct IUnknown *v33; // [rsp+38h] [rbp-18h] BYREF
  __int64 v34; // [rsp+40h] [rbp-10h] BYREF
  struct IApplicationView *v35; // [rsp+48h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  char v37; // [rsp+88h] [rbp+38h] BYREF

  *a4 = 0LL;
  v35 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  Instance = CEnumerableObjectCollection::CreateInstance(v9, v8, (void **)&v35);
  v11 = Instance;
  if ( Instance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x244,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)Instance);
    goto LABEL_31;
  }
  v34 = 0LL;
  if ( a3 )
  {
    Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(&v34, (__int64)a3);
LABEL_5:
    v31 = 0;
    v12 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v34 + 24LL))(v34, &v31);
    v11 = v12;
    if ( v12 < 0 )
    {
      v13 = 596LL;
      goto LABEL_29;
    }
    for ( i = 0; ; ++i )
    {
      if ( i >= v31 )
      {
LABEL_27:
        v12 = (**(__int64 (__fastcall ***)(struct IApplicationView *, GUID *, struct IObjectArray **))v35)(
                v35,
                &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
                a4);
        v11 = v12;
        if ( v12 >= 0 )
          goto LABEL_30;
        v13 = 634LL;
        goto LABEL_29;
      }
      v33 = 0LL;
      v17 = v34;
      v18 = *(__int64 (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)v34 + 32LL);
      v19 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v33);
      v20 = v18(v17, i, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, v19);
      v22 = retaddr;
      if ( v20 < 0 )
        break;
      if ( !ApplicationViewHelpers::IsViewOnMonitor((ApplicationViewHelpers *)v33, a2, v21) )
        goto LABEL_23;
      v32 = 0;
      v20 = ((__int64 (__fastcall *)(struct IUnknown *, int *))v33->lpVtbl[3].Release)(v33, &v32);
      v22 = retaddr;
      if ( v20 < 0 )
      {
        v23 = 603LL;
        goto LABEL_16;
      }
      if ( !v32 )
        goto LABEL_23;
      IsSnappedWindow = SnapLayoutHelpers::IsSnappedWindow((SnapLayoutHelpers *)v33, v24);
      IsMaximizedView = ApplicationViewHelpers::IsMaximizedView((ApplicationViewHelpers *)v33, v26);
      if ( !IsSnappedWindow && !IsMaximizedView )
        goto LABEL_23;
      v37 = 0;
      IsUnoccluded = SnapLayoutHelpers::IsUnoccluded(v33, v35, 0LL, (struct IApplicationView *)&v37);
      if ( IsUnoccluded < 0 )
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x264,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
          (const char *)(unsigned int)IsUnoccluded);
LABEL_22:
        v29 = (*(__int64 (__fastcall **)(struct IApplicationView *, struct IUnknown *))(*(_QWORD *)v35 + 40LL))(
                v35,
                v33);
        v11 = v29;
        if ( v29 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x274,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
            (const char *)(unsigned int)v29);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
          goto LABEL_30;
        }
LABEL_23:
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
        continue;
      }
      if ( v37 )
        goto LABEL_22;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v33);
      if ( !IsSnappedWindow )
        goto LABEL_27;
    }
    v23 = 600LL;
LABEL_16:
    wil::details::in1diag3::_Log_Hr(
      v22,
      (void *)v23,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
      (const char *)(unsigned int)v20);
    goto LABEL_23;
  }
  v14 = *((_QWORD *)this + 13);
  v15 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v14 + 32LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
  v12 = v15(v14, &v34);
  v11 = v12;
  if ( v12 >= 0 )
    goto LABEL_5;
  v13 = 591LL;
LABEL_29:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v12);
LABEL_30:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
LABEL_31:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  return v11;
}
