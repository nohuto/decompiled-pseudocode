/*
 * XREFs of SymCryptShortWeierstrassSetDistinguished @ 0x140529970
 * Callers:
 *     <none>
 * Callees:
 *     SymCryptEcpointCopy @ 0x140528194 (SymCryptEcpointCopy.c)
 */

void *__fastcall SymCryptShortWeierstrassSetDistinguished(__int64 a1, _BYTE *a2)
{
  return SymCryptEcpointCopy(a1, *(_BYTE **)(a1 + 648), a2);
}
