/*
 * XREFs of ??1?$ComPtr@VCVolumeStrip@@@WRL@Microsoft@@QEAA@XZ @ 0x180062004
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const___&__::_1_::dtor$1 @ 0x180165F21 (_Microsoft--WRL--Details--MakeAndInitialize_CVolumeStrip_IVolumeStrip_unsigned_short_const___-__.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAudioGraphCallback@@UIVolumeStrip@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800627F0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAu_ea_1800627F0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<CVolumeStrip>::~ComPtr<CVolumeStrip>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAudioGraphCallback,IVolumeStrip>::Release(result);
  }
  return result;
}
