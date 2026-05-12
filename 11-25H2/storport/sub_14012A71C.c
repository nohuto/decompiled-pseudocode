/*
 * XREFs of sub_14012A71C @ 0x14012A71C
 * Callers:
 *     sub_1400D2CD0 @ 0x1400D2CD0 (sub_1400D2CD0.c)
 *     sub_140127EC0 @ 0x140127EC0 (sub_140127EC0.c)
 *     sub_14012F0B0 @ 0x14012F0B0 (sub_14012F0B0.c)
 * Callees:
 *     sub_14012766C @ 0x14012766C (sub_14012766C.c)
 *     sub_14012B334 @ 0x14012B334 (sub_14012B334.c)
 */

__int64 __fastcall sub_14012A71C(__int64 a1, unsigned __int64 *a2, char a3, int a4)
{
  unsigned __int64 v5; // r10
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // r11
  __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdx
  _DWORD v17[2]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 v18; // [rsp+28h] [rbp-10h]

  v5 = *a2;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 160) + 8LL);
  if ( a4 >= 3 )
    return 3221225485LL;
  if ( !v7 )
    return 3221225659LL;
  v8 = *(_QWORD *)(v7 + 24);
  if ( !v8 )
    return 3221225659LL;
  v9 = 100LL;
  if ( a3 )
  {
    if ( v5 <= 0x64 )
    {
      v10 = *(_QWORD *)(v7 + 32);
      if ( v8 > v10 )
      {
        v5 = v10 + (v8 - v10) * v5 / 0x64;
        goto LABEL_10;
      }
      if ( v5 >= 0x64 )
      {
        v5 = *(_QWORD *)(v7 + 24);
        goto LABEL_10;
      }
      return 3221225659LL;
    }
    return 3221225485LL;
  }
LABEL_10:
  v17[0] = 1;
  v17[1] = 16;
  *(_QWORD *)(v7 + 8LL * a4 + 40) = v5;
  v11 = sub_14012766C(v7);
  v13 = *(_QWORD *)(v12 + 400);
  v18 = v11;
  if ( (*(_DWORD *)(v13 + 184) & 0x40000000) != 0 )
  {
    sub_14012B334(*(_QWORD *)(v12 + 1136), v17);
    v11 = v18;
  }
  if ( a3 )
  {
    v14 = *(_QWORD *)(v7 + 24);
    v15 = *(_QWORD *)(v7 + 32);
    if ( v14 > v15 && v11 >= v15 && v11 <= v14 )
      v9 = 100 * (v11 - v15) / (v14 - v15);
    *a2 = v9;
  }
  else
  {
    *a2 = v11;
  }
  return 0LL;
}
