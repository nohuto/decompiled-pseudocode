/*
 * XREFs of ??4?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAAAEAV01@$$T@Z @ 0x18004ACF0
 * Callers:
 *     ?_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z @ 0x18003ECD0 (-_SetTime@CAnimationClock@@AEAAJW4DWMPANIMATION_CLOCK_TIME@@PEBT_LARGE_INTEGER@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

void **__fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::operator=(
        void **a1)
{
  void *v1; // rsi
  DWORD LastError; // edi

  v1 = *a1;
  if ( !*a1 || v1 == (void *)-1LL )
  {
    *a1 = 0LL;
  }
  else
  {
    LastError = GetLastError();
    CloseHandle(v1);
    SetLastError(LastError);
    *a1 = 0LL;
  }
  return a1;
}
