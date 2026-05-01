/*
 * XREFs of ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18058899C
 * Callers:
 *     ?IsWindowValidForGroupInclusion@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEA_N@Z @ 0x180588960 (-IsWindowValidForGroupInclusion@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x180047CDC (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x1800B55C0 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x180109018 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180109CB4 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x18018BDE8 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801ACDAC (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180203058 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180267668 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802C20D8 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1802CA554 (CoTaskMemFree_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802D92D0 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x1805888F8 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?TryGetRectForWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@AEAURect@Foundation@83@@Z @ 0x180589890 (-TryGetRectForWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGrou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=13 #try_helpers=1
char __fastcall winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowValidForGroupInclusion(
        _QWORD *a1,
        unsigned int a2,
        __int64 **a3)
{
  HWND v4; // rsi
  _QWORD *v5; // r14
  __int64 v6; // rdi
  int (__fastcall *v7)(__int64, _QWORD, ApplicationViewHelpers **); // rbx
  struct IApplicationView *v8; // rdx
  __int64 WindowForView; // rax
  __int64 v11; // rcx
  ApplicationViewHelpers *v12; // rbx
  __int64 (__fastcall *v13)(ApplicationViewHelpers *, __int64 *); // rdi
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rcx
  int v19; // eax
  __int64 *v20; // rcx
  __int64 v21; // rax
  int v22; // eax
  __int64 v23; // rbx
  int v24; // eax
  char v25; // r12
  void *v26; // rcx
  char *v27; // r15
  char *v28; // r13
  __int64 v29; // r14
  int (__fastcall *v30)(__int64, _QWORD, __int64 *); // rbx
  __int64 v31; // rbx
  __int64 (__fastcall *v32)(__int64, __int128 *); // r14
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  char v37; // [rsp+20h] [rbp-118h]
  __int64 v38; // [rsp+28h] [rbp-110h] BYREF
  ApplicationViewHelpers *v39; // [rsp+30h] [rbp-108h] BYREF
  int v40; // [rsp+38h] [rbp-100h] BYREF
  __int128 v41; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+50h] [rbp-E8h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-E0h] BYREF
  __int64 v44[2]; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v45; // [rsp+70h] [rbp-C8h] BYREF
  int v46; // [rsp+78h] [rbp-C0h] BYREF
  __int128 v47; // [rsp+80h] [rbp-B8h] BYREF
  int v48; // [rsp+90h] [rbp-A8h] BYREF
  int v49; // [rsp+94h] [rbp-A4h] BYREF
  unsigned int v50; // [rsp+98h] [rbp-A0h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-98h] BYREF
  int v52; // [rsp+A8h] [rbp-90h] BYREF
  __int128 v53; // [rsp+B0h] [rbp-88h]
  _QWORD *v54; // [rsp+C0h] [rbp-78h]
  int v55; // [rsp+C8h] [rbp-70h] BYREF
  int v56; // [rsp+CCh] [rbp-6Ch] BYREF
  int v57; // [rsp+D0h] [rbp-68h] BYREF
  __int64 **v58; // [rsp+D8h] [rbp-60h]
  struct tagRECT v59; // [rsp+E0h] [rbp-58h] BYREF
  __int128 v60; // [rsp+F0h] [rbp-48h] BYREF

  v58 = a3;
  v4 = (HWND)a2;
  v5 = a1;
  v54 = a1;
  v39 = 0LL;
  v6 = a1[17];
  v7 = *(int (__fastcall **)(__int64, _QWORD, ApplicationViewHelpers **))(*(_QWORD *)v6 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v39);
  if ( v7(v6, (unsigned int)v4, &v39) < 0
    || (WindowForView = ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v39,
                          v8),
        !(unsigned int)IsWindowArranged(WindowForView))
    && (!IsIconic(v4)
     || !winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
           v11,
           (int)v4,
           a3)) )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
    return 0;
  }
  v42 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v12 = v39;
  v13 = *(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)v39 + 80LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v42);
  v14 = v13(v12, &v42);
  winrt::check_hresult((int *)&v41, v14, (__int64)&v46);
  v49 = 0;
  v46 = 0;
  v47 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v42 + 24LL))(v42, &v49);
  winrt::check_hresult((int *)&v41, v15, (__int64)&v46);
  v60 = 0LL;
  v46 = 0;
  v47 = 0LL;
  v16 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v39 + 128LL))(v39, &v60);
  winrt::check_hresult((int *)&v41, v16, (__int64)&v46);
  v48 = 0;
  v37 = 0;
  v17 = 0LL;
  v45 = 0LL;
  v18 = v5[21];
  if ( v18 && v5[20] )
  {
    v46 = 0;
    v47 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v18 + 48LL))(v18, v39, &v48);
    winrt::check_hresult((int *)&v41, v19, (__int64)&v46);
    if ( v48 )
    {
      v37 = 0;
    }
    else
    {
      v37 = 1;
      v38 = 0LL;
      v46 = 0;
      v47 = 0LL;
      v20 = (__int64 *)v5[20];
      v21 = *v20;
      v38 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v21 + 56))(v20, &v38);
      winrt::check_hresult((int *)&v41, v22, (__int64)&v46);
      details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
        (__int64)&v59,
        v38);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
        (__int64)&v59,
        (__int64)&pv);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
        (__int64)&v59,
        (__int64)&v46);
      while ( (_DWORD)pv != v46 || v44[1] != *((_QWORD *)&v47 + 1) )
      {
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
          (__int64)&pv,
          &v51);
        v40 = 0;
        v52 = 0;
        v53 = 0LL;
        v23 = v51;
        v24 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v51 + 24LL))(
                v51,
                v39,
                &v40);
        winrt::check_hresult((int *)&v41, v24, (__int64)&v52);
        if ( v40 )
        {
          v17 = v23;
          v45 = v23;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
          break;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v51);
        LODWORD(pv) = (_DWORD)pv + 1;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&pv);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v47);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v44);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v59.left);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
      if ( !v17 )
      {
LABEL_41:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
        return 0;
      }
      v5 = v54;
    }
  }
  v25 = 0;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    a3,
    (__int64)&pv);
  v26 = pv;
  v27 = (char *)pv;
  v28 = (char *)pv + 4 * LODWORD(v44[0]);
  while ( v27 != v28 )
  {
    v50 = *(_DWORD *)v27;
    if ( v50 != (_DWORD)v4 )
    {
      v38 = 0LL;
      v29 = v5[17];
      v30 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v29 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v38);
      if ( v30(v29, v50, &v38) >= 0 )
      {
        if ( !v25 )
        {
          *(_QWORD *)&v41 = 0LL;
          v52 = 0;
          v53 = 0LL;
          v31 = v38;
          v32 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v38 + 80LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v41);
          v33 = v32(v31, &v41);
          winrt::check_hresult(&v55, v33, (__int64)&v52);
          v40 = 0;
          v52 = 0;
          v53 = 0LL;
          v34 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v41 + 24LL))(v41, &v40);
          winrt::check_hresult(&v56, v34, (__int64)&v52);
          if ( v49 != v40 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
            if ( !pv )
              goto LABEL_41;
LABEL_40:
            CoTaskMemFree_0(pv);
            pv = 0LL;
            LODWORD(v44[0]) = 0;
            goto LABEL_41;
          }
          v25 = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
        }
        v59 = 0LL;
        if ( IsIconic(v4) )
        {
          v41 = 0LL;
          if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::TryGetRectForWindow(
                                  v58,
                                  &v50,
                                  &v41) )
          {
            v59.left = (int)*(float *)&v41;
            v59.top = (int)*((float *)&v41 + 1);
            v59.right = (int)(float)(*((float *)&v41 + 2) + *(float *)&v41);
            v59.bottom = (int)(float)(*((float *)&v41 + 3) + *((float *)&v41 + 1));
          }
        }
        else
        {
          v52 = 0;
          v53 = 0LL;
          v35 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v38 + 128LL))(v38, &v59);
          winrt::check_hresult(&v57, v35, (__int64)&v52);
        }
        if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v59)
          && Geometry::CRect::Intersects((Geometry::CRect *)&v60, &v59) )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
          if ( !pv )
            goto LABEL_41;
          goto LABEL_40;
        }
        if ( v37 )
        {
          LODWORD(v41) = 0;
          v52 = 0;
          v53 = 0LL;
          v36 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v17 + 24LL))(v17, v38, &v41);
          winrt::check_hresult((int *)&v51, v36, (__int64)&v52);
          if ( !(_DWORD)v41 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
            if ( !pv )
              goto LABEL_41;
            goto LABEL_40;
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
      v26 = pv;
    }
    v27 += 4;
    v5 = v54;
  }
  if ( v26 )
    CoTaskMemFree_0(v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v45);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v42);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v39);
  return 1;
}
