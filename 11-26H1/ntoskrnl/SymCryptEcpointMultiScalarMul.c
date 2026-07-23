/*
 * XREFs of SymCryptEcpointMultiScalarMul @ 0x1405671DC
 * Callers:
 *     SymCryptEcDsaVerify @ 0x14055F56C (SymCryptEcDsaVerify.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointMultiScalarMul(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, int, __int64, __int64, __int64))qword_140006338[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7,
           a8);
}
