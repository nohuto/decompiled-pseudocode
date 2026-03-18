/*
 * XREFs of PopEtGetProcessSidAndPackageIdentity @ 0x14094E20C
 * Callers:
 *     PopEtGetProcessAppId @ 0x14094E494 (PopEtGetProcessAppId.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x140265740 (ObFastDereferenceObject.c)
 *     PsReferencePrimaryTokenWithTag @ 0x140279DC0 (PsReferencePrimaryTokenWithTag.c)
 *     SeSecurityAttributePresent @ 0x1402B4AC0 (SeSecurityAttributePresent.c)
 *     RtlQueryPackageIdentity @ 0x140460890 (RtlQueryPackageIdentity.c)
 *     SeQueryUserSidToken @ 0x14094E160 (SeQueryUserSidToken.c)
 */

signed __int64 __fastcall PopEtGetProcessSidAndPackageIdentity(
        __int64 a1,
        _DWORD *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  ULONG_PTR v7; // rbp
  char v8; // bl
  size_t v10; // [rsp+60h] [rbp+8h] BYREF
  size_t v11; // [rsp+68h] [rbp+10h] BYREF

  *(_DWORD *)a3 = 0;
  *(_QWORD *)a2 = 0LL;
  a2[2] = 0;
  v7 = PsReferencePrimaryTokenWithTag(a1, 0x746C6644u, a3, a4);
  v8 = SeSecurityAttributePresent(v7, (const UNICODE_STRING *)&PspSysAppIdClaim);
  SeSecurityAttributePresent(v7, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v8 )
  {
    v10 = 256LL;
    v11 = 132LL;
    if ( (int)RtlQueryPackageIdentity(v7, (wchar_t *)(a3 + 4), &v10, (wchar_t *)(a3 + 260), &v11, 0LL) >= 0 )
    {
      *(_WORD *)a3 = (v10 >> 1) - 1;
      *(_WORD *)(a3 + 2) = (v11 >> 1) - 1;
    }
  }
  if ( (int)SeQueryUserSidToken(v7, a2, 0x44u, (unsigned int *)&v10) < 0 )
  {
    *(_QWORD *)a2 = 0LL;
    a2[2] = 0;
  }
  return ObFastDereferenceObject((signed __int64 *)(a1 + 584), v7, 0x746C6644u);
}
