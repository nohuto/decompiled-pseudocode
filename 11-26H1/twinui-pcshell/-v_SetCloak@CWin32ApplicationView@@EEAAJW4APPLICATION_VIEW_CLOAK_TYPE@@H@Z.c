/*
 * XREFs of ?v_SetCloak@CWin32ApplicationView@@EEAAJW4APPLICATION_VIEW_CLOAK_TYPE@@H@Z @ 0x180131F60
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z @ 0x180071210 (-GetViewId@CWin32ApplicationView@@UEAAJPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x1800714CC (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?GatherWindows@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@QEAAJPEAUHWND__@@@Z @ 0x180088250 (-GatherWindows@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManageme.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___ @ 0x1801323CC (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_ee3e0a0da20eb1cf2fabc.c)
 *     ??0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@PEBU?$vector_view_base@U?$vector_impl@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$vector@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@V?$allocator@UMeetAndChatFallbackProp@Shell@Internal@Windows@winrt@@@std@@@std@@Usingle_threaded_collection_base@impl@5@@impl@winrt@@UMeetAndChatFallbackProp@Shell@Internal@Windows@3@Ucollection_version@23@@5@@Z @ 0x180221268 (--0_lambda_6b6168dda817c5975ee7d3438d2331fe_@@QEAA@AEBUMeetAndChatFallbackProp@Shell@Internal@Wi.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802C047C (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$CloakTypeChange@AEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@ApplicationViewTraceLogging@ApplicationViewManagement@@SAXAEAV?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAW4APPLICATION_VIEW_CLOAK_TYPE@@@Z @ 0x18030A3C8 (--$CloakTypeChange@AEAV-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@.c)
 *     GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___ @ 0x18030A428 (GlobalsUtility--CGlobals_ApplicationViewManagement--CGlobals_--Get__lambda_807778e6719fb664354e7.c)
 *     ?RemoveAt@?$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardCompareHelper@PEAUUiaPropertyChangedEventArgs@@@@V?$CSimpleArrayStandardMergeHelper@PEAUUiaPropertyChangedEventArgs@@@@@@QEAAJ_K@Z @ 0x18030BA94 (-RemoveAt@-$CTSimpleArray@PEAUUiaPropertyChangedEventArgs@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUU.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CWin32ApplicationView::v_SetCloak(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // rbx
  int v7; // r15d
  unsigned int v8; // esi
  int v9; // r14d
  unsigned __int16 *v10; // rcx
  LPVOID *v11; // r15
  HWND v12; // rax
  DWORD WindowThreadProcessId; // edi
  __int64 i; // rbx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, __int64, bool, __int64); // rdi
  __int64 v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  HWND v21; // rdi
  _QWORD *v22; // rbx
  __int64 v23; // rdi
  __int64 v24; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  HWND v28; // rax
  int v29; // ebx
  int v30; // [rsp+20h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v32[16]; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int16 *v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+58h] [rbp-18h]
  __int64 v35; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  RTL_SRWLOCK *v37; // [rsp+A0h] [rbp+30h] BYREF

  v6 = (RTL_SRWLOCK *)(a1 + 48);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 48));
  v37 = v6;
  v7 = *(_DWORD *)(a1 + 264);
  v8 = 0;
  if ( a3 )
    v9 = a2 | v7;
  else
    v9 = v7 & ~a2;
  *(_DWORD *)(a1 + 264) = v9;
  v10 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  if ( v7 != v9 )
  {
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v33);
    v34 = -1LL;
    v35 = -1LL;
    if ( (int)CWin32ApplicationView::GetViewId((CWin32ApplicationView *)(a1 + 16), &v33) >= 0 )
    {
      v31 = *(_OWORD *)_lambda_6b6168dda817c5975ee7d3438d2331fe_::_lambda_6b6168dda817c5975ee7d3438d2331fe_(
                         v32,
                         &v33,
                         a1);
      GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_807778e6719fb664354e7e91ff2b2b86___(&v31);
      ApplicationViewManagement::ApplicationViewTraceLogging::CloakTypeChange<Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>> &,enum APPLICATION_VIEW_CLOAK_TYPE &>(
        &v33,
        a1 + 264);
    }
    v10 = v33;
  }
  if ( v10 )
  {
    CoTaskMemFree(v10);
    v33 = 0LL;
  }
  v34 = 0LL;
  v35 = 0LL;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( (v9 != 0) == (v7 != 0) && v9 )
    return 0LL;
  v37 = 0LL;
  GlobalsUtility::CGlobals_ApplicationViewManagement::CGlobals_::Get__lambda_ee3e0a0da20eb1cf2fabc213f82c029b___(&v37);
  if ( !v37 )
  {
    v19 = -2147024884;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x115,
      (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
      (const char *)0x8007000CLL);
    v27 = (__int64)v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    return v19;
  }
  v11 = (LPVOID *)(a1 + 232);
  v12 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
  if ( v9 )
  {
    ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GatherWindows(
      (char **)(a1 + 232),
      v12);
  }
  else
  {
    WindowThreadProcessId = GetWindowThreadProcessId(v12, 0LL);
    if ( WindowThreadProcessId )
    {
      for ( i = *(_QWORD *)(a1 + 240); i; --i )
      {
        if ( GetWindowThreadProcessId(*((HWND *)*v11 + i - 1), 0LL) != WindowThreadProcessId )
          CTSimpleArray<UiaPropertyChangedEventArgs *,4294967294,CTPolicyCoTaskMem<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardCompareHelper<UiaPropertyChangedEventArgs *>,CSimpleArrayStandardMergeHelper<UiaPropertyChangedEventArgs *>>::RemoveAt(
            a1 + 232,
            i - 1);
      }
    }
  }
  v15 = (__int64)v37;
  v16 = (__int64 (__fastcall *)(__int64, __int64, bool, __int64))*((_QWORD *)v37->Ptr + 3);
  v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
  v18 = v16(v15, v17, v9 != 0, 1LL);
  v19 = v18;
  if ( v18 == -2147024809 )
  {
    if ( v9
      || (v28 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216)),
          !GetWindow(v28, 4u)) )
    {
LABEL_29:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x143,
        (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)v19);
      v26 = (__int64)v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
      return v19;
    }
    if ( *(_QWORD *)(a1 + 240) )
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x13D,
        (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
        (const char *)0x80070057LL,
        v30);
  }
  else
  {
    if ( v18 >= 0 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 216) + 24LL))(*(_QWORD *)(a1 + 216));
      v21 = (HWND)GhostWindowFromHungWindow(v20);
      if ( v21 )
      {
        v29 = (*((__int64 (__fastcall **)(RTL_SRWLOCK *, HWND, bool, _QWORD))v37->Ptr + 3))(v37, v21, v9 != 0, 0LL);
        if ( (v29 != -2147024809 || v9 || !GetWindow(v21, 4u)) && v29 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x158,
            (int)"pcshell\\twinui\\appviewmanager\\lib\\appview.cpp",
            (const char *)(unsigned int)v29);
      }
      v22 = *v11;
      v23 = (__int64)*v11 + 8 * *(_QWORD *)(a1 + 240);
      while ( v22 != (_QWORD *)v23 )
        (*((void (__fastcall **)(RTL_SRWLOCK *, _QWORD, bool, _QWORD))v37->Ptr + 3))(v37, *v22++, v9 != 0, 0LL);
      if ( !v9 )
      {
        if ( *v11 )
        {
          CoTaskMemFree(*v11);
          *v11 = 0LL;
        }
        *(_QWORD *)(a1 + 240) = 0LL;
        *(_QWORD *)(a1 + 256) = 0LL;
      }
      v24 = (__int64)v37;
      if ( v37 )
      {
        v37 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
      }
      return 0LL;
    }
    if ( v18 != -2147024890 )
      goto LABEL_29;
    v8 = -2147024890;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v37);
  return v8;
}
