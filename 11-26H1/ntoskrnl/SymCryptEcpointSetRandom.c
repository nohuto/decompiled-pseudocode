/*
 * XREFs of SymCryptEcpointSetRandom @ 0x1405672F8
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055EED8 (SymCryptEcDsaSignEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetRandom(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_1400062F0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(a1);
}
