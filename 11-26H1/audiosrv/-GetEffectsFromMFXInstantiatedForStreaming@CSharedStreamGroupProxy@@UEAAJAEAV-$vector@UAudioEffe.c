/*
 * XREFs of ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800ACF30
 * Callers:
 *     ?IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEBV?$vector@UAudioEffectState@CProcessingModeParameters@@V?$allocator@UAudioEffectState@CProcessingModeParameters@@@std@@@3@@Z @ 0x1800707F0 (-IsStreamingEffectsOverrideLooseMatch@CSharedStreamGroupProxy@@IEAA_NAEBV-$vector@UAudioEffectIn.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x1800216C0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU_tlgWrapperPtrSize@@4@Z @ 0x18004E8CC (--$Write@U-$_tlgWrapperByVal@$07@@U_tlgWrapperPtrSize@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPro.c)
 *     ??$_Emplace_reallocate@UAudioEffectInternal@@@?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@AEAAPEAUAudioEffectInternal@@QEAU2@$$QEAU2@@Z @ 0x18008BEC4 (--$_Emplace_reallocate@UAudioEffectInternal@@@-$vector@UAudioEffectInternal@@V-$allocator@UAudio.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800B0364 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??0?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98C4 (--0-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??1?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAA@XZ @ 0x1800B98E0 (--1-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@.c)
 *     ??A?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAUAUDIO_SYSTEMEFFECT@@_K@Z @ 0x1800B98EC (--A-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??I?$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAPEAPEAUAUDIO_SYSTEMEFFECT@@XZ @ 0x1800B9900 (--I-$unique_any_array_ptr@UAUDIO_SYSTEMEFFECT@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@Y.c)
 *     ??A?$unique_any_array_ptr@U_GUID@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAAEAU_GUID@@_K@Z @ 0x1800D439C (--A-$unique_any_array_ptr@U_GUID@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@Ue.c)
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXPEAUAudioEffectInternal@@_K@Z @ 0x1800D63EC (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$_ea_1800D63EC.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSharedStreamGroupProxy::GetEffectsFromMFXInstantiatedForStreaming(unsigned __int64 a1, __int64 a2)
{
  __int64 *v4; // r12
  __int64 *v5; // r13
  __int64 v6; // rsi
  __int64 (__fastcall *v7)(__int64, __int64, __int64 *, __int64); // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // ebx
  void *v12; // rbx
  void *v13; // rdi
  HANDLE CurrentProcess; // rax
  const char *v15; // r9
  unsigned int LastError; // ebx
  const char *v17; // r9
  __int64 result; // rax
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, __int64 *, HANDLE); // rdi
  HANDLE v21; // rbx
  __int64 v22; // rax
  int v23; // eax
  unsigned int v24; // ebx
  unsigned int v25; // ebx
  LPVOID v26; // rax
  unsigned int i; // r9d
  __int128 v28; // xmm0
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  unsigned int v31; // r9d
  int v32; // r9d
  unsigned int j; // ebx
  __int64 v34; // rax
  __int64 v35; // rdx
  _DWORD *v36; // r8
  int *v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h]
  void *v39; // [rsp+50h] [rbp-48h] BYREF
  __int64 v40; // [rsp+58h] [rbp-40h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]
  int v42; // [rsp+A0h] [rbp+8h] BYREF
  __int64 v43; // [rsp+B0h] [rbp+18h] BYREF
  HANDLE TargetHandle; // [rsp+B8h] [rbp+20h] BYREF

  v4 = *(__int64 **)(a1 + 264);
  v5 = *(__int64 **)(a1 + 272);
  try
  {
    while ( v4 != v5 )
    {
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
      LODWORD(v43) = 0;
      v6 = *v4;
      v7 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, __int64))(*(_QWORD *)*v4 + 56LL);
      v8 = *(_QWORD *)(a1 + 1816);
      v9 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(&v37);
      v10 = v7(v6, v9, &v43, v8);
      v11 = v10;
      if ( v10 < 0 )
      {
        if ( v10 != -2147467263 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x65D,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v10);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
          return v11;
        }
        TargetHandle = 0LL;
        v12 = *(void **)&g_ADGProcess[2].LockCount;
        v13 = *(void **)(a1 + 1816);
        CurrentProcess = GetCurrentProcess();
        if ( !DuplicateHandle(CurrentProcess, v13, v12, &TargetHandle, 0, 0, 2u) )
        {
          LastError = wil::details::in1diag3::Return_GetLastError(
                        retaddr,
                        (void *)0x649,
                        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                        v15);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
          return LastError;
        }
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v39);
        v19 = *v4;
        v20 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *, HANDLE))(*(_QWORD *)*v4 + 48LL);
        v21 = TargetHandle;
        v22 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator&(&v39);
        v23 = v20(v19, v22, &v43, v21);
        v24 = v23;
        if ( v23 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x64C,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)(unsigned int)v23);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v39);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
          return v24;
        }
        v25 = v43;
        v40 = (unsigned int)v43;
        v26 = CoTaskMemAlloc(24LL * (unsigned int)v43);
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(
          &v37,
          v26,
          v25);
        if ( !v37 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x654,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
            (const char *)0x8007000ELL);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v39);
          wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
          return 2147942414LL;
        }
        for ( i = 0; i < (unsigned int)v43; i = v32 + 1 )
        {
          v28 = *(_OWORD *)wil::unique_any_array_ptr<_GUID,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                             &v39,
                             i);
          *(_OWORD *)wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                       &v37,
                       v29) = v28;
          *(_DWORD *)(wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                        &v37,
                        v30)
                    + 16) = 0;
          *(_DWORD *)(wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                        &v37,
                        v31)
                    + 20) = 1;
        }
        wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v39);
      }
      else
      {
        v38 = (unsigned int)v43;
      }
      for ( j = 0; j < (unsigned int)v43; ++j )
      {
        v34 = wil::unique_any_array_ptr<AUDIO_SYSTEMEFFECT,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::operator[](
                &v37,
                j);
        v35 = *(_QWORD *)(a2 + 8);
        if ( v35 == *(_QWORD *)(a2 + 16) )
        {
          std::vector<AudioEffectInternal>::_Emplace_reallocate<AudioEffectInternal>((void **)a2, v35, (__int128 *)v34);
        }
        else
        {
          *(_OWORD *)v35 = *(_OWORD *)v34;
          *(_QWORD *)(v35 + 16) = *(_QWORD *)(v34 + 16);
          *(_QWORD *)(a2 + 8) += 24LL;
        }
      }
      wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::~unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>(&v37);
      ++v4;
    }
    LOWORD(v42) = -21845 * ((__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 3);
    v36 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v36 > 4u )
    {
      v39 = *(void **)a2;
      LODWORD(v40) = 24 * (unsigned __int16)v42;
      v37 = &v42;
      LODWORD(v38) = 2;
      v43 = a1 & ((unsigned __int128)-(__int128)(a1 - 8) >> 64);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperPtrSize,_tlgWrapperPtrSize>(
        (int)v36,
        (int)&unk_1801A6883,
        (__int64)v36,
        (__int64)v17,
        (__int64)&v43,
        (__int64 *)&v37,
        (__int64 *)&v39);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x672,
                           (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
                           v17);
  }
  return result;
}
