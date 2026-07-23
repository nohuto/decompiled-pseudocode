/*
 * XREFs of SPCallServerHandleUpdatePolicies @ 0x140B0D2E8
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleUpdatePolicies(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v6; // r10d
  int v7; // edx
  unsigned int v9; // eax
  struct _KTHREAD **v10; // rax
  unsigned int i; // edx
  __int64 v12; // r8
  struct _KTHREAD **v13; // rcx
  struct _KTHREAD **v14; // rax
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // r8
  unsigned int *v18; // rcx
  __int64 v19; // rdx
  int v20; // eax
  int v21; // r14d
  void *v22; // rcx
  unsigned int v23; // eax
  _DWORD *Pool2; // rax
  __int64 v25; // r8
  _DWORD *v26; // rdx
  unsigned int k; // ecx
  unsigned int m; // ecx
  __int64 v29; // r8
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  _DWORD *v33; // rdx
  unsigned int n; // ecx
  unsigned int v35; // eax
  _DWORD *v36; // rax

  v6 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFE0 )
    return (unsigned int)-1073741675;
  v9 = *(_DWORD *)(a2 + 16) + 36;
  if ( v9 < *(_DWORD *)(a2 + 16) + 32 || v9 + v6 < v9 )
    return (unsigned int)-1073741675;
  if ( a3 >= v9 + v6 )
  {
    v10 = *(struct _KTHREAD ***)(a1 + 8);
    if ( !v10 || *(_DWORD *)a1 <= 3u )
      return (unsigned int)-1073741811;
    for ( i = 0; ; ++i )
    {
      v12 = *(unsigned int *)v10;
      v13 = (struct _KTHREAD **)((char *)v10 + 4);
      if ( i >= 3 )
        break;
      if ( v13 < v10 )
        return (unsigned int)-1073741675;
      v10 = (struct _KTHREAD **)((char *)v13 + v12);
      if ( (struct _KTHREAD **)((char *)v13 + v12) < v13 )
        return (unsigned int)-1073741675;
    }
    if ( v13 < v10 )
      return (unsigned int)-1073741675;
    v14 = 0LL;
    if ( (_DWORD)v12 )
      v14 = v13;
    if ( (_DWORD)v12 != 8 )
      return (unsigned int)-1073741789;
    if ( *v14 && ExpPlatformBinaryLock.WaitBlock[0].Thread )
    {
      if ( *v14 == ExpPlatformBinaryLock.WaitBlock[0].Thread )
      {
        v15 = *(unsigned int **)(a1 + 8);
        if ( v15 && *(_DWORD *)a1 > 4u )
        {
          for ( j = 0; ; ++j )
          {
            v17 = *v15;
            v18 = v15 + 1;
            if ( j >= 4 )
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
          v20 = guard_dispatch_icall_no_overrides((unsigned int)v17, v19);
          if ( v20 == 263 )
          {
            v21 = 1074058754;
          }
          else if ( v20 == 0x40000000 )
          {
            v21 = 1074058753;
          }
          else if ( v20 >= 0 )
          {
            v21 = 0;
          }
          else
          {
            v21 = v20 | 0x10000000;
          }
          v22 = *(void **)(a4 + 8);
          *(_QWORD *)a4 = 0LL;
          if ( v22 )
          {
            ExFreePoolWithTag(v22, 0);
            *(_QWORD *)(a4 + 8) = 0LL;
          }
          goto LABEL_36;
        }
        return (unsigned int)-1073741811;
      }
      if ( !a4 )
        return (unsigned int)-1073741811;
      v25 = *(_QWORD *)(a4 + 8);
      v21 = -1073425151;
      if ( v25 )
      {
        v26 = *(_DWORD **)(a4 + 8);
        for ( k = 0; k < *(_DWORD *)a4; ++k )
        {
          v31 = *v26 + 4;
          if ( *v26 >= 0xFFFFFFFC || (_DWORD *)((char *)v26 + v31) < v26 )
            return (unsigned int)-1073741675;
          v26 = (_DWORD *)((char *)v26 + v31);
        }
LABEL_65:
        if ( v26 + 1 < v26 )
          return (unsigned int)-1073741675;
        if ( (unsigned __int64)(v26 + 2) > v25 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          return (unsigned int)-1073741789;
        *v26 = 4;
        v26[1] = -1073425151;
LABEL_40:
        ++*(_DWORD *)a4;
        if ( *(_DWORD *)(a4 + 4) )
        {
          Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( Pool2 )
          {
            *(_QWORD *)(a4 + 8) = Pool2;
            *(_DWORD *)a4 = 0;
            if ( Pool2 + 1 < Pool2 )
              return (unsigned int)-1073741675;
            v7 = 0;
            if ( Pool2 + 2 <= (_DWORD *)((char *)Pool2 + *(unsigned int *)(a4 + 4)) )
            {
              *Pool2 = 4;
              Pool2[1] = v21;
              ++*(_DWORD *)a4;
              return (unsigned int)v7;
            }
            return (unsigned int)-1073741789;
          }
          return (unsigned int)-1073741801;
        }
        return (unsigned int)-1073741762;
      }
    }
    else
    {
      if ( !a4 )
        return (unsigned int)-1073741811;
      v25 = *(_QWORD *)(a4 + 8);
      v21 = -1073425151;
      if ( v25 )
      {
        v26 = *(_DWORD **)(a4 + 8);
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v32 = *v26 + 4;
          if ( *v26 >= 0xFFFFFFFC || (_DWORD *)((char *)v26 + v32) < v26 )
            return (unsigned int)-1073741675;
          v26 = (_DWORD *)((char *)v26 + v32);
        }
        goto LABEL_65;
      }
    }
LABEL_36:
    v23 = *(_DWORD *)(a4 + 4);
    if ( v23 + 8 < v23 )
    {
LABEL_37:
      *(_DWORD *)(a4 + 4) = -1;
      return (unsigned int)-1073741675;
    }
    *(_DWORD *)(a4 + 4) = v23 + 8;
    goto LABEL_40;
  }
  if ( !a4 )
    return (unsigned int)-1073741811;
  v29 = *(_QWORD *)(a4 + 8);
  if ( v29 )
  {
    v33 = *(_DWORD **)(a4 + 8);
    for ( n = 0; n < *(_DWORD *)a4; ++n )
    {
      v35 = *v33 + 4;
      if ( *v33 >= 0xFFFFFFFC || (_DWORD *)((char *)v33 + v35) < v33 )
        return (unsigned int)-1073741675;
      v33 = (_DWORD *)((char *)v33 + v35);
    }
    if ( v33 + 1 < v33 )
      return (unsigned int)-1073741675;
    if ( (unsigned __int64)(v33 + 2) > v29 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *v33 = 4;
    v33[1] = 0;
  }
  else
  {
    v30 = *(_DWORD *)(a4 + 4);
    if ( v30 + 8 < v30 )
      goto LABEL_37;
    *(_DWORD *)(a4 + 4) = v30 + 8;
  }
  ++*(_DWORD *)a4;
  if ( !*(_DWORD *)(a4 + 4) )
    return (unsigned int)-1073741762;
  v36 = (_DWORD *)ExAllocatePool2(0x100uLL);
  if ( !v36 )
    return (unsigned int)-1073741801;
  *(_QWORD *)(a4 + 8) = v36;
  *(_DWORD *)a4 = 0;
  if ( v36 + 1 < v36 )
  {
    v7 = -1073741675;
  }
  else
  {
    v7 = 0;
    if ( v36 + 2 <= (_DWORD *)((char *)v36 + *(unsigned int *)(a4 + 4)) )
    {
      *v36 = 4;
      v36[1] = 0;
      ++*(_DWORD *)a4;
    }
    else
    {
      v7 = -1073741789;
    }
  }
  if ( v7 >= 0 )
    return 0;
  return (unsigned int)v7;
}
