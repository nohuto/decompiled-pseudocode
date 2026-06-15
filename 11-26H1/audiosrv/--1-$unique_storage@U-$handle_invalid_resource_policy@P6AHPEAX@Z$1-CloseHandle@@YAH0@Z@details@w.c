/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x1800788C8
 * Callers:
 *     ?CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ @ 0x1800DF0E0 (-CheckBtAudioStreamContextSupported@CBtAudioResourceManager@@AEBAJXZ.c)
 *     ?SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4BTAudio_StreamContext@@@Z @ 0x1800DF6A0 (-SendBtAudioStreamContext@CBtAudioResourceManager@@EEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_000.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180131C58 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
        void **a1)
{
  void *v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 != (void *)-1LL )
  {
    if ( v1 )
      return CloseHandle(v1);
  }
  return result;
}
