/*
 * XREFs of sub_180054120 @ 0x180054120
 * Callers:
 *     sub_180053894 @ 0x180053894 (sub_180053894.c)
 *     sub_180053C4C @ 0x180053C4C (sub_180053C4C.c)
 * Callees:
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 */

__int64 __fastcall sub_180054120(unsigned int a1)
{
  __int64 v1; // rbx
  int v2; // eax
  int v3; // r11d
  unsigned int v4; // edx
  char *v5; // rdi
  __int64 i; // rcx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  _DWORD v10[2]; // [rsp+20h] [rbp-78h]
  char v11; // [rsp+28h] [rbp-70h] BYREF
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]
  int v14; // [rsp+80h] [rbp-18h]

  v1 = a1;
  v2 = sub_1800540E4(a1);
  v4 = 0;
  if ( (_DWORD)v1 == 23 )
  {
    v8 = v3 + ((unsigned int)(v3 + 1) >> 1);
    return v2 * v8;
  }
  v10[0] = 0;
  v10[1] = 1;
  v5 = &v11;
  for ( i = 20LL; i; --i )
  {
    *(_DWORD *)v5 = 1;
    v5 += 4;
  }
  v12 = 4;
  v13 = 1;
  v14 = 1;
  v7 = v10[v1];
  if ( v7 )
  {
    v8 = (v7 + v3 - 1) / v7;
    return v2 * v8;
  }
  return v4;
}
