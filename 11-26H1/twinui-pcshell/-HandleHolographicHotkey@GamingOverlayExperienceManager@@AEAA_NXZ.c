/*
 * XREFs of ?HandleHolographicHotkey@GamingOverlayExperienceManager@@AEAA_NXZ @ 0x18034B088
 * Callers:
 *     ?OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z @ 0x18034EC10 (-OnMessage@GamingOverlayExperienceManager@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048294 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x18018C714 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z @ 0x18034A8A8 (-GetUserDisplayContext@Holographic@Shell@Internal@Windows@@YAJPEAW4UserDisplayContext@1234@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall GamingOverlayExperienceManager::HandleHolographicHotkey(
        GamingOverlayExperienceManager *this,
        enum Windows::Internal::Shell::Holographic::UserDisplayContext *a2)
{
  int UserDisplayContext; // eax
  IUnknown **v5; // rax
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // [rsp+20h] [rbp-20h] BYREF
  _BYTE v9[4]; // [rsp+28h] [rbp-18h] BYREF
  int v10; // [rsp+2Ch] [rbp-14h] BYREF
  void *ppvOut; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+8h]

  v9[0] = 0;
  v10 = 0;
  UserDisplayContext = Windows::Internal::Shell::Holographic::GetUserDisplayContext(
                         (Windows::Internal::Shell::Holographic *)&v10,
                         a2);
  if ( UserDisplayContext >= 0 )
  {
    if ( v10 == 1 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      v5 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this + 8, &v8);
      v6 = (unsigned int)IUnknown_QueryService(
                           *v5,
                           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
                           &GUID_40e2a5e3_4191_4768_937b_90416fbe69bd,
                           &ppvOut) >> 31;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v8);
      if ( (unsigned __int8)v6 != 1 )
      {
        v7 = (*(__int64 (__fastcall **)(void *, __int64, _BYTE *))(*(_QWORD *)ppvOut + 48LL))(ppvOut, 2LL, v9);
        if ( v7 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x1278,
            (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
            (const char *)(unsigned int)v7);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    }
    return v9[0] != 0;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1269,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)UserDisplayContext);
    return 0;
  }
}
