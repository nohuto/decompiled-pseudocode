/*
 * XREFs of ??1SpatialAudioMetadataDictionary@@UEAA@XZ @ 0x180131054
 * Callers:
 *     ??_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z @ 0x1801310C0 (--_GSpatialAudioMetadataDictionary@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180037A10 (--3@YAXPEAX@Z.c)
 */

void __fastcall SpatialAudioMetadataDictionary::~SpatialAudioMetadataDictionary(SpatialAudioMetadataDictionary *this)
{
  *(_QWORD *)this = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::ChainInterfaces<ISpatialAudioMetadataDictionary,ISpatialAudioMetadataDictionaryData,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>'};
  *((_QWORD *)this + 1) = &SpatialAudioMetadataDictionary::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  operator delete(*((void **)this + 15));
  *((_QWORD *)this + 15) = 0LL;
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  *((_DWORD *)this + 11) = -1073741823;
  Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>::~ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>((__int64)this + 8);
}
