/*
 * XREFs of McGenEventUnregister_EtwUnregister @ 0x14064D090
 * Callers:
 *     CarCleanup @ 0x14064D1D0 (CarCleanup.c)
 * Callees:
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
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
