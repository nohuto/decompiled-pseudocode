/*
 * XREFs of RtlQueryPackageClaims @ 0x140459AB0
 * Callers:
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140459608 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x1404CB0E4 (AppModelPolicy_GetPolicy_Internal.c)
 *     SepDesktopAppxSubProcessToken @ 0x14051E308 (SepDesktopAppxSubProcessToken.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x14081AACC (SeDuplicateTokenWithPredictedClaims.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageClaims(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PPS_PKG_CLAIM PkgClaim,
        PULONG64 AttributesPresent)
{
  unsigned __int8 v10; // r14
  int v11; // esi
  NTSTATUS result; // eax
  int v13; // esi
  __int64 v14; // rdx
  NTSTRSAFE_PWSTR v15; // rdi
  NTSTATUS v16; // ebx
  size_t *v17; // rdi
  int SecurityAttributesToken; // eax
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE v20; // [rsp+48h] [rbp-B8h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-B0h] BYREF
  NTSTRSAFE_PWSTR v22; // [rsp+58h] [rbp-A8h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+60h] [rbp-A0h] BYREF
  size_t *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[4]; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch]
  __int64 v27; // [rsp+78h] [rbp-88h]

  pszDest = PackageFullName;
  v20 = TokenHandle;
  v24 = AppIdSize;
  v22 = 0LL;
  memset_0(v25, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  v19 = 0;
  if ( AttributesPresent )
    *AttributesPresent = 0LL;
  v10 = 1;
  v11 = 1;
  if ( PkgClaim || AttributesPresent )
    v11 = 2;
  result = SeQuerySecurityAttributesToken(
             (_DWORD)v20,
             (unsigned int)&qword_140004640,
             v11,
             (unsigned int)v25,
             816,
             (__int64)&v19);
  if ( result >= 0 )
  {
    v13 = (int)v20;
  }
  else
  {
    if ( result != -1073741275 )
      return result;
    if ( v11 == 1 )
      return result;
    v13 = (int)v20;
    result = SeQuerySecurityAttributesToken(
               (_DWORD)v20,
               (unsigned int)&qword_140004640,
               1,
               (unsigned int)v25,
               816,
               (__int64)&v19);
    if ( result < 0 )
      return result;
    v10 = 0;
  }
  if ( !v26 )
    return -1073741275;
  v14 = v27;
  if ( PkgClaim )
  {
    if ( v10 )
      *PkgClaim = **(PPS_PKG_CLAIM *)(v27 + 72);
    else
      *PkgClaim = 0LL;
  }
  if ( AttributesPresent )
  {
    *AttributesPresent |= (2LL * v10) | 1;
    if ( (unsigned int)SeQuerySecurityAttributesToken(v13, (unsigned int)&qword_140004660, 1, 0, 0, (__int64)&v19) == -1073741789 )
      *AttributesPresent |= 4uLL;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                v13,
                                (unsigned int)&qword_140004670,
                                1,
                                0,
                                0,
                                (__int64)&v19);
    v14 = v27;
    if ( SecurityAttributesToken == -1073741789 )
      *AttributesPresent |= 8uLL;
  }
  v15 = pszDest;
  if ( pszDest )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(
                 pszDest,
                 *PackageSize,
                 &ppszDestEnd,
                 (size_t *)&pszDest,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v14 + 32));
      v16 = result;
      if ( result < 0 )
        return result;
      v14 = v27;
      *PackageSize = (char *)ppszDestEnd - (char *)v15 + 2;
      goto LABEL_22;
    }
    return -1073741811;
  }
  v16 = 0;
  if ( PackageSize )
    return -1073741811;
LABEL_22:
  if ( AppId )
  {
    v17 = v24;
    result = RtlStringCbPrintfExW(AppId, *v24, &v22, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    v16 = result;
    if ( result < 0 )
      return result;
    v14 = v27;
    *v17 = (char *)v22 - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v14 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v14 + 32) + 48LL), DynamicId);
  }
  return v16;
}
