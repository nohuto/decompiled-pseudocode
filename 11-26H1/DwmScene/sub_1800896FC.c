/*
 * XREFs of sub_1800896FC @ 0x1800896FC
 * Callers:
 *     sub_1800885D8 @ 0x1800885D8 (sub_1800885D8.c)
 *     sub_1800887D8 @ 0x1800887D8 (sub_1800887D8.c)
 * Callees:
 *     memset @ 0x18000CEDC (memset.c)
 *     sub_1800879C4 @ 0x1800879C4 (sub_1800879C4.c)
 */

unsigned __int64 __fastcall sub_1800896FC(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v5; // rbx
  unsigned int *i; // rax
  __int128 v7; // xmm2
  __int128 v8; // xmm1
  void **v9; // rsi
  char *v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  char *v13; // rax
  size_t v14; // rbx
  unsigned __int64 v15; // rbp
  unsigned __int64 result; // rax
  __int64 v17; // r15
  int v18; // edi
  int v19; // ebx

  v3 = 0LL;
  a1[17] = a2;
  v5 = a2 * a2 * a2;
  a1[18] = a2;
  a1[19] = v5;
  for ( i = *a3; i != a3[1]; i += 4 )
  {
    v7 = *i;
    if ( *(float *)&v7 <= *(float *)&v3 )
      v7 = v3;
    v8 = i[1];
    if ( *(float *)&v8 <= *(float *)&v7 )
      v8 = v7;
    v3 = i[2];
    if ( *(float *)&v3 <= *(float *)&v8 )
      v3 = v8;
  }
  v9 = (void **)(a1 + 14);
  v10 = (char *)a1[15];
  v11 = a1[14];
  v12 = (__int64)&v10[-v11] >> 2;
  if ( v5 >= v12 )
  {
    if ( v5 <= v12 )
      goto LABEL_17;
    if ( v5 > ((__int64)v9[2] - v11) >> 2 )
    {
      sub_1800879C4(v9, v5);
      goto LABEL_17;
    }
    v14 = 4 * (v5 - v12);
    memset(v10, 0, v14);
    v13 = &v10[v14];
  }
  else
  {
    v13 = (char *)(v11 + 4 * v5);
  }
  v9[1] = v13;
LABEL_17:
  v15 = 0LL;
  result = ((char *)a3[1] - (char *)*a3) >> 4;
  if ( result )
  {
    v17 = 0LL;
    do
    {
      v18 = (int)o_roundf();
      v19 = (int)o_roundf();
      v17 += 16LL;
      *((_DWORD *)*v9 + v15++) = ((v19 | (v18 << 8)) << 8) | (int)o_roundf();
      result = ((char *)a3[1] - (char *)*a3) >> 4;
    }
    while ( v15 < result );
  }
  return result;
}
