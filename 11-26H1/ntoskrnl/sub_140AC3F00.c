/*
 * XREFs of sub_140AC3F00 @ 0x140AC3F00
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AC3F00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v14; // rax
  unsigned int v15; // r9d
  __int64 v16; // r12
  unsigned int *v17; // rax
  unsigned int j; // r8d
  __int64 v19; // r14
  unsigned int *v20; // rdx
  __int64 v21; // r15
  unsigned int *v22; // rax
  unsigned int k; // r8d
  __int64 v24; // rbp
  unsigned int *v25; // rdx
  unsigned int m; // r8d
  __int64 v27; // rax
  unsigned int *v28; // rdx
  int v29; // esi
  int v30; // edx
  unsigned int v31; // ecx
  unsigned int v32; // eax
  __int64 Pool2; // rax
  int v34; // esi
  __int64 v35; // r10
  _DWORD *v36; // rdx
  unsigned int n; // ecx
  unsigned int v38; // eax
  __int64 v39; // r8
  unsigned __int64 v40; // rdx
  unsigned int ii; // ecx
  unsigned int v42; // eax
  __int64 v43; // r10
  unsigned __int64 v44; // r8
  unsigned int jj; // ecx
  unsigned int v46; // eax
  unsigned int v47; // eax
  unsigned int v48; // eax
  __int128 v49; // [rsp+50h] [rbp-58h]
  __int128 v50; // [rsp+60h] [rbp-48h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(unsigned int **)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = v7;
  for ( i = 0; ; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( i >= 3 )
      break;
    if ( v11 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  if ( v11 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *(_DWORD *)a1;
  v16 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v17 = v7;
  for ( j = 0; ; ++j )
  {
    v19 = *v17;
    v20 = v17 + 1;
    if ( j >= 4 )
      break;
    if ( v20 < v17 )
      return (unsigned int)-1073741675;
    v17 = (unsigned int *)((char *)v20 + v19);
    if ( (unsigned int *)((char *)v20 + v19) < v20 )
      return (unsigned int)-1073741675;
  }
  if ( v20 < v17 )
    return (unsigned int)-1073741675;
  v21 = 0LL;
  if ( (_DWORD)v19 )
    v21 = (__int64)(v17 + 1);
  if ( v15 <= 5 )
    return (unsigned int)-1073741811;
  v22 = v7;
  for ( k = 0; ; ++k )
  {
    v24 = *v22;
    v25 = v22 + 1;
    if ( k >= 5 )
      break;
    if ( v25 < v22 )
      return (unsigned int)-1073741675;
    v22 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  if ( v25 < v22 )
    return (unsigned int)-1073741675;
  if ( v15 <= 6 )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v27 = *v7;
    v28 = v7 + 1;
    if ( m >= 6 )
      break;
    if ( v28 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v28 + v27);
    if ( (unsigned int *)((char *)v28 + v27) < v28 )
      return (unsigned int)-1073741675;
  }
  if ( v28 < v7 )
    return (unsigned int)-1073741675;
  if ( !ExpPlatformBinaryLock.ThreadListEntry.Flink )
    return (unsigned int)-1073741637;
  v29 = guard_dispatch_icall_no_overrides(v21, (unsigned int)v19);
  v12 = v29;
  if ( v29 < 0 )
    return v12;
  v30 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFB0 )
    return (unsigned int)-1073741675;
  v31 = *(_DWORD *)(a2 + 16) + 84;
  if ( v31 < *(_DWORD *)(a2 + 16) + 80 )
    return (unsigned int)-1073741675;
  v32 = v31 + v30;
  v12 = v31 + v30 < v31 ? 0xC0000095 : 0;
  if ( v32 >= v31 )
  {
    *(_DWORD *)(a4 + 4) = 56;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    v34 = v29 | 0x10000000;
    *(_DWORD *)a4 = 0;
    v35 = Pool2;
    v36 = (_DWORD *)Pool2;
    for ( n = 0; n < *(_DWORD *)a4; ++n )
    {
      v38 = *v36 + 4;
      if ( *v36 >= 0xFFFFFFFC || (_DWORD *)((char *)v36 + v38) < v36 )
        return (unsigned int)-1073741675;
      v36 = (_DWORD *)((char *)v36 + v38);
    }
    if ( v36 + 1 < v36 )
      return (unsigned int)-1073741675;
    if ( (unsigned __int64)(v36 + 2) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *v36 = 4;
    v36[1] = v34;
    ++*(_DWORD *)a4;
    v39 = *(_QWORD *)(a4 + 8);
    if ( v39 )
    {
      v40 = *(_QWORD *)(a4 + 8);
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v42 = *(_DWORD *)v40 + 4;
        if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v42 < v40 )
          return (unsigned int)-1073741675;
        v40 += v42;
      }
      if ( v40 + 4 < v40 )
        return (unsigned int)-1073741675;
      if ( v40 + 12 > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *(_DWORD *)v40 = 8;
      *(_QWORD *)(v40 + 4) = v16;
    }
    else
    {
      v47 = *(_DWORD *)(a4 + 4);
      if ( v47 + 12 < v47 )
        goto LABEL_73;
      *(_DWORD *)(a4 + 4) = v47 + 12;
    }
    ++*(_DWORD *)a4;
    v43 = *(_QWORD *)(a4 + 8);
    if ( v43 )
    {
      v44 = *(_QWORD *)(a4 + 8);
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v46 = *(_DWORD *)v44 + 4;
        if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v46 < v44 )
          return (unsigned int)-1073741675;
        v44 += v46;
      }
      if ( v44 + 4 >= v44 )
      {
        v12 = 0;
        if ( v44 + 36 <= v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *(_DWORD *)v44 = 32;
          *(_OWORD *)(v44 + 4) = v49;
          *(_OWORD *)(v44 + 20) = v50;
          ++*(_DWORD *)a4;
          return v12;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v48 = *(_DWORD *)(a4 + 4);
    if ( v48 + 36 >= v48 )
    {
      *(_DWORD *)(a4 + 4) = v48 + 36;
      ++*(_DWORD *)a4;
      return 0;
    }
LABEL_73:
    *(_DWORD *)(a4 + 4) = -1;
    return (unsigned int)-1073741675;
  }
  return v12;
}
