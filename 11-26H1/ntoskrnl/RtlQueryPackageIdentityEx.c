/*
 * XREFs of RtlQueryPackageIdentityEx @ 0x140459830
 * Callers:
 *     PspIdentityBasedJobBreakaway @ 0x140B11760 (PspIdentityBasedJobBreakaway.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x140459FE8 (RtlStringCbPrintfExW.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlGUIDFromString @ 0x1409622E0 (RtlGUIDFromString.c)
 *     SeQuerySecurityAttributesToken @ 0x140A82D30 (SeQuerySecurityAttributesToken.c)
 */

NTSTATUS __cdecl RtlQueryPackageIdentityEx(
        HANDLE TokenHandle,
        PWSTR PackageFullName,
        PSIZE_T PackageSize,
        PWSTR AppId,
        PSIZE_T AppIdSize,
        PGUID DynamicId,
        PULONG64 Flags)
{
  int v9; // ebx
  _QWORD *v10; // rdi
  char v12; // r14
  int SecurityAttributesToken; // eax
  int v14; // ebx
  __int64 v15; // rdx
  size_t *v16; // rdi
  int v18; // [rsp+40h] [rbp-C0h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+48h] [rbp-B8h] BYREF
  NTSTRSAFE_PWSTR v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  size_t pcbRemaining; // [rsp+60h] [rbp-A0h] BYREF
  size_t *v23; // [rsp+68h] [rbp-98h]
  PULONG64 v24; // [rsp+70h] [rbp-90h]
  _BYTE v25[4]; // [rsp+78h] [rbp-88h] BYREF
  int v26; // [rsp+7Ch] [rbp-84h]
  __int64 v27; // [rsp+80h] [rbp-80h]

  v23 = AppIdSize;
  v9 = (int)TokenHandle;
  v24 = Flags;
  pcbRemaining = (size_t)TokenHandle;
  v21 = 0LL;
  v20 = 0LL;
  v10 = (_QWORD *)((unsigned __int64)&v21 & -(__int64)(Flags != 0LL));
  memset_0(v25, 0, 0x330uLL);
  v18 = 0;
  ppszDestEnd = 0LL;
  v12 = 1;
  SecurityAttributesToken = SeQuerySecurityAttributesToken(
                              v9,
                              (unsigned int)&qword_140004640,
                              (unsigned int)(v10 != 0LL) + 1,
                              (unsigned int)v25,
                              816,
                              (__int64)&v18);
  v14 = SecurityAttributesToken;
  if ( SecurityAttributesToken < 0 )
  {
    if ( SecurityAttributesToken != -1073741275 )
      return v14;
    if ( !v10 )
      return v14;
    v14 = SeQuerySecurityAttributesToken(
            pcbRemaining,
            (unsigned int)&qword_140004640,
            1,
            (unsigned int)v25,
            816,
            (__int64)&v18);
    if ( v14 < 0 )
      return v14;
    v12 = 0;
  }
  if ( !v26 )
    return -1073741275;
  v15 = v27;
  if ( v10 )
  {
    if ( v12 )
      *v10 = **(_QWORD **)(v27 + 72);
    else
      *v10 = 0LL;
  }
  v14 = 0;
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      v14 = RtlStringCbPrintfExW(
              PackageFullName,
              *PackageSize,
              &ppszDestEnd,
              &pcbRemaining,
              0x800u,
              L"%wZ",
              *(_QWORD *)(v15 + 32));
      if ( v14 < 0 )
        return v14;
      v15 = v27;
      *PackageSize = (char *)ppszDestEnd - (char *)PackageFullName + 2;
      goto LABEL_14;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_14:
  if ( AppId )
  {
    v16 = v23;
    v14 = RtlStringCbPrintfExW(AppId, *v23, &v20, 0LL, 0x800u, L"%wZ", *(_QWORD *)(v15 + 32) + 16LL);
    if ( v14 < 0 )
      return v14;
    v15 = v27;
    *v16 = (char *)v20 - (char *)AppId + 2;
  }
  if ( DynamicId )
  {
    *DynamicId = 0LL;
    if ( *(_DWORD *)(v15 + 24) > 3u )
      RtlGUIDFromString((PCUNICODE_STRING)(*(_QWORD *)(v15 + 32) + 48LL), DynamicId);
  }
  if ( v24 )
    *v24 = (unsigned int)v21;
  return v14;
}
