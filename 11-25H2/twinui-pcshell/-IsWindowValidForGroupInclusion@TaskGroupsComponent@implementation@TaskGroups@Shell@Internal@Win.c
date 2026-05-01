/*
 * XREFs of ?IsWindowValidForGroupInclusion@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@QEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x18056471C
 * Callers:
 *     ?IsWindowValidForGroupInclusion@?$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@UITaskGroupHost@34567@@impl@winrt@@UEAAHUstruct_Windows_Internal_ApplicationModel_WindowManagement_WindowId@23@PEAXPEA_N@Z @ 0x1805646E0 (-IsWindowValidForGroupInclusion@-$produce@UTaskGroupsComponent@implementation@TaskGroups@Shell@I.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?IsEmpty@CRect@Geometry@@QEBA_NXZ @ 0x180018764 (-IsEmpty@CRect@Geometry@@QEBA_NXZ.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x18005556C (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x1800675F0 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?begin@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1800A2E44 (-begin@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@d.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1800A2ED0 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop.c)
 *     ??DIterator@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AV?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@XZ @ 0x180192E88 (--DIterator@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsof.c)
 *     ??0?$ObjectArrayAdapterImpl@UIGameFocusEvents@@V?$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801B4014 (--0-$ObjectArrayAdapterImpl@UIGameFocusEvents@@V-$ComPtr@UIGameFocusEvents@@@WRL@Microsoft@@@det.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x180210544 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?SnapAssistSnappedWindows@?$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs@UIGuidedSnapAssistCompletedArgs@WindowSnapping@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x18026F608 (-SnapAssistSnappedWindows@-$consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompl.c)
 *     ?end@?$ObjectArrayAdapterImpl@UIVirtualDesktop@@V?$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@details@@QEAA?AVIterator@12@XZ @ 0x1802CA968 (-end@-$ObjectArrayAdapterImpl@UIVirtualDesktop@@V-$ComPtr@UIVirtualDesktop@@@WRL@Microsoft@@@det.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     CoTaskMemFree_0 @ 0x1802D3631 (CoTaskMemFree_0.c)
 *     ?check_hresult@winrt@@YA?AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z @ 0x1802E04C8 (-check_hresult@winrt@@YA-AUhresult@1@U21@AEBUslim_source_location@impl@1@@Z.c)
 *     ?IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@@AEAA_NUWindowId@WindowManagement@ApplicationModel@567@AEBUTaskGroup@34567@@Z @ 0x180564678 (-IsWindowInTaskGroup@TaskGroupsComponent@implementation@TaskGroups@Shell@Internal@Windows@winrt@.c)
 *     ?TryGetRectForWindow@?$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGroups@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@AEBUWindowId@WindowManagement@ApplicationModel@Internal@Windows@3@AEAURect@Foundation@83@@Z @ 0x1805655F0 (-TryGetRectForWindow@-$consume_Windows_Internal_Shell_TaskGroups_ITaskGroup@UITaskGroup@TaskGrou.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  char v25; // r13
  void *v26; // rcx
  unsigned int *v27; // r15
  unsigned int *v28; // rax
  unsigned int v29; // r12d
  __int64 v30; // r14
  int (__fastcall *v31)(__int64, _QWORD, __int64 *); // rbx
  __int64 v32; // rbx
  __int64 (__fastcall *v33)(__int64, __int128 *); // r14
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  char v38; // [rsp+20h] [rbp-108h]
  unsigned int v39; // [rsp+24h] [rbp-104h] BYREF
  __int64 v40; // [rsp+28h] [rbp-100h] BYREF
  ApplicationViewHelpers *v41; // [rsp+30h] [rbp-F8h] BYREF
  int v42; // [rsp+38h] [rbp-F0h] BYREF
  __int64 v43; // [rsp+40h] [rbp-E8h] BYREF
  __int128 v44; // [rsp+48h] [rbp-E0h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-D0h] BYREF
  __int64 v46[2]; // [rsp+60h] [rbp-C8h] BYREF
  __int64 v47; // [rsp+70h] [rbp-B8h] BYREF
  int v48; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v49; // [rsp+80h] [rbp-A8h] BYREF
  int v50; // [rsp+90h] [rbp-98h] BYREF
  int v51; // [rsp+94h] [rbp-94h] BYREF
  int v52; // [rsp+98h] [rbp-90h] BYREF
  __int128 v53; // [rsp+A0h] [rbp-88h]
  unsigned int *v54; // [rsp+B0h] [rbp-78h]
  _QWORD *v55; // [rsp+B8h] [rbp-70h]
  int v56; // [rsp+C0h] [rbp-68h] BYREF
  int v57; // [rsp+C4h] [rbp-64h] BYREF
  int v58; // [rsp+C8h] [rbp-60h] BYREF
  int v59; // [rsp+CCh] [rbp-5Ch] BYREF
  __int64 **v60; // [rsp+D0h] [rbp-58h]
  struct tagRECT v61; // [rsp+D8h] [rbp-50h] BYREF
  __int128 v62; // [rsp+E8h] [rbp-40h] BYREF

  v60 = a3;
  v4 = (HWND)a2;
  v5 = a1;
  v55 = a1;
  v41 = 0LL;
  v6 = a1[17];
  v7 = *(int (__fastcall **)(__int64, _QWORD, ApplicationViewHelpers **))(*(_QWORD *)v6 + 48LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v41);
  if ( v7(v6, (unsigned int)v4, &v41) < 0
    || (WindowForView = ApplicationViewHelpers::GetWindowForView(
                          (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))v41,
                          v8),
        !(unsigned int)IsWindowArranged(WindowForView))
    && (!IsIconic(v4)
     || !winrt::Windows::Internal::Shell::TaskGroups::implementation::TaskGroupsComponent::IsWindowInTaskGroup(
           v11,
           (int)v4,
           a3)) )
  {
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
    return 0;
  }
  v43 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v12 = v41;
  v13 = *(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)v41 + 80LL);
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v43);
  v14 = v13(v12, &v43);
  winrt::check_hresult((int *)&v39, v14, (__int64)&v48);
  v51 = 0;
  v48 = 0;
  v49 = 0LL;
  v15 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v43 + 24LL))(v43, &v51);
  winrt::check_hresult((int *)&v39, v15, (__int64)&v48);
  v62 = 0LL;
  v48 = 0;
  v49 = 0LL;
  v16 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int128 *))(*(_QWORD *)v41 + 128LL))(v41, &v62);
  winrt::check_hresult((int *)&v39, v16, (__int64)&v48);
  v50 = 0;
  v38 = 0;
  v17 = 0LL;
  v47 = 0LL;
  v18 = v5[21];
  if ( v18 && v5[20] )
  {
    v48 = 0;
    v49 = 0LL;
    v19 = (*(__int64 (__fastcall **)(__int64, ApplicationViewHelpers *, int *))(*(_QWORD *)v18 + 48LL))(v18, v41, &v50);
    winrt::check_hresult((int *)&v39, v19, (__int64)&v48);
    if ( v50 )
    {
      v38 = 0;
    }
    else
    {
      v38 = 1;
      v40 = 0LL;
      v48 = 0;
      v49 = 0LL;
      v20 = (__int64 *)v5[20];
      v21 = *v20;
      v40 = 0LL;
      v22 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v21 + 56))(v20, &v40);
      winrt::check_hresult((int *)&v39, v22, (__int64)&v48);
      details::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>::ObjectArrayAdapterImpl<IGameFocusEvents,Microsoft::WRL::ComPtr<IGameFocusEvents>>(
        (__int64)&v61,
        v40);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::begin(
        (__int64)&v61,
        (__int64)&pv);
      details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::end(
        (__int64)&v61,
        (__int64)&v48);
      while ( (_DWORD)pv != v48 || v46[1] != *((_QWORD *)&v49 + 1) )
      {
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::operator*(
          (__int64)&pv,
          (__int64 *)&v44);
        v42 = 0;
        v52 = 0;
        v53 = 0LL;
        v23 = v44;
        v24 = (*(__int64 (__fastcall **)(_QWORD, ApplicationViewHelpers *, int *))(*(_QWORD *)v44 + 24LL))(
                v44,
                v41,
                &v42);
        winrt::check_hresult((int *)&v39, v24, (__int64)&v52);
        if ( v42 )
        {
          v17 = v23;
          v47 = v23;
          if ( v23 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 8LL))(v23);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
          break;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v44);
        LODWORD(pv) = (_DWORD)pv + 1;
        details::ObjectArrayAdapterImpl<IVirtualDesktop,Microsoft::WRL::ComPtr<IVirtualDesktop>>::Iterator::GetCurrentObject((unsigned int *)&pv);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v49);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v46);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v61.left);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
      if ( !v17 )
      {
LABEL_41:
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
        return 0;
      }
      v5 = v55;
    }
  }
  v25 = 0;
  winrt::impl::consume_Windows_Internal_Shell_WindowSnapping_IGuidedSnapAssistCompletedArgs<winrt::Windows::Internal::Shell::WindowSnapping::IGuidedSnapAssistCompletedArgs>::SnapAssistSnappedWindows(
    a3,
    (__int64)&pv);
  v26 = pv;
  v27 = (unsigned int *)pv;
  v28 = (unsigned int *)((char *)pv + 4 * LODWORD(v46[0]));
  v54 = v28;
  while ( v27 != v28 )
  {
    v29 = *v27;
    v39 = v29;
    if ( v29 != (_DWORD)v4 )
    {
      v40 = 0LL;
      v30 = v5[17];
      v31 = *(int (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v30 + 48LL);
      wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v40);
      if ( v31(v30, v29, &v40) >= 0 )
      {
        if ( !v25 )
        {
          *(_QWORD *)&v44 = 0LL;
          v52 = 0;
          v53 = 0LL;
          v32 = v40;
          v33 = *(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v40 + 80LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)&v44);
          v34 = v33(v32, &v44);
          winrt::check_hresult(&v56, v34, (__int64)&v52);
          v42 = 0;
          v52 = 0;
          v53 = 0LL;
          v35 = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v44 + 24LL))(v44, &v42);
          winrt::check_hresult(&v57, v35, (__int64)&v52);
          if ( v51 != v42 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
            if ( !pv )
              goto LABEL_41;
LABEL_40:
            CoTaskMemFree_0(pv);
            pv = 0LL;
            LODWORD(v46[0]) = 0;
            goto LABEL_41;
          }
          v25 = 1;
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v44);
        }
        v61 = 0LL;
        if ( IsIconic(v4) )
        {
          v44 = 0LL;
          if ( (unsigned __int8)winrt::impl::consume_Windows_Internal_Shell_TaskGroups_ITaskGroup<winrt::Windows::Internal::Shell::TaskGroups::ITaskGroup>::TryGetRectForWindow(
                                  v60,
                                  &v39,
                                  &v44) )
          {
            v61.left = (int)*(float *)&v44;
            v61.top = (int)*((float *)&v44 + 1);
            v61.right = (int)(float)(*((float *)&v44 + 2) + *(float *)&v44);
            v61.bottom = (int)(float)(*((float *)&v44 + 3) + *((float *)&v44 + 1));
          }
        }
        else
        {
          v52 = 0;
          v53 = 0LL;
          v36 = (*(__int64 (__fastcall **)(__int64, struct tagRECT *))(*(_QWORD *)v40 + 128LL))(v40, &v61);
          winrt::check_hresult(&v58, v36, (__int64)&v52);
        }
        if ( !Geometry::CRect::IsEmpty((Geometry::CRect *)&v61)
          && Geometry::CRect::Intersects((Geometry::CRect *)&v62, &v61) )
        {
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
          if ( !pv )
            goto LABEL_41;
          goto LABEL_40;
        }
        if ( v38 )
        {
          v39 = 0;
          v52 = 0;
          v53 = 0LL;
          v37 = (*(__int64 (__fastcall **)(__int64, __int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, v40, &v39);
          winrt::check_hresult(&v59, v37, (__int64)&v52);
          if ( !v39 )
          {
            wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
            if ( !pv )
              goto LABEL_41;
            goto LABEL_40;
          }
        }
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v40);
      v28 = v54;
      v26 = pv;
    }
    ++v27;
    v5 = v55;
  }
  if ( v26 )
    CoTaskMemFree_0(v26);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v47);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v43);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v41);
  return 1;
}
