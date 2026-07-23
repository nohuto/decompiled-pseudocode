/*
 * XREFs of SPCallServerHandleGetCurrentHardwareID @ 0x1404D31C0
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetCurrentHardwareID(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r15
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // rcx
  signed int v13; // ebx
  unsigned int *v15; // rax
  __int64 v16; // r12
  unsigned int j; // edx
  __int64 v18; // rax
  unsigned int *v19; // rcx
  unsigned int *v20; // rbp
  size_t v21; // rbp
  int v22; // edi
  int v23; // r14d
  __int64 v24; // r8
  _DWORD *v25; // rdx
  unsigned int m; // ecx
  unsigned int v27; // eax
  __int64 v28; // r8
  _DWORD *v29; // rdx
  unsigned int n; // ecx
  unsigned int v31; // eax
  unsigned int v32; // ebp
  unsigned int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // rax
  int v36; // r14d
  __int64 v37; // r9
  unsigned int v38; // ecx
  _DWORD *v39; // rdx
  unsigned int v40; // eax
  __int64 v41; // r8
  unsigned __int64 v42; // rdx
  unsigned int k; // ecx
  unsigned int v44; // eax
  unsigned int v45; // eax
  unsigned int v46; // ecx
  unsigned int v47; // eax
  int v48; // r8d
  unsigned int v49; // ecx
  unsigned int v50; // eax
  void *Pool2; // rax
  void *v52; // rcx
  unsigned int v53; // edx

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v15 = 0LL;
  if ( (_DWORD)v11 )
    v15 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v16 = *(_QWORD *)v15;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v18 = *v4;
    v19 = v4 + 1;
    if ( j >= 4 )
      break;
    if ( v19 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v19 < v4 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( (_DWORD)v18 )
    v20 = v4 + 1;
  if ( (_DWORD)v18 != 4 )
    return (unsigned int)-1073741789;
  v21 = *v20;
  if ( (_DWORD)v21 )
  {
    v22 = 0;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v21);
  }
  else
  {
    v22 = 1;
  }
  if ( *(_QWORD *)&ExpPlatformBinaryLock.PriorityFloorCounts[8] )
  {
    v52 = 0LL;
    if ( !v22 )
      v52 = v5;
    v23 = guard_dispatch_icall_no_overrides(v52, (unsigned int)v21);
  }
  else
  {
    v23 = -1073741637;
  }
  if ( (unsigned int)v21 >= 0xFFFFFFFC
    || (unsigned int)(v21 + 24) < 0x14
    || (v53 = v21 + 32, (int)v21 + 32 < (unsigned int)(v21 + 24))
    || v53 >= 0xFFFFFFF8
    || (v46 = (v21 + 47) & 0xFFFFFFF8, v46 < (int)v21 + 40)
    || v46 + 8 < v46 )
  {
    v13 = -1073741675;
    goto LABEL_39;
  }
  v47 = v46 + 12;
  v48 = *(_DWORD *)(a2 + 16);
  if ( v46 + 12 < 4 || (v49 = v46 + 16, v47 + 4 < v47) || (v50 = v49 + v48, v49 + v48 < v49) || v50 + 4 < v50 )
    v13 = -1073741675;
  else
    v13 = v50 + 4 + *(_DWORD *)(a2 + 32) < v50 + 4 ? 0xC0000095 : 0;
  if ( v13 < 0 )
    goto LABEL_39;
  if ( !a4 )
    goto LABEL_55;
  *(_DWORD *)(a4 + 4) = v53;
  if ( (_DWORD)v21 == -32 )
  {
    v13 = -1073741762;
    goto LABEL_39;
  }
  v35 = ExAllocatePool2(0x100uLL);
  if ( !v35 )
  {
    v13 = -1073741801;
    goto LABEL_39;
  }
  *(_QWORD *)(a4 + 8) = v35;
  v36 = v23 | 0x10000000;
  *(_DWORD *)a4 = 0;
  v37 = v35;
  v38 = 0;
  v39 = (_DWORD *)v35;
  while ( v38 < *(_DWORD *)a4 )
  {
    v40 = *v39 + 4;
    if ( *v39 >= 0xFFFFFFFC || (_DWORD *)((char *)v39 + v40) < v39 )
      goto LABEL_38;
    v39 = (_DWORD *)((char *)v39 + v40);
    ++v38;
  }
  if ( v39 + 1 < v39 )
    goto LABEL_38;
  if ( (unsigned __int64)(v39 + 2) > v37 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    goto LABEL_62;
  *v39 = 4;
  v39[1] = v36;
  ++*(_DWORD *)a4;
  v41 = *(_QWORD *)(a4 + 8);
  if ( v41 )
  {
    v42 = *(_QWORD *)(a4 + 8);
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v44 = *(_DWORD *)v42 + 4;
      if ( *(_DWORD *)v42 >= 0xFFFFFFFC || v42 + v44 < v42 )
        goto LABEL_38;
      v42 += v44;
    }
    if ( v42 + 4 < v42 )
      goto LABEL_38;
    if ( v42 + 12 > v41 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      goto LABEL_62;
    *(_DWORD *)v42 = 8;
    *(_QWORD *)(v42 + 4) = v16;
  }
  else
  {
    v45 = *(_DWORD *)(a4 + 4);
    if ( v45 + 12 < v45 )
      goto LABEL_60;
    *(_DWORD *)(a4 + 4) = v45 + 12;
  }
  ++*(_DWORD *)a4;
  if ( v5 )
  {
    if ( (_DWORD)v21 )
      goto LABEL_34;
LABEL_55:
    v13 = -1073741811;
    goto LABEL_39;
  }
  if ( (_DWORD)v21 )
    goto LABEL_55;
LABEL_34:
  v24 = *(_QWORD *)(a4 + 8);
  if ( !v24 )
  {
    v32 = v21 + 4;
    if ( v32 < 4 )
      goto LABEL_38;
    v33 = *(_DWORD *)(a4 + 4);
    if ( v33 + v32 < v33 )
      goto LABEL_60;
    *(_DWORD *)(a4 + 4) = v33 + v32;
    goto LABEL_45;
  }
  v25 = *(_DWORD **)(a4 + 8);
  for ( m = 0; m < *(_DWORD *)a4; ++m )
  {
    v27 = *v25 + 4;
    if ( *v25 >= 0xFFFFFFFC || (_DWORD *)((char *)v25 + v27) < v25 )
      goto LABEL_38;
    v25 = (_DWORD *)((char *)v25 + v27);
  }
  if ( v25 + 1 < v25 )
    goto LABEL_38;
  if ( (unsigned __int64)v25 + v21 + 4 > v24 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
  {
LABEL_62:
    v13 = -1073741789;
    goto LABEL_39;
  }
  *v25 = v21;
  if ( v5 )
    memmove(v25 + 1, v5, v21);
LABEL_45:
  ++*(_DWORD *)a4;
  v28 = *(_QWORD *)(a4 + 8);
  if ( v28 )
  {
    v29 = *(_DWORD **)(a4 + 8);
    for ( n = 0; n < *(_DWORD *)a4; ++n )
    {
      v31 = *v29 + 4;
      if ( *v29 >= 0xFFFFFFFC || (_DWORD *)((char *)v29 + v31) < v29 )
        goto LABEL_38;
      v29 = (_DWORD *)((char *)v29 + v31);
    }
    if ( v29 + 1 >= v29 )
    {
      v13 = 0;
      if ( (unsigned __int64)(v29 + 2) <= v28 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v29 = 4;
        v29[1] = 0;
        ++*(_DWORD *)a4;
        goto LABEL_39;
      }
      goto LABEL_62;
    }
LABEL_38:
    v13 = -1073741675;
    goto LABEL_39;
  }
  v34 = *(_DWORD *)(a4 + 4);
  if ( v34 + 8 < v34 )
  {
LABEL_60:
    *(_DWORD *)(a4 + 4) = -1;
    goto LABEL_38;
  }
  *(_DWORD *)(a4 + 4) = v34 + 8;
  ++*(_DWORD *)a4;
  v13 = 0;
LABEL_39:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v13;
}
