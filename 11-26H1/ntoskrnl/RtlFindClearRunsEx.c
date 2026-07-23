/*
 * XREFs of RtlFindClearRunsEx @ 0x1404E8604
 * Callers:
 *     RtlpHpFixedVsAllocate @ 0x1404D1C30 (RtlpHpFixedVsAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlFindClearRunsEx(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdx
  unsigned __int64 v4; // r13
  unsigned int v5; // r8d
  unsigned __int8 *v6; // rax
  __int64 v7; // r9
  int v8; // r14d
  unsigned int v9; // ebx
  int i; // r12d
  unsigned __int8 v11; // r11
  __int64 v12; // rbp
  unsigned int v13; // r9d
  signed int v14; // ebx
  __int64 v15; // rdx
  _QWORD *j; // rdi
  unsigned __int8 v17; // r11
  unsigned int v18; // edi
  unsigned __int8 *v19; // rdx
  __int64 v20; // r14
  int v21; // ebx
  char k; // dl
  signed int v23; // ebp
  __int64 v24; // rdi
  _QWORD *m; // rsi
  signed int v26; // edx
  __int64 v27; // r11
  _QWORD *n; // rbx
  __int64 v30; // [rsp+50h] [rbp+8h]
  unsigned int v31; // [rsp+68h] [rbp+20h]

  v3 = *a1 & 7LL;
  v30 = v3;
  v4 = (*a1 >> 3) + ((*a1 & 7) != 0);
  v5 = 0;
  v6 = (unsigned __int8 *)a1[1];
  LODWORD(v7) = 0;
  v8 = 0;
  v9 = 0;
  for ( i = 0; ; i += 8 )
  {
    v31 = v9;
    if ( v9 >= v4 )
      break;
    v11 = *v6;
    if ( v9 == v4 - 1 && v3 )
      v11 |= byte_140018470[v3];
    if ( !v11 )
    {
      LODWORD(v7) = v7 + 8;
      goto LABEL_33;
    }
    v12 = *((unsigned __int8 *)RtlpBitsClearLow + v11);
    v13 = v12 + v7;
    if ( v13 )
    {
      if ( v5 )
      {
        if ( *(_DWORD *)(a2 + 8LL * (v5 - 1) + 4) >= v13 )
          goto LABEL_17;
      }
      else
      {
        v5 = 1;
      }
      v14 = v5 - 2;
      v15 = (int)(v5 - 2);
      for ( j = (_QWORD *)(a2 + 8 + 8 * v15); v15 >= 0 && *((_DWORD *)j - 1) < v13; --j )
      {
        --v14;
        --v15;
        *j = *(j - 1);
      }
      *(_DWORD *)(a2 + 8LL * v14 + 12) = v13;
      *(_DWORD *)(a2 + 8LL * v14 + 8) = v8;
    }
LABEL_17:
    v7 = *((unsigned __int8 *)RtlpBitsClearHigh + v11);
    v17 = *((_BYTE *)&qword_140018478 - v7) | byte_1400327C0[v12] | v11;
    while ( 1 )
    {
      v18 = v5;
      if ( v17 == 0xFF )
        break;
      v19 = (unsigned __int8 *)RtlpBitsClearAnywhere + v17;
      if ( v5 )
      {
        if ( *(_DWORD *)(a2 + 8LL * (v5 - 1) + 4) >= (unsigned int)*v19 )
          break;
      }
      v20 = *v19;
      v21 = 0;
      for ( k = byte_1400327C0[v20]; ((unsigned __int8)k & v17) != 0; k *= 2 )
        ++v21;
      ++v5;
      if ( v18 )
        v5 = v18;
      v23 = v5 - 2;
      v24 = (int)(v5 - 2);
      for ( m = (_QWORD *)(a2 + 8 + 8 * v24); v24 >= 0 && *((_DWORD *)m - 1) < (unsigned int)v20; --m )
      {
        --v23;
        --v24;
        *m = *(m - 1);
      }
      v17 |= k;
      *(_DWORD *)(a2 + 8LL * v23 + 12) = v20;
      *(_DWORD *)(a2 + 8LL * v23 + 8) = i + v21;
    }
    v3 = v30;
    v8 = i - v7 + 8;
    v9 = v31;
LABEL_33:
    ++v6;
    ++v9;
  }
  if ( (_DWORD)v7 )
  {
    if ( v5 )
    {
      if ( *(_DWORD *)(a2 + 8LL * (v5 - 1) + 4) >= (unsigned int)v7 )
        return v5;
    }
    else
    {
      v5 = 1;
    }
    v26 = v5 - 2;
    v27 = (int)(v5 - 2);
    for ( n = (_QWORD *)(a2 + 8 + 8 * v27); v27 >= 0 && *((_DWORD *)n - 1) < (unsigned int)v7; --n )
    {
      --v26;
      --v27;
      *n = *(n - 1);
    }
    *(_DWORD *)(a2 + 8LL * v26 + 12) = v7;
    *(_DWORD *)(a2 + 8LL * v26 + 8) = v8;
  }
  return v5;
}
