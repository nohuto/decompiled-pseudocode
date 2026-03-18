/*
 * XREFs of SymCryptFdefModDivSmallPow2 @ 0x14056F2E8
 * Callers:
 *     SymCryptFdefModDivPow2 @ 0x14056F268 (SymCryptFdefModDivPow2.c)
 *     SymCryptFdefModInvGeneric @ 0x14056F890 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     SymCryptCpuFeaturesNeverPresent @ 0x1404C9AE8 (SymCryptCpuFeaturesNeverPresent.c)
 *     SymCryptFdefModDivSmallPow2Mulx @ 0x14056AFA0 (SymCryptFdefModDivSmallPow2Mulx.c)
 *     SymCryptFdefModDivSmallPow2Generic @ 0x14056F350 (SymCryptFdefModDivSmallPow2Generic.c)
 */

__int64 __fastcall SymCryptFdefModDivSmallPow2(__int64 a1, _QWORD *a2, unsigned int a3, _QWORD *a4)
{
  if ( ((g_SymCryptCpuFeaturesNotPresent | (unsigned int)SymCryptCpuFeaturesNeverPresent()) & 0x181) != 0 )
    return SymCryptFdefModDivSmallPow2Generic(a1, a2, a3, a4);
  else
    return SymCryptFdefModDivSmallPow2Mulx(a1, a2, a3, a4);
}
