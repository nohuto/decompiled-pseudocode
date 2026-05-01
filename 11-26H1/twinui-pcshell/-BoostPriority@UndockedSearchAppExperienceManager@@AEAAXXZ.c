/*
 * XREFs of ?BoostPriority@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18018D1A0
 * Callers:
 *     ?ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@Experience@Shell@Internal@Windows@@AEBUhstring@winrt@@W4SearchAppActivationMode@4UI@WindowsUdk@8@PEBG@Z @ 0x18023B458 (-ActivateAppAsync@UndockedSearchAppExperienceManager@@AEAAX_NW4ShellExperienceViewFocusOptions@E.c)
 *     ?OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18023D23C (-OnViewCreated@UndockedSearchAppExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shel.c)
 * Callees:
 *     ??$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18001EA80 (--$As@UIViewResourcePolicies@ViewManagerInterop@Shell@Internal@Windows@@@-$ComPtr@UIViewWrapper@.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienceManagerTelemetry@@SAXAEBJAEB_NAEA_N@Z @ 0x18018D2BC (--$UndockedSearchAppExperienceManager_OnPriorityBoostProcessed@AEBJAEB_NAEA_N@SearchAppExperienc.c)
 *     ?StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18018D34C (-StartUnboostPriorityTimer@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x18018D3B4 (-BoostDiskIoImportance@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     _lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_ @ 0x1803AD1F0 (_lambda_cf1713f6f1f0d86a70d989507d89f6a1_--_lambda_cf1713f6f1f0d86a70d989507d89f6a1_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall UndockedSearchAppExperienceManager::BoostPriority(_BYTE *pv)
{
  __m128i v2; // xmm6
  int v3; // eax
  wil::details::in1diag3 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __m128i v7; // [rsp+20h] [rbp-30h] BYREF
  char v8; // [rsp+30h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+8h]
  __int64 v10; // [rsp+60h] [rbp+10h] BYREF
  int v11; // [rsp+68h] [rbp+18h] BYREF

  v11 = 0;
  LOBYTE(v10) = pv[784];
  v2 = *(__m128i *)lambda_cf1713f6f1f0d86a70d989507d89f6a1_::_lambda_cf1713f6f1f0d86a70d989507d89f6a1_(
                     &v7,
                     &v10,
                     &v11,
                     pv);
  v7 = v2;
  if ( pv[784] || !*((_QWORD *)pv + 7) )
    goto LABEL_7;
  pv[784] = 1;
  UndockedSearchAppExperienceManager::BoostDiskIoImportance((UndockedSearchAppExperienceManager *)pv);
  v10 = 0LL;
  v3 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<Windows::Internal::Shell::ViewManagerInterop::IViewResourcePolicies>(
         (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))pv + 7,
         &v10);
  v4 = retaddr;
  if ( v3 < 0 )
  {
    v6 = 4408LL;
  }
  else
  {
    v3 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
    v4 = retaddr;
    if ( v3 >= 0 )
      goto LABEL_5;
    v6 = 4411LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v4,
    (void *)v6,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
    (const char *)(unsigned int)v3);
LABEL_5:
  UndockedSearchAppExperienceManager::StartUnboostPriorityTimer(pv);
  v5 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
LABEL_7:
  v8 = 0;
  SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_OnPriorityBoostProcessed<long const &,bool const &,bool &>(
    (char *)v7.m128i_i64 + 4,
    &v7,
    _mm_srli_si128(v2, 8).m128i_u64[0] + 784);
}
