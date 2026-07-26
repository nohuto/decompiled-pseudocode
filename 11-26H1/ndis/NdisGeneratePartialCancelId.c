/*
 * XREFs of NdisGeneratePartialCancelId @ 0x140075150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

UCHAR NdisGeneratePartialCancelId(void)
{
  return _InterlockedExchangeAdd(&ndisCancelId, 1u) + 1;
}
