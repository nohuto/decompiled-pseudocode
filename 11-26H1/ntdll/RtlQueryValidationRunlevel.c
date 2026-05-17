/*
 * XREFs of RtlQueryValidationRunlevel @ 0x180149310
 * Callers:
 *     <none>
 * Callees:
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x18015F220 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlQueryValidationRunlevel(__int64 a1)
{
  int v1; // ebx
  unsigned int v3; // edi
  int v5; // [rsp+30h] [rbp-30h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-28h] BYREF
  __int128 v7; // [rsp+40h] [rbp-20h] BYREF
  int v8; // [rsp+50h] [rbp-10h]

  v1 = 0;
  Handle = 0LL;
  v5 = 0;
  v8 = 0;
  v7 = 0LL;
  v3 = MEMORY[0x7FFE0258];
  if ( a1 && MEMORY[0x7FFE0258] != -1 && (int)NtOpenKey(&Handle, 1LL, &unk_180172B20) >= 0 )
  {
    if ( (int)NtQueryValueKey(Handle, a1, 2LL, &v7, 20, &v5) >= 0 && *(_QWORD *)((char *)&v7 + 4) == 0x400000004LL )
      v1 = HIDWORD(v7);
    NtClose(Handle);
  }
  return v1 | v3;
}
