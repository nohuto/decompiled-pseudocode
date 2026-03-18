/*
 * XREFs of ?SortGestureConfigArray@@YAHPEAUtagGESTURECONFIG@@H@Z @ 0x1401E5108
 * Callers:
 *     SetGestureConfigSettings @ 0x1401E4CF4 (SetGestureConfigSettings.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SortGestureConfigArray(struct tagGESTURECONFIG *a1, int a2)
{
  __int64 v2; // r10
  unsigned int v4; // r8d
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r11
  char *v9; // rbp
  __int64 v10; // xmm1_8
  int v11; // r13d
  unsigned int v12; // r14d
  __int64 i; // rdi
  __int64 v14; // xmm0_8
  __int64 v15; // rcx
  __int64 v16; // rdx
  _DWORD *v17; // rcx
  __int64 v19; // [rsp+0h] [rbp-38h]

  v2 = a2;
  if ( a2 <= 0 )
    return 0LL;
  v4 = 1;
  if ( (int)(a2 / 9u) > 1 )
  {
    do
      v4 = 3 * v4 + 1;
    while ( (int)v4 < (int)(a2 / 9u) );
  }
  while ( (int)v4 > 0 )
  {
    v7 = v4;
    v8 = v4;
    if ( v4 < (unsigned __int64)a2 )
    {
      v9 = (char *)a1 + 12 * v4;
      do
      {
        v10 = *(_QWORD *)v9;
        v11 = *((_DWORD *)v9 + 2);
        v12 = v7 - v4;
        v19 = *(_QWORD *)v9;
        for ( i = v8 - v4; i >= 0; *((_DWORD *)a1 + v15 + 2) = *((_DWORD *)a1 + v5 + 2) )
        {
          v5 = 3 * i;
          if ( *((_DWORD *)a1 + 3 * i) <= (unsigned int)v19 )
            break;
          v14 = *(_QWORD *)((char *)a1 + 12 * i);
          v15 = 3 * (v4 + i);
          v12 -= v4;
          i -= v4;
          *(_QWORD *)((char *)a1 + 4 * v15) = v14;
        }
        if ( v7 != v12 + v4 )
        {
          v6 = 3 * (v4 + i);
          *(_QWORD *)((char *)a1 + 4 * v6) = v10;
          *((_DWORD *)a1 + v6 + 2) = v11;
        }
        ++v7;
        ++v8;
        v9 += 12;
      }
      while ( v8 < a2 );
    }
    v4 /= 3u;
  }
  if ( !*(_DWORD *)a1 && a2 != 1 )
    return 0LL;
  v16 = 1LL;
  v17 = (_DWORD *)((char *)a1 + 12);
  while ( v16 < v2 )
  {
    if ( *v17 == *(v17 - 3) )
      return 0LL;
    ++v16;
    v17 += 3;
  }
  return 1LL;
}
