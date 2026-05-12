/*
 * XREFs of StorKsrUninitialize @ 0x140196A8C
 * Callers:
 *     DllUnload @ 0x1400ADF30 (DllUnload.c)
 * Callees:
 *     <none>
 */

void StorKsrUninitialize()
{
  if ( StorKsrCallbackHandle )
  {
    ExUnregisterCallback(StorKsrCallbackHandle);
    StorKsrCallbackHandle = 0LL;
  }
}
