/*
 * XREFs of VmpNewPinnedRangesNeeded @ 0x1406C5228
 * Callers:
 *     VmpPinMemoryRanges @ 0x1406C5B54 (VmpPinMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpNewPinnedRangesNeeded(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  unsigned int v5; // ecx
  unsigned __int64 v6; // rbx
  unsigned __int64 v9; // rax
  _QWORD *v10; // r8
  int v11; // r9d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  _QWORD *v14; // r10
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  _QWORD **v17; // rdx
  _QWORD *v18; // rax
  _QWORD *i; // rdx

  v3 = a1 + 56;
  v4 = a2 & (*(_QWORD *)(a1 + 80) - 1LL);
  v5 = 0;
  v6 = a2 - v4;
  v9 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v9 )
      v9 ^= v3;
    else
      v9 = 0LL;
  }
  v10 = 0LL;
  v11 = *(_BYTE *)(v3 + 8) & 1;
  while ( 1 )
  {
    if ( !v9 )
      goto LABEL_31;
    if ( a2 >= *(_QWORD *)(v9 + 24) )
      break;
    v12 = *(_QWORD *)v9;
    v10 = (_QWORD *)v9;
LABEL_10:
    if ( v11 && v12 )
      v9 ^= v12;
    else
      v9 = v12;
  }
  if ( a2 > *(_QWORD *)(v9 + 32) )
  {
    v12 = *(_QWORD *)(v9 + 8);
    goto LABEL_10;
  }
  v13 = *(_QWORD *)v9;
  v10 = (_QWORD *)v9;
  if ( v11 && v13 )
    v13 ^= v9;
  v14 = 0LL;
  if ( v13 )
  {
    while ( 1 )
    {
      if ( a2 < *(_QWORD *)(v13 + 24) )
        goto LABEL_22;
      if ( a2 <= *(_QWORD *)(v13 + 32) )
        break;
      v15 = *(_QWORD *)(v13 + 8);
LABEL_23:
      if ( v11 && v15 )
        v13 ^= v15;
      else
        v13 = v15;
      if ( !v13 )
      {
        if ( v14 )
          v10 = v14;
        goto LABEL_31;
      }
    }
    v14 = (_QWORD *)v13;
LABEL_22:
    v15 = *(_QWORD *)v13;
    goto LABEL_23;
  }
LABEL_31:
  while ( v10 )
  {
    if ( v10[3] > v6 )
      return 1LL;
    v16 = v10[4];
    v6 = v16 + 1;
    if ( a3 <= v16 )
      break;
    v17 = (_QWORD **)v10[1];
    v18 = v10;
    if ( v17 )
    {
      v10 = (_QWORD *)v10[1];
      for ( i = *v17; i; i = (_QWORD *)*i )
        v10 = i;
    }
    else
    {
      while ( 1 )
      {
        v10 = (_QWORD *)(v10[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v10 || (_QWORD *)*v10 == v18 )
          break;
        v18 = v10;
      }
    }
  }
  LOBYTE(v5) = a3 >= v6;
  return v5;
}
