/*
 * XREFs of ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXPEAUAudioEffectInternal@@_K@Z @ 0x1800D63EC
 * Callers:
 *     ?GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800ACF30 (-GetEffectsFromMFXInstantiatedForStreaming@CSharedStreamGroupProxy@@UEAAJAEAV-$vector@UAudioEffe.c)
 *     ?GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV?$vector@UAudioEffectInternal@@V?$allocator@UAudioEffectInternal@@@std@@@std@@@Z @ 0x1800D46B0 (-GetEffectsFromApo@CAudioStream@@AEAAJPEAUIAPOWrapperSrv@@AEAV-$vector@UAudioEffectInternal@@V-$.c)
 * Callees:
 *     ?reset@?$unique_any_array_ptr@UAudioEffectInternal@@U?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@Uempty_deleter@3@_K@wil@@QEAAXXZ @ 0x1800BA8C0 (-reset@-$unique_any_array_ptr@UAudioEffectInternal@@U-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFr.c)
 */

void __fastcall wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  wil::unique_any_array_ptr<AudioEffectInternal,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>,wil::empty_deleter,unsigned __int64>::reset((__int64)a1);
  *a1 = a2;
  a1[1] = a3;
}
