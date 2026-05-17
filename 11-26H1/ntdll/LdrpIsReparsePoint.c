/*
 * XREFs of LdrpIsReparsePoint @ 0x1800C5E78
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x18002DF70 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpResSearchResourceMappedFile @ 0x1800A80C0 (LdrpResSearchResourceMappedFile.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlpDosPathNameToRelativeNtPathName @ 0x180044540 (RtlpDosPathNameToRelativeNtPathName.c)
 *     LdrpGetLoadAsEntry @ 0x1800C603C (LdrpGetLoadAsEntry.c)
 *     LdrFindEntryForAddress @ 0x1800C6110 (LdrFindEntryForAddress.c)
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     ZwQueryAttributesFile @ 0x18015F6E0 (ZwQueryAttributesFile.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpIsReparsePoint(__int64 a1)
{
  unsigned int v1; // ebx
  const wchar_t *v2; // rcx
  size_t v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __m128i v7; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v8; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v9; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v10; // [rsp+78h] [rbp-90h]
  _DWORD v11[2]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v12; // [rsp+90h] [rbp-78h]
  __int128 *v13; // [rsp+98h] [rbp-70h]
  int v14; // [rsp+A0h] [rbp-68h]
  int v15; // [rsp+A4h] [rbp-64h]
  __int128 v16; // [rsp+A8h] [rbp-60h]
  wchar_t *String[2]; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v18; // [rsp+C8h] [rbp-40h]
  __int128 v19; // [rsp+D8h] [rbp-30h]
  _OWORD v20[2]; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v21; // [rsp+108h] [rbp+0h]

  v7.m128i_i64[0] = 0LL;
  v11[1] = 0;
  v15 = 0;
  v1 = -1073741823;
  v21 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  memset(v20, 0, sizeof(v20));
  *(_OWORD *)String = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    if ( (int)LdrpGetLoadAsEntry(a1, String) < 0 )
      return v1;
    v2 = String[1];
  }
  else
  {
    if ( (int)LdrFindEntryForAddress(a1, &v7) < 0 )
      return v1;
    v2 = *(const wchar_t **)(v7.m128i_i64[0] + 80);
  }
  v7.m128i_i64[0] = 0LL;
  v7.m128i_i64[1] = (__int64)v2;
  if ( v2 )
  {
    v3 = wcslen(v2);
    if ( v3 > 0x7FFE )
      return v1;
    v7.m128i_i16[0] = 2 * v3;
    v7.m128i_i16[1] = 2 * v3 + 2;
  }
  if ( (int)RtlpDosPathNameToRelativeNtPathName(2, &v7, 0LL, (unsigned __int16 *)&v8, 0LL, 0LL, (__int64)&v9) >= 0 )
  {
    v4 = *((_QWORD *)&v8 + 1);
    if ( (_WORD)v9 )
    {
      v5 = v10;
      v8 = v9;
    }
    else
    {
      v5 = 0LL;
    }
    v11[0] = 48;
    v14 = 64;
    v13 = &v8;
    v12 = v5 & -(__int64)(v4 != 0);
    v16 = 0LL;
    if ( (int)ZwQueryAttributesFile(v11, v20) >= 0 && (v21 & 0x400) != 0 )
      v1 = 0;
    if ( v4 )
      RtlFreeHeap_0();
  }
  return v1;
}
