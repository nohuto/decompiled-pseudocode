/*
 * XREFs of _lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator() @ 0x18042940C
 * Callers:
 *     Windows::Internal::ComTaskPool::CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___::Run @ 0x18042B620 (Windows--Internal--ComTaskPool--CResultTaskWrapper__lambda_8eaa9d9bc48e0c760b532341ceadabea___--.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180024FF4 (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@V?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@V12@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Details@WRL@Microsoft@@YAJPEAPEAV?$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@details@@AEBW4AppViewExecutionState@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x180426DC4 (--$MakeAndInitialize@V-$Nullable@W4AppViewExecutionState@WindowManagement@ApplicationModel@Inter.c)
 *     ??$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManagerInteropTelemetry@@SAXAEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180426E58 (--$NavigateView@AEAIAEAW4NavigationLevel@ViewManagerInterop@Shell@Internal@Windows@@@ViewManager.c)
 *     ??$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@?$com_ptr_t@UIAppViewStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1804280A0 (--$query@UIAppViewBehaviorStatics@WindowManagement@ApplicationModel@Internal@Windows@@@-$com_ptr.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_8eaa9d9bc48e0c760b532341ceadabea_::operator()(int **a1)
{
  unsigned int v2; // edi
  __int64 (__fastcall ****v3)(_QWORD, GUID *, _QWORD *); // rcx
  int *v4; // rcx
  int v5; // r15d
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, _QWORD, __int64, __int64 *); // rbx
  int v8; // eax
  __int64 v9; // rbx
  int v10; // esi
  int v11; // eax
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rsi
  __int64 (__fastcall *v16)(__int64, _QWORD, _QWORD, __int64 *); // rbx
  int v17; // eax
  __int64 *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rbx
  __int64 (__fastcall *v22)(__int64, __int64 *); // rsi
  int v23; // eax
  unsigned int v24; // eax
  int v25; // eax
  __int64 v26; // rsi
  __int64 (__fastcall *v27)(__int64, _QWORD, __int64 *); // rbx
  int v28; // eax
  int v29; // eax
  const char *v30; // r9
  __int64 result; // rax
  int v32; // [rsp+20h] [rbp-48h]
  __int64 v33; // [rsp+30h] [rbp-38h] BYREF
  __int64 v34[6]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  unsigned int v36; // [rsp+70h] [rbp+8h] BYREF
  __int64 v37; // [rsp+78h] [rbp+10h] BYREF
  __int64 v38; // [rsp+80h] [rbp+18h] BYREF
  __int64 v39; // [rsp+88h] [rbp+20h] BYREF

  v2 = **a1;
  v3 = (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))(a1[1] + 12);
  try
  {
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IAppViewStatics,wil::err_exception_policy>::query<Windows::Internal::ApplicationModel::WindowManagement::IAppViewBehaviorStatics>(
      v3,
      &v33);
    v4 = a1[2];
    v5 = *v4;
    v37 = 0LL;
    if ( *v4 )
    {
      switch ( *v4 )
      {
        case 1:
        case 2:
          v15 = *((_QWORD *)a1[1] + 6);
          v16 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v15 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v37);
          v17 = v16(v15, v2, 0LL, &v37);
          if ( v17 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xAE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v17,
              v32);
          break;
        case 3:
          v36 = 1;
          v9 = 0LL;
          v39 = 0LL;
          v38 = 0LL;
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
          v10 = Microsoft::WRL::Details::MakeAndInitialize<details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,details::Nullable<enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState>,enum Windows::Internal::ApplicationModel::WindowManagement::AppViewExecutionState const &>(
                  &v38,
                  &v36);
          if ( v10 >= 0 )
          {
            v9 = v38;
            v38 = 0LL;
            v39 = v9;
            v10 = 0;
          }
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
          if ( v10 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB5,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v10,
              v32);
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v33 + 56LL))(v33, v2, v9);
          if ( v11 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB6,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v11,
              v32);
          v12 = *((_QWORD *)a1[1] + 6);
          v13 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v12 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v37);
          v14 = v13(v12, v2, 0LL, &v37);
          if ( v14 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xB9,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v14,
              v32);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
          break;
        case 4:
          v6 = *((_QWORD *)a1[1] + 6);
          v7 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v6 + 48LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v37);
          v8 = v7(v6, v2, 1LL, &v37);
          if ( v8 < 0 )
            wil::details::in1diag3::Throw_Hr(
              retaddr,
              (void *)0xBE,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v8,
              v32);
          break;
        case 5:
          break;
        default:
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xCB,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)0x8000FFFFLL,
            v32);
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD))(**((_QWORD **)a1[1] + 35) + 192LL))(
        *((_QWORD *)a1[1] + 35),
        v34,
        v2);
      v36 = 0;
      if ( v34[0] )
      {
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v34[0] + 256LL))(v34[0]);
        v36 = v24;
      }
      else
      {
        v39 = 0LL;
        v18 = (__int64 *)*((_QWORD *)a1[1] + 6);
        v19 = *v18;
        v39 = 0LL;
        v20 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v19 + 80))(v18, v2, &v39);
        if ( v20 >= 0 )
        {
          v38 = 0LL;
          v21 = v39;
          v22 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v39 + 64LL);
          wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v38);
          v23 = v22(v21, &v38);
          if ( v23 >= 0 )
          {
            if ( v38 )
            {
              v25 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v38 + 80LL))(v38, &v36);
              if ( v25 < 0 )
                wil::details::in1diag3::Throw_Hr(
                  retaddr,
                  (void *)0x9A,
                  (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                  (const char *)(unsigned int)v25,
                  v32);
            }
          }
          else
          {
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x97,
              (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
              (const char *)(unsigned int)v23);
          }
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v38);
        }
        else
        {
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x94,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v20);
        }
        wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v39);
        v24 = v36;
      }
      if ( v24 )
      {
        v26 = *((_QWORD *)a1[1] + 23);
        v27 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v26 + 56LL);
        wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset(&v37);
        v28 = v27(v26, v36, &v37);
        if ( v28 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xA6,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
            (const char *)(unsigned int)v28,
            v32);
      }
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(v34);
    }
    if ( v5 != 3 )
    {
      v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v33 + 56LL))(v33, v2, 0LL);
      if ( v29 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xD3,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
          (const char *)(unsigned int)v29,
          v32);
    }
    ViewManagerInteropTelemetry::NavigateView<unsigned int &,enum Windows::Internal::Shell::ViewManagerInterop::NavigationLevel &>(
      *a1,
      a1[2]);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v37);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v33);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xD8,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windowmanagerbridge.cpp",
                           v30);
  }
  return result;
}
