/*
 * XREFs of ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x180067DCC
 * Callers:
 *     ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180067D0C (-DoShutdownADG@CAudioDGProcess@@AEAAJXZ.c)
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18007272C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18007B6EC (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     wil::details::lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___::_lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___ @ 0x1800ABD0C (wil--details--lambda_call__lambda_f40a8c106007382e989e94594fdf1e00___--_lambda_call__lambda_f40a.c)
 *     ?move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x1800ACB9C (-move_initialize_from@SystemAudioStream@@QEAAJKPEAUSYSTEM_AUDIO_STREAM@@@Z.c)
 *     ?OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ @ 0x1800B908C (-OnADGProcessTerminated@CAudioDGProcess@@AEAAXXZ.c)
 *     ??0CSebNotifier@@QEAA@XZ @ 0x18010EC00 (--0CSebNotifier@@QEAA@XZ.c)
 *     ?Attach@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY@@@Z @ 0x18015F730 (-Attach@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPRO.c)
 *     ?Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F790 (-Attach@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 *     ?SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT_CROSSPROCESS_MEMORY@@@Z @ 0x18015F7F0 (-SerializeForRPC@CCrossProcessFileObjectBasedCrossProcessMemory@@UEAAJPEAUCROSSPROCESSFILEOBJECT.c)
 *     ?SerializeForRPC@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z @ 0x18015F900 (-SerializeForRPC@CSectionBasedCrossProcessMemory@@UEAAJPEAUSTANDARD_CROSSPROCESS_MEMORY@@@Z.c)
 * Callees:
 *     ?close_reset@?$close_invoke_helper@$00P6AHPEAX@Z$1?CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@Z @ 0x1800810BC (-close_reset@-$close_invoke_helper@$00P6AHPEAX@Z$1-CloseHandle@@YAH0@ZPEAX@details@wil@@SAXPEAX@.c)
 */

__int64 __fastcall wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::reset(
        void **a1,
        void *a2)
{
  void *v4; // rcx
  __int64 result; // rax

  v4 = *a1;
  if ( v4 && v4 != (void *)-1LL )
    result = wil::details::close_invoke_helper<1,int (*)(void *),&int CloseHandle(void *),void *>::close_reset(v4);
  *a1 = a2;
  return result;
}
