/*
 * XREFs of ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805A8894
 * Callers:
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x1805A7BA0 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004FBA0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800B3F5C (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x18016CF88 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028038C (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x18028BF74 (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x1802A2788 (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     _Init_thread_footer @ 0x1802CDEBC (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802CDF24 (_Init_thread_header.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A6958 (--1-$com_ptr_t@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A6A10 (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1805A6A48 (--1-$test_watcher@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x1805A6C14 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?Release@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805A7668 (-Release@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A9298 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSnapAssistControllerBase::TryGetTabOwnerAndNotifyOfSwitch(
        _QWORD *a1,
        __int64 a2,
        HWND a3,
        const RECT *a4,
        unsigned int a5)
{
  char v8; // bl
  HANDLE PropW; // rax
  HANDLE v10; // r15
  const char *v11; // r9
  volatile signed __int32 **v12; // r14
  _QWORD *v13; // rax
  volatile signed __int32 *v14; // rcx
  volatile signed __int32 *v15; // rax
  const char *v16; // r9
  UINT v17; // edx
  HMONITOR v18; // rdx
  __int64 *v19; // rcx
  __int64 v20; // rax
  int v21; // eax
  int v22; // ebx
  __int64 v23; // rcx
  int v24; // eax
  UINT v25; // edx
  __int64 result; // rax
  int v27; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int32 *v28; // [rsp+28h] [rbp-58h] BYREF
  __int128 v29; // [rsp+30h] [rbp-50h] BYREF
  void **v30; // [rsp+40h] [rbp-40h] BYREF
  _BYTE v31[40]; // [rsp+48h] [rbp-38h] BYREF
  volatile signed __int32 *v32; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+28h]

  v8 = 1;
  PropW = GetPropW(a3, (LPCWSTR)0xA920);
  v10 = PropW;
  if ( PropW )
  {
    if ( (unsigned int)IsWindowArranged(PropW) )
    {
      v12 = (volatile signed __int32 **)(a1 + 39);
      if ( (unsigned __int8)tip2::tip_test<tip2::details::merged_data<_tip_SearchHomeRenderTest,_tip_SearchHomeRenderTest>>::operator bool(a1 + 39) )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                      (__int64)(a1 + 39),
                      (__int64 *)&v28)
                 + 274) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((void **)&v28);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(a1 + 39);
      }
      v28 = 0LL;
      v13 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::ensure_data(&v28);
      tip2::details::shared_data<1,0,0>::start(*v13 + 8LL, &v29);
      v30 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v31,
        (struct wil::details::IFailureCallback *)&v30,
        0LL,
        1);
      v32 = v28;
      if ( v28 )
        _InterlockedAdd(v28 + 72, 1u);
      wil::com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>((void **)&v28);
      v14 = *v12;
      v15 = v32;
      *v12 = v32;
      if ( v15 )
        _InterlockedAdd(v15 + 72, 1u);
      if ( v14 )
        tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>::Release(v14);
      tip2::test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((__int64)&v30);
      if ( dword_1808DEC00 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_1808DEC00);
        if ( dword_1808DEC00 == -1 )
        {
          dword_1808DEC04 = RegisterWindowMessageW(L"TabTearOut");
          Init_thread_footer(&dword_1808DEC00);
        }
      }
      v17 = dword_1808DEC04;
      if ( !dword_1808DEC04 )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x194,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          v16);
        v17 = dword_1808DEC04;
      }
      if ( v17 )
      {
        v18 = MonitorFromRect(a4, 0);
        if ( !v18 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x199,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)0x80070057LL,
            v27);
        v28 = 0LL;
        v19 = (__int64 *)a1[8];
        v20 = *v19;
        v28 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, volatile signed __int32 **))(v20 + 48))(v19, v18, &v28);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x19C,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v21,
            v27);
        v22 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)a4, (SnapRectHelpers *)v28);
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                       (__int64)(a1 + 39),
                       (__int64 *)&v29)
                  + 276) = v22;
        tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((void **)&v29);
        v27 = 0;
        v23 = a1[17];
        *(float *)&v29 = (float)a4->left;
        *((float *)&v29 + 1) = (float)a4->top;
        *((float *)&v29 + 2) = (float)(a4->right - a4->left);
        *((float *)&v29 + 3) = (float)(a4->bottom - a4->top);
        v24 = (*(__int64 (__fastcall **)(__int64, __int128 *, int *))(*(_QWORD *)v23 + 72LL))(v23, &v29, &v27);
        if ( v24 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1A1,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v24,
            v27);
        PostMessageW(a3, dword_1808DEC04, 0LL, v27);
        v8 = 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
      }
    }
    else
    {
      if ( dword_1808DEC08 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_1808DEC08);
        if ( dword_1808DEC08 == -1 )
        {
          dword_1808DEC0C = RegisterWindowMessageW(L"TabSwitch");
          Init_thread_footer(&dword_1808DEC08);
        }
      }
      v25 = dword_1808DEC0C;
      if ( dword_1808DEC0C
        || (wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x1AC,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
              v11),
            (v25 = dword_1808DEC0C) != 0) )
      {
        PostMessageW(a3, v25, ((unsigned __int64)a5 >> 1) & 1, 0LL);
      }
    }
    *(_QWORD *)a2 = v10;
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
  }
  result = a2;
  *(_BYTE *)(a2 + 8) = v8;
  return result;
}
