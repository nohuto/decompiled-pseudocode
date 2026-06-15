/*
 * XREFs of sub_140079924 @ 0x140079924
 * Callers:
 *     sub_14007CD34 @ 0x14007CD34 (sub_14007CD34.c)
 * Callees:
 *     sub_1400790E8 @ 0x1400790E8 (sub_1400790E8.c)
 *     sub_14007B83C @ 0x14007B83C (sub_14007B83C.c)
 *     sub_14007C794 @ 0x14007C794 (sub_14007C794.c)
 *     sub_14007F090 @ 0x14007F090 (sub_14007F090.c)
 */

unsigned __int64 __fastcall sub_140079924(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        const void *a4,
        size_t a5,
        int a6)
{
  char v6; // di
  int v7; // r12d
  unsigned __int64 v9; // rsi
  unsigned __int64 v12; // rdx
  unsigned int v13; // r8d
  size_t v14; // r15
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rax
  __int64 v17; // r8
  unsigned int i; // ebx
  __int64 v19; // r8
  char *v20; // rax
  __int16 v22; // [rsp+30h] [rbp-20h] BYREF
  char v23; // [rsp+32h] [rbp-1Eh]
  int v24; // [rsp+34h] [rbp-1Ch]
  __int16 v25; // [rsp+38h] [rbp-18h]
  __int128 v26; // [rsp+40h] [rbp-10h]
  unsigned __int64 v27; // [rsp+80h] [rbp+30h] BYREF

  v6 = 0;
  v22 = *(_WORD *)(a1 + 6);
  v7 = -1;
  v23 = *(_BYTE *)(a1 + 8);
  v9 = a3;
  v24 = 0;
  v25 = 0;
  v26 = 0LL;
  if ( *(_QWORD *)(a1 + 16) )
  {
    v12 = (*(_QWORD *)(a1 + 32) - a3) / *(_QWORD *)(a1 + 16);
    if ( *(unsigned int *)(a2 + 4) > v12 )
      sub_14007F090(a2, v12);
    v13 = *(_DWORD *)(a2 + 4);
    v14 = a5;
    v15 = v9 + *(_QWORD *)(a1 + 16) * v13;
    v16 = sub_14007B83C(a1, v9, v13, (_DWORD)a4, a5);
    v9 = v16;
    if ( v16 >= v15 )
      return v9;
    v17 = *(_QWORD *)(a1 + 32);
    v27 = v16;
    sub_14007C794(&v22, &v27, v17);
    v7 = sub_1400790E8((__int64)&v22, a4, v14);
  }
  else
  {
    for ( i = 0; i < *(_DWORD *)(a2 + 4); ++i )
    {
      v19 = *(_QWORD *)(a1 + 32);
      v27 = v9;
      if ( !(unsigned __int8)sub_14007C794(&v22, &v27, v19) )
      {
        sub_14007F090(a2, i);
        break;
      }
      v7 = sub_1400790E8((__int64)&v22, a4, a5);
      if ( v7 <= 0 )
        break;
      v9 = v27;
    }
  }
  if ( !v7 )
  {
    if ( v23 )
    {
      sub_14007F090(&v22, (unsigned int)(a6 + v24));
      v20 = (char *)(a1 + 56);
    }
    else
    {
      v20 = (char *)(a1 + 56);
      if ( !*(_BYTE *)(a1 + 56) )
      {
LABEL_17:
        *v20 = v6;
        return 0LL;
      }
    }
    v6 = 1;
    goto LABEL_17;
  }
  return v9;
}
