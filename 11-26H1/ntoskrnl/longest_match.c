/*
 * XREFs of longest_match @ 0x14062C688
 * Callers:
 *     deflate_fast @ 0x14062ADC0 (deflate_fast.c)
 *     deflate_slow @ 0x14062B740 (deflate_slow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall longest_match(__int64 a1, unsigned int a2)
{
  __int64 v2; // r9
  __int64 v4; // r12
  unsigned int v6; // edx
  __int64 v7; // r11
  unsigned int v8; // r15d
  int v9; // ecx
  _BYTE *v10; // rbp
  _BYTE *v11; // r8
  unsigned int v12; // r9d
  char v13; // r13
  unsigned int v14; // esi
  unsigned int v15; // edx
  _BYTE *v16; // rcx
  _BYTE *v17; // rdi
  _BYTE *v18; // r8
  _BYTE *v19; // rcx
  int v20; // eax
  unsigned int v22; // [rsp+40h] [rbp+8h]
  char v23; // [rsp+48h] [rbp+10h]
  __int64 v24; // [rsp+50h] [rbp+18h]

  v2 = *(unsigned int *)(a1 + 228);
  v4 = *(_QWORD *)(a1 + 160);
  v6 = *(_DWORD *)(a1 + 244);
  v7 = *(int *)(a1 + 240);
  v8 = *(_DWORD *)(a1 + 264);
  v9 = *(_DWORD *)(a1 + 148);
  v10 = (_BYTE *)(v2 + v4);
  v11 = (_BYTE *)(v2 + v4);
  if ( (unsigned int)v2 <= v9 - 262 )
    v12 = 0;
  else
    v12 = v2 - v9 + 262;
  v13 = v10[v7 - 1];
  v14 = v6 >> 2;
  v24 = *(_QWORD *)(a1 + 176);
  if ( (unsigned int)v7 < *(_DWORD *)(a1 + 260) )
    v14 = v6;
  v15 = *(_DWORD *)(a1 + 236);
  v22 = *(_DWORD *)(a1 + 156);
  if ( v8 > v15 )
    v8 = *(_DWORD *)(a1 + 236);
  v23 = v10[v7];
  do
  {
    v16 = (_BYTE *)(a2 + v4);
    v17 = v10 + 258;
    if ( v16[(int)v7] == v23 && v16[(int)v7 - 1] == v13 && *v16 == *v11 && v16[1] == v11[1] )
    {
      v18 = v11 + 2;
      v19 = v16 + 2;
      do
      {
        if ( *++v18 != v19[1] )
          break;
        if ( *++v18 != v19[2] )
          break;
        if ( *++v18 != v19[3] )
          break;
        if ( *++v18 != v19[4] )
          break;
        if ( *++v18 != v19[5] )
          break;
        if ( *++v18 != v19[6] )
          break;
        if ( *++v18 != v19[7] )
          break;
        v19 += 8;
        if ( *++v18 != *v19 )
          break;
      }
      while ( v18 < v17 );
      v20 = (_DWORD)v18 - (_DWORD)v10;
      v11 = v10;
      if ( v20 > (int)v7 )
      {
        *(_DWORD *)(a1 + 232) = a2;
        LODWORD(v7) = v20;
        if ( v20 >= (int)v8 )
          break;
        v13 = v17[v20 - 259];
        v23 = v10[v20];
      }
    }
    a2 = *(unsigned __int16 *)(v24 + 2LL * (a2 & v22));
    if ( a2 <= v12 )
      break;
    --v14;
  }
  while ( v14 );
  if ( (unsigned int)v7 <= v15 )
    return (unsigned int)v7;
  return v15;
}
