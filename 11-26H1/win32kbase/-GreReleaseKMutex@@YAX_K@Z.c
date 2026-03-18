/*
 * XREFs of ?GreReleaseKMutex@@YAX_K@Z @ 0x14012DC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreReleaseKMutex(struct _KMUTANT *a1)
{
  KeReleaseMutex(a1, 0);
}
