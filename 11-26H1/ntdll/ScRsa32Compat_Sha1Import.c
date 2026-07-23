/*
 * XREFs of ScRsa32Compat_Sha1Import @ 0x180158A28
 * Callers:
 *     RtlpA_SHAUpdate @ 0x18013B230 (RtlpA_SHAUpdate.c)
 *     A_SHAFinal @ 0x180158678 (A_SHAFinal.c)
 * Callees:
 *     SymCryptSha1Init @ 0x180024290 (SymCryptSha1Init.c)
 */

unsigned __int64 __fastcall ScRsa32Compat_Sha1Import(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 result; // rax

  SymCryptSha1Init(a2);
  *(_OWORD *)(a2 + 32) = *(_OWORD *)a1;
  *(_OWORD *)(a2 + 48) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a2 + 64) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a2 + 80) = *(_OWORD *)(a1 + 48);
  *(_OWORD *)(a2 + 96) = *(_OWORD *)(a1 + 64);
  *(_DWORD *)(a2 + 112) = *(_DWORD *)(a1 + 80);
  v4 = *(unsigned int *)(a1 + 88) | ((unsigned __int64)*(unsigned int *)(a1 + 84) << 32);
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = v4;
  result = v4 & 0x3F;
  *(_DWORD *)a2 = result;
  return result;
}
