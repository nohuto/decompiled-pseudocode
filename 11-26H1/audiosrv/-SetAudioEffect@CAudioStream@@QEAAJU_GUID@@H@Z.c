/*
 * XREFs of ?SetAudioEffect@CAudioStream@@QEAAJU_GUID@@H@Z @ 0x1800D54F8
 * Callers:
 *     ?SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z @ 0x180113690 (-SetAudioEffect@CVADServer@@QEAAJU_GUID@@H@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800139E0 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18002D1F8 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005759C (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33@Z @ 0x180061644 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180068448 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ?_Tidy@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ @ 0x1800B0970 (-_Tidy@-$vector@UAudioEffectInternal@@V-$allocator@UAudioEffectInternal@@@std@@@std@@AEAAXXZ.c)
 *     ?UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z @ 0x1800D61BC (-UpdatePMPStreamingEffectsOverride@CAudioStream@@AEAAXU_GUID@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioStream::SetAudioEffect(CAudioStream *this, struct _GUID *a2, int a3)
{
  char *v5; // r13
  const unsigned __int16 *v6; // rax
  int EndpointCharacteristicsDescriptor; // eax
  unsigned int v8; // edi
  __int64 (__fastcall *v9)(char *, __int64 *); // rdi
  int v10; // eax
  int v11; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // r15
  __int64 *v17; // rsi
  __int128 v18; // rax
  unsigned int v19; // r13d
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 (__fastcall *v22)(struct IAudioResourceManager *, __int128 *, __int64, unsigned __int64); // rbx
  __int64 v23; // rax
  __int64 v25; // [rsp+40h] [rbp-49h] BYREF
  int v26; // [rsp+48h] [rbp-41h]
  __int128 v27; // [rsp+50h] [rbp-39h] BYREF
  __int64 v28; // [rsp+60h] [rbp-29h]
  struct _GUID v29; // [rsp+70h] [rbp-19h] BYREF
  unsigned __int64 v30; // [rsp+80h] [rbp-9h] BYREF
  __int64 v31; // [rsp+88h] [rbp-1h] BYREF
  __int128 v32; // [rsp+90h] [rbp+7h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v26 = a3;
  v32 = 0LL;
  v33 = 0LL;
  v5 = (char *)this + 16;
  v6 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))((char *)this + 16);
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        v6,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)&v32);
  v8 = EndpointCharacteristicsDescriptor;
  if ( EndpointCharacteristicsDescriptor >= 0 )
  {
    v25 = 0LL;
    v9 = *(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this + 1) + 120LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset(&v25);
    v10 = v9((char *)this + 8, &v25);
    v8 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7BF,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
        (const char *)(unsigned int)v10);
LABEL_5:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
      goto LABEL_30;
    }
    v27 = 0LL;
    v28 = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v25 + 456LL))(v25, &v27);
    v8 = v11;
    if ( v11 >= 0 )
    {
      v13 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v13 > 4u )
      {
        v30 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)&v27 + 1) - v27) >> 3);
        v31 = (__int64)(*((_QWORD *)this + 27) - *((_QWORD *)this + 26)) >> 3;
        *(_QWORD *)&v29.Data1 = *((_QWORD *)this + 49);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          (__int64)v13,
          byte_1801A4670,
          v14,
          v15,
          (__int64)&v29,
          (__int64)&v31,
          (__int64)&v30);
      }
      v16 = (__int64 *)*((_QWORD *)this + 27);
      v17 = (__int64 *)*((_QWORD *)this + 26);
      v18 = v27;
      if ( v17 == v16 && (_QWORD)v27 == *((_QWORD *)&v27 + 1) )
      {
        std::vector<AudioEffectInternal>::_Tidy((__int64)&v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        v8 = -2004287423;
        goto LABEL_30;
      }
      v8 = -2004287423;
      if ( v17 != v16 )
      {
        v19 = v26;
        do
        {
          v20 = *v17;
          v29 = *a2;
          v8 &= -((*(unsigned int (__fastcall **)(__int64, struct _GUID *, _QWORD))(*(_QWORD *)v20 + 64LL))(
                    v20,
                    &v29,
                    v19) != 0);
          ++v17;
        }
        while ( v17 != v16 );
        v18 = v27;
        v5 = (char *)this + 16;
      }
      while ( (_QWORD)v18 != *((_QWORD *)&v18 + 1) )
      {
        v21 = *(_QWORD *)v18 - *(_QWORD *)&a2->Data1;
        if ( *(_QWORD *)v18 == *(_QWORD *)&a2->Data1 )
          v21 = *(_QWORD *)(v18 + 8) - *(_QWORD *)a2->Data4;
        if ( !v21 )
          break;
        *(_QWORD *)&v18 = v18 + 24;
      }
      if ( (_QWORD)v18 == *((_QWORD *)&v18 + 1) )
        goto LABEL_9;
      if ( !*(_DWORD *)(v18 + 16) )
      {
        std::vector<AudioEffectInternal>::_Tidy((__int64)&v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        v8 = -2004287422;
        goto LABEL_30;
      }
      v29 = *a2;
      CAudioStream::UpdatePMPStreamingEffectsOverride(this, &v29, v26);
      v22 = *(__int64 (__fastcall **)(struct IAudioResourceManager *, __int128 *, __int64, unsigned __int64))(*(_QWORD *)g_AudioResourceManager + 64LL);
      v23 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 40LL))(v5);
      v11 = v22(g_AudioResourceManager, &v32, v23, ((unsigned __int64)this + 8) & -(__int64)(this != 0LL));
      v8 = v11;
      if ( v11 >= 0 )
      {
        std::vector<AudioEffectInternal>::_Tidy((__int64)&v27);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
        v8 = 0;
        goto LABEL_30;
      }
      v12 = 2028LL;
    }
    else
    {
      v12 = 1985LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)(unsigned int)v11);
LABEL_9:
    std::vector<AudioEffectInternal>::_Tidy((__int64)&v27);
    goto LABEL_5;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x7BB,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
    (const char *)(unsigned int)EndpointCharacteristicsDescriptor);
LABEL_30:
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)&v32);
  return v8;
}
