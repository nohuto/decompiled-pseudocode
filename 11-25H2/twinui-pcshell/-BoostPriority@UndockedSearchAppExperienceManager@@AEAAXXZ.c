/*
 * XREFs of ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180014364
 * Callers:
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180012520 (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x1800AD728 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 * Callees:
 *     ??$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x180014450 (--$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienc.c)
 *     ?StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1800144E0 (-StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180014548 (-BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180014E48 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180039744 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::BoostPriority(_BYTE *pv)
{
  int v2; // eax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rdx
  int v6[4]; // [rsp+20h] [rbp-28h] BYREF
  char v7; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  LOBYTE(v6[0]) = pv[784];
  v6[1] = 0;
  *(_QWORD *)&v6[2] = pv;
  if ( LOBYTE(v6[0]) || !*((_QWORD *)pv + 7) )
    goto LABEL_7;
  pv[784] = 1;
  UndockedSearchAppExperienceManager::BoostDiskIoImportance((UndockedSearchAppExperienceManager *)pv);
  v9 = 0LL;
  v2 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         pv + 56,
         &v9);
  v3 = retaddr;
  if ( v2 < 0 )
  {
    v5 = 4085LL;
  }
  else
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
    v3 = retaddr;
    if ( v2 >= 0 )
      goto LABEL_5;
    v5 = 4088LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v3,
    (void *)v5,
    (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v2,
    v6[0]);
LABEL_5:
  UndockedSearchAppExperienceManager::StartUnboostPriorityTimer(pv);
  v4 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
LABEL_7:
  v7 = 0;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityBoostProcessed<long const &,bool const &,bool &>(
    &v6[1],
    v6,
    pv + 784);
}
