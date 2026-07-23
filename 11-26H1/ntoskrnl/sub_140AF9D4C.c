/*
 * XREFs of sub_140AF9D4C @ 0x140AF9D4C
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140AF9D4C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // edx
  unsigned int *v14; // rax
  __int64 v15; // rbp
  unsigned int j; // r8d
  __int64 v17; // rax
  unsigned int *v18; // rdx
  __int64 v19; // rcx
  int v20; // esi
  int v21; // edx
  unsigned int v22; // ecx
  unsigned int v23; // eax
  __int64 Pool2; // rax
  int v25; // esi
  __int64 v26; // r9
  _DWORD *v27; // rdx
  unsigned int k; // ecx
  unsigned int v29; // eax
  __int64 v30; // r10
  unsigned __int64 v31; // r8
  unsigned int m; // ecx
  unsigned int v33; // eax
  unsigned int v34; // eax

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
  v15 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v7;
    v18 = v7 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v7 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = (__int64)v18;
  v20 = ExpPlatformBinaryLock.IoSelfBoostsEntry.Next
      ? guard_dispatch_icall_no_overrides(v19, (unsigned int)v17)
      : -1073741637;
  v21 = *(_DWORD *)(a2 + 32);
  if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
    return (unsigned int)-1073741675;
  v22 = *(_DWORD *)(a2 + 16) + 52;
  if ( v22 < *(_DWORD *)(a2 + 16) + 48 )
    return (unsigned int)-1073741675;
  v23 = v22 + v21;
  v12 = v22 + v21 < v22 ? 0xC0000095 : 0;
  if ( v23 >= v22 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    Pool2 = ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = Pool2;
    v25 = v20 | 0x10000000;
    *(_DWORD *)a4 = 0;
    v26 = Pool2;
    v27 = (_DWORD *)Pool2;
    for ( k = 0; k < *(_DWORD *)a4; ++k )
    {
      v29 = *v27 + 4;
      if ( *v27 >= 0xFFFFFFFC || (_DWORD *)((char *)v27 + v29) < v27 )
        return (unsigned int)-1073741675;
      v27 = (_DWORD *)((char *)v27 + v29);
    }
    if ( v27 + 1 >= v27 )
    {
      if ( (unsigned __int64)(v27 + 2) > v26 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        return (unsigned int)-1073741789;
      *v27 = 4;
      v27[1] = v25;
      ++*(_DWORD *)a4;
      v30 = *(_QWORD *)(a4 + 8);
      if ( v30 )
      {
        v31 = *(_QWORD *)(a4 + 8);
        for ( m = 0; m < *(_DWORD *)a4; ++m )
        {
          v33 = *(_DWORD *)v31 + 4;
          if ( *(_DWORD *)v31 >= 0xFFFFFFFC || v31 + v33 < v31 )
            return (unsigned int)-1073741675;
          v31 += v33;
        }
        if ( v31 + 4 >= v31 )
        {
          v12 = 0;
          if ( v31 + 12 <= v30 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v31 = 8;
            *(_QWORD *)(v31 + 4) = v15;
            ++*(_DWORD *)a4;
            return v12;
          }
          return (unsigned int)-1073741789;
        }
      }
      else
      {
        v34 = *(_DWORD *)(a4 + 4);
        if ( v34 + 12 >= v34 )
        {
          *(_DWORD *)(a4 + 4) = v34 + 12;
          ++*(_DWORD *)a4;
          return 0;
        }
        *(_DWORD *)(a4 + 4) = -1;
      }
    }
    return (unsigned int)-1073741675;
  }
  return v12;
}
