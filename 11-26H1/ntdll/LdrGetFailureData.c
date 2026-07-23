/*
 * XREFs of LdrGetFailureData @ 0x18015B7B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PLDR_FAILURE_DATA LdrGetFailureData(void)
{
  return (PLDR_FAILURE_DATA)&LdrpFailureData;
}
