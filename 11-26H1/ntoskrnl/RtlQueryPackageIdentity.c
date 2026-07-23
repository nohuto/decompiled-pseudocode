/*
 * XREFs of RtlQueryPackageIdentity @ 0x140459DD0
 * Callers:
 *     EtwpQueryTokenPackageInfo @ 0x1408FBFFC (EtwpQueryTokenPackageInfo.c)
 *     EtwpApplyPackageIdFilter @ 0x140913700 (EtwpApplyPackageIdFilter.c)
 *     PopEtGetProcessSidAndPackageIdentity @ 0x1409C9B4C (PopEtGetProcessSidAndPackageIdentity.c)
 *     PfSnCheckModernApp @ 0x1409D34B4 (PfSnCheckModernApp.c)
 *     ExpGetProcessInformation @ 0x1409DC1B8 (ExpGetProcessInformation.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentity(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PBOOLEAN Packaged)
{
  int v8; // r13d
  char v10; // bl
  int SecurityAttributesToken; // eax
  int v12; // r9d
  __int64 v14; // rax
  __int64 v15; // rbx
  size_t pcbRemaining; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PWSTR v18; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v19[4]; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h]
  __int64 v21; // [rsp+60h] [rbp-A0h]

  v8 = (int)TokenHandle;
  v18 = 0LL;
  memset_0(v19, 0, 0x330uLL);
  LODWORD(pcbRemaining) = 0;
  ppszDestEnd = 0LL;
  v10 = 1;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              v8,
                              (unsigned int)&qword_140004640,
                              2,
                              (unsigned int)v19,
                              816,
                              (__int64)&pcbRemaining);
  v12 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return v12;
    v12 = SeQuerySecurityAttributesToken(
            v8,
            (unsigned int)&qword_140004640,
            1,
            (unsigned int)v19,
            816,
            (__int64)&pcbRemaining);
    if ( v12 < 0 )
      return v12;
    v10 = 0;
  }
  if ( !v20 )
    return -1073741275;
  v14 = v21;
  if ( v10 )
    v15 = **(_QWORD **)(v21 + 72);
  else
    LODWORD(v15) = 0;
  v12 = 0;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      v12 = RtlStringCbPrintfExW(
              PackageFullName,
              *PackageSize,
              &ppszDestEnd,
              &pcbRemaining,
              0x800u,
              L"%wZ",
              *(_QWORD *)(v21 + 32));
      if ( v12 < 0 )
        return v12;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      v14 = v21;
      goto LABEL_13;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_13:
  if ( AppId )
  {
    v12 = RtlStringCbPrintfExW(AppId, *AppIdSize, &v18, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v14 + 32) + 16LL);
    if ( v12 < 0 )
      return v12;
    *AppIdSize = (char *)v18 - (char *)AppId + 2;
  }
  if ( Packaged )
    *Packaged = (_DWORD)v15 != 0;
  return v12;
}
