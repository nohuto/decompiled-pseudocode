/*
 * XREFs of ?OnSetWindowInternal@UwpWindowWrapper@@AEAAXPEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18006C3E4
 * Callers:
 *     ??0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindowLifecycleManagement@Shell@Internal@Windows@@PEAUHSTRING__@@W4AppModelKind@WindowManagement@ApplicationModel@56@UUwpWindowContextId@3456@PEAUIWindow@9ApplicationModel@56@UWindowId@9ApplicationModel@56@PEBGW4WindowCreatedType@@_K@Z @ 0x18006BDEC (--0UwpWindowWrapper@@QEAA@PEAUIUwpWindowEventDispatcherInternal@@PEAUIUwpWindowContext@UwpWindow.c)
 *     ?v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ @ 0x1801C0710 (-v_OnWindowSet@UwpWindowWrapper@@EEAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x18006BC10 (--$query@UIUniversalAppModel@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr_t@UI.c)
 *     ?Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z @ 0x18006CAC0 (-Clear@WaitFlags@UwpWindowReadyState@@QEAAXPEBV2@W4UwpWindowReadinessWaitFlags@@@Z.c)
 *     ??$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManagerInteropTraceLogging@@SAXAEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@Z @ 0x18006CAF4 (--$WindowReadiness_FlagChange@AEBQEAUHWND__@@AEBW4UwpWindowReadinessWaitFlags@@AEAW42@@ViewManag.c)
 *     ?IsReadyForPresentation@WindowReadyState@@QEAA_NXZ @ 0x18018F044 (-IsReadyForPresentation@WindowReadyState@@QEAA_NXZ.c)
 *     ??R?$_Func_class@X_N@std@@QEBAX_N@Z @ 0x1801C36EC (--R-$_Func_class@X_N@std@@QEBAX_N@Z.c)
 *     ?_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ @ 0x1801C7AE4 (-_WaitForUnfreezeIfNecessary@UwpWindowReadyState@@AEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall UwpWindowWrapper::OnSetWindowInternal(
        UwpWindowWrapper *this,
        struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *a2)
{
  __int64 v4; // rax
  int v5; // eax
  __int64 *v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 *v11; // rcx
  __int64 v12; // rax
  int v13; // eax
  int v14; // eax
  char v15; // r15
  __int64 *v16; // rcx
  __int64 v17; // rax
  int v18; // eax
  int v19; // eax
  __int64 v20; // rsi
  __int64 (__fastcall *v21)(__int64, char *); // rdi
  int v22; // eax
  unsigned int *v23; // rbx
  int v24; // eax
  char v25; // si
  unsigned int v26; // eax
  __int64 v27; // rdx
  int v28; // eax
  char *v29; // r14
  char v30; // bl
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  UwpWindowReadyState *v33; // rcx
  int v34; // [rsp+20h] [rbp-20h] BYREF
  int v35; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v36; // [rsp+28h] [rbp-18h] BYREF
  __int64 v37; // [rsp+30h] [rbp-10h] BYREF
  __int64 (__fastcall ***v38)(_QWORD, GUID *, _QWORD *); // [rsp+38h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+38h]
  __int64 v40; // [rsp+88h] [rbp+48h] BYREF
  int v41; // [rsp+90h] [rbp+50h] BYREF
  int v42; // [rsp+98h] [rbp+58h] BYREF

  v4 = *(_QWORD *)a2;
  v38 = 0LL;
  v5 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, __int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *)))(v4 + 48))(
         a2,
         &v38);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CA,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v5,
      v34);
  v6 = wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppModel,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IUniversalAppModel>(
         &v38,
         &v40);
  v7 = *v6;
  *v6 = 0LL;
  v8 = *((_QWORD *)this + 77);
  *((_QWORD *)this + 77) = v7;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v9 = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 77) + 80LL))(
         *((_QWORD *)this + 77),
         (char *)this + 456);
  if ( v9 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1CD,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v9,
      v34);
  v41 = 0;
  v10 = (*(__int64 (__fastcall **)(_QWORD, int *))(**((_QWORD **)this + 77) + 120LL))(*((_QWORD *)this + 77), &v41);
  if ( v10 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1D3,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v10,
      v34);
  if ( v41 != 6 )
    *((_DWORD *)this + 115) = v41;
  v37 = 0LL;
  v11 = (__int64 *)*((_QWORD *)this + 77);
  v12 = *v11;
  v37 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v12 + 528))(v11, &v37);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1DA,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v13,
      v34);
  v42 = 0;
  v14 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v37 + 216LL))(v37, &v42);
  if ( v14 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1DD,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v14,
      v34);
  v15 = 1;
  if ( v42 )
    *(_WORD *)((char *)this + 469) = 1;
  v36 = 0LL;
  v16 = (__int64 *)*((_QWORD *)this + 77);
  v17 = *v16;
  v36 = 0LL;
  v18 = (*(__int64 (__fastcall **)(__int64 *, __int64 *))(v17 + 112))(v16, &v36);
  if ( v18 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E5,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v18,
      v34);
  v34 = 0;
  v19 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v36 + 48LL))(v36, &v34);
  if ( v19 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E8,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v19,
      v34);
  if ( v34 )
  {
    *((_DWORD *)this + 116) = v34;
    *((_BYTE *)this + 468) = 1;
  }
  v20 = *((_QWORD *)this + 77);
  v21 = *(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v20 + 360LL);
  WindowsDeleteString(*((HSTRING *)this + 68));
  *((_QWORD *)this + 68) = 0LL;
  v22 = v21(v20, (char *)this + 544);
  if ( v22 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1EF,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v22,
      v34);
  v23 = (unsigned int *)((char *)this + 376);
  v24 = *((_DWORD *)this + 94);
  v25 = v24 == 0;
  LODWORD(v40) = v24;
  if ( *((_DWORD *)this + 115) == 6 )
    v26 = v24 | 0x10;
  else
    v26 = v24 & 0xFFFFFFEF;
  *v23 = v26;
  ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
    (char *)this + 368,
    &v40,
    (char *)this + 376);
  if ( !*((_QWORD *)this + 46) || (LOBYTE(v27) = 1, *v23) )
    LOBYTE(v27) = 0;
  if ( v25 != (_BYTE)v27 )
    std::_Func_class<void,bool>::operator()((char *)this + 392, v27);
  v35 = 0;
  v28 = (*(__int64 (__fastcall **)(struct Windows::Internal::ApplicationModel::WindowManagement::IWindow *, int *))(*(_QWORD *)a2 + 136LL))(
          a2,
          &v35);
  if ( v28 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1F4,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapper.cpp",
      (const char *)(unsigned int)v28,
      v34);
  v29 = (char *)this + 368;
  if ( !*(_QWORD *)v29 || (v30 = 1, *((_DWORD *)v29 + 2)) )
    v30 = 0;
  v31 = v29 + 8;
  if ( v35 == 1 )
  {
    UwpWindowReadyState::WaitFlags::Clear(v31, v29, 1LL);
    if ( WindowReadyState::IsReadyForPresentation((WindowReadyState *)v29) )
      UwpWindowReadyState::_WaitForUnfreezeIfNecessary(v33);
  }
  else
  {
    LODWORD(v40) = *v31;
    *v31 = v40 | 1;
    ViewManagerInteropTraceLogging::WindowReadiness_FlagChange<HWND__ * const &,enum UwpWindowReadinessWaitFlags const &,enum UwpWindowReadinessWaitFlags &>(
      v29,
      &v40,
      v29 + 8);
  }
  if ( !*(_QWORD *)v29 || *((_DWORD *)v29 + 2) )
    v15 = 0;
  if ( v30 != v15 )
  {
    LOBYTE(v40) = v15;
    v32 = *((_QWORD *)v29 + 10);
    if ( !v32 )
    {
      std::_Xbad_function_call();
      __debugbreak();
      JUMPOUT(0x18006C86BLL);
    }
    (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v32 + 16LL))(v32, &v40);
  }
  if ( v36 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 16LL))(v36);
  if ( v37 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 16LL))(v37);
  if ( v38 )
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v38)[2])(v38);
}
