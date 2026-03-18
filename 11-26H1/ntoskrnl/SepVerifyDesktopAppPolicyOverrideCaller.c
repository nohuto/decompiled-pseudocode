/*
 * XREFs of SepVerifyDesktopAppPolicyOverrideCaller @ 0x14045FC94
 * Callers:
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     RtlQueryPackageClaims @ 0x140460570 (RtlQueryPackageClaims.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PsReferenceEffectiveToken @ 0x14094F580 (PsReferenceEffectiveToken.c)
 *     RtlCompareUnicodeString @ 0x1409E1590 (RtlCompareUnicodeString.c)
 */

char __fastcall SepVerifyDesktopAppPolicyOverrideCaller(__int64 a1)
{
  KPROCESSOR_MODE PreviousMode; // dl
  bool v3; // di
  void *v5; // rsi
  char v6; // [rsp+48h] [rbp-C0h] BYREF
  int v7; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v9; // [rsp+58h] [rbp-B0h] BYREF
  __int64 String2; // [rsp+60h] [rbp-A8h] BYREF
  UNICODE_STRING String2_8; // [rsp+68h] [rbp-A0h] BYREF
  UNICODE_STRING String1_8; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v13[16]; // [rsp+88h] [rbp-80h] BYREF
  _BYTE v14[256]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v15[256]; // [rsp+198h] [rbp+90h] BYREF

  v8 = 0LL;
  String2 = 256LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v3 = 0;
  v9 = 256LL;
  v7 = 0;
  v6 = 0;
  String2_8 = 0LL;
  String1_8 = 0LL;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, PreviousMode) )
    return 1;
  if ( (int)RtlQueryPackageClaims(a1, v14, &v9, 0LL, 0LL, 0LL, 0LL, 0LL) >= 0 )
  {
    v5 = (void *)PsReferenceEffectiveToken(KeGetCurrentThread(), 1953654867LL, &v7, &v6, v13, 0LL);
    if ( (int)RtlQueryPackageClaims(v5, v15, &String2, 0LL, 0LL, 0LL, &v8, 0LL) >= 0 && (v8 & 4) != 0 )
    {
      String1_8.Length = v9 - 2;
      String1_8.MaximumLength = v9 - 2;
      String1_8.Buffer = (wchar_t *)v14;
      String2_8.Length = String2 - 2;
      String2_8.MaximumLength = String2 - 2;
      String2_8.Buffer = (wchar_t *)v15;
      v3 = RtlCompareUnicodeString(&String1_8, &String2_8, 0) == 0;
    }
    if ( v5 )
    {
      if ( v7 == 1 )
        ObFastDereferenceObject(
          (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors,
          (ULONG_PTR)v5,
          0x74726853u);
      else
        ObfDereferenceObjectWithTag(v5, 0x74726853u);
    }
  }
  return v3;
}
