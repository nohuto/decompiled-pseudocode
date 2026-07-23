/*
 * XREFs of SymCryptEcpointDouble @ 0x140567130
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140565AF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140566010 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x14056665C (SymCryptPrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x140574120 (SymCryptShortWeierstrassAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointDouble(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006320[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
