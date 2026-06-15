/*
 * XREFs of ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x18003C2FC
 * Callers:
 *     ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x18003C140 (-CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEnc.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UISpatialAudioEncoderProperties2@@UISpatialAudioEncoderProperties@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@QEAA@XZ @ 0x18003C360 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ChainInterfaces@UISpatialAudioEncod.c)
 */

SpatialAudioEncoderProperties *__fastcall SpatialAudioEncoderProperties::SpatialAudioEncoderProperties(
        SpatialAudioEncoderProperties *this)
{
  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ISpatialAudioEncoderProperties2,ISpatialAudioEncoderProperties,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ISpatialAudioEncoderProperties2,ISpatialAudioEncoderProperties,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>();
  *(_QWORD *)this = &SpatialAudioEncoderProperties::`vftable'{for `Microsoft::WRL::ChainInterfaces<ISpatialAudioEncoderProperties2,ISpatialAudioEncoderProperties,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<ISpatialAudioEncoderProperties2,ISpatialAudioEncoderProperties,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 656), 0, 0);
  *((_QWORD *)this + 142) = 0LL;
  *((_DWORD *)this + 286) = 0;
  *((_WORD *)this + 574) = 0;
  return this;
}
