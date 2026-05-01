/*
 * XREFs of ?LockScreenActiveWNFCallback@CCortanaWNFService@Cortana@TwinUI@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1803D8150
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z @ 0x1803D8108 (-GetNotification@CCortanaWNFService@Cortana@TwinUI@@AEAAJPEAPEAVICortanaWNFNotification@23@@Z.c)
 *     CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy @ 0x1803D881C (CortanaHelpers--UpdateCortanaAboveLockValueBasedOnEnterprisePolicy.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TwinUI::Cortana::CCortanaWNFService::LockScreenActiveWNFCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        TwinUI::Cortana::CCortanaWNFService *a4,
        struct TwinUI::Cortana::ICortanaWNFNotification *a5,
        unsigned int a6)
{
  int v7; // ebx
  __int64 v8; // rdx

  if ( a5 && a6 == 4 )
  {
    v7 = *(_DWORD *)a5;
    a5 = 0LL;
    if ( a4 )
    {
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
      if ( (int)TwinUI::Cortana::CCortanaWNFService::GetNotification(a4, (struct IInspectable **)&a5) >= 0 )
      {
        if ( v7 )
          CortanaHelpers::UpdateCortanaAboveLockValueBasedOnEnterprisePolicy();
        LOBYTE(v8) = v7 != 0;
        (*(void (__fastcall **)(struct TwinUI::Cortana::ICortanaWNFNotification *, __int64))(*(_QWORD *)a5 + 64LL))(
          a5,
          v8);
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&a5);
  }
  return 0LL;
}
