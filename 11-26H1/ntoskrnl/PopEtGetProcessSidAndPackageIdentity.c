/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C
 * Callers:
 *     PopEtGetProcessAppId @ 0x1409C9DD4 (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140264CB0 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279330 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x140459DD0 (RtlQueryPackageIdentity.c)
 *     SeQueryUserSidToken @ 0x1409C9AA0 (SeQueryUserSidToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  void *v7; // rbp
  char v8; // bl
  ULONG_PTR PackageSize; // [rsp+60h] [rbp+8h] BYREF
  ULONG_PTR AppIdSize; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  v7 = (void *)PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, a3, a4);
  v8 = SeSecurityAttributePresent((__int64)v7, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent((__int64)v7, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v8 )
  {
    PackageSize = 256LL;
    AppIdSize = 132LL;
    if ( RtlQueryPackageIdentity(v7, (PWSTR)(a3 + 4), &PackageSize, (PWSTR)(a3 + 260), &AppIdSize, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (PackageSize >> 1) - 1;
      *(_WORD *)(a3 + 2) = (AppIdSize >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken((__int64)v7, a2, 0x44u, (unsigned int *)&PackageSize) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)(a1 + 584), (ULONG_PTR)v7, 0x746C6644u);
}
