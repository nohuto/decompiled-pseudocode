/*
 * XREFs of ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x18039B1B0
 * Callers:
 *     ??$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x18039A0A4 (--$MakeAndInitialize@VSearchAppExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Detai.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILightDismissNotification@@UIInputHostLayoutChanges@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802B0E70 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UILig_ea_1802B0E70.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z @ 0x18039A4E0 (--0SearchAppExperienceManagerNotification@@QEAA@PEAVSearchAppExperienceManager@@@Z.c)
 *     ?RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExperienceManagerNotification@Cortana@TwinUI@@@Z @ 0x18039B280 (-RuntimeClassInitialize@SearchAppExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVISearchAppExp.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SearchAppExperienceManager::RuntimeClassInitialize(
        SearchAppExperienceManager *this,
        struct IServiceProvider *a2)
{
  void *v4; // rax
  SearchAppExperienceManagerNotification *v5; // rbx
  int v6; // eax
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v10; // [rsp+30h] [rbp+8h] BYREF
  SearchAppExperienceManagerNotification *v11; // [rsp+40h] [rbp+18h]

  v11 = 0LL;
  v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v4;
  v5 = 0LL;
  if ( v4 )
  {
    v5 = SearchAppExperienceManagerNotification::SearchAppExperienceManagerNotification(
           (SearchAppExperienceManagerNotification *)v4,
           this);
    v11 = v5;
    v10 = 0LL;
  }
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v10);
  v6 = SearchAppExperienceManager::RuntimeClassInitialize(
         this,
         a2,
         (struct TwinUI::Cortana::ISearchAppExperienceManagerNotification *)(((unsigned __int64)v5 + 8) & -(__int64)(v5 != 0LL)));
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v5);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x146,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    if ( v5 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,IInputHostLayoutChanges>::Release((__int64)v5);
    return v7;
  }
}
