/*
 * XREFs of MiGatherSlabDemoteCandidates @ 0x1404F4280
 * Callers:
 *     MiDemoteSlabEntriesDpc @ 0x140308810 (MiDemoteSlabEntriesDpc.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall MiGatherSlabDemoteCandidates(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int v3; // eax
  unsigned int v4; // edi
  bool v6; // cc
  int v7; // eax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // r15
  int v11; // r8d
  _QWORD *v12; // rbx
  _QWORD **v13; // rcx
  _DWORD *v14; // rbp
  _QWORD *v15; // rax
  _QWORD *i; // rcx
  char *v17; // r14
  unsigned int v18; // r9d
  unsigned __int64 v19; // r12
  unsigned int v20; // eax
  __int64 v21; // rax
  __int64 *v22; // r9
  unsigned __int64 v23; // r10
  int v24; // r8d
  __int64 v25; // rcx

  v3 = *(_DWORD *)(a2 + 128);
  v4 = 0;
  if ( v3 < 0 || (v6 = v3 <= 4, v7 = 0, !v6) )
    v7 = 1;
  if ( (*(_DWORD *)(a3 + 48) == 0) != v7 )
    return 0LL;
  v8 = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)a2;
  if ( (v8 & 1) != 0 )
  {
    if ( !v9 )
      return 0LL;
    v9 ^= a2;
  }
  if ( !v9 )
    return 0LL;
  v10 = (char *)(a3 + 32);
  v11 = 0;
  if ( (v8 & 1) != 0 )
  {
    if ( v8 == 1 )
      goto LABEL_40;
    v12 = (_QWORD *)(v8 ^ (a2 | 1));
  }
  else
  {
    v12 = (_QWORD *)v8;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      v13 = (_QWORD **)v12[1];
      v14 = v12;
      v15 = v12;
      if ( v13 )
      {
        v12 = (_QWORD *)v12[1];
        for ( i = *v13; i; i = (_QWORD *)*i )
          v12 = i;
      }
      else
      {
        while ( 1 )
        {
          v12 = (_QWORD *)(v12[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v12 || (_QWORD *)*v12 == v15 )
            break;
          v15 = v12;
        }
      }
      if ( (v14[23] & 2) != 0 )
        goto LABEL_36;
      v17 = (char *)a3;
      v18 = v14[21] + v14[22];
      v19 = a3 + 8LL * *(_QWORD *)v10;
      if ( a3 < v19 )
      {
        do
        {
          if ( !*(_DWORD *)(a3 + 48) || *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v17 + 56LL) + 128LL) <= 4u )
          {
            v20 = *(_DWORD *)(*(_QWORD *)v17 + 84LL) + *(_DWORD *)(*(_QWORD *)v17 + 88LL);
            if ( v18 > v20 || v18 == v20 && v14[21] > *(_DWORD *)(*(_QWORD *)v17 + 84LL) )
              break;
          }
          v17 += 8;
        }
        while ( (unsigned __int64)v17 < v19 );
        if ( (unsigned __int64)v17 < v19 )
          break;
      }
      if ( v17 < v10 )
      {
        *(_QWORD *)v17 = v14;
LABEL_34:
        ++*(_QWORD *)v10;
LABEL_35:
        v11 = 1;
      }
LABEL_36:
      if ( !v12 )
      {
        if ( v11 )
        {
          v21 = *(_QWORD *)(a3 + 32);
          v22 = (__int64 *)a3;
          *(_QWORD *)(a3 + 40) = 0LL;
          v23 = a3 + 8 * v21;
          if ( a3 < v23 )
          {
            do
            {
              v24 = *(_DWORD *)(*v22 + 84);
              v25 = *v22++;
              *(_QWORD *)(a3 + 40) += (unsigned int)(v24 + *(_DWORD *)(v25 + 88));
            }
            while ( (unsigned __int64)v22 < v23 );
          }
        }
        goto LABEL_40;
      }
    }
    memmove(v17 + 8, v17, v10 - v17 - 8);
    *(_QWORD *)v17 = v14;
    if ( v19 < (unsigned __int64)v10 )
      goto LABEL_34;
    goto LABEL_35;
  }
LABEL_40:
  LOBYTE(v4) = *(_QWORD *)(a3 + 40) >= 0x420uLL;
  return v4;
}
