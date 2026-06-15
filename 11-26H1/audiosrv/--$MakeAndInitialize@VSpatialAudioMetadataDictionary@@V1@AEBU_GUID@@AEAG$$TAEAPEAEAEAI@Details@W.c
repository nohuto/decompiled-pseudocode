/*
 * XREFs of ??$MakeAndInitialize@VSpatialAudioMetadataDictionary@@V1@AEBU_GUID@@AEAG$$TAEAPEAEAEAI@Details@WRL@Microsoft@@YAJPEAPEAVSpatialAudioMetadataDictionary@@AEBU_GUID@@AEAG$$QEA$$TAEAPEAEAEAI@Z @ 0x180130E9C
 * Callers:
 *     Create_SpatialAudioMetadataDictionaryFromData @ 0x180131B50 (Create_SpatialAudioMetadataDictionaryFromData.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Attach@?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z @ 0x180088274 (-Attach@-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAAXPEAUISaDeviceProxy@@@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0SpatialAudioMetadataDictionary@@QEAA@XZ @ 0x180130F9C (--0SpatialAudioMetadataDictionary@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z @ 0x180131990 (-RuntimeClassInitialize@SpatialAudioMetadataDictionary@@QEAAJAEBU_GUID@@GPEBGPEAEI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<SpatialAudioMetadataDictionary,SpatialAudioMetadataDictionary,_GUID const &,unsigned short &,std::nullptr_t,unsigned char * &,unsigned int &>(
        SpatialAudioMetadataDictionary **a1,
        const struct _GUID *a2,
        unsigned __int16 *a3,
        const unsigned __int16 **a4,
        unsigned __int8 **a5,
        unsigned int *a6)
{
  void *v10; // rax
  int v11; // edi
  SpatialAudioMetadataDictionary *v12; // rax
  const unsigned __int16 *v13; // r9
  SpatialAudioMetadataDictionary *v14; // rbx
  void *v16; // [rsp+30h] [rbp-18h] BYREF
  SpatialAudioMetadataDictionary *v17; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v10 = operator new[](0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v10;
  if ( v10 )
  {
    v12 = SpatialAudioMetadataDictionary::SpatialAudioMetadataDictionary((SpatialAudioMetadataDictionary *)v10);
    v17 = 0LL;
    Microsoft::WRL::ComPtr<ISaDeviceProxy>::Attach((__int64 *)&v17, (__int64)v12);
    v16 = 0LL;
    v13 = *a4;
    v14 = v17;
    v11 = SpatialAudioMetadataDictionary::RuntimeClassInitialize(v17, a2, *a3, v13, *a5, *a6);
    if ( v11 >= 0 )
    {
      if ( v14 )
        (*(void (__fastcall **)(SpatialAudioMetadataDictionary *))(*(_QWORD *)v14 + 8LL))(v14);
      *a1 = v14;
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
      v11 = 0;
    }
    else
    {
      Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v17);
    }
  }
  else
  {
    v11 = -2147024882;
  }
  Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v16);
  return (unsigned int)v11;
}
