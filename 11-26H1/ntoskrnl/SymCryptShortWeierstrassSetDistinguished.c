/*
 * XREFs of SymCryptShortWeierstrassSetDistinguished @ 0x140575AB0
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcpointCopy @ 0x140566700 (SymCryptEcpointCopy.c)
 */

void *__fastcall SymCryptShortWeierstrassSetDistinguished(__int64 a1, _BYTE *a2)
{
  return SymCryptEcpointCopy(a1, *(_BYTE **)(a1 + 648), a2);
}
