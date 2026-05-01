/*
 * XREFs of ?RuntimeClassInitialize@TabletModePositioner@@QEAAJXZ @ 0x18007E5FC
 * Callers:
 *     ??$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18007E540 (--$MakeAndInitialize@VTabletModePositioner@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnk.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180025070 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18007E93C (-AppLayoutCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1802A8E24 (-ScreenManager_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall TabletModePositioner::RuntimeClassInitialize(IUnknown *punkSite)
{
  IUnknown *v1; // rsi
  const struct _GUID *v3; // rcx
  int Instance; // ebx
  __int64 v5; // rdx
  const struct _GUID *v6; // rcx
  int v8[4]; // [rsp+20h] [rbp-78h] BYREF
  __int128 v9; // [rsp+30h] [rbp-68h]
  GUID v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+50h] [rbp-48h]
  GUID v12; // [rsp+60h] [rbp-38h]
  struct IUnknownVtbl *lpVtbl; // [rsp+70h] [rbp-28h]
  __int64 v14; // [rsp+78h] [rbp-20h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v1 = punkSite + 32;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[32]);
  Instance = AppLayoutCache_CreateInstance(v3, (void **)&v1->lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 326LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)Instance);
    return (unsigned int)Instance;
  }
  Instance = IUnknown_SetSite((IUnknown *)v1->lpVtbl, punkSite);
  if ( Instance < 0 )
  {
    v5 = 327LL;
    goto LABEL_9;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punkSite[38]);
  Instance = ScreenManager_CreateInstance(v6, (void **)&punkSite[38].lpVtbl);
  if ( Instance < 0 )
  {
    v5 = 328LL;
    goto LABEL_9;
  }
  lpVtbl = v1->lpVtbl;
  v10 = GUID_3f48d9d3_200d_4446_bb9d_dae2a43781a2;
  v14 = 0LL;
  *(GUID *)v8 = GUID_975d55f5_ce62_42c0_868a_eda817f3871e;
  v12 = GUID_e511e73c_cad4_40aa_bf1a_b9938ac75ff0;
  v9 = 0LL;
  v11 = 0LL;
  Instance = CImmersiveShellComponent::RegisterServiceInformation(
               (CImmersiveShellComponent *)&punkSite[3],
               (__int64)v8,
               3uLL);
  if ( Instance < 0 )
  {
    v5 = 336LL;
    goto LABEL_9;
  }
  return (unsigned int)Instance;
}
