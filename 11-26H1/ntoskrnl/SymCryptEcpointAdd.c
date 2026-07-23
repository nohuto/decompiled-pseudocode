/*
 * XREFs of SymCryptEcpointAdd @ 0x14056709C
 * Callers:
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140565AF0 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140566010 (SymCryptEcpointScalarMulFixedWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAdd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, __int64, __int64))qword_140006310[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
