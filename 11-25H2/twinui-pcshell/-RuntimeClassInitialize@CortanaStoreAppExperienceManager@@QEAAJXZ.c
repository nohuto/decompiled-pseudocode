/*
 * XREFs of ?RuntimeClassInitialize@CortanaStoreAppExperienceManager@@QEAAJXZ @ 0x180080124
 * Callers:
 *     ??$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCortanaStoreAppExperienceManager@@@Z @ 0x180080030 (--$MakeAndInitialize@VCortanaStoreAppExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAV.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z @ 0x1800275B4 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@@012@@Z @ 0x18007F0BC (--$MakeAndInitialize@VCreationThreadDispatcher@@V1@$$V@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-.c)
 */

__int64 __fastcall CortanaStoreAppExperienceManager::RuntimeClassInitialize(CortanaStoreAppExperienceManager *this)
{
  int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CortanaStoreAppExperienceManager *)((char *)this + 48),
         &GUID_749f2714_937d_445e_9d22_666f49e7ff32);
  if ( v2 < 0 )
  {
    v3 = 216LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanastoreappexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  v2 = Microsoft::WRL::Details::MakeAndInitialize<CreationThreadDispatcher,CreationThreadDispatcher,>((__int64 *)this + 35);
  if ( v2 < 0 )
  {
    v3 = 217LL;
    goto LABEL_3;
  }
  return 0LL;
}
