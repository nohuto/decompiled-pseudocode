/*
 * XREFs of sub_140AB6990 @ 0x140AB6990
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB6990(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // rax
  unsigned int i; // edx
  __int64 v9; // r10
  unsigned int *v10; // rcx
  __int64 *v11; // rbp
  __int64 v12; // rbp
  unsigned int *v13; // rax
  unsigned int j; // edx
  __int64 v15; // r10
  unsigned int *v16; // rcx
  unsigned int *v17; // r15
  unsigned int v18; // r15d
  unsigned int *v19; // rax
  unsigned int k; // edx
  __int64 v21; // rbx
  unsigned int *v22; // rcx
  signed int v23; // ebx
  unsigned int *v24; // rax
  unsigned int m; // edx
  __int64 v26; // r13
  unsigned int *v27; // rcx
  unsigned int n; // edx
  __int64 v29; // rax
  unsigned int *v30; // rcx
  unsigned int *v31; // rsi
  size_t v32; // rsi
  void *Pool2; // rax
  int v34; // r14d
  unsigned int v35; // ecx
  unsigned int v36; // edx
  unsigned int v37; // eax
  int v38; // r8d
  unsigned int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rax
  _DWORD *v42; // rdx
  int v43; // r14d
  unsigned int v44; // eax
  unsigned int ii; // ecx
  unsigned int v46; // eax
  unsigned __int64 v47; // rdx
  unsigned int v48; // eax
  unsigned int jj; // ecx
  unsigned int v50; // eax
  _DWORD *v51; // rdx
  unsigned int v52; // esi
  unsigned int v53; // eax
  unsigned int kk; // ecx
  unsigned int v55; // eax
  _DWORD *v56; // rdx
  unsigned int v57; // eax
  unsigned int mm; // ecx
  unsigned int v59; // eax
  PVOID P; // [rsp+50h] [rbp-48h]

  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = (__int64 *)(v7 + 1);
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v12 = *v11;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v13 = v4;
  for ( j = 0; ; ++j )
  {
    v15 = *v13;
    v16 = v13 + 1;
    if ( j >= 4 )
      break;
    if ( v16 < v13 )
      return (unsigned int)-1073741675;
    v13 = (unsigned int *)((char *)v16 + v15);
    if ( (unsigned int *)((char *)v16 + v15) < v16 )
      return (unsigned int)-1073741675;
  }
  if ( v16 < v13 )
    return (unsigned int)-1073741675;
  v17 = 0LL;
  if ( (_DWORD)v15 )
    v17 = v13 + 1;
  if ( (_DWORD)v15 != 4 )
    return (unsigned int)-1073741789;
  v18 = *v17;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v19 = v4;
  for ( k = 0; ; ++k )
  {
    v21 = *v19;
    v22 = v19 + 1;
    if ( k >= 5 )
      break;
    if ( v22 < v19 )
      return (unsigned int)-1073741675;
    v19 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v22 < v19 )
    return (unsigned int)-1073741675;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  v24 = v4;
  for ( m = 0; ; ++m )
  {
    v26 = *v24;
    v27 = v24 + 1;
    if ( m >= 6 )
      break;
    if ( v27 < v24 )
      return (unsigned int)-1073741675;
    v24 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  if ( v27 < v24 )
    return (unsigned int)-1073741675;
  if ( *(_DWORD *)a1 <= 7u )
    return (unsigned int)-1073741811;
  for ( n = 0; ; ++n )
  {
    v29 = *v4;
    v30 = v4 + 1;
    if ( n >= 7 )
      break;
    if ( v30 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      return (unsigned int)-1073741675;
  }
  if ( v30 < v4 )
    return (unsigned int)-1073741675;
  v31 = 0LL;
  if ( (_DWORD)v29 )
    v31 = v4 + 1;
  if ( (_DWORD)v29 != 4 )
    return (unsigned int)-1073741789;
  v32 = *v31;
  if ( (_DWORD)v32 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v32);
  }
  if ( qword_140FD73D0 )
    v34 = guard_dispatch_icall_no_overrides(v18);
  else
    v34 = -1073741637;
  if ( (unsigned int)v32 >= 0xFFFFFFFC )
    goto LABEL_80;
  if ( (unsigned int)(v32 + 24) < 0x14 )
    goto LABEL_80;
  v35 = v32 + 32;
  if ( (int)v32 + 32 < (unsigned int)(v32 + 24) )
    goto LABEL_80;
  if ( v35 >= 0xFFFFFFF8 )
    goto LABEL_80;
  v36 = (v32 + 47) & 0xFFFFFFF8;
  if ( v36 < (int)v32 + 40 || v36 + 8 < v36 )
    goto LABEL_80;
  v37 = v36 + 12;
  v38 = *(_DWORD *)(a2 + 16);
  if ( v36 + 12 < 4 || (v39 = v36 + 16, v37 + 4 < v37) || (v40 = v39 + v38, v39 + v38 < v39) || v40 + 4 < v40 )
    v23 = -1073741675;
  else
    v23 = v40 + 4 + *(_DWORD *)(a2 + 32) < v40 + 4 ? 0xC0000095 : 0;
  if ( v23 < 0 )
    goto LABEL_81;
  if ( !a4 )
    goto LABEL_69;
  v23 = 0;
  *(_DWORD *)(a4 + 4) = v35;
  if ( (_DWORD)v32 == -32 )
  {
    v23 = -1073741762;
  }
  else
  {
    v41 = ExAllocatePool2(0x100uLL);
    if ( v41 )
    {
      *(_QWORD *)(a4 + 8) = v41;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v23 = -1073741801;
    }
  }
  if ( v23 < 0 )
    goto LABEL_81;
  v42 = *(_DWORD **)(a4 + 8);
  v43 = v34 | 0x10000000;
  if ( v42 )
  {
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v46 = *v42 + 4;
      if ( v46 < 4 || (_DWORD *)((char *)v42 + v46) < v42 )
        goto LABEL_80;
      v42 = (_DWORD *)((char *)v42 + v46);
    }
    if ( v42 + 1 < v42 )
      goto LABEL_80;
    if ( (unsigned __int64)(v42 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_117;
    *v42 = 4;
    v42[1] = v43;
  }
  else
  {
    v44 = *(_DWORD *)(a4 + 4);
    if ( v44 + 8 < v44 )
      goto LABEL_79;
    *(_DWORD *)(a4 + 4) = v44 + 8;
  }
  ++*(_DWORD *)a4;
  v47 = *(_QWORD *)(a4 + 8);
  if ( v47 )
  {
    for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
    {
      v50 = *(_DWORD *)v47 + 4;
      if ( v50 < 4 || v47 + v50 < v47 )
        goto LABEL_80;
      v47 += v50;
    }
    if ( v47 + 4 < v47 )
      goto LABEL_80;
    if ( v47 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_117;
    *(_DWORD *)v47 = 8;
    *(_QWORD *)(v47 + 4) = v12;
  }
  else
  {
    v48 = *(_DWORD *)(a4 + 4);
    if ( v48 + 12 < v48 )
      goto LABEL_79;
    *(_DWORD *)(a4 + 4) = v48 + 12;
  }
  ++*(_DWORD *)a4;
  if ( P )
  {
    if ( !(_DWORD)v32 )
    {
LABEL_69:
      v23 = -1073741811;
      goto LABEL_81;
    }
  }
  else if ( (_DWORD)v32 )
  {
    goto LABEL_69;
  }
  v51 = *(_DWORD **)(a4 + 8);
  if ( !v51 )
  {
    v52 = v32 + 4;
    if ( v52 < 4 )
      goto LABEL_80;
    v53 = *(_DWORD *)(a4 + 4);
    if ( v53 + v52 >= v53 )
    {
      *(_DWORD *)(a4 + 4) = v53 + v52;
      goto LABEL_120;
    }
LABEL_79:
    *(_DWORD *)(a4 + 4) = -1;
LABEL_80:
    v23 = -1073741675;
    goto LABEL_81;
  }
  for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
  {
    v55 = *v51 + 4;
    if ( v55 < 4 || (_DWORD *)((char *)v51 + v55) < v51 )
      goto LABEL_80;
    v51 = (_DWORD *)((char *)v51 + v55);
  }
  if ( v51 + 1 < v51 )
    goto LABEL_80;
  if ( (unsigned __int64)v51 + v32 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_117;
  *v51 = v32;
  if ( P )
    memmove(v51 + 1, P, (unsigned int)v32);
LABEL_120:
  ++*(_DWORD *)a4;
  v56 = *(_DWORD **)(a4 + 8);
  if ( !v56 )
  {
    v57 = *(_DWORD *)(a4 + 4);
    if ( v57 + 8 >= v57 )
    {
      ++*(_DWORD *)a4;
      v23 = 0;
      *(_DWORD *)(a4 + 4) = v57 + 8;
      goto LABEL_81;
    }
    goto LABEL_79;
  }
  for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
  {
    v59 = *v56 + 4;
    if ( v59 < 4 || (_DWORD *)((char *)v56 + v59) < v56 )
      goto LABEL_80;
    v56 = (_DWORD *)((char *)v56 + v59);
  }
  if ( v56 + 1 < v56 )
    goto LABEL_80;
  v23 = 0;
  if ( (unsigned __int64)(v56 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_117:
    v23 = -1073741789;
    goto LABEL_81;
  }
  *v56 = 4;
  v56[1] = 0;
  ++*(_DWORD *)a4;
LABEL_81:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v23;
}
