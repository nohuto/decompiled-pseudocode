/*
 * XREFs of StorPortGetLogicalUnit @ 0x14001F590
 * Callers:
 *     sub_1400A5CC0 @ 0x1400A5CC0 (sub_1400A5CC0.c)
 *     sub_1401B7290 @ 0x1401B7290 (sub_1401B7290.c)
 * Callees:
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 */

__int64 __fastcall StorPortGetLogicalUnit(__int64 a1, char a2, char a3, char a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  _DWORD *v6; // rcx
  __int64 *v7; // rax
  int v9; // [rsp+30h] [rbp+8h]

  v4 = *(_QWORD *)(a1 - 16);
  v5 = 0LL;
  HIBYTE(v9) = 0;
  if ( !v4 )
    return 0LL;
  v6 = *(_DWORD **)v4;
  if ( !*(_QWORD *)v4 || (*(_BYTE *)(v4 + 248) & 1) != 0 || *v6 != 1094997074 )
    return 0LL;
  LOBYTE(v9) = a2;
  BYTE1(v9) = a3;
  BYTE2(v9) = a4;
  v7 = sub_14001F350((__int64)v6, v9);
  if ( v7 )
    return v7[2];
  return v5;
}
