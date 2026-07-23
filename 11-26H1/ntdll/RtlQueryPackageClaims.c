/*
 * XREFs of RtlQueryPackageClaims @ 0x1800BFB80
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800BF760 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpConstructModernAppKeyName @ 0x1800BF994 (LdrpConstructModernAppKeyName.c)
 *     RtlQueryPackageIdentity @ 0x1800BFAA0 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageIdentityEx @ 0x1800BFB10 (RtlQueryPackageIdentityEx.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800CFF64 (RtlpHpOptIntoSegmentHeap.c)
 *     LdrpInitializePolicy @ 0x1800EB844 (LdrpInitializePolicy.c)
 *     AppModelPolicy_GetPolicy_Internal @ 0x180105860 (AppModelPolicy_GetPolicy_Internal.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1800BFE84 (RtlStringCbPrintfExW.c)
 *     RtlGUIDFromString @ 0x1800C0070 (RtlGUIDFromString.c)
 *     ZwQuerySecurityAttributesToken @ 0x180161B30 (ZwQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
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
  NTSTATUS v11; // edi
  unsigned __int8 v12; // bp
  ULONG v13; // esi
  NTSTATUS result; // eax
  __int64 v15; // rdx
  NTSTATUS v16; // eax
  wchar_t *v17; // rbx
  GUID *v18; // rax
  PSIZE_T v19; // rsi
  ULONG ReturnLength; // [rsp+40h] [rbp-3B8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-3B0h]
  __int64 v22; // [rsp+50h] [rbp-3A8h]
  wchar_t *v23; // [rsp+58h] [rbp-3A0h]
  PSIZE_T v24; // [rsp+60h] [rbp-398h]
  PGUID Guid; // [rsp+68h] [rbp-390h]
  _BYTE Buffer[4]; // [rsp+70h] [rbp-388h] BYREF
  int v27; // [rsp+74h] [rbp-384h]
  __int64 v28; // [rsp+78h] [rbp-380h]

  v24 = AppIdSize;
  v11 = 0;
  Guid = DynamicId;
  v23 = AppId;
  v22 = 0LL;
  memset_thunk_772440563353939046(Buffer, 0, 0x330uLL);
  v21 = 0LL;
  ReturnLength = 0;
  if ( AttributesPresent )
    *AttributesPresent = 0LL;
  v12 = 1;
  v13 = 1;
  if ( PkgClaim || AttributesPresent )
    v13 = 2;
  result = ZwQuerySecurityAttributesToken(TokenHandle, (PUNICODE_STRING)&Attributes, v13, Buffer, 0x330u, &ReturnLength);
  if ( result < 0 )
  {
    if ( v13 == 1 )
      return result;
    if ( result != -1073741275 )
      return result;
    result = ZwQuerySecurityAttributesToken(
               TokenHandle,
               (PUNICODE_STRING)&Attributes,
               1u,
               Buffer,
               0x330u,
               &ReturnLength);
    if ( result < 0 )
      return result;
    v12 = 0;
  }
  if ( !v27 )
    return -1073741275;
  v15 = v28;
  if ( PkgClaim )
  {
    if ( v12 )
      *PkgClaim = **(PPS_PKG_CLAIM *)(v28 + 72);
    else
      *PkgClaim = 0LL;
  }
  if ( AttributesPresent )
  {
    *AttributesPresent |= (2LL * v12) | 1;
    if ( ZwQuerySecurityAttributesToken(TokenHandle, (PUNICODE_STRING)&stru_180170D38, 1u, 0LL, 0, &ReturnLength) == -1073741789 )
      *AttributesPresent |= 4uLL;
    v16 = ZwQuerySecurityAttributesToken(TokenHandle, (PUNICODE_STRING)&stru_180170D48, 1u, 0LL, 0, &ReturnLength);
    v15 = v28;
    if ( v16 == -1073741789 )
      *AttributesPresent |= 8uLL;
  }
  if ( PackageFullName )
  {
    if ( PackageSize )
    {
      result = RtlStringCbPrintfExW(PackageFullName, 2048, (wchar_t *)L"%wZ", *(_QWORD *)(v15 + 32));
      v11 = result;
      if ( result < 0 )
        return result;
      v15 = v28;
      *PackageSize = v21 - (_QWORD)PackageFullName + 2;
      goto LABEL_24;
    }
    return -1073741811;
  }
  if ( PackageSize )
    return -1073741811;
LABEL_24:
  v17 = v23;
  if ( v23 )
  {
    v19 = v24;
    result = RtlStringCbPrintfExW(v23, 2048, (wchar_t *)L"%wZ", *(_BYTE *)(v15 + 32) + 16);
    v11 = result;
    if ( result < 0 )
      return result;
    v15 = v28;
    *v19 = v22 - (_QWORD)v17 + 2;
  }
  v18 = Guid;
  if ( Guid )
  {
    *Guid = 0LL;
    if ( *(_DWORD *)(v15 + 24) > 3u )
      RtlGUIDFromString((PUNICODE_STRING)(*(_QWORD *)(v15 + 32) + 48LL), v18);
  }
  return v11;
}
