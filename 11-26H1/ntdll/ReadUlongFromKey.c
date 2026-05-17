/*
 * XREFs of ReadUlongFromKey @ 0x18006266C
 * Callers:
 *     RtlpGetDeviceFamilyInfoEnum @ 0x1800623B0 (RtlpGetDeviceFamilyInfoEnum.c)
 * Callees:
 *     wcslen @ 0x18012DAE0 (wcslen.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall ReadUlongFromKey(__int64 a1, const wchar_t *a2, _DWORD *a3)
{
  size_t v5; // rax
  __int64 result; // rax
  int v7; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v8[2]; // [rsp+38h] [rbp-38h] BYREF
  __int128 v9; // [rsp+48h] [rbp-28h] BYREF
  int v10; // [rsp+58h] [rbp-18h]

  v8[1] = a2;
  v10 = 0;
  v7 = 0;
  *a3 = 0;
  v8[0] = 0LL;
  v9 = 0LL;
  if ( a2 )
  {
    v5 = 2 * wcslen(a2);
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    LOWORD(v8[0]) = v5;
    WORD1(v8[0]) = v5 + 2;
  }
  result = NtQueryValueKey(a1, v8, 2LL, &v9, 20, &v7);
  if ( (int)result >= 0 )
  {
    if ( *(_QWORD *)((char *)&v9 + 4) == 0x400000004LL )
    {
      *a3 = HIDWORD(v9);
      return 0LL;
    }
    else
    {
      return 3221225473LL;
    }
  }
  return result;
}
