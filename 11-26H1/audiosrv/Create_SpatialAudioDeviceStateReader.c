/*
 * XREFs of Create_SpatialAudioDeviceStateReader @ 0x18003D198
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003DD00 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ?InternalRelease@?$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D414 (-InternalRelease@-$ComPtr@VSpatialAudioDeviceStateReader@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003D448 (-Initialize@SpatialAudioIO@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003DC30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800B3208 (memset_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Create_SpatialAudioDeviceStateReader(
        unsigned __int16 *a1,
        struct IPropertyStore *a2,
        _QWORD *a3,
        __int64 a4)
{
  char *v7; // rax
  char *v8; // rdi
  char *v9; // r14
  int v10; // ebx
  char *v11; // rcx
  unsigned __int8 *v13; // rdx
  char *v14; // [rsp+40h] [rbp-10h] BYREF
  const CHAR *v15; // [rsp+48h] [rbp-8h] BYREF
  char *v16; // [rsp+90h] [rbp+40h] BYREF
  char *v17; // [rsp+98h] [rbp+48h] BYREF

  v14 = 0LL;
  if ( !a3 )
  {
    v10 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_9;
    LODWORD(v16) = -2147024809;
    LODWORD(v17) = 49;
    v13 = (unsigned __int8 *)&unk_1801A977A;
LABEL_18:
    v15 = "Create_SpatialAudioDeviceStateReader";
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      v13,
      (__int64)a3,
      a4,
      &v15,
      (__int64)&v17,
      (__int64)&v16);
    goto LABEL_9;
  }
  *a3 = 0LL;
  Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v14);
  v14 = 0LL;
  v7 = (char *)operator new[](0x268uLL, (const struct std::nothrow_t *)&std::nothrow);
  v8 = v7;
  v16 = v7;
  if ( !v7 )
  {
    v10 = -2147024882;
LABEL_16:
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v16);
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_9;
    LODWORD(v16) = v10;
    LODWORD(v17) = 54;
    v13 = (unsigned __int8 *)&unk_1801A9748;
    goto LABEL_18;
  }
  memset_0(v7 + 8, 0, 0x208uLL);
  *((_QWORD *)v8 + 66) = 0LL;
  *((_QWORD *)v8 + 67) = 0LL;
  *(_QWORD *)v8 = &SpatialAudioStateIO::`vftable';
  *((_OWORD *)v8 + 34) = 0LL;
  *((_QWORD *)v8 + 70) = 0LL;
  v9 = v8 + 568;
  Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v8 + 576));
  *((_DWORD *)v8 + 153) = 1;
  *((_QWORD *)v8 + 71) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioDeviceStateReader,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioDeviceStateReader'};
  *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)v8 = &SpatialAudioDeviceStateReader::`vftable';
  *(_QWORD *)v9 = &SpatialAudioDeviceStateReader::`vftable'{for `ISpatialAudioDeviceStateReader'};
  *((_QWORD *)v8 + 72) = &SpatialAudioDeviceStateReader::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v17 = v8;
  v16 = 0LL;
  v10 = SpatialAudioIO::Initialize((SpatialAudioIO *)v8, a1, a2);
  if ( v10 < 0 || (v10 = (*(__int64 (__fastcall **)(char *))(*(_QWORD *)v8 + 8LL))(v8), v10 < 0) )
  {
    Microsoft::WRL::ComPtr<SpatialAudioDeviceStateReader>::InternalRelease(&v17);
    goto LABEL_16;
  }
  (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 8LL))(v8 + 568);
  v14 = v8;
  (*(void (__fastcall **)(char *))(*(_QWORD *)v9 + 16LL))(v8 + 568);
  v10 = (**((__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v14 + 71))(
          (__int64)(v14 + 568),
          &GUID_10002311_cdcb_40d4_9791_eb7aa089009e,
          a3);
  if ( v10 < 0 )
    *a3 = 0LL;
LABEL_9:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(char *))(*((_QWORD *)v11 + 71) + 16LL))(v11 + 568);
  }
  return (unsigned int)v10;
}
