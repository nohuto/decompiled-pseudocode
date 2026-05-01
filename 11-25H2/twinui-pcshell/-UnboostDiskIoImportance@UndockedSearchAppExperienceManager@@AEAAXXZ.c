/*
 * XREFs of ?UnboostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180014EC8
 * Callers:
 *     ?UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800149D0 (-UnboostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180014E48 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::UnboostDiskIoImportance(UndockedSearchAppExperienceManager *this)
{
  __int64 (__fastcall ****v1)(_QWORD, GUID *, __int64); // rbx
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned int v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF

  v1 = (__int64 (__fastcall ****)(_QWORD, GUID *, __int64))((char *)this + 56);
  if ( *((_QWORD *)this + 7) )
  {
    v8 = 0;
    RmActivityImportanceInitialize(&v8);
    LOWORD(v8) = v8 & 0xFBFF;
    v9 = 0LL;
    v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
           v1,
           (__int64)&v9);
    v3 = retaddr;
    if ( v2 >= 0 )
    {
      v2 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v9 + 72LL))(v9, v8, 128LL);
      v3 = retaddr;
      if ( v2 >= 0 )
        goto LABEL_7;
      v4 = 4193LL;
    }
    else
    {
      v4 = 4191LL;
    }
    wil::details::in1diag3::_Log_Hr(
      v3,
      (void *)v4,
      (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      (const char *)(unsigned int)v2,
      v6);
LABEL_7:
    v5 = v9;
    if ( v9 )
    {
      v9 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
}
