/*
 * XREFs of sub_140B660C0 @ 0x140B660C0
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B660C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int v7; // edx
  unsigned int *v8; // rax
  __int64 v9; // r10
  unsigned int *v10; // rcx
  unsigned int *v11; // rax
  signed int v12; // ebx
  unsigned int *v13; // rax
  unsigned int i; // edx
  __int64 v15; // r10
  unsigned int *v16; // rcx
  unsigned int *v17; // rax
  unsigned int v18; // r10d
  unsigned int v19; // ebx
  unsigned int *v20; // rax
  unsigned int j; // edx
  __int64 v22; // r13
  unsigned int *v23; // rcx
  __int64 v24; // r12
  unsigned int *v25; // rax
  unsigned int k; // edx
  __int64 v27; // r14
  unsigned int *v28; // rcx
  unsigned int m; // edx
  __int64 v30; // rax
  unsigned int *v31; // rcx
  unsigned int *v32; // rsi
  size_t v33; // rsi
  void *Pool2; // rax
  int v35; // ebp
  unsigned int v36; // edx
  unsigned int v37; // ecx
  unsigned int v38; // eax
  int v39; // r8d
  unsigned int v40; // ecx
  unsigned int v41; // eax
  __int64 v42; // rax
  int v43; // ebp
  __int64 v44; // r9
  void *v45; // rbp
  unsigned int v46; // ecx
  _DWORD *v47; // rdx
  unsigned int v48; // eax
  __int64 v49; // r8
  unsigned int v50; // eax
  unsigned __int64 v51; // rdx
  unsigned int n; // ecx
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned int v55; // esi
  unsigned int v56; // eax
  _DWORD *v57; // rdx
  unsigned int ii; // ecx
  unsigned int v59; // eax
  __int64 v60; // r8
  unsigned int v61; // eax
  _DWORD *v62; // rdx
  unsigned int jj; // ecx
  unsigned int v64; // eax
  PVOID P; // [rsp+58h] [rbp-50h]
  __int64 v67; // [rsp+60h] [rbp-48h]

  v4 = *(unsigned int **)(a1 + 8);
  P = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = 0;
  v8 = *(unsigned int **)(a1 + 8);
  while ( 1 )
  {
    v9 = *v8;
    v10 = v8 + 1;
    if ( v7 >= 3 )
      break;
    if ( v10 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
    ++v7;
  }
  if ( v10 < v8 )
    return (unsigned int)-1073741675;
  v11 = 0LL;
  if ( (_DWORD)v9 )
    v11 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v67 = *(_QWORD *)v11;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v13 = v4;
  for ( i = 0; ; ++i )
  {
    v15 = *v13;
    v16 = v13 + 1;
    if ( i >= 4 )
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
    v17 = v16;
  if ( (_DWORD)v15 != 4 )
    return (unsigned int)-1073741789;
  v18 = *(_DWORD *)a1;
  v19 = *v17;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v20 = v4;
  for ( j = 0; ; ++j )
  {
    v22 = *v20;
    v23 = v20 + 1;
    if ( j >= 5 )
      break;
    if ( v23 < v20 )
      return (unsigned int)-1073741675;
    v20 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v20 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = (__int64)(v20 + 1);
  if ( v18 <= 6 )
    return (unsigned int)-1073741811;
  v25 = v4;
  for ( k = 0; ; ++k )
  {
    v27 = *v25;
    v28 = v25 + 1;
    if ( k >= 6 )
      break;
    if ( v28 < v25 )
      return (unsigned int)-1073741675;
    v25 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  if ( v28 < v25 )
    return (unsigned int)-1073741675;
  if ( v18 <= 7 )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v30 = *v4;
    v31 = v4 + 1;
    if ( m >= 7 )
      break;
    if ( v31 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v31 + v30);
    if ( (unsigned int *)((char *)v31 + v30) < v31 )
      return (unsigned int)-1073741675;
  }
  if ( v31 < v4 )
    return (unsigned int)-1073741675;
  v32 = 0LL;
  if ( (_DWORD)v30 )
    v32 = v4 + 1;
  if ( (_DWORD)v30 != 4 )
    return (unsigned int)-1073741789;
  v33 = *v32;
  if ( (_DWORD)v33 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    P = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v33);
  }
  if ( *(_QWORD *)&ExpPlatformBinaryLock.AbWaitEntryCount )
    v35 = guard_dispatch_icall_no_overrides(v19, v24);
  else
    v35 = -1073741637;
  if ( (unsigned int)v33 >= 0xFFFFFFFC )
    goto LABEL_78;
  if ( (unsigned int)(v33 + 24) < 0x14 )
    goto LABEL_78;
  v36 = v33 + 32;
  if ( (int)v33 + 32 < (unsigned int)(v33 + 24) )
    goto LABEL_78;
  if ( v36 >= 0xFFFFFFF8 )
    goto LABEL_78;
  v37 = (v33 + 47) & 0xFFFFFFF8;
  if ( v37 < (int)v33 + 40 || v37 + 8 < v37 )
    goto LABEL_78;
  v38 = v37 + 12;
  v39 = *(_DWORD *)(a2 + 16);
  if ( v37 + 12 < 4 || (v40 = v37 + 16, v38 + 4 < v38) || (v41 = v40 + v39, v40 + v39 < v40) || v41 + 4 < v41 )
    v12 = -1073741675;
  else
    v12 = v41 + 4 + *(_DWORD *)(a2 + 32) < v41 + 4 ? 0xC0000095 : 0;
  if ( v12 < 0 )
    goto LABEL_79;
  if ( !a4 )
  {
    v12 = -1073741811;
LABEL_79:
    v45 = P;
    goto LABEL_80;
  }
  *(_DWORD *)(a4 + 4) = v36;
  if ( (_DWORD)v33 == -32 )
  {
    v12 = -1073741762;
    goto LABEL_79;
  }
  v42 = ExAllocatePool2(0x100uLL);
  if ( !v42 )
  {
    v12 = -1073741801;
    goto LABEL_79;
  }
  *(_QWORD *)(a4 + 8) = v42;
  v43 = v35 | 0x10000000;
  *(_DWORD *)a4 = 0;
  v44 = v42;
  v46 = 0;
  v47 = (_DWORD *)v42;
  while ( v46 < *(_DWORD *)a4 )
  {
    v48 = *v47 + 4;
    if ( v48 < 4 || (_DWORD *)((char *)v47 + v48) < v47 )
      goto LABEL_78;
    v47 = (_DWORD *)((char *)v47 + v48);
    ++v46;
  }
  if ( v47 + 1 < v47 )
    goto LABEL_78;
  if ( (unsigned __int64)(v47 + 2) > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_88:
    v12 = -1073741789;
    goto LABEL_79;
  }
  *v47 = 4;
  v47[1] = v43;
  ++*(_DWORD *)a4;
  v49 = *(_QWORD *)(a4 + 8);
  if ( !v49 )
  {
    v50 = *(_DWORD *)(a4 + 4);
    if ( v50 + 12 >= v50 )
    {
      *(_DWORD *)(a4 + 4) = v50 + 12;
      goto LABEL_100;
    }
    *(_DWORD *)(a4 + 4) = -1;
LABEL_78:
    v12 = -1073741675;
    goto LABEL_79;
  }
  v51 = *(_QWORD *)(a4 + 8);
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v53 = *(_DWORD *)v51 + 4;
    if ( v53 < 4 || v51 + v53 < v51 )
      goto LABEL_78;
    v51 += v53;
  }
  if ( v51 + 4 < v51 )
    goto LABEL_78;
  if ( v51 + 12 > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_88;
  *(_DWORD *)v51 = 8;
  *(_QWORD *)(v51 + 4) = v67;
LABEL_100:
  ++*(_DWORD *)a4;
  v45 = P;
  if ( P )
  {
    if ( !(_DWORD)v33 )
      goto LABEL_102;
  }
  else if ( (_DWORD)v33 )
  {
LABEL_102:
    v12 = -1073741811;
    goto LABEL_80;
  }
  v54 = *(_QWORD *)(a4 + 8);
  if ( v54 )
  {
    v57 = *(_DWORD **)(a4 + 8);
    for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
    {
      v59 = *v57 + 4;
      if ( v59 < 4 || (_DWORD *)((char *)v57 + v59) < v57 )
        goto LABEL_109;
      v57 = (_DWORD *)((char *)v57 + v59);
    }
    if ( v57 + 1 < v57 )
      goto LABEL_109;
    if ( (unsigned __int64)v57 + v33 + 4 > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_117;
    *v57 = v33;
    if ( P )
      memmove(v57 + 1, P, v33);
  }
  else
  {
    v55 = v33 + 4;
    if ( v55 < 4 )
    {
LABEL_109:
      v12 = -1073741675;
      goto LABEL_80;
    }
    v56 = *(_DWORD *)(a4 + 4);
    if ( v56 + v55 < v56 )
    {
LABEL_108:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_109;
    }
    *(_DWORD *)(a4 + 4) = v56 + v55;
  }
  ++*(_DWORD *)a4;
  v60 = *(_QWORD *)(a4 + 8);
  if ( !v60 )
  {
    v61 = *(_DWORD *)(a4 + 4);
    if ( v61 + 8 >= v61 )
    {
      *(_DWORD *)(a4 + 4) = v61 + 8;
      ++*(_DWORD *)a4;
      v12 = 0;
      goto LABEL_80;
    }
    goto LABEL_108;
  }
  v62 = *(_DWORD **)(a4 + 8);
  for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
  {
    v64 = *v62 + 4;
    if ( v64 < 4 || (_DWORD *)((char *)v62 + v64) < v62 )
      goto LABEL_109;
    v62 = (_DWORD *)((char *)v62 + v64);
  }
  if ( v62 + 1 < v62 )
    goto LABEL_109;
  v12 = 0;
  if ( (unsigned __int64)(v62 + 2) > v60 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_117:
    v12 = -1073741789;
    goto LABEL_80;
  }
  *v62 = 4;
  v62[1] = 0;
  ++*(_DWORD *)a4;
LABEL_80:
  if ( v45 )
    ExFreePoolWithTag(v45, 0);
  return (unsigned int)v12;
}
