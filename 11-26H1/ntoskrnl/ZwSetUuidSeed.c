/*
 * XREFs of ZwSetUuidSeed @ 0x14072B840
 * Callers:
 *     DifZwSetUuidSeedWrapper @ 0x1406C0450 (DifZwSetUuidSeedWrapper.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwSetUuidSeed(PCHAR Seed)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Seed);
}
