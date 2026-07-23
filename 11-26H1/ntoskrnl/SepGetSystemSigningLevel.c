/*
 * XREFs of SepGetSystemSigningLevel @ 0x140B0E770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 SepGetSystemSigningLevel()
{
  __int64 result; // rax

  result = (unsigned __int8)SeILSigningPolicy;
  if ( !SeILSigningPolicy )
    return LOBYTE(RtlpBootStatHandleLock.Affinity);
  return result;
}
