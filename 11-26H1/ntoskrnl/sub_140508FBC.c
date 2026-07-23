/*
 * XREFs of sub_140508FBC @ 0x140508FBC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140508FBC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r12
  unsigned int v9; // edx
  unsigned int *v10; // rax
  __int64 v11; // r10
  unsigned int *v12; // rcx
  unsigned int *v13; // rax
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int i; // edx
  __int64 v17; // r14
  unsigned int *v18; // rcx
  unsigned int *v19; // r15
  unsigned int j; // edx
  __int64 v21; // rax
  unsigned int *v22; // rcx
  unsigned int *v23; // rbp
  size_t v24; // rbp
  void *Pool2; // rax
  int v26; // r14d
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  int v30; // r8d
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 v33; // rax
  int v34; // r14d
  __int64 v35; // r9
  unsigned int v36; // ecx
  _DWORD *v37; // rdx
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned int v40; // eax
  unsigned __int64 v41; // rdx
  unsigned int k; // ecx
  unsigned int v43; // eax
  __int64 v44; // r8
  unsigned int v45; // ebp
  unsigned int v46; // eax
  _DWORD *v47; // rdx
  unsigned int m; // ecx
  unsigned int v49; // eax
  __int64 v50; // r8
  unsigned int v51; // eax
  _DWORD *v52; // rdx
  unsigned int n; // ecx
  unsigned int v54; // eax
  __int64 v56; // [rsp+30h] [rbp-38h]

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = 0;
  v10 = *(unsigned int **)(a1 + 8);
  while ( 1 )
  {
    v11 = *v10;
    v12 = v10 + 1;
    if ( v9 >= 3 )
      break;
    if ( v12 < v10 )
      return (unsigned int)-1073741675;
    v10 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
    ++v9;
  }
  if ( v12 < v10 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v56 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v4;
  for ( i = 0; ; ++i )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( i >= 4 )
      break;
    if ( v18 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v15 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v15 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v21 = *v4;
    v22 = v4 + 1;
    if ( j >= 5 )
      break;
    if ( v22 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v22 < v4 )
    return (unsigned int)-1073741675;
  v23 = 0LL;
  if ( (_DWORD)v21 )
    v23 = v4 + 1;
  if ( (_DWORD)v21 != 4 )
    return (unsigned int)-1073741789;
  v24 = *v23;
  if ( (_DWORD)v24 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v24);
  }
  if ( *(_QWORD *)&ExpPlatformBinaryLock.SuspendEvent.Header.Lock )
    v26 = guard_dispatch_icall_no_overrides(v19, (unsigned int)v17);
  else
    v26 = -1073741637;
  if ( (unsigned int)v24 >= 0xFFFFFFFC
    || (unsigned int)(v24 + 24) < 0x14
    || (v27 = v24 + 32, (int)v24 + 32 < (unsigned int)(v24 + 24))
    || v27 >= 0xFFFFFFF8
    || (v28 = (v24 + 47) & 0xFFFFFFF8, v28 < (int)v24 + 40)
    || v28 + 8 < v28 )
  {
    v14 = -1073741675;
    goto LABEL_109;
  }
  v29 = v28 + 12;
  v30 = *(_DWORD *)(a2 + 16);
  if ( v28 + 12 < 4 || (v31 = v28 + 16, v29 + 4 < v29) || (v32 = v31 + v30, v31 + v30 < v31) || v32 + 4 < v32 )
    v14 = -1073741675;
  else
    v14 = v32 + 4 + *(_DWORD *)(a2 + 32) < v32 + 4 ? 0xC0000095 : 0;
  if ( v14 < 0 )
    goto LABEL_109;
  if ( !a4 )
    goto LABEL_54;
  *(_DWORD *)(a4 + 4) = v27;
  if ( (_DWORD)v24 == -32 )
  {
    v14 = -1073741762;
    goto LABEL_109;
  }
  v33 = ExAllocatePool2(0x100uLL);
  if ( !v33 )
  {
    v14 = -1073741801;
    goto LABEL_109;
  }
  *(_QWORD *)(a4 + 8) = v33;
  v34 = v26 | 0x10000000;
  *(_DWORD *)a4 = 0;
  v35 = v33;
  v36 = 0;
  v37 = (_DWORD *)v33;
  while ( v36 < *(_DWORD *)a4 )
  {
    v38 = *v37 + 4;
    if ( v38 < 4 || (_DWORD *)((char *)v37 + v38) < v37 )
      goto LABEL_87;
    v37 = (_DWORD *)((char *)v37 + v38);
    ++v36;
  }
  if ( v37 + 1 < v37 )
    goto LABEL_87;
  if ( (unsigned __int64)(v37 + 2) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_66:
    v14 = -1073741789;
    goto LABEL_109;
  }
  *v37 = 4;
  v37[1] = v34;
  ++*(_DWORD *)a4;
  v39 = *(_QWORD *)(a4 + 8);
  if ( v39 )
  {
    v41 = *(_QWORD *)(a4 + 8);
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v43 = *(_DWORD *)v41 + 4;
      if ( v43 < 4 || v41 + v43 < v41 )
        goto LABEL_87;
      v41 += v43;
    }
    if ( v41 + 4 < v41 )
      goto LABEL_87;
    if ( v41 + 12 > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_66;
    *(_DWORD *)v41 = 8;
    *(_QWORD *)(v41 + 4) = v56;
  }
  else
  {
    v40 = *(_DWORD *)(a4 + 4);
    if ( v40 + 12 < v40 )
      goto LABEL_86;
    *(_DWORD *)(a4 + 4) = v40 + 12;
  }
  ++*(_DWORD *)a4;
  if ( v5 )
  {
    if ( !(_DWORD)v24 )
    {
LABEL_54:
      v14 = -1073741811;
      goto LABEL_109;
    }
  }
  else if ( (_DWORD)v24 )
  {
    goto LABEL_54;
  }
  v44 = *(_QWORD *)(a4 + 8);
  if ( v44 )
  {
    v47 = *(_DWORD **)(a4 + 8);
    for ( m = 0; m < *(_DWORD *)a4; ++m )
    {
      v49 = *v47 + 4;
      if ( v49 < 4 || (_DWORD *)((char *)v47 + v49) < v47 )
        goto LABEL_87;
      v47 = (_DWORD *)((char *)v47 + v49);
    }
    if ( v47 + 1 < v47 )
      goto LABEL_87;
    if ( (unsigned __int64)v47 + v24 + 4 > v44 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_66;
    *v47 = v24;
    if ( v5 )
      memmove(v47 + 1, v5, v24);
    goto LABEL_97;
  }
  v45 = v24 + 4;
  if ( v45 < 4 )
  {
LABEL_87:
    v14 = -1073741675;
    goto LABEL_109;
  }
  v46 = *(_DWORD *)(a4 + 4);
  if ( v46 + v45 < v46 )
  {
LABEL_86:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_87;
  }
  *(_DWORD *)(a4 + 4) = v46 + v45;
LABEL_97:
  ++*(_DWORD *)a4;
  v50 = *(_QWORD *)(a4 + 8);
  if ( !v50 )
  {
    v51 = *(_DWORD *)(a4 + 4);
    if ( v51 + 8 >= v51 )
    {
      *(_DWORD *)(a4 + 4) = v51 + 8;
      ++*(_DWORD *)a4;
      v14 = 0;
      goto LABEL_109;
    }
    goto LABEL_86;
  }
  v52 = *(_DWORD **)(a4 + 8);
  for ( n = 0; n < *(_DWORD *)a4; ++n )
  {
    v54 = *v52 + 4;
    if ( v54 < 4 || (_DWORD *)((char *)v52 + v54) < v52 )
      goto LABEL_87;
    v52 = (_DWORD *)((char *)v52 + v54);
  }
  if ( v52 + 1 < v52 )
    goto LABEL_87;
  v14 = 0;
  if ( (unsigned __int64)(v52 + 2) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_66;
  *v52 = 4;
  v52[1] = 0;
  ++*(_DWORD *)a4;
LABEL_109:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v14;
}
