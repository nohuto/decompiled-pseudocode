/*
 * XREFs of ??0SessionInfoItem@GamingAudio@@QEAA@XZ @ 0x18035E250
 * Callers:
 *     ?GetSessionInfo@AppList@GamingAudio@@AEAAXV?$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z @ 0x18035F0E0 (-GetSessionInfo@AppList@GamingAudio@@AEAAXV-$ComPtr@UIAudioSessionControl2@@@WRL@Microsoft@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioSessionEvents@@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18035E1F0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIAudioSessionEvents@@VFtmBase@23@@WRL.c)
 */

GamingAudio::SessionInfoItem *__fastcall GamingAudio::SessionInfoItem::SessionInfoItem(
        GamingAudio::SessionInfoItem *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>((__int64)this);
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &GamingAudio::SessionInfoItem::`vftable'{for `IAudioSessionEvents'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAudioSessionEvents,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_DWORD *)this + 20) = 0;
  *((_DWORD *)this + 21) = 2;
  memset_0((char *)this + 88, 0, 0x82uLL);
  memset_0((char *)this + 218, 0, 0x20AuLL);
  *((_QWORD *)this + 93) = 0LL;
  *((_QWORD *)this + 94) = 0LL;
  *((_QWORD *)this + 95) = 0LL;
  _InterlockedIncrement(&GamingAudio::SessionInfoItem::s_sessionInstanceCount);
  return this;
}
