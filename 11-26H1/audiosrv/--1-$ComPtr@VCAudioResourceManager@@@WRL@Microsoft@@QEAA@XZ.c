/*
 * XREFs of ??1?$ComPtr@VCAudioResourceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C4244
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__::_1_::dtor$1 @ 0x180167AA1 (_Microsoft--WRL--Details--MakeAndInitialize_CAudioResourceManager_IAudioResourceManager__--_1_--.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceManager@@UIAudioResourceControl@@UIAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800CAA60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIAudioResourceMan.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CAudioResourceManager>::~ComPtr<CAudioResourceManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IAudioResourceManager,IAudioResourceControl,IAudioRenderEndpointChangeDelegator>::Release(result);
  }
  return result;
}
