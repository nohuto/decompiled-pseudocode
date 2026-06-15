/*
 * XREFs of ?CreateForEncoder@SpatialAudioEncoderPropertiesFactory@@UEAAJAEBU_GUID@@HPEAPEAUISpatialAudioEncoderProperties@@@Z @ 0x18003C140
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??0SpatialAudioEncoderProperties@@QEAA@XZ @ 0x18003C2FC (--0SpatialAudioEncoderProperties@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C3C4 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SpatialAudioEncoderPropertiesFactory::CreateForEncoder(
        SpatialAudioEncoderPropertiesFactory *this,
        const struct _GUID *a2,
        __int64 a3,
        struct ISpatialAudioEncoderProperties **a4)
{
  int v5; // edi
  SpatialAudioEncoderProperties *v7; // rax
  CHAR *v8; // rbx
  int v9; // edi
  __int64 v10; // rcx
  unsigned __int8 *v12; // rdx
  int v13; // [rsp+40h] [rbp-20h] BYREF
  CHAR *v14; // [rsp+48h] [rbp-18h] BYREF
  const CHAR *v15[2]; // [rsp+50h] [rbp-10h] BYREF
  SpatialAudioEncoderProperties *v16; // [rsp+98h] [rbp+38h] BYREF

  v5 = a3;
  v14 = 0LL;
  if ( !a4 )
  {
    v9 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_10;
    LODWORD(v16) = -2147024809;
    v13 = 159;
    v12 = (unsigned __int8 *)&unk_1801A9A86;
    goto LABEL_15;
  }
  *a4 = 0LL;
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)&v14);
  v14 = 0LL;
  v7 = (SpatialAudioEncoderProperties *)operator new[](0x480uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v7;
  if ( !v7 )
  {
    v9 = -2147024882;
LABEL_18:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v16);
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_10;
    LODWORD(v16) = v9;
    v13 = 164;
    v12 = (unsigned __int8 *)&unk_1801A9A54;
LABEL_15:
    v15[0] = "SpatialAudioEncoderPropertiesFactory::CreateForEncoder";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)this,
      v12,
      a3,
      (__int64)a4,
      v15,
      (__int64)&v13,
      (__int64)&v16);
    goto LABEL_10;
  }
  v8 = (CHAR *)SpatialAudioEncoderProperties::SpatialAudioEncoderProperties(v7);
  v15[0] = v8;
  v16 = 0LL;
  v9 = SpatialAudioEncoderProperties::RuntimeClassInitialize((SpatialAudioEncoderProperties *)v8, a2, v5);
  if ( v9 < 0 )
  {
    Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease((__int64 *)v15);
    goto LABEL_18;
  }
  if ( v8 )
    (*(void (__fastcall **)(CHAR *))(*(_QWORD *)v8 + 8LL))(v8);
  v14 = v8;
  if ( v8 )
  {
    (*(void (__fastcall **)(CHAR *))(*(_QWORD *)v8 + 16LL))(v8);
    v8 = v14;
  }
  v9 = (**(__int64 (__fastcall ***)(CHAR *, GUID *, struct ISpatialAudioEncoderProperties **))v8)(
         v8,
         &GUID_b090ccfb_2d8c_416b_bfef_598bca3c91a9,
         a4);
  if ( v9 < 0 )
    *a4 = 0LL;
LABEL_10:
  v10 = (__int64)v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  return (unsigned int)v9;
}
