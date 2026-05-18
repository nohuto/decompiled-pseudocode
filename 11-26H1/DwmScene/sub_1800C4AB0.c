/*
 * XREFs of sub_1800C4AB0 @ 0x1800C4AB0
 * Callers:
 *     sub_1800C31E8 @ 0x1800C31E8 (sub_1800C31E8.c)
 *     sub_1800C37E0 @ 0x1800C37E0 (sub_1800C37E0.c)
 *     sub_1800C4100 @ 0x1800C4100 (sub_1800C4100.c)
 * Callees:
 *     sub_1800540E4 @ 0x1800540E4 (sub_1800540E4.c)
 */

__int64 __fastcall sub_1800C4AB0(unsigned int a1, __int64 a2, int a3, int *a4)
{
  unsigned int v4; // r11d
  __int64 v5; // rsi
  int v7; // r9d
  char *v8; // rdi
  __int64 i; // rcx
  unsigned int v10; // ecx
  _DWORD v12[2]; // [rsp+20h] [rbp-78h]
  char v13; // [rsp+28h] [rbp-70h] BYREF
  int v14; // [rsp+78h] [rbp-20h]
  int v15; // [rsp+7Ch] [rbp-1Ch]
  int v16; // [rsp+80h] [rbp-18h]

  v4 = 0;
  v5 = a1;
  if ( a4 )
    v7 = *a4;
  else
    v7 = sub_1800540E4(a1);
  if ( (_DWORD)v5 == 23 )
  {
    return v7 * (a3 + ((unsigned int)(a3 + 1) >> 1));
  }
  else
  {
    v12[0] = v4;
    v12[1] = 1;
    v8 = &v13;
    for ( i = 20LL; i; --i )
    {
      *(_DWORD *)v8 = 1;
      v8 += 4;
    }
    v14 = 4;
    v15 = 1;
    v16 = 1;
    v10 = v12[v5];
    if ( v10 )
      return v7 * ((v10 + a3 - 1) / v10);
  }
  return v4;
}
