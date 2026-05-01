/*
 * XREFs of ?UnsubscribeFromServicesInternal@CortanaStoreAppExperienceManager@@AEAAJXZ @ 0x1800672E4
 * Callers:
 *     ?UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z @ 0x1800672A0 (-UnsubscribeFromServices@CortanaStoreAppExperienceManager@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180015140 (--$As@UIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@Vie.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaStoreAppExperienceManager::UnsubscribeFromServicesInternal(
        CortanaStoreAppExperienceManager *this)
{
  __int64 *v2; // rdi
  __int64 v3; // rcx
  int v4; // eax
  int v5; // eax
  __int64 v6; // rcx
  _DWORD *v7; // rdi
  _DWORD *v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v14; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)((char *)this + 200);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
  {
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *((_QWORD *)this + 21));
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v2);
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 29) && *((_QWORD *)this + 22) )
  {
    v14 = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 29,
           &v14);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BD,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v4);
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v14 + 88LL))(v14, *((_QWORD *)this + 22));
    if ( v5 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x1BE,
        (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
        (const char *)(unsigned int)v5);
    *((_QWORD *)this + 22) = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v14);
  }
  if ( *((_QWORD *)this + 34) )
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 34);
  v6 = *((_QWORD *)this + 36);
  v7 = (_DWORD *)((char *)this + 184);
  if ( v6 )
  {
    if ( *v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 48LL))(v6);
    v8 = (_DWORD *)((char *)this + 188);
    if ( *((_DWORD *)this + 47) )
      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 36) + 48LL))(*((_QWORD *)this + 36));
  }
  else
  {
    v8 = (_DWORD *)((char *)this + 188);
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 36);
  *v7 = 0;
  *v8 = 0;
  v9 = (__int64 *)((char *)this + 296);
  v10 = *((_QWORD *)this + 37);
  v11 = (_DWORD *)((char *)this + 192);
  if ( v10 && *v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL))(v10);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v9);
  *v11 = 0;
  return 0LL;
}
