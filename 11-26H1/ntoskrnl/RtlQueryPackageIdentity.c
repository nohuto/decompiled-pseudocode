/*
 * XREFs of RtlQueryPackageIdentity @ 0x140460890
 * Callers:
 *     EtwpApplyPackageIdFilter @ 0x140937B60 (EtwpApplyPackageIdFilter.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x14094E20C (PopEtGetProcessSidAndPackageIdentity.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     EtwpQueryTokenPackageInfo @ 0x14096DBF8 (EtwpQueryTokenPackageInfo.c)
 *     PfSnCheckModernApp @ 0x1409E923C (PfSnCheckModernApp.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140460AA8 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     SeQuerySecurityAttributesToken @ 0x140A7CEC0 (SeQuerySecurityAttributesToken.c)
 */

__int64 __fastcall RtlQueryPackageIdentity(int a1, wchar_t *a2, size_t *a3, wchar_t *a4, size_t *a5, bool *a6)
{
  char v10; // bl
  int SecurityAttributesToken; // eax
  NTSTATUS v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t pcbRemaining; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PWSTR v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h]
  __int64 v21; // [rsp+60h] [rbp-A0h]

  v18 = 0LL;
  memset_0(v19, 0, 0x330uLL);
  LODWORD(pcbRemaining) = 0;
  ppszDestEnd = 0LL;
  v10 = 1;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              a1,
                              (unsigned int)&qword_140004620,
                              2,
                              (unsigned int)v19,
                              816,
                              (__int64)&pcbRemaining);
  v12 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return (unsigned int)v12;
    v12 = SeQuerySecurityAttributesToken(
            a1,
            (unsigned int)&qword_140004620,
            1,
            (unsigned int)v19,
            816,
            (__int64)&pcbRemaining);
    if ( v12 < 0 )
      return (unsigned int)v12;
    v10 = 0;
  }
  if ( !v20 )
    return (unsigned int)-1073741275;
  v14 = v21;
  if ( v10 )
    v15 = **(_QWORD **)(v21 + 72);
  else
    LODWORD(v15) = 0;
  v12 = 0;
  if ( a2 )
  {
    if ( a3 )
    {
      v12 = RtlStringCbPrintfExW(a2, *a3, &ppszDestEnd, &pcbRemaining, 0x800u, L"%wZ", *(_QWORD *)(v21 + 32));
      if ( v12 < 0 )
        return (unsigned int)v12;
      *a3 = (char *)ppszDestEnd - (char *)a2 + 2;
      v14 = v21;
      goto LABEL_13;
    }
    return (unsigned int)-1073741811;
  }
  if ( a3 )
    return (unsigned int)-1073741811;
LABEL_13:
  if ( a4 )
  {
    v12 = RtlStringCbPrintfExW(a4, *a5, &v18, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    if ( v12 < 0 )
      return (unsigned int)v12;
    *a5 = (char *)v18 - (char *)a4 + 2;
  }
  if ( a6 )
    *a6 = (_DWORD)v15 != 0;
  return (unsigned int)v12;
}
