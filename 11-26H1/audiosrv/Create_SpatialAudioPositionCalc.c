/*
 * XREFs of Create_SpatialAudioPositionCalc @ 0x18003DA84
 * Callers:
 *     ?RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z @ 0x18003C3C4 (-RuntimeClassInitialize@SpatialAudioEncoderProperties@@QEAAJAEBU_GUID@@H@Z.c)
 *     ?RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z @ 0x18003DD00 (-RuntimeClassInitialize@SpatialAudioDevicePropertyReader@@QEAAJPEBGPEAUIPropertyStore@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x18003BA90 (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x18003DC30 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ??1?$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1800ABBDC (--1-$MakeAllocator@VCAudioRenderEndpointChangeDelegator@@@Details@WRL@Microsoft@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Create_SpatialAudioPositionCalc(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rax
  char *v6; // rbx
  _QWORD *v7; // rdi
  int v8; // edi
  unsigned __int8 *v10; // rdx
  char *v11; // [rsp+70h] [rbp+28h] BYREF
  int v12; // [rsp+78h] [rbp+30h] BYREF
  __int64 v13; // [rsp+80h] [rbp+38h] BYREF
  const CHAR *v14; // [rsp+88h] [rbp+40h] BYREF

  v13 = 0LL;
  if ( !a1 )
  {
    v8 = -2147024809;
    if ( (unsigned int)dword_1801D32E8 <= 2 )
      goto LABEL_7;
    v12 = 155;
    v10 = (unsigned __int8 *)&unk_1801A9820;
    goto LABEL_12;
  }
  *a1 = 0LL;
  v5 = (char *)operator new[](0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  v6 = v5;
  v11 = v5;
  if ( v5 )
  {
    v7 = v5 + 8;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v5 + 8));
    *((_DWORD *)v6 + 11) = 1;
    *(_QWORD *)v6 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `ISpatialAudioPositionCalc'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *(_QWORD *)v6 = &SpatialAudioPositionCalc::`vftable'{for `ISpatialAudioPositionCalc'};
    *v7 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,ISpatialAudioPositionCalc,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v6 + 48), 0, 0);
    v8 = (**(__int64 (__fastcall ***)(char *, GUID *, __int64 *))v6)(
           v6,
           &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
           &v13);
    (*(void (__fastcall **)(char *))(*(_QWORD *)v6 + 16LL))(v6);
    if ( v8 >= 0 )
    {
      v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v13)(
             v13,
             &GUID_ea0e3fe9_ee0e_40e5_9eb2_28a576108545,
             a1);
      goto LABEL_7;
    }
  }
  else
  {
    Microsoft::WRL::Details::MakeAllocator<CAudioRenderEndpointChangeDelegator>::~MakeAllocator<CAudioRenderEndpointChangeDelegator>(&v11);
    v8 = -2147024882;
  }
  if ( (unsigned int)dword_1801D32E8 > 2 )
  {
    v12 = 160;
    v10 = (unsigned __int8 *)&unk_1801A97EE;
LABEL_12:
    v14 = "Create_SpatialAudioPositionCalc";
    LODWORD(v11) = v8;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      v10,
      a3,
      a4,
      &v14,
      (__int64)&v12,
      (__int64)&v11);
  }
LABEL_7:
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return (unsigned int)v8;
}
