/*
 * XREFs of AVrfOpenCurrentUserImageFileOptionsKey @ 0x18005AAC0
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x180118558 (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180058DC0 (RtlAppendUnicodeStringToString.c)
 *     AVrfpFormatCurrentUserKeyPath @ 0x18011E79C (AVrfpFormatCurrentUserKeyPath.c)
 *     NtOpenKey @ 0x18015F180 (NtOpenKey.c)
 */

__int64 __fastcall AVrfOpenCurrentUserImageFileOptionsKey(unsigned __int16 *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  int v6; // eax
  __int64 v7; // rcx
  int v8; // edx
  __int128 v9; // [rsp+20h] [rbp-50h] BYREF
  __int128 v10; // [rsp+30h] [rbp-40h] BYREF
  _DWORD v11[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v12; // [rsp+48h] [rbp-28h]
  __int128 *v13; // [rsp+50h] [rbp-20h]
  int v14; // [rsp+58h] [rbp-18h]
  int v15; // [rsp+5Ch] [rbp-14h]
  __int128 v16; // [rsp+60h] [rbp-10h]

  v11[1] = 0;
  v15 = 0;
  v9 = 0LL;
  v10 = 0LL;
  result = AVrfpFormatCurrentUserKeyPath(&v10);
  if ( (int)result >= 0 )
  {
    v6 = *a1;
    v7 = *((_QWORD *)a1 + 1) + *a1;
    if ( *a1 )
    {
      do
      {
        if ( *(_WORD *)(v7 - 2) == 92 )
          break;
        v7 -= 2LL;
        v6 -= 2;
      }
      while ( v6 );
    }
    v8 = *a1 - v6;
    *((_QWORD *)&v9 + 1) = v7;
    LOWORD(v9) = v8;
    if ( (unsigned __int16)v8 == v8 )
    {
      result = RtlAppendUnicodeStringToString((unsigned __int16 *)&v10, (const void **)&v9);
      if ( (int)result >= 0 )
      {
        v11[0] = 48;
        v13 = &v10;
        v12 = 0LL;
        v14 = 64;
        v16 = 0LL;
        return NtOpenKey(a3, 9LL, v11);
      }
    }
    else
    {
      return 3221225507LL;
    }
  }
  return result;
}
