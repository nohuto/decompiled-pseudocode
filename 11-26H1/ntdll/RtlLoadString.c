/*
 * XREFs of RtlLoadString @ 0x1800A9FC0
 * Callers:
 *     <none>
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180019960 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceData @ 0x18001B110 (LdrpAccessResourceData.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     LdrResSearchResource @ 0x1800AA2E0 (LdrResSearchResource.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 */

NTSTATUS __cdecl RtlLoadString(
        PVOID DllHandle,
        ULONG StringId,
        PCWSTR StringLanguage,
        ULONG Flags,
        PCWSTR *ReturnString,
        PUSHORT ReturnStringLen,
        PWSTR ReturnLanguageName,
        PULONG ReturnLanguageLen)
{
  unsigned int v8; // r10d
  const wchar_t *v9; // r15
  unsigned __int16 v11; // bx
  char v12; // si
  NTSTATUS v13; // r8d
  unsigned __int64 v14; // r9
  int v15; // edi
  unsigned __int64 v16; // r9
  USHORT v17; // dx
  DWORD lcid; // [rsp+40h] [rbp-88h] BYREF
  __int64 v20; // [rsp+48h] [rbp-80h] BYREF
  __int64 v21; // [rsp+50h] [rbp-78h] BYREF
  __int64 v22; // [rsp+58h] [rbp-70h] BYREF
  PCWSTR *v23; // [rsp+60h] [rbp-68h]
  PUSHORT v24; // [rsp+68h] [rbp-60h]
  const wchar_t *v25[4]; // [rsp+70h] [rbp-58h] BYREF

  v8 = (unsigned int)StringLanguage;
  v9 = (const wchar_t *)(unsigned __int16)StringId;
  v23 = ReturnString;
  v24 = ReturnStringLen;
  v11 = 0;
  v22 = 0LL;
  v21 = 0LL;
  lcid = 0;
  v12 = Flags & 1;
  if ( !DllHandle || !ReturnString || (Flags & 0xFFFFFFFE) != 0 )
    return -1073741811;
  if ( !v12 || !ReturnLanguageName && !ReturnLanguageLen )
  {
    if ( (unsigned int)StringLanguage <= 0xFFFF )
      goto LABEL_8;
    if ( *StringLanguage )
    {
      if ( RtlLocaleNameToLcid(StringLanguage, &lcid, 3u) < 0 )
        return -1073741811;
      v8 = (unsigned __int16)lcid;
      lcid = (unsigned __int16)lcid;
    }
    else
    {
      v8 = 0;
      lcid = 0;
    }
LABEL_8:
    v25[0] = (const wchar_t *)6;
    v25[1] = (const wchar_t *)(((unsigned int)v9 >> 4) + 1);
    v25[2] = (const wchar_t *)v8;
    v25[3] = v9;
    v20 = 0LL;
    if ( v12 )
    {
      v13 = LdrpSearchResourceSection_U((unsigned __int64)DllHandle, v25, 4u, 1u, (__int64)&v22);
      if ( v13 < 0 )
        return v13;
      v13 = LdrpAccessResourceData((unsigned __int64)DllHandle, v22);
      v14 = v20;
    }
    else
    {
      v13 = LdrResSearchResource(
              DllHandle,
              (__int64)&v21,
              (__int64)&v20,
              (__int64)ReturnLanguageName,
              (__int64)ReturnLanguageLen);
      v14 = v20;
      if ( v13 >= 0 && (unsigned __int64)v20 > 0xFFFF )
        return -1073741701;
    }
    if ( v13 < 0 || !v21 )
      return v13;
    v15 = (unsigned __int8)v9 & 0xF;
    v16 = v14 >> 1;
    v20 = v16;
    while ( 1 )
    {
      v17 = *(_WORD *)(v21 + 2LL * v11);
      v11 += v17 + 1;
      if ( !v12 && v11 > v16 )
        break;
      if ( --v15 < 0 )
      {
        if ( v11 && v17 )
          v11 -= v17;
        *v23 = (PCWSTR)(v21 + 2LL * v11);
        if ( v24 )
          *v24 = v17;
        return v13;
      }
    }
    return -1073741701;
  }
  return -1073741637;
}
