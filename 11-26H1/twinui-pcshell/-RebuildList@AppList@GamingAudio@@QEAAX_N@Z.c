/*
 * XREFs of ?RebuildList@AppList@GamingAudio@@QEAAX_N@Z @ 0x18035FD40
 * Callers:
 *     ?GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU?$IVectorView@H@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAUHSTRING__@@@345@0000@Z @ 0x1803474F0 (-GetAudioActiveSessionDetails@GamingOverlayExperienceManager@@UEAAJPEAPEAU-$IVectorView@H@Collec.c)
 *     ?OnSessionCreated@AppList@GamingAudio@@UEAAJPEAUIAudioSessionControl@@@Z @ 0x18034EF00 (-OnSessionCreated@AppList@GamingAudio@@UEAAJPEAUIAudioSessionControl@@@Z.c)
 *     ?add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@H@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180358BC0 (-add_AudioActiveSessionChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEA.c)
 *     ?RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ @ 0x18035FDA4 (-RelaySessionExpired@SessionInfoItem@GamingAudio@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800236F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f781994c3342d231902f4bb64d9d854___ @ 0x18035DDBC (Windows--Internal--ComTaskPool--QueueTask__lambda_8f781994c3342d231902f4bb64d9d854___.c)
 */

void __fastcall GamingAudio::AppList::RebuildList(GamingAudio::AppList *this, char a2)
{
  __int64 v4; // rcx
  GamingAudio::AppList *v5; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]
  GamingAudio::AppList *v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v7);
  v5 = this;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v5);
  v6 = a2;
  Windows::Internal::ComTaskPool::QueueTask__lambda_8f781994c3342d231902f4bb64d9d854___(v4, (__int64)&v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v5);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v7);
}
