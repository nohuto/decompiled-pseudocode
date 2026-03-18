/*
 * XREFs of RtlQueryPackageClaims @ 0x140460570
 * Callers:
 *     AppModelPolicy_GetPolicy_Internal @ 0x14045FB18 (AppModelPolicy_GetPolicy_Internal.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14045FC94 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SepDesktopAppxSubProcessToken @ 0x14045FEB8 (SepDesktopAppxSubProcessToken.c)
 *     SeDuplicateTokenWithPredictedClaims @ 0x1408149DC (SeDuplicateTokenWithPredictedClaims.c)
 *     SeQuerySigningPolicyWorker @ 0x140A2A0A4 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140460AA8 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlGUIDFromString @ 0x1409A1880 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x140A7CEC0 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __fastcall RtlQueryPackageClaims(
        __int64 a1,
        wchar_t *a2,
        size_t *a3,
        wchar_t *a4,
        size_t *a5,
        GUID *Guid,
        _QWORD *a7,
        _QWORD *a8)
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
  __int64 v20; // [rsp+48h] [rbp-B8h]
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+50h] [rbp-B0h] BYREF
  NTSTRSAFE_PWSTR v22; // [rsp+58h] [rbp-A8h] BYREF
  NTSTRSAFE_PWSTR pszDest; // [rsp+60h] [rbp-A0h] BYREF
  size_t *v24; // [rsp+68h] [rbp-98h]
  _BYTE v25[4]; // [rsp+70h] [rbp-90h] BYREF
  int v26; // [rsp+74h] [rbp-8Ch]
  __int64 v27; // [rsp+78h] [rbp-88h]

  pszDest = a2;
  v20 = a1;
  v24 = a5;
  v22 = 0LL;
  memset_0(v25, 0, 0x330uLL);
  ppszDestEnd = 0LL;
  v19 = 0;
  if ( a8 )
    *a8 = 0LL;
  v10 = 1;
  v11 = 1;
  if ( a7 || a8 )
    v11 = 2;
  result = SeQuerySecurityAttributesToken(
             v20,
             (unsigned int)&qword_140004620,
             v11,
             (unsigned int)v25,
             816,
             (__int64)&v19);
  if ( result >= 0 )
  {
    v13 = v20;
  }
  else
  {
    if ( result != -1073741275 )
      return result;
    if ( v11 == 1 )
      return result;
    v13 = v20;
    result = SeQuerySecurityAttributesToken(
               v20,
               (unsigned int)&qword_140004620,
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
  if ( a7 )
  {
    if ( v10 )
      *a7 = **(_QWORD **)(v27 + 72);
    else
      *a7 = 0LL;
  }
  if ( a8 )
  {
    *a8 |= (2LL * v10) | 1;
    if ( (unsigned int)SeQuerySecurityAttributesToken(v13, (unsigned int)&qword_140004640, 1, 0, 0, (__int64)&v19) == -1073741789 )
      *a8 |= 4uLL;
    SecurityAttributesToken = SeQuerySecurityAttributesToken(
                                v13,
                                (unsigned int)&qword_140004650,
                                1,
                                0,
                                0,
                                (__int64)&v19);
    v14 = v27;
    if ( SecurityAttributesToken == -1073741789 )
      *a8 |= 8uLL;
  }
  v15 = pszDest;
  if ( pszDest )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(
                 pszDest,
                 *a3,
                 &ppszDestEnd,
                 (size_t *)&pszDest,
                 0x800u,
                 L"%wZ",
                 *(_QWORD *)(v14 + 32));
      v16 = result;
      if ( result < 0 )
        return result;
      v14 = v27;
      *a3 = (char *)ppszDestEnd - (char *)v15 + 2;
      goto LABEL_22;
    }
    return -1073741811;
  }
  v16 = 0;
  if ( a3 )
    return -1073741811;
LABEL_22:
  if ( a4 )
  {
    v17 = v24;
    result = RtlStringCbPrintfExW(a4, *v24, &v22, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    v16 = result;
    if ( result < 0 )
      return result;
    v14 = v27;
    *v17 = (char *)v22 - (char *)a4 + 2;
  }
  if ( Guid )
  {
    *Guid = 0LL;
    if ( *(_DWORD *)(v14 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v14 + 32) + 48LL), Guid);
  }
  return v16;
}
