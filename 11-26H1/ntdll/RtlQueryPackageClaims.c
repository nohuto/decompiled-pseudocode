/*
 * XREFs of RtlQueryPackageClaims @ 0x1800C24B0
 * Callers:
 *     LdrAppxHandleIntegrityFailure @ 0x1800C1AB0 (LdrAppxHandleIntegrityFailure.c)
 *     LdrpConstructModernAppKeyName @ 0x1800C1CE4 (LdrpConstructModernAppKeyName.c)
 *     LdrpInitializePolicy @ 0x1800C1DF0 (LdrpInitializePolicy.c)
 *     RtlQueryPackageIdentity @ 0x1800C23D0 (RtlQueryPackageIdentity.c)
 *     RtlQueryPackageIdentityEx @ 0x1800C2440 (RtlQueryPackageIdentityEx.c)
 *     RtlpHpOptIntoSegmentHeap @ 0x1800D424C (RtlpHpOptIntoSegmentHeap.c)
 * Callees:
 *     RtlStringCbPrintfExW @ 0x1800C27B4 (RtlStringCbPrintfExW.c)
 *     RtlGUIDFromString @ 0x1800C29A0 (RtlGUIDFromString.c)
 *     ZwQuerySecurityAttributesToken @ 0x180161C30 (ZwQuerySecurityAttributesToken.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlQueryPackageClaims(
        __int64 a1,
        wchar_t *a2,
        _QWORD *a3,
        wchar_t *a4,
        _QWORD *a5,
        _OWORD *a6,
        _QWORD *a7,
        _QWORD *a8)
{
  unsigned int v11; // edi
  unsigned __int8 v12; // bp
  unsigned int v13; // esi
  __int64 result; // rax
  __int64 v15; // rdx
  int v16; // eax
  wchar_t *v17; // rbx
  _OWORD *v18; // rax
  _QWORD *v19; // rsi
  int v20; // [rsp+40h] [rbp-3B8h] BYREF
  __int64 v21; // [rsp+48h] [rbp-3B0h]
  __int64 v22; // [rsp+50h] [rbp-3A8h]
  wchar_t *Buffer; // [rsp+58h] [rbp-3A0h]
  _QWORD *v24; // [rsp+60h] [rbp-398h]
  _OWORD *v25; // [rsp+68h] [rbp-390h]
  _BYTE v26[4]; // [rsp+70h] [rbp-388h] BYREF
  int v27; // [rsp+74h] [rbp-384h]
  __int64 v28; // [rsp+78h] [rbp-380h]

  v24 = a5;
  v11 = 0;
  v25 = a6;
  Buffer = a4;
  v22 = 0LL;
  memset_thunk_772440563353939046(v26, 0, 0x330uLL);
  v21 = 0LL;
  v20 = 0;
  if ( a8 )
    *a8 = 0LL;
  v12 = 1;
  v13 = 1;
  if ( a7 || a8 )
    v13 = 2;
  result = ZwQuerySecurityAttributesToken(a1, &unk_180171D20, v13, v26, 816, &v20);
  if ( (int)result < 0 )
  {
    if ( v13 == 1 )
      return result;
    if ( (_DWORD)result != -1073741275 )
      return result;
    result = ZwQuerySecurityAttributesToken(a1, &unk_180171D20, 1LL, v26, 816, &v20);
    if ( (int)result < 0 )
      return result;
    v12 = 0;
  }
  if ( !v27 )
    return 3221226021LL;
  v15 = v28;
  if ( a7 )
  {
    if ( v12 )
      *a7 = **(_QWORD **)(v28 + 72);
    else
      *a7 = 0LL;
  }
  if ( a8 )
  {
    *a8 |= (2LL * v12) | 1;
    if ( (unsigned int)ZwQuerySecurityAttributesToken(a1, &unk_180171D40, 1LL, 0LL, 0, &v20) == -1073741789 )
      *a8 |= 4uLL;
    v16 = ZwQuerySecurityAttributesToken(a1, &unk_180171D50, 1LL, 0LL, 0, &v20);
    v15 = v28;
    if ( v16 == -1073741789 )
      *a8 |= 8uLL;
  }
  if ( a2 )
  {
    if ( a3 )
    {
      result = RtlStringCbPrintfExW(a2, 2048, (wchar_t *)L"%wZ", *(_QWORD *)(v15 + 32));
      v11 = result;
      if ( (int)result < 0 )
        return result;
      v15 = v28;
      *a3 = v21 - (_QWORD)a2 + 2;
      goto LABEL_24;
    }
    return 3221225485LL;
  }
  if ( a3 )
    return 3221225485LL;
LABEL_24:
  v17 = Buffer;
  if ( Buffer )
  {
    v19 = v24;
    result = RtlStringCbPrintfExW(Buffer, 2048, (wchar_t *)L"%wZ", *(_BYTE *)(v15 + 32) + 16);
    v11 = result;
    if ( (int)result < 0 )
      return result;
    v15 = v28;
    *v19 = v22 - (_QWORD)v17 + 2;
  }
  v18 = v25;
  if ( v25 )
  {
    *v25 = 0LL;
    if ( *(_DWORD *)(v15 + 24) > 3u )
      RtlGUIDFromString(*(_QWORD *)(v15 + 32) + 48LL, v18);
  }
  return v11;
}
