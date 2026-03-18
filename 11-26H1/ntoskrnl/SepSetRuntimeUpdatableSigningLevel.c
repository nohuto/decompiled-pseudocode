/*
 * XREFs of SepSetRuntimeUpdatableSigningLevel @ 0x14080FFA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SepSetRuntimeUpdatableSigningLevel(char a1)
{
  LOBYTE(RtlpBootStatHandleLock.AffinityVersion) = a1;
}
