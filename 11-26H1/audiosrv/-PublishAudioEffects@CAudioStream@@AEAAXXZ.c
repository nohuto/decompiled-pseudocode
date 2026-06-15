/*
 * XREFs of ?PublishAudioEffects@CAudioStream@@AEAAXXZ @ 0x1800D4C58
 * Callers:
 *     wistd::__function::__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_::operator() @ 0x1800D43B0 (wistd--__function--__func__lambda_6a6f76b54097c0dbebd0b6d97fee1068__void___cdecl(void)_--operato.c)
 *     ?SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ @ 0x1800D5CE0 (-SetUpAudioEffectsChangedWnfState@CAudioStream@@AEAAJXZ.c)
 *     std::_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_::_Do_call @ 0x1800D6390 (std--_Func_impl_no_alloc__lambda_cdb0f08b28984f73e7eac4a3e56158cb__void_--_Do_call.c)
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x1800021D4 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180077610 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180077610.c)
 *     ?GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z @ 0x180082F44 (-GetAudioEffects@CAudioStream@@AEAAJPEAPEAUAudioEffectInternal@@PEAI@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U_GUID@@U?$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ @ 0x1800B0D64 (--1-$unique_ptr@$$BY0A@U_GUID@@U-$default_delete@$$BY0A@U_GUID@@@std@@@std@@QEAA@XZ.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800B24EC (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98E0 (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800B98EC (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800B9900 (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioStream::PublishAudioEffects(CAudioStream *this)
{
  _DWORD *v2; // rcx
  struct AudioEffectInternal **v3; // rax
  _DWORD *v4; // rcx
  unsigned int v5; // ebx
  _DWORD *v6; // rcx
  SIZE_T v7; // rax
  void *v8; // r8
  __int64 v9; // r9
  _OWORD *v10; // rax
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // r10
  __int64 v15; // r9
  __int64 v16; // rax
  _DWORD *v17; // r10
  __int64 v18; // r9
  __int64 v19; // r11
  _DWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v23[2]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+68h] [rbp+28h] BYREF
  void *v25; // [rsp+70h] [rbp+30h] BYREF

  v2 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v2 > 5u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (int)v2,
      (int)&unk_1801A4782);
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v23);
  v24 = 0;
  v3 = (struct AudioEffectInternal **)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&((__int64)v23);
  if ( (int)CAudioStream::GetAudioEffects(this, v3, &v24) >= 0 )
  {
    v5 = v24;
    if ( v24 )
    {
      v23[1] = v24;
      v7 = 24LL * v24;
      if ( !is_mul_ok(v24, 0x18uLL) )
        v7 = -1LL;
      v8 = operator new[](v7, (const struct std::nothrow_t *)&std::nothrow);
      v25 = v8;
      if ( v8 )
      {
        if ( v5 )
        {
          v9 = 0LL;
          do
          {
            v10 = (_OWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                              v23,
                              v9);
            *(_OWORD *)(v11 - 20) = *v10;
            v13 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v23,
                    v12);
            *(_DWORD *)(v14 - 4) = *(_DWORD *)(v13 + 16);
            v16 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v23,
                    v15);
            *v17 = *(_DWORD *)(v16 + 20) != 0;
            v9 = v18 + 1;
          }
          while ( v19 != 1 );
        }
        RtlPublishWnfStateData(*(_QWORD *)((char *)this + 324), 0LL, v8, 24 * v5, 0LL);
        v20 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
        if ( *v20 > 5u )
        {
          v24 = v5;
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
            (__int64)v20,
            byte_1801A46B4,
            v21,
            v22,
            (__int64)&v24);
        }
      }
      std::unique_ptr<_GUID [0]>::~unique_ptr<_GUID [0]>(&v25);
    }
    else
    {
      v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
      if ( *v6 > 5u )
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
          (int)v6,
          (int)&unk_1801A46FB);
      RtlPublishWnfStateData(*(_QWORD *)((char *)this + 324), 0LL, 0LL, 0LL, 0LL);
    }
  }
  else
  {
    v4 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v4 > 5u )
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
        (int)v4,
        (int)&unk_1801A473F);
  }
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>((__int64)v23);
}
