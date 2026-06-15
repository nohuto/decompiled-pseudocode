/*
 * XREFs of sub_14007E6CC @ 0x14007E6CC
 * Callers:
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 * Callees:
 *     sub_14007C794 @ 0x14007C794 (sub_14007C794.c)
 *     sub_14007F090 @ 0x14007F090 (sub_14007F090.c)
 */

char *__fastcall sub_14007E6CC(__int64 a1, __int64 a2, char *a3)
{
  char *v3; // rbx
  unsigned __int64 v6; // rdx
  unsigned int v7; // esi
  __int16 v9; // [rsp+20h] [rbp-38h] BYREF
  char v10; // [rsp+22h] [rbp-36h]
  int v11; // [rsp+24h] [rbp-34h]
  __int16 v12; // [rsp+28h] [rbp-30h]
  __int128 v13; // [rsp+30h] [rbp-28h]
  char *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v3 = a3;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v6 = (*(_QWORD *)(a1 + 32) - *(_QWORD *)(a1 + 24)) / *(_QWORD *)(a1 + 16);
    if ( *(unsigned int *)(a2 + 4) > v6 )
      sub_14007F090(a2, v6);
    v3 += *(_QWORD *)(a1 + 16) * *(unsigned int *)(a2 + 4);
  }
  else
  {
    v7 = 0;
    v9 = *(_WORD *)(a1 + 6);
    v10 = *(_BYTE *)(a1 + 8);
    v11 = 0;
    v12 = 0;
    v13 = 0LL;
    if ( *(_DWORD *)(a2 + 4) )
    {
      do
      {
        if ( !sub_14007C794(&v9, (const void **)&v14, *(_QWORD *)(a1 + 32)) )
          break;
        ++v7;
      }
      while ( v7 < *(_DWORD *)(a2 + 4) );
      v3 = v14;
    }
    sub_14007F090(a2, v7);
  }
  return v3;
}
