/*
 * XREFs of SepSetTrustLevelForProcessToken @ 0x1404052FC
 * Callers:
 *     SeExchangePrimaryToken @ 0x14081AC68 (SeExchangePrimaryToken.c)
 *     SeSubProcessToken @ 0x140B84D74 (SeSubProcessToken.c)
 * Callees:
 *     SepSidFromProcessProtection @ 0x140405380 (SepSidFromProcessProtection.c)
 *     RtlEqualSid @ 0x140406680 (RtlEqualSid.c)
 *     SepSetTokenTrust @ 0x140A518F0 (SepSetTokenTrust.c)
 */

__int64 __fastcall SepSetTrustLevelForProcessToken(__int64 a1, __int64 a2, _BYTE *a3)
{
  void *v5; // rax
  void *v6; // rcx
  void *v7; // rbx
  __int64 result; // rax
  char v9; // [rsp+30h] [rbp+8h] BYREF

  v9 = *(_BYTE *)(a2 + 1530);
  *a3 = 0;
  v5 = (void *)SepSidFromProcessProtection(&v9);
  v6 = *(void **)(a1 + 1104);
  v7 = v5;
  if ( v6 )
  {
    if ( !v5 || !RtlEqualSid(v6, v5) )
      goto LABEL_3;
    return 0LL;
  }
  if ( !v5 )
    return 0LL;
LABEL_3:
  result = SepSetTokenTrust(a1, v7);
  if ( (int)result >= 0 )
    *a3 = 1;
  return result;
}
