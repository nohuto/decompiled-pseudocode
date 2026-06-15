/*
 * XREFs of ??1?$ComPtr@VCProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x18002A028
 * Callers:
 *     _CApplicationManager::RpcGetProcess_::_1_::dtor$202 @ 0x18004C020 (_CApplicationManager--RpcGetProcess_--_1_--dtor$202.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@UIAudioProcessInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800089A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioProcess@@U.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<CProcess>::~ComPtr<CProcess>(volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioProcess,IAudioProcessInternal>::Release(result);
  }
  return result;
}
