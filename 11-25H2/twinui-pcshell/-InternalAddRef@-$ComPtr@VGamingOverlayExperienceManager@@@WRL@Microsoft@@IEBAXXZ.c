/*
 * XREFs of ?InternalAddRef@?$ComPtr@VGamingOverlayExperienceManager@@@WRL@Microsoft@@IEBAXXZ @ 0x180241DBC
 * Callers:
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18021F69C (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 *     ??$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGamingOverlayExperienceManager@@@Z @ 0x180243A78 (--$MakeAndInitialize@VGamingOverlayExperienceManager@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVGa.c)
 *     ?OnGameModeEnableChange@GamingOverlayExperienceManager@@UEAAJ_KE@Z @ 0x18034AF70 (-OnGameModeEnableChange@GamingOverlayExperienceManager@@UEAAJ_KE@Z.c)
 *     ?StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1803500A0 (-StaticNotifyBcastDvrOfGameModeChange@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 *     ?StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x180350220 (-StaticPerfDataCollectionThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 *     ?StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1803502F0 (-StaticWndProc@GamingOverlayExperienceManager@@CA_JPEAUHWND__@@I_K_J@Z.c)
 *     ?StaticXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z @ 0x1803504B0 (-StaticXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V?$AsyncBaseWithProgressFTM@U?$IAsyncOperationCompletedHandler@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@UINilDelegate@Internal@3@$00U?$AsyncOptions@$0?0$0A@$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@U?$IAsyncOperation@PEAU?$IVectorView@PEAVGetCurrentActivityForViewOperationResults@Activities@Data@Internal@Windows@@@Collections@Foundation@Windows@@@Foundation@6@UIAsyncOperationLocal@56@U?$CloakedIid@UIAsyncDeferral@Internal@Windows@@@23@U?$CloakedIid@UIComPoolTask@Internal@Windows@@@23@U?$CloakedIid@UIAsyncFireCompletion@Internal@Windows@@@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180342E80 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@V-$AsyncBaseWithPro.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<GamingOverlayExperienceManager>::InternalAddRef(_QWORD *a1)
{
  __int64 result; // rax

  if ( *a1 )
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::AsyncBaseWithProgressFTM<Windows::Foundation::IAsyncOperationCompletedHandler<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::INilDelegate,1,Microsoft::WRL::AsyncOptions<-1,0,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Foundation::IAsyncOperation<Windows::Foundation::Collections::IVectorView<Windows::Internal::Data::Activities::GetCurrentActivityForViewOperationResults *> *>,Windows::Internal::IAsyncOperationLocal,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncDeferral>,Microsoft::WRL::CloakedIid<Windows::Internal::IComPoolTask>,Microsoft::WRL::CloakedIid<Windows::Internal::IAsyncFireCompletion>>::AddRef();
  return result;
}
