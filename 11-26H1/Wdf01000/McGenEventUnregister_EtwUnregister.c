/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x14008EF90
 * Callers:
 *     FxLibraryCommonDecommission @ 0x14008EB1C (FxLibraryCommonDecommission.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall McGenEventUnregister_EtwUnregister(unsigned __int64 *RegHandle)
{
  NTSTATUS result; // eax

  if ( !KMDF_PERF_PROVIDER_Context.RegistrationHandle )
    return 0;
  result = EtwUnregister(KMDF_PERF_PROVIDER_Context.RegistrationHandle);
  KMDF_PERF_PROVIDER_Context.RegistrationHandle = 0LL;
  return result;
}
