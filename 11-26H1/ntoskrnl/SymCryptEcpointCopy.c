/*
 * XREFs of SymCryptEcpointCopy @ 0x140564310
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140563700 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassSetDistinguished @ 0x140565A70 (SymCryptShortWeierstrassSetDistinguished.c)
 *     SymCryptShortWeierstrassAdd @ 0x1405664C0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140566A6C (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *__fastcall SymCryptEcpointCopy(__int64 a1, _BYTE *a2, _BYTE *a3)
{
  void *result; // rax

  if ( a2 != a3 )
  {
    *a3 = *a2;
    return memmove(a3 + 32, a2 + 32, (*(_DWORD *)(a1 + 16) * (*(_DWORD *)(a1 + 8) & 0xFu)) << 6);
  }
  return result;
}
