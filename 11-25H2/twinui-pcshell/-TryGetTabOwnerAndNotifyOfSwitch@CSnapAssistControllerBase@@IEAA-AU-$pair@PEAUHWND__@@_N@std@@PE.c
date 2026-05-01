/*
 * XREFs of ?TryGetTabOwnerAndNotifyOfSwitch@CSnapAssistControllerBase@@IEAA?AU?$pair@PEAUHWND__@@_N@std@@PEAUHWND__@@AEBUCRect@Geometry@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@Windows@@@Z @ 0x1805849F8
 * Callers:
 *     ?SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArrangementOptions@WindowSnapping@Shell@Internal@4@@Z @ 0x180583D60 (-SnapWindowFromSnapAssist@CSnapAssistControllerBase@@UEAAJ_K0URect@Foundation@Windows@@W4SnapArr.c)
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800934E8 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180093874 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800D53EC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA?AW4SnapRegion@@AEBUCRect@Geometry@@PEAUIImmersiveMonitor@@@Z @ 0x1800D9698 (-DetermineSnapRegionFromMonitorWorkArea@SnapLayoutHelpers@@YA-AW4SnapRegion@@AEBUCRect@Geometry@.c)
 *     ?start@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x18028CC38 (-start@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ??B?$tip_test@V?$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ @ 0x180295DEC (--B-$tip_test@V-$merged_data@U_tip_SearchHomeRenderTest@@U1@@details@tip2@@@tip2@@QEBA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@tip2@@@tip2@@QEAAXXZ @ 0x1802CFFBC (-complete@-$tip_test@V-$merged_data@U_tip_GamingPostureControllerStateChangeTest@@U1@@details@ti.c)
 *     _Init_thread_footer @ 0x1802D5898 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1802D5900 (_Init_thread_header.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180582BE4 (--1-$com_ptr_t@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_polic.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180582C9C (--1-$test_data_control@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@X.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180582CD4 (--1-$test_watcher@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA@XZ.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@1@XZ @ 0x180582E98 (--C-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test_d.c)
 *     ?Release@?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ @ 0x180583828 (-Release@-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805853A8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_TabTearOutEventTest@@U1@@details@tip2@@@tip2@@AEBAA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  __int64 *v23; // rcx
  __int64 v24; // rax
  int v25; // eax
  UINT v26; // edx
  __int64 result; // rax
  SnapRectHelpers *v28; // [rsp+28h] [rbp-41h] BYREF
  int v29; // [rsp+30h] [rbp-39h] BYREF
  void *v30[2]; // [rsp+38h] [rbp-31h] BYREF
  __int128 v31; // [rsp+48h] [rbp-21h] BYREF
  void *v32; // [rsp+58h] [rbp-11h] BYREF
  const int *v33; // [rsp+60h] [rbp-9h] BYREF
  _BYTE v34[40]; // [rsp+68h] [rbp-1h] BYREF
  volatile signed __int32 *v35; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+57h]

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
                 + 266) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((void **)&v28);
        tip2::tip_test<tip2::details::merged_data<_tip_GamingPostureControllerStateChangeTest,_tip_GamingPostureControllerStateChangeTest>>::complete(a1 + 39);
      }
      v30[0] = 0LL;
      v13 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::ensure_data(v30);
      tip2::details::shared_data<1,0,0>::start(*v13 + 8LL, &v31);
      v33 = &tip2::test_watcher<tip2::details::merged_data<_tip_SetPhysicalDeviceAccessRegKeyTipTest,_tip_SetPhysicalDeviceAccessRegKeyTipTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v34,
        (struct wil::details::IFailureCallback *)&v33,
        0LL,
        1);
      v35 = (volatile signed __int32 *)v30[0];
      if ( v30[0] )
        _InterlockedAdd((volatile signed __int32 *)v30[0] + 70, 1u);
      wil::com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>,wil::err_returncode_policy>(v30);
      v14 = *v12;
      v15 = v35;
      *v12 = v35;
      if ( v15 )
        _InterlockedAdd(v15 + 70, 1u);
      if ( v14 )
        tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>::Release(v14);
      tip2::test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_watcher<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>((__int64)&v33);
      if ( dword_18089E4B0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_18089E4B0);
        if ( dword_18089E4B0 == -1 )
        {
          dword_18089E4B4 = RegisterWindowMessageW(L"TabTearOut");
          Init_thread_footer(&dword_18089E4B0);
        }
      }
      v17 = dword_18089E4B4;
      if ( !dword_18089E4B4 )
      {
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0x193,
          (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
          v16);
        v17 = dword_18089E4B4;
      }
      if ( v17 )
      {
        v18 = MonitorFromRect(a4, 0);
        if ( !v18 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x198,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)0x80070057LL,
            (int)v28);
        v28 = 0LL;
        v19 = (__int64 *)a1[8];
        v20 = *v19;
        v28 = 0LL;
        v21 = (*(__int64 (__fastcall **)(__int64 *, HMONITOR, SnapRectHelpers **))(v20 + 48))(v19, v18, &v28);
        if ( v21 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x19B,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v21,
            (int)v28);
        v22 = SnapLayoutHelpers::DetermineSnapRegionFromMonitorWorkArea((__int64)a4, v28);
        *(_DWORD *)(*tip2::tip_test<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::operator->(
                       (__int64)(a1 + 39),
                       (__int64 *)&v32)
                  + 268) = v22;
        tip2::test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>::~test_data_control<tip2::details::merged_data<_tip_TabTearOutEventTest,_tip_TabTearOutEventTest>>(&v32);
        v29 = 0;
        v23 = (__int64 *)a1[17];
        v24 = *v23;
        *(float *)&v31 = (float)a4->left;
        *((float *)&v31 + 1) = (float)a4->top;
        *((float *)&v31 + 2) = (float)(a4->right - a4->left);
        *((float *)&v31 + 3) = (float)(a4->bottom - a4->top);
        v25 = (*(__int64 (__fastcall **)(__int64 *, __int128 *, int *))(v24 + 72))(v23, &v31, &v29);
        if ( v25 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x1A0,
            (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
            (const char *)(unsigned int)v25,
            (int)v28);
        PostMessageW(a3, dword_18089E4B4, 0LL, v29);
        v8 = 0;
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v28);
      }
    }
    else
    {
      if ( dword_18089E4B8 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                       + 16LL) )
      {
        Init_thread_header(&dword_18089E4B8);
        if ( dword_18089E4B8 == -1 )
        {
          dword_18089E4BC = RegisterWindowMessageW(L"TabSwitch");
          Init_thread_footer(&dword_18089E4B8);
        }
      }
      v26 = dword_18089E4BC;
      if ( dword_18089E4BC
        || (wil::details::in1diag3::_Log_GetLastError(
              retaddr,
              (void *)0x1AB,
              (int)"pcshell\\twinui\\snapcomponent\\lib\\snapassistcontroller.cpp",
              v11),
            (v26 = dword_18089E4BC) != 0) )
      {
        PostMessageW(a3, v26, ((unsigned __int64)a5 >> 1) & 1, 0LL);
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
