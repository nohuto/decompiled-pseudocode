/*
 * XREFs of SymCryptSha1Init @ 0x180024290
 * Callers:
 *     RtlCreateServiceSid @ 0x180023780 (RtlCreateServiceSid.c)
 *     SymCryptSha1Result @ 0x180024140 (SymCryptSha1Result.c)
 *     RtlCreateVirtualAccountSid @ 0x1800242C0 (RtlCreateVirtualAccountSid.c)
 *     RtlpA_SHAInit @ 0x18013B1B0 (RtlpA_SHAInit.c)
 *     ScRsa32Compat_Sha1Import @ 0x180158A28 (ScRsa32Compat_Sha1Import.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1Init(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_180176758;
  result = 3285377520LL;
  *(_DWORD *)(a1 + 112) = -1009589776;
  return result;
}
