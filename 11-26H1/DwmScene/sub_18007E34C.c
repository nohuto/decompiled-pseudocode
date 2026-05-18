/*
 * XREFs of sub_18007E34C @ 0x18007E34C
 * Callers:
 *     sub_180035A5C @ 0x180035A5C (sub_180035A5C.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_18007E81C @ 0x18007E81C (sub_18007E81C.c)
 *     sub_18007EDAC @ 0x18007EDAC (sub_18007EDAC.c)
 *     sub_18007EFAC @ 0x18007EFAC (sub_18007EFAC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18007E34C(__int64 a1)
{
  unsigned __int16 v2; // bx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdi
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+38h] [rbp-20h]

  sub_18007E81C(a1, &v8);
  v2 = 0;
  v3 = v8;
  v4 = *(_QWORD *)(v8 + 56);
  result = 0x6DB6DB6DB6DB6DB7LL * ((*(_QWORD *)(v8 + 64) - v4) >> 3);
  if ( (_DWORD)result )
  {
    do
    {
      v6 = v4 + 56LL * v2;
      if ( *(_DWORD *)(v6 + 36) == 8 )
      {
        v7 = 0LL;
        sub_18007EDAC(a1, v4 + 56LL * v2, &v7);
        v7 = 0LL;
        sub_18007EFAC(a1, v6, &v7);
      }
      ++v2;
      v4 = *(_QWORD *)(v3 + 56);
      result = v2;
    }
    while ( v2 < -1227133513 * (unsigned int)((*(_QWORD *)(v3 + 64) - v4) >> 3) );
  }
  if ( v9 )
    return sub_180010EC8(v9);
  return result;
}
