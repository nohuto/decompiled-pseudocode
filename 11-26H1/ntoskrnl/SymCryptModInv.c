/*
 * XREFs of SymCryptModInv @ 0x14055C7F0
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14055C9F0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x14055D084 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1405647A4 (SymCryptEcpointTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModInv(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140005E58 + (*a1 & 0x380)))(a1, a2);
}
