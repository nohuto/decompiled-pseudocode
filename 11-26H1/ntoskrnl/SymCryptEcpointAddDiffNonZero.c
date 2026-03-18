/*
 * XREFs of SymCryptEcpointAddDiffNonZero @ 0x140567F3C
 * Callers:
 *     SymCryptEcpointScalarMulFixedWindow @ 0x140563C20 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptPrecomputation @ 0x14056426C (SymCryptPrecomputation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointAddDiffNonZero(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006318[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
