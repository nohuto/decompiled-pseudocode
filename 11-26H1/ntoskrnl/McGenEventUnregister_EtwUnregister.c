/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x1406494B0
 * Callers:
 *     CarCleanup @ 0x1406495F0 (CarCleanup.c)
 * Callees:
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 */

NTSTATUS McGenEventUnregister_EtwUnregister()
{
  NTSTATUS result; // eax

  if ( !EtwProvider_Context[0] )
    return 0;
  result = EtwUnregister(EtwProvider_Context[0]);
  EtwProvider_Context[0] = 0LL;
  return result;
}
