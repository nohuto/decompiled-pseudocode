/*
 * XREFs of ?GetControllableDiscoveryMFXEffects@AudioModeEffectsWatcher@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800820C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSize@@U4@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU_tlgWrapperPtrSize@@6@Z @ 0x180001D0C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByRef@$0BA@@@U_tlgWrapperPtrSiz.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180052CC0 (_tlgKeywordOn.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x18008BEC4 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     __security_check_cookie @ 0x1800B1FF0 (__security_check_cookie.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98E0 (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800B98EC (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800B9900 (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     _lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_ @ 0x1800C02B4 (_lambda_5d34934f89fc3a58b6c7991e423b18e6_--_lambda_5d34934f89fc3a58b6c7991e423b18e6_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioModeEffectsWatcher::GetControllableDiscoveryMFXEffects(_QWORD *a1, __int64 *a2)
{
  __int64 *v2; // r12
  __int64 *i; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  int (__fastcall *v8)(__int64, __int64, _QWORD **, __int64); // rdi
  __int64 v9; // rax
  __m128i *v10; // rax
  __int64 v11; // r9
  __int64 v12; // r8
  __m128i v13; // xmm0
  __int64 v14; // r10
  _QWORD *v15; // rax
  _QWORD *v16; // r8
  _QWORD *v17; // r9
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // r9
  __int128 v21; // xmm0
  bool v22; // zf
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // r8
  struct AudioSrvTelemetryProvider *v27; // rax
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned __int16 v31; // [rsp+50h] [rbp-49h] BYREF
  const wchar_t *v32; // [rsp+58h] [rbp-41h] BYREF
  _QWORD *v33; // [rsp+60h] [rbp-39h] BYREF
  _QWORD v34[3]; // [rsp+68h] [rbp-31h] BYREF
  __m128i v35; // [rsp+80h] [rbp-19h] BYREF
  __int64 v36; // [rsp+90h] [rbp-9h] BYREF
  int v37; // [rsp+98h] [rbp-1h]
  __int128 v38; // [rsp+A0h] [rbp+7h] BYREF
  __int64 v39; // [rsp+B0h] [rbp+17h]

  v2 = (__int64 *)a1[11];
  for ( i = (__int64 *)a1[10]; i != v2; ++i )
  {
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v34);
    v6 = *i;
    v7 = a1[7];
    LODWORD(v33) = 0;
    v8 = *(int (__fastcall **)(__int64, __int64, _QWORD **, __int64))(*(_QWORD *)v6 + 32LL);
    v9 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(v34);
    if ( v8(v6, v9, &v33, v7) >= 0 )
    {
      LODWORD(v32) = 0;
      if ( (_DWORD)v33 )
      {
        do
        {
          v10 = (__m128i *)lambda_5d34934f89fc3a58b6c7991e423b18e6_::_lambda_5d34934f89fc3a58b6c7991e423b18e6_(
                             &v36,
                             v34,
                             &v32);
          v11 = a2[1];
          v12 = *a2;
          v13 = *v10;
          v35 = *v10;
          if ( v12 == v11 )
          {
LABEL_10:
            v19 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v34,
                    (unsigned int)v32);
            v21 = *(_OWORD *)v19;
            LODWORD(v39) = *(_DWORD *)(v19 + 16);
            v22 = *(_DWORD *)(v19 + 20) == 1;
            v38 = v21;
            HIDWORD(v39) = v22;
            if ( v20 == a2[2] )
            {
              std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>(a2, v20, &v38);
            }
            else
            {
              *(_OWORD *)v20 = v21;
              *(_QWORD *)(v20 + 16) = v39;
              a2[1] += 24LL;
            }
          }
          else
          {
            v14 = *(unsigned int *)_mm_srli_si128(v13, 8).m128i_u32[0];
            while ( 1 )
            {
              v15 = (_QWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                                v35.m128i_i64[0],
                                v14);
              v18 = *v16 - *v15;
              if ( *v16 == *v15 )
                v18 = v16[1] - v15[1];
              if ( !v18 )
                break;
              if ( v16 + 3 == v17 )
                goto LABEL_10;
            }
            v23 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v34,
                    (unsigned int)v32);
            *(_DWORD *)(v24 + 20) |= *(_DWORD *)(v23 + 20) == 1;
            v25 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                    v34,
                    (unsigned int)v32);
            *(_DWORD *)(v26 + 16) |= *(_DWORD *)(v25 + 16);
          }
          LODWORD(v32) = (_DWORD)v32 + 1;
        }
        while ( (unsigned int)v32 < (unsigned int)v33 );
      }
    }
    wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(v34);
  }
  v31 = -21845 * ((a2[1] - *a2) >> 3);
  v27 = AudioSrvTelemetryProvider::Instance();
  if ( **((_DWORD **)v27 + 1) > 4u && tlgKeywordOn(*((_QWORD *)v27 + 1), 256LL) )
  {
    v36 = *a2;
    v35.m128i_i32[2] = 2;
    v35.m128i_i64[0] = (__int64)&v31;
    v33 = a1 + 5;
    v32 = (const wchar_t *)a1[4];
    v34[0] = a1[9];
    v37 = 24 * v31;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByRef<16>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
      v28,
      (int)&unk_1801A2BAB,
      v28,
      v29,
      (__int64)v34,
      &v32,
      (__int64 *)&v33,
      v35.m128i_i64,
      &v36);
  }
  return 0LL;
}
