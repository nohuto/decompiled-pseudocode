/*
 * XREFs of sub_140B70B6C @ 0x140B70B6C
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140B70B6C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r9d
  __int64 v11; // r10
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  unsigned int v14; // r9d
  __int64 v15; // r15
  unsigned int *v16; // rax
  unsigned int j; // r8d
  __int64 v18; // rsi
  unsigned int *v19; // rdx
  __int64 v20; // r14
  unsigned int *v21; // rax
  unsigned int k; // r8d
  __int64 v23; // rbx
  unsigned int *v24; // rdx
  unsigned int m; // r8d
  __int64 v26; // r9
  unsigned int *v27; // rdx
  int v28; // esi
  int v29; // edx
  unsigned int v30; // ecx
  unsigned int v31; // eax
  __int64 Pool2; // rax
  int v33; // esi
  __int64 v34; // r10
  _DWORD *v35; // rdx
  unsigned int n; // ecx
  unsigned int v37; // eax
  __int64 v38; // r8
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int ii; // ecx
  unsigned int v42; // eax
  __int64 v43; // r10
  unsigned int v44; // eax
  unsigned __int64 v45; // r8
  unsigned int jj; // ecx
  unsigned int v47; // eax
  __int128 v49; // [rsp+50h] [rbp-48h]
  __int128 v50; // [rsp+60h] [rbp-38h]

  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a2 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
  if ( !v8 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = v8;
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
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1;
  v15 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = v8;
  for ( j = 0; ; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( j >= 4 )
      break;
    if ( v19 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v19 < v16 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( (_DWORD)v18 )
    v20 = (__int64)(v16 + 1);
  if ( v14 <= 5 )
    return (unsigned int)-1073741811;
  v21 = v8;
  for ( k = 0; ; ++k )
  {
    v23 = *v21;
    v24 = v21 + 1;
    if ( k >= 5 )
      break;
    if ( v24 < v21 )
      return (unsigned int)-1073741675;
    v21 = (unsigned int *)((char *)v24 + v23);
    if ( (unsigned int *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v21 )
    return (unsigned int)-1073741675;
  if ( v14 > 6 )
  {
    for ( m = 0; ; ++m )
    {
      v26 = *v8;
      v27 = v8 + 1;
      if ( m >= 6 )
        break;
      if ( v27 < v8 )
        return (unsigned int)-1073741675;
      v8 = (unsigned int *)((char *)v27 + v26);
      if ( (unsigned int *)((char *)v27 + v26) < v27 )
        return (unsigned int)-1073741675;
    }
    if ( v27 < v8 )
      return (unsigned int)-1073741675;
    if ( !ExpPlatformBinaryLock.ThreadListEntry.Flink )
      return (unsigned int)-1073741637;
    v28 = guard_dispatch_icall_no_overrides(v20, (unsigned int)v18);
    v7 = v28;
    if ( v28 >= 0 )
    {
      v29 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) < 0xFFFFFFB0 )
      {
        v30 = *(_DWORD *)(a2 + 16) + 84;
        if ( v30 >= *(_DWORD *)(a2 + 16) + 80 )
        {
          v31 = v30 + v29;
          v7 = v30 + v29 < v30 ? 0xC0000095 : 0;
          if ( v31 < v30 )
            return v7;
          *(_DWORD *)(a4 + 4) = 56;
          Pool2 = ExAllocatePool2(0x100uLL);
          if ( !Pool2 )
            return (unsigned int)-1073741801;
          *(_QWORD *)(a4 + 8) = Pool2;
          v33 = v28 | 0x10000000;
          *(_DWORD *)a4 = 0;
          v34 = Pool2;
          v35 = (_DWORD *)Pool2;
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v37 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
              return (unsigned int)-1073741675;
            v35 = (_DWORD *)((char *)v35 + v37);
          }
          if ( v35 + 1 >= v35 )
          {
            if ( (unsigned __int64)(v35 + 2) > v34 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              return (unsigned int)-1073741789;
            *v35 = 4;
            v35[1] = v33;
            ++*(_DWORD *)a4;
            v38 = *(_QWORD *)(a4 + 8);
            if ( v38 )
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
              if ( v40 + 12 > v38 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                return (unsigned int)-1073741789;
              *(_DWORD *)v40 = 8;
              *(_QWORD *)(v40 + 4) = v15;
            }
            else
            {
              v39 = *(_DWORD *)(a4 + 4);
              if ( v39 + 12 < v39 )
              {
LABEL_57:
                *(_DWORD *)(a4 + 4) = -1;
                return (unsigned int)-1073741675;
              }
              *(_DWORD *)(a4 + 4) = v39 + 12;
            }
            ++*(_DWORD *)a4;
            v43 = *(_QWORD *)(a4 + 8);
            if ( !v43 )
            {
              v44 = *(_DWORD *)(a4 + 4);
              if ( v44 + 36 >= v44 )
              {
                *(_DWORD *)(a4 + 4) = v44 + 36;
                ++*(_DWORD *)a4;
                return 0;
              }
              goto LABEL_57;
            }
            v45 = *(_QWORD *)(a4 + 8);
            for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
            {
              v47 = *(_DWORD *)v45 + 4;
              if ( *(_DWORD *)v45 >= 0xFFFFFFFC || v45 + v47 < v45 )
                return (unsigned int)-1073741675;
              v45 += v47;
            }
            if ( v45 + 4 >= v45 )
            {
              v7 = 0;
              if ( v45 + 36 <= v43 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *(_DWORD *)v45 = 32;
                *(_OWORD *)(v45 + 4) = v49;
                *(_OWORD *)(v45 + 20) = v50;
                ++*(_DWORD *)a4;
                return v7;
              }
              return (unsigned int)-1073741789;
            }
          }
          return (unsigned int)-1073741675;
        }
      }
      return (unsigned int)-1073741675;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v7;
}
