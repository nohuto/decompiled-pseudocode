/*
 * XREFs of ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x18007D748
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6cc4c21b59e262556adf8f7a290f4f55__&_::Run @ 0x1804F8930 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_6cc4c21b59e262556adf8f7a290f4f55__-_--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x18007D804 (-ChromeManager_CreateInstance@@YAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18007D8E0 (-PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ @ 0x18007D970 (-InitializeAppLayoutForStartup@TabletModePositioner@@AEAAJXZ.c)
 */

__int64 __fastcall TabletModePositioner::Initialize(IUnknown *punkSite)
{
  IUnknown *v2; // rsi
  const struct _GUID *v3; // rdx
  int Instance; // ebx
  const struct _GUID *v5; // rcx
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( LODWORD(punkSite[29].lpVtbl) )
    return 0LL;
  v2 = punkSite + 39;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[39]);
  Instance = ChromeManager_CreateInstance(punkSite, v3, (void **)&v2->lpVtbl);
  if ( Instance < 0 )
  {
    v7 = 1627LL;
  }
  else
  {
    IUnknown_SetSite((IUnknown *)v2->lpVtbl, punkSite);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[40]);
    Instance = PositionAdjustmentHistory_CreateInstance(v5, (void **)&punkSite[40].lpVtbl);
    if ( Instance < 0 )
    {
      v7 = 1632LL;
    }
    else
    {
      Instance = TabletModePositioner::InitializeAppLayoutForStartup((TabletModePositioner *)punkSite);
      if ( Instance >= 0 )
        return 0LL;
      v7 = 1636LL;
    }
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)Instance);
  return (unsigned int)Instance;
}
