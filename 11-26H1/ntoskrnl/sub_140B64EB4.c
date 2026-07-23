/*
 * XREFs of sub_140B64EB4 @ 0x140B64EB4
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B64EB4(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  __int64 v6; // rbx
  unsigned int v8; // edx
  unsigned int *v9; // rax
  __int64 v10; // r10
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  signed int v13; // ebx
  unsigned int v14; // r10d
  unsigned int *v15; // rax
  unsigned int i; // edx
  __int64 v17; // r12
  unsigned int *v18; // rcx
  __int64 v19; // r13
  unsigned int *v20; // rax
  unsigned int j; // edx
  __int64 v22; // r15
  unsigned int *v23; // rcx
  unsigned int k; // edx
  __int64 v25; // rax
  unsigned int *v26; // rcx
  unsigned int *v27; // rbp
  size_t v28; // rbp
  void *Pool2; // rax
  int v30; // r14d
  unsigned int v31; // edx
  unsigned int v32; // ecx
  unsigned int v33; // eax
  int v34; // r8d
  unsigned int v35; // ecx
  unsigned int v36; // eax
  __int64 v37; // rax
  int v38; // r14d
  __int64 v39; // r9
  unsigned int v40; // ecx
  _DWORD *v41; // rdx
  unsigned int v42; // eax
  __int64 v43; // r8
  unsigned int v44; // eax
  unsigned __int64 v45; // rdx
  unsigned int m; // ecx
  unsigned int v47; // eax
  void *v48; // r14
  __int64 v49; // r8
  unsigned int v50; // ebp
  unsigned int v51; // eax
  _DWORD *v52; // rdx
  unsigned int n; // ecx
  unsigned int v54; // eax
  __int64 v55; // r8
  unsigned int v56; // eax
  _DWORD *v57; // rdx
  unsigned int ii; // ecx
  unsigned int v59; // eax
  void *Src; // [rsp+40h] [rbp-48h]
  __int64 v62; // [rsp+48h] [rbp-40h]

  v4 = *(unsigned int **)(a1 + 8);
  Src = 0LL;
  v6 = a2;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = 0;
  v9 = *(unsigned int **)(a1 + 8);
  while ( 1 )
  {
    v10 = *v9;
    v11 = v9 + 1;
    if ( v8 >= 3 )
      break;
    if ( v11 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
    ++v8;
  }
  if ( v11 < v9 )
    return (unsigned int)-1073741675;
  v12 = 0LL;
  if ( (_DWORD)v10 )
    v12 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1;
  v62 = *(_QWORD *)v12;
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
    v19 = (__int64)(v15 + 1);
  if ( v14 <= 5 )
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
  if ( v14 <= 6 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v25 = *v4;
    v26 = v4 + 1;
    if ( k >= 6 )
      break;
    if ( v26 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v26 + v25);
    if ( (unsigned int *)((char *)v26 + v25) < v26 )
      return (unsigned int)-1073741675;
  }
  if ( v26 < v4 )
    return (unsigned int)-1073741675;
  v27 = 0LL;
  if ( (_DWORD)v25 )
    v27 = v4 + 1;
  if ( (_DWORD)v25 != 4 )
    return (unsigned int)-1073741789;
  v28 = *v27;
  if ( (_DWORD)v28 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    Src = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v28);
    v6 = a2;
  }
  if ( ExpPlatformBinaryLock.MutantListHead.Blink )
    v30 = guard_dispatch_icall_no_overrides(v19, (unsigned int)v17);
  else
    v30 = -1073741637;
  if ( (unsigned int)v28 >= 0xFFFFFFFC
    || (unsigned int)(v28 + 24) < 0x14
    || (v31 = v28 + 32, (int)v28 + 32 < (unsigned int)(v28 + 24))
    || v31 >= 0xFFFFFFF8
    || (v32 = (v28 + 47) & 0xFFFFFFF8, v32 < (int)v28 + 40)
    || v32 + 8 < v32 )
  {
    v13 = -1073741675;
    goto LABEL_119;
  }
  v33 = v32 + 12;
  v34 = *(_DWORD *)(v6 + 16);
  if ( v32 + 12 < 4 || (v35 = v32 + 16, v33 + 4 < v33) || (v36 = v35 + v34, v35 + v34 < v35) || v36 + 4 < v36 )
    v13 = -1073741675;
  else
    v13 = v36 + 4 + *(_DWORD *)(v6 + 32) < v36 + 4 ? 0xC0000095 : 0;
  if ( v13 < 0 )
    goto LABEL_119;
  if ( a4 )
  {
    *(_DWORD *)(a4 + 4) = v31;
    if ( (_DWORD)v28 == -32 )
    {
      v13 = -1073741762;
      goto LABEL_119;
    }
    v37 = ExAllocatePool2(0x100uLL);
    if ( !v37 )
    {
      v13 = -1073741801;
      goto LABEL_119;
    }
    *(_QWORD *)(a4 + 8) = v37;
    v38 = v30 | 0x10000000;
    *(_DWORD *)a4 = 0;
    v39 = v37;
    v40 = 0;
    v41 = (_DWORD *)v37;
    while ( v40 < *(_DWORD *)a4 )
    {
      v42 = *v41 + 4;
      if ( v42 < 4 || (_DWORD *)((char *)v41 + v42) < v41 )
        goto LABEL_68;
      v41 = (_DWORD *)((char *)v41 + v42);
      ++v40;
    }
    if ( v41 + 1 >= v41 )
    {
      if ( (unsigned __int64)(v41 + 2) > v39 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
LABEL_75:
        v13 = -1073741789;
        goto LABEL_119;
      }
      *v41 = 4;
      v41[1] = v38;
      ++*(_DWORD *)a4;
      v43 = *(_QWORD *)(a4 + 8);
      if ( v43 )
      {
        v45 = *(_QWORD *)(a4 + 8);
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v47 = *(_DWORD *)v45 + 4;
          if ( v47 < 4 || v45 + v47 < v45 )
            goto LABEL_68;
          v45 += v47;
        }
        if ( v45 + 4 >= v45 )
        {
          if ( v45 + 12 > v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_75;
          *(_DWORD *)v45 = 8;
          *(_QWORD *)(v45 + 4) = v62;
LABEL_87:
          ++*(_DWORD *)a4;
          v48 = Src;
          if ( Src )
          {
            if ( !(_DWORD)v28 )
              goto LABEL_89;
          }
          else if ( (_DWORD)v28 )
          {
LABEL_89:
            v13 = -1073741811;
            goto LABEL_120;
          }
          v49 = *(_QWORD *)(a4 + 8);
          if ( v49 )
          {
            v52 = *(_DWORD **)(a4 + 8);
            for ( n = 0; n < *(_DWORD *)a4; ++n )
            {
              v54 = *v52 + 4;
              if ( v54 < 4 || (_DWORD *)((char *)v52 + v54) < v52 )
                goto LABEL_96;
              v52 = (_DWORD *)((char *)v52 + v54);
            }
            if ( v52 + 1 < v52 )
              goto LABEL_96;
            if ( (unsigned __int64)v52 + v28 + 4 > v49 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              goto LABEL_104;
            *v52 = v28;
            if ( Src )
              memmove(v52 + 1, Src, v28);
          }
          else
          {
            v50 = v28 + 4;
            if ( v50 < 4 )
            {
LABEL_96:
              v13 = -1073741675;
              goto LABEL_120;
            }
            v51 = *(_DWORD *)(a4 + 4);
            if ( v51 + v50 < v51 )
            {
LABEL_95:
              *(_DWORD *)(a4 + 4) = -1;
              goto LABEL_96;
            }
            *(_DWORD *)(a4 + 4) = v51 + v50;
          }
          ++*(_DWORD *)a4;
          v55 = *(_QWORD *)(a4 + 8);
          if ( !v55 )
          {
            v56 = *(_DWORD *)(a4 + 4);
            if ( v56 + 8 >= v56 )
            {
              *(_DWORD *)(a4 + 4) = v56 + 8;
              ++*(_DWORD *)a4;
              v13 = 0;
              goto LABEL_120;
            }
            goto LABEL_95;
          }
          v57 = *(_DWORD **)(a4 + 8);
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v59 = *v57 + 4;
            if ( v59 < 4 || (_DWORD *)((char *)v57 + v59) < v57 )
              goto LABEL_96;
            v57 = (_DWORD *)((char *)v57 + v59);
          }
          if ( v57 + 1 < v57 )
            goto LABEL_96;
          v13 = 0;
          if ( (unsigned __int64)(v57 + 2) <= v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v57 = 4;
            v57[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_120;
          }
LABEL_104:
          v13 = -1073741789;
          goto LABEL_120;
        }
      }
      else
      {
        v44 = *(_DWORD *)(a4 + 4);
        if ( v44 + 12 >= v44 )
        {
          *(_DWORD *)(a4 + 4) = v44 + 12;
          goto LABEL_87;
        }
        *(_DWORD *)(a4 + 4) = -1;
      }
    }
LABEL_68:
    v13 = -1073741675;
    goto LABEL_119;
  }
  v13 = -1073741811;
LABEL_119:
  v48 = Src;
LABEL_120:
  if ( v48 )
    ExFreePoolWithTag(v48, 0);
  return (unsigned int)v13;
}
