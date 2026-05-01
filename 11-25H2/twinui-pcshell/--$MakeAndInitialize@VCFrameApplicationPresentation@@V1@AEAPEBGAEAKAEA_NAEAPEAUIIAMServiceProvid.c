/*
 * XREFs of ??$MakeAndInitialize@VCFrameApplicationPresentation@@V1@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Details@WRL@Microsoft@@YAJPEAPEAVCFrameApplicationPresentation@@AEAPEBGAEAKAEA_NAEAPEAUIIAMServiceProvider@@AEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802BE668
 * Callers:
 *     ?CFrameApplicationPresentation_CreateInstance@@YAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x180137320 (-CFrameApplicationPresentation_CreateInstance@@YAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersive.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180034A34 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     ?RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAUIImmersiveApplicationInternal@@@Z @ 0x180085858 (-RuntimeClassInitialize@CFrameApplicationPresentation@@QEAAJPEBGK_NPEAUIIAMServiceProvider@@PEAU.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1802D2234 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x1803088E8 (--0CFrameApplicationPresentation@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CFrameApplicationPresentation,CFrameApplicationPresentation,unsigned short const * &,unsigned long &,bool &,IIAMServiceProvider * &,IImmersiveApplicationInternal * &>(
        CFrameApplicationPresentation **a1,
        const unsigned __int16 **a2,
        unsigned int *a3,
        char *a4,
        struct IIAMServiceProvider **a5,
        struct IImmersiveApplicationInternal **a6)
{
  CFrameApplicationPresentation *v10; // rax
  CFrameApplicationPresentation *v12; // rsi
  int v13; // ebx
  void *v14; // [rsp+30h] [rbp-28h] BYREF
  CFrameApplicationPresentation *v15; // [rsp+60h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = (CFrameApplicationPresentation *)operator new(0x288uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v10;
  if ( !v10 )
    return 2147942414LL;
  v12 = CFrameApplicationPresentation::CFrameApplicationPresentation(v10);
  v15 = v12;
  v14 = 0LL;
  v13 = CFrameApplicationPresentation::RuntimeClassInitialize(v12, *a2, *a3, *a4, *a5, *a6);
  if ( v13 >= 0 )
  {
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
    *a1 = v12;
    v13 = 0;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v15);
  Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v14);
  return (unsigned int)v13;
}
