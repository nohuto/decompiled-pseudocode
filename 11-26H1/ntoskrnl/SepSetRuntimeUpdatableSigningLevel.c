/*
 * XREFs of SepSetRuntimeUpdatableSigningLevel @ 0x140815A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SepSetRuntimeUpdatableSigningLevel(char a1)
{
  LOBYTE(RtlpBootStatHandleLock.Affinity) = a1;
}
