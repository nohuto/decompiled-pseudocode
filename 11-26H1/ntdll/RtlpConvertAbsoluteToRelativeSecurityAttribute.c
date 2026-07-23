/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801122E0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x18013E450 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800DB9A0 (RtlStringCbLengthW.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, _DWORD *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // r8
  unsigned int v9; // edx
  _WORD *v10; // rax
  __int64 v11; // rcx
  unsigned int k; // edi
  unsigned int v13; // r13d
  unsigned int v14; // r11d
  unsigned int j; // edx
  unsigned int v16; // eax
  unsigned int i; // ebx
  unsigned int v18; // r11d
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  int v24; // ebx
  unsigned int v25; // ebp
  _QWORD *v26; // r9
  unsigned int v27; // r15d
  unsigned int v28; // ebp
  __int64 v29; // rbx
  __int64 v30; // rdx
  unsigned int v31; // r13d
  __int64 v32; // rax
  const void *v33; // rdx
  _WORD *v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rcx
  __int64 v39; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v7 + 20;
  if ( (unsigned int)v7 >= 0xFFFFFFEC )
    return (unsigned int)-1073741675;
  v10 = *(_WORD **)a1;
  if ( !*(_QWORD *)a1 )
    return (unsigned int)-1073741811;
  v11 = 0x7FFFLL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  k = v11 == 0 ? 0xC000000D : 0;
  if ( !v11 )
    return k;
  v39 = (2 * (0x7FFF - v11)) & -(__int64)(v11 != 0);
  v13 = v39 + 2;
  if ( (int)v39 + 2 < (unsigned int)v39 )
    return (unsigned int)-1073741675;
  v14 = v9 + v13;
  if ( v9 + v13 < v9 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        k = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, &v39);
        if ( (k & 0x80000000) != 0 )
          return k;
        v19 = v39 + 2;
        if ( (int)v39 + 2 < (unsigned int)v39 || v19 + v18 < v18 )
          return (unsigned int)-1073741675;
        v14 = v19 + v18;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_19:
      for ( j = 0; j < (unsigned int)v8; ++j )
      {
        v16 = v14 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
        if ( v16 < v14 )
          return (unsigned int)-1073741675;
        v14 = v16 + 4;
        if ( v16 + 4 < v16 )
          return (unsigned int)-1073741675;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        goto LABEL_34;
      goto LABEL_19;
    }
  }
  v20 = 8 * v8;
  if ( (unsigned __int64)(8 * v8) > 0xFFFFFFFF || v20 + v14 < v14 )
    return (unsigned int)-1073741675;
  v14 += v20;
LABEL_34:
  if ( v14 + 3 < v14 )
    return (unsigned int)-1073741675;
  v21 = (v14 + 3) & 0xFFFFFFFC;
  if ( *a3 < v21 )
  {
    *a3 = v21;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v21;
  memset_thunk_772440563353939046(a2, 0, v21);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = (unsigned int)(4 * v22 + 16);
  if ( !v22 )
    v23 = 20LL;
  v24 = v23;
  *a2 = v23;
  memmove((char *)a2 + v23, *(const void **)a1, v13);
  v25 = v24 + v13;
  v26 = (_QWORD *)((char *)a2 + v24 + v13);
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
  {
LABEL_60:
    k = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v37 = v3++;
        a2[v37 + 4] = v25;
        v25 += 8;
        *v26 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v37);
        v26 = (_QWORD *)((char *)a2 + v25);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return k;
  }
  if ( *(_WORD *)(a1 + 8) != 3 )
  {
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_47:
      v27 = 0;
      for ( k = 0; v27 < *(_DWORD *)(a1 + 16); v26 = (_QWORD *)((char *)a2 + v25) )
      {
        a2[v27 + 4] = v25;
        v28 = v25 + 4;
        v29 = 16LL * v27;
        *(_DWORD *)v26 = *(_DWORD *)(v29 + *(_QWORD *)(a1 + 24) + 8);
        v30 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v29 + v30 + 8) )
          memmove((char *)a2 + v28, *(const void **)(v29 + v30), *(unsigned int *)(v29 + v30 + 8));
        ++v27;
        v25 = *(_DWORD *)(v29 + *(_QWORD *)(a1 + 24) + 8) + v28;
      }
      return k;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        return (unsigned int)-1073741811;
      goto LABEL_47;
    }
    goto LABEL_60;
  }
  v31 = 0;
  k = 0;
  while ( v31 < *(_DWORD *)(a1 + 16) )
  {
    a2[v31 + 4] = v25;
    v32 = *(_QWORD *)(a1 + 24);
    v33 = *(const void **)(v32 + 8LL * v31);
    if ( !v33 )
      return (unsigned int)-1073741811;
    v34 = *(_WORD **)(v32 + 8LL * v31);
    v35 = 0x7FFFLL;
    do
    {
      if ( !*v34 )
        break;
      ++v34;
      --v35;
    }
    while ( v35 );
    k = v35 == 0 ? 0xC000000D : 0;
    if ( !v35 )
      break;
    v36 = v35 != 0 ? 2 * (0x7FFF - v35) + 2 : 2;
    memmove(v26, v33, v36);
    v25 += v36;
    v26 = (_QWORD *)((char *)a2 + v25);
    ++v31;
  }
  return k;
}
