/*
 * XREFs of SymCryptSha1Init @ 0x180039D20
 * Callers:
 *     RtlCreateServiceSid @ 0x180039210 (RtlCreateServiceSid.c)
 *     SymCryptSha1Result @ 0x180039BD0 (SymCryptSha1Result.c)
 *     RtlCreateVirtualAccountSid @ 0x180039D50 (RtlCreateVirtualAccountSid.c)
 *     RtlpA_SHAInit @ 0x18013B440 (RtlpA_SHAInit.c)
 *     ScRsa32Compat_Sha1Import @ 0x180158B58 (ScRsa32Compat_Sha1Import.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSha1Init(__int64 a1)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_DWORD *)a1 = 0;
  *(_OWORD *)(a1 + 96) = xmmword_1801788F8;
  result = 3285377520LL;
  *(_DWORD *)(a1 + 112) = -1009589776;
  return result;
}
