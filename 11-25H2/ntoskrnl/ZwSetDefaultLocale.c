/*
 * XREFs of ZwSetDefaultLocale @ 0x14069E4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl ZwSetDefaultLocale(BOOLEAN UserProfile, LCID DefaultLocaleId)
{
  _disable();
  __readeflags();
  return KiServiceInternal(UserProfile);
}
