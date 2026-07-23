/*
 * XREFs of sub_140773F50 @ 0x140773F50
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140773F50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  unsigned int v13; // ebx
  __int64 v14; // r14
  unsigned int j; // edx
  __int64 v16; // r9
  unsigned int *v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rdx
  void *Pool2; // r15
  int v21; // ebp
  int v22; // edx
  unsigned int v23; // ecx
  __int64 v24; // rax
  int v25; // ebp
  __int64 v26; // r10
  _DWORD *v27; // rdx
  unsigned int k; // ecx
  unsigned int v29; // eax
  __int64 v30; // r9
  unsigned int v31; // eax
  unsigned __int64 v32; // rdx
  unsigned int m; // ecx
  unsigned int v34; // eax
  __int64 v35; // r8
  unsigned int v36; // eax
  _DWORD *v37; // rdx
  unsigned int n; // ecx
  unsigned int v39; // eax
  __int64 v40; // r8
  unsigned int v41; // eax
  _DWORD *v42; // rdx
  unsigned int ii; // ecx
  unsigned int v44; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
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
  v12 = 0LL;
  if ( (_DWORD)v10 )
    v12 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_QWORD *)v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v16 = *v4;
    v17 = v4 + 1;
    if ( j >= 4 )
      break;
    if ( v17 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  if ( v17 < v4 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( (_DWORD)v16 )
    v18 = v4 + 1;
  if ( (_DWORD)v16 == 4 )
  {
    if ( *v18 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !*(_QWORD *)&ExpPlatformBinaryLock.ForegroundLossTime )
    {
      v13 = -1073741637;
      goto LABEL_82;
    }
    v21 = guard_dispatch_icall_no_overrides((__int64)Pool2, v19);
    v13 = v21;
    if ( v21 < 0 )
      goto LABEL_82;
    v22 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8 || (v23 = *(_DWORD *)(a2 + 16) + 2108, v23 < *(_DWORD *)(a2 + 16) + 2104) )
    {
      v13 = -1073741675;
      goto LABEL_82;
    }
    v13 = v23 + v22 < v23 ? 0xC0000095 : 0;
    if ( v23 + v22 < v23 )
    {
LABEL_82:
      ExFreePoolWithTag(Pool2, 0);
      return v13;
    }
    if ( !a4 )
    {
      v13 = -1073741811;
      goto LABEL_82;
    }
    *(_DWORD *)(a4 + 4) = 2080;
    v24 = ExAllocatePool2(0x100uLL);
    if ( !v24 )
    {
      v13 = -1073741801;
      goto LABEL_82;
    }
    *(_QWORD *)(a4 + 8) = v24;
    v25 = v21 | 0x10000000;
    *(_DWORD *)a4 = 0;
    v26 = v24;
    v27 = (_DWORD *)v24;
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v29 = *v27 + 4;
      if ( *v27 >= 0xFFFFFFFC || (_DWORD *)((char *)v27 + v29) < v27 )
        goto LABEL_60;
      v27 = (_DWORD *)((char *)v27 + v29);
    }
    if ( v27 + 1 < v27 )
      goto LABEL_60;
    if ( (unsigned __int64)(v27 + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_44;
    *v27 = 4;
    v27[1] = v25;
    ++*(_DWORD *)a4;
    v30 = *(_QWORD *)(a4 + 8);
    if ( v30 )
    {
      v32 = *(_QWORD *)(a4 + 8);
      for ( m = 0; m < *(_DWORD *)a4; ++m )
      {
        v34 = *(_DWORD *)v32 + 4;
        if ( *(_DWORD *)v32 >= 0xFFFFFFFC || v32 + v34 < v32 )
          goto LABEL_60;
        v32 += v34;
      }
      if ( v32 + 4 < v32 )
        goto LABEL_60;
      if ( v32 + 12 > v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_44;
      *(_DWORD *)v32 = 8;
      *(_QWORD *)(v32 + 4) = v14;
    }
    else
    {
      v31 = *(_DWORD *)(a4 + 4);
      if ( v31 + 12 < v31 )
        goto LABEL_59;
      *(_DWORD *)(a4 + 4) = v31 + 12;
    }
    ++*(_DWORD *)a4;
    v35 = *(_QWORD *)(a4 + 8);
    if ( v35 )
    {
      v37 = *(_DWORD **)(a4 + 8);
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v39 = *v37 + 4;
        if ( *v37 >= 0xFFFFFFFC || (_DWORD *)((char *)v37 + v39) < v37 )
          goto LABEL_60;
        v37 = (_DWORD *)((char *)v37 + v39);
      }
      if ( v37 + 1 < v37 )
        goto LABEL_60;
      if ( (unsigned __int64)(v37 + 513) > v35 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_44;
      *v37 = 2048;
      memmove(v37 + 1, Pool2, 0x800uLL);
      goto LABEL_69;
    }
    v36 = *(_DWORD *)(a4 + 4);
    if ( v36 + 2052 >= v36 )
    {
      *(_DWORD *)(a4 + 4) = v36 + 2052;
LABEL_69:
      ++*(_DWORD *)a4;
      v40 = *(_QWORD *)(a4 + 8);
      if ( !v40 )
      {
        v41 = *(_DWORD *)(a4 + 4);
        if ( v41 + 8 >= v41 )
        {
          *(_DWORD *)(a4 + 4) = v41 + 8;
          ++*(_DWORD *)a4;
          v13 = 0;
          goto LABEL_82;
        }
        goto LABEL_59;
      }
      v42 = *(_DWORD **)(a4 + 8);
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v44 = *v42 + 4;
        if ( *v42 >= 0xFFFFFFFC || (_DWORD *)((char *)v42 + v44) < v42 )
          goto LABEL_60;
        v42 = (_DWORD *)((char *)v42 + v44);
      }
      if ( v42 + 1 >= v42 )
      {
        v13 = 0;
        if ( (unsigned __int64)(v42 + 2) <= v40 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v42 = 4;
          v42[1] = 2048;
          ++*(_DWORD *)a4;
          goto LABEL_82;
        }
LABEL_44:
        v13 = -1073741789;
        goto LABEL_82;
      }
LABEL_60:
      v13 = -1073741675;
      goto LABEL_82;
    }
LABEL_59:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_60;
  }
  return (unsigned int)-1073741789;
}
