/*
 * XREFs of EtwpQueryTokenPackageInfo @ 0x1408FBFFC
 * Callers:
 *     EtwpBuildProcessEvent @ 0x1408FBCAC (EtwpBuildProcessEvent.c)
 *     EtwpPsProvProcessEnumCallback @ 0x1409BA820 (EtwpPsProvProcessEnumCallback.c)
 *     EtwTraceAppStateChange @ 0x1409CF9F8 (EtwTraceAppStateChange.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1409D1C14 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     SeSecurityAttributePresent @ 0x1402FF790 (SeSecurityAttributePresent.c)
 *     RtlStringCchCopyNExW @ 0x14041D2F0 (RtlStringCchCopyNExW.c)
 *     RtlQueryPackageIdentity @ 0x140459DD0 (RtlQueryPackageIdentity.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 */

int __fastcall EtwpQueryTokenPackageInfo(HANDLE TokenHandle, WCHAR *PackageSize, _DWORD *a3)
{
  PSIZE_T v3; // rsi
  char v7; // bl
  char v8; // r12
  unsigned __int64 v9; // rax
  size_t v10; // r9
  ULONG_PTR v11; // rsi
  size_t v12; // r15
  size_t v13; // rdx
  NTSTRSAFE_PWSTR v14; // r11
  size_t v15; // r10
  NTSTRSAFE_PWSTR v16; // r9
  size_t v17; // rcx
  __int64 v18; // r8
  signed __int64 v19; // rsi
  size_t v20; // rbx
  wchar_t v21; // ax
  __int64 v22; // rcx
  NTSTRSAFE_PWSTR v23; // rax
  int v24; // r8d
  NTSTRSAFE_PWSTR pszDest; // [rsp+88h] [rbp+48h] BYREF
  size_t cchDest; // [rsp+98h] [rbp+58h] BYREF

  v3 = (PSIZE_T)(PackageSize + 4);
  *(_QWORD *)PackageSize = 0LL;
  *((_QWORD *)PackageSize + 1) = 0LL;
  v7 = SeSecurityAttributePresent((__int64)TokenHandle, (const UNICODE_STRING *)&PspSysAppIdClaim);
  v8 = SeSecurityAttributePresent((__int64)TokenHandle, (const UNICODE_STRING *)&PspPackagedAppClaim);
  if ( v7 )
  {
    *a3 |= 1u;
    *(_QWORD *)PackageSize = 256LL;
    *v3 = 130LL;
    if ( RtlQueryPackageIdentity(TokenHandle, PackageSize + 12, (PSIZE_T)PackageSize, PackageSize + 140, v3, 0LL) < 0 )
    {
      *v3 = 0LL;
      v3 = (PSIZE_T)(PackageSize + 4);
      *(_QWORD *)PackageSize = 0LL;
    }
    if ( v8 )
      *a3 |= 8u;
  }
  v9 = *(_QWORD *)PackageSize;
  if ( !*(_QWORD *)PackageSize )
  {
    *(_QWORD *)PackageSize = 2LL;
    v9 = 2LL;
    PackageSize[12] = 0;
  }
  if ( !*v3 )
  {
    *v3 = 2LL;
    PackageSize[140] = 0;
  }
  *((_QWORD *)PackageSize + 2) = 2LL;
  PackageSize[205] = 0;
  if ( v9 <= 2 )
    return v9;
  if ( *v3 <= 2 )
    return v9;
  v9 = (unsigned __int64)wcschr(PackageSize + 12, 0x5Fu);
  if ( !v9 )
    return v9;
  v10 = (__int64)(v9 - (_QWORD)PackageSize - 22) >> 1;
  v11 = (*(_QWORD *)PackageSize >> 1) - 1LL;
  if ( v11 <= 0xD )
    return v9;
  v12 = (*((_QWORD *)PackageSize + 1) >> 1) - 1LL;
  v9 = 2 * (v12 + v10) + 30;
  if ( v9 > 0x104 )
    return v9;
  pszDest = 0LL;
  cchDest = 130LL;
  LODWORD(v9) = RtlStringCchCopyNExW(PackageSize + 205, 0x82uLL, PackageSize + 12, v10, &pszDest, &cchDest, 0x800u);
  if ( (v9 & 0x80000000) != 0LL )
    goto LABEL_38;
  LODWORD(v9) = RtlStringCchCopyNExW(pszDest, cchDest, &PackageSize[v11 - 1], 0xDuLL, &pszDest, &cchDest, 0x800u);
  if ( (v9 & 0x80000000) != 0LL )
    goto LABEL_38;
  v13 = cchDest;
  LODWORD(v9) = cchDest - 1;
  if ( cchDest - 1 > 0x7FFFFFFE )
  {
    if ( cchDest )
    {
      LODWORD(v9) = (_DWORD)pszDest;
      *pszDest = 0;
    }
    goto LABEL_38;
  }
  v14 = pszDest;
  v15 = cchDest;
  v16 = pszDest;
  if ( cchDest )
  {
    v17 = 1 - cchDest;
    v18 = 0LL;
    v19 = (char *)L"!" - (char *)pszDest;
    v20 = cchDest;
    do
    {
      if ( !(v17 + v20) )
        break;
      v21 = *(NTSTRSAFE_PWSTR)((char *)v16 + v19);
      if ( !v21 )
        break;
      *v16 = v21;
      ++v18;
      ++v16;
      --v20;
    }
    while ( v20 );
    v22 = v18 - 1;
    v23 = v16 - 1;
    if ( v20 )
    {
      v23 = v16;
      v22 = v18;
    }
    *v23 = 0;
    v16 = &v14[v22];
    v9 = -(__int64)v20;
    v15 = v13 - v22;
    v24 = v20 == 0 ? 0x80000005 : 0;
    if ( v20 )
      goto LABEL_23;
  }
  else
  {
    v9 = -(__int64)pszDest;
    v24 = pszDest != 0LL ? -2147483643 : -1073741811;
  }
  if ( v13 )
  {
    v9 = (2 * v13) >> 1;
    if ( v9 )
    {
      v16 = v14;
      *v14 = 0;
      v15 = (2 * v13) >> 1;
    }
  }
  if ( v24 == -2147483643 )
  {
LABEL_23:
    v14 = v16;
    v13 = v15;
  }
  if ( v24 < 0
    || (LODWORD(v9) = RtlStringCchCopyNExW(v14, v13, PackageSize + 140, v12, &pszDest, &cchDest, 0x800u),
        (v9 & 0x80000000) != 0LL) )
  {
LABEL_38:
    *((_QWORD *)PackageSize + 2) = 2LL;
    PackageSize[205] = 0;
  }
  return v9;
}
