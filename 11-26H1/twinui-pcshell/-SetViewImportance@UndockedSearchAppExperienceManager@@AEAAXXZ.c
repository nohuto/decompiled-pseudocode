/*
 * XREFs of ?SetViewImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180206978
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EA80 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::SetViewImportance(UndockedSearchAppExperienceManager *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64 *); // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    v7 = 0;
    RmActivityImportanceInitialize(&v7);
    HIBYTE(v7) = -16;
    LOWORD(v7) = v7 | 0x101;
    v8 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v1,
           &v8);
    v3 = retaddr;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 64LL))(v8, v7);
      v3 = retaddr;
      if ( v2 >= 0 )
        goto LABEL_7;
      v4 = 4540LL;
    }
    else
    {
      v4 = 4538LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
LABEL_7:
    v5 = v8;
    if ( v8 )
    {
      v8 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
