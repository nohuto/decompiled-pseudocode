/*
 * XREFs of ?OnViewCreated@CInsightsExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@@Z @ 0x18039F9E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18001DFD4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180068AAC (-Provider@SingleViewExperienceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ?SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ @ 0x18039FE68 (-SizeViewOnCreation@CInsightsExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall CInsightsExperienceManager::OnViewCreated(
        CInsightsExperienceManager *this,
        struct CSingleViewShellExperience *a2)
{
  const struct _tlgProvider_t *v3; // rax
  int v4; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = SingleViewExperienceLogging::Provider((__int64)this);
  if ( *(_DWORD *)v3 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v3,
      byte_1807F98BD,
      0LL);
  v4 = CInsightsExperienceManager::SizeViewOnCreation((CInsightsExperienceManager *)((char *)this - 56));
  v5 = v4;
  if ( v4 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xF2,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\insightsexperiencemanager.cpp",
    (const char *)(unsigned int)v4);
  return v5;
}
