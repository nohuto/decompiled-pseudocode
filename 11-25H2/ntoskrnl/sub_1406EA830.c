/*
 * XREFs of sub_1406EA830 @ 0x1406EA830
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1406EA830(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 *v12; // rbp
  __int64 v13; // rbp
  signed int v14; // ebx
  unsigned int j; // edx
  __int64 v16; // r9
  unsigned int *v17; // rcx
  _DWORD *v18; // rax
  void *Pool2; // r15
  int v20; // edx
  unsigned int v21; // ecx
  signed int v22; // r14d
  __int64 v23; // rax
  _DWORD *v24; // rdx
  int v25; // r14d
  unsigned int v26; // eax
  unsigned int k; // ecx
  unsigned int v28; // eax
  unsigned __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int m; // ecx
  unsigned int v32; // eax
  _DWORD *v33; // rdx
  unsigned int v34; // eax
  unsigned int n; // ecx
  unsigned int v36; // eax
  _DWORD *v37; // rdx
  unsigned int v38; // eax
  unsigned int ii; // ecx
  unsigned int v40; // eax

  v4 = *(unsigned int **)(a1 + 8);
  if ( v4 && *(_DWORD *)a1 > 3u )
  {
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
      v12 = (__int64 *)(v8 + 1);
    if ( (_DWORD)v10 != 8 )
      return (unsigned int)-1073741789;
    v13 = *v12;
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
    if ( (_DWORD)v16 != 4 )
      return (unsigned int)-1073741789;
    if ( *v18 != 2048 )
      return (unsigned int)-1073741762;
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    if ( !qword_140FD7420 )
    {
      v14 = -1073741637;
      goto LABEL_88;
    }
    v14 = guard_dispatch_icall_no_overrides(Pool2);
    if ( v14 < 0 )
      goto LABEL_88;
    v20 = *(_DWORD *)(a2 + 32);
    if ( *(_DWORD *)(a2 + 16) >= 0xFFFFF7C8
      || (v21 = *(_DWORD *)(a2 + 16) + 2108, v22 = v14, v21 < *(_DWORD *)(a2 + 16) + 2104) )
    {
      v14 = -1073741675;
      goto LABEL_88;
    }
    v14 = v21 + v20 < v21 ? 0xC0000095 : 0;
    if ( v21 + v20 < v21 )
    {
LABEL_88:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v14;
    }
    if ( !a4 )
    {
      v14 = -1073741811;
      goto LABEL_88;
    }
    *(_DWORD *)(a4 + 4) = 2080;
    v14 = 0;
    v23 = ExAllocatePool2(0x100uLL);
    if ( v23 )
    {
      *(_QWORD *)(a4 + 8) = v23;
      *(_DWORD *)a4 = 0;
    }
    else
    {
      v14 = -1073741801;
    }
    if ( v14 < 0 )
      goto LABEL_88;
    v24 = *(_DWORD **)(a4 + 8);
    v25 = v22 | 0x10000000;
    if ( v24 )
    {
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v28 = *v24 + 4;
        if ( *v24 >= 0xFFFFFFFC || (_DWORD *)((char *)v24 + v28) < v24 )
          goto LABEL_65;
        v24 = (_DWORD *)((char *)v24 + v28);
      }
      if ( v24 + 1 < v24 )
        goto LABEL_65;
      if ( (unsigned __int64)(v24 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v24 = 4;
      v24[1] = v25;
    }
    else
    {
      v26 = *(_DWORD *)(a4 + 4);
      if ( v26 + 8 < v26 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v26 + 8;
    }
    ++*(_DWORD *)a4;
    v29 = *(_QWORD *)(a4 + 8);
    if ( v29 )
    {
      for ( m = 0; m < *(_DWORD *)a4; ++m )
      {
        v32 = *(_DWORD *)v29 + 4;
        if ( *(_DWORD *)v29 >= 0xFFFFFFFC || v29 + v32 < v29 )
          goto LABEL_65;
        v29 += v32;
      }
      if ( v29 + 4 < v29 )
        goto LABEL_65;
      if ( v29 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *(_DWORD *)v29 = 8;
      *(_QWORD *)(v29 + 4) = v13;
    }
    else
    {
      v30 = *(_DWORD *)(a4 + 4);
      if ( v30 + 12 < v30 )
        goto LABEL_64;
      *(_DWORD *)(a4 + 4) = v30 + 12;
    }
    ++*(_DWORD *)a4;
    v33 = *(_DWORD **)(a4 + 8);
    if ( v33 )
    {
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v36 = *v33 + 4;
        if ( *v33 >= 0xFFFFFFFC || (_DWORD *)((char *)v33 + v36) < v33 )
          goto LABEL_65;
        v33 = (_DWORD *)((char *)v33 + v36);
      }
      if ( v33 + 1 < v33 )
        goto LABEL_65;
      if ( (unsigned __int64)(v33 + 513) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_73;
      *v33 = 2048;
      memmove(v33 + 1, Pool2, 0x800uLL);
LABEL_75:
      ++*(_DWORD *)a4;
      v37 = *(_DWORD **)(a4 + 8);
      if ( !v37 )
      {
        v38 = *(_DWORD *)(a4 + 4);
        if ( v38 + 8 >= v38 )
        {
          ++*(_DWORD *)a4;
          v14 = 0;
          *(_DWORD *)(a4 + 4) = v38 + 8;
          goto LABEL_88;
        }
        goto LABEL_64;
      }
      for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
      {
        v40 = *v37 + 4;
        if ( *v37 >= 0xFFFFFFFC || (_DWORD *)((char *)v37 + v40) < v37 )
          goto LABEL_65;
        v37 = (_DWORD *)((char *)v37 + v40);
      }
      if ( v37 + 1 < v37 )
        goto LABEL_65;
      v14 = 0;
      if ( (unsigned __int64)(v37 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
        *v37 = 4;
        v37[1] = 2048;
        ++*(_DWORD *)a4;
        goto LABEL_88;
      }
LABEL_73:
      v14 = -1073741789;
      goto LABEL_88;
    }
    v34 = *(_DWORD *)(a4 + 4);
    if ( v34 + 2052 >= v34 )
    {
      *(_DWORD *)(a4 + 4) = v34 + 2052;
      goto LABEL_75;
    }
LABEL_64:
    *(_DWORD *)(a4 + 4) = -1;
LABEL_65:
    v14 = -1073741675;
    goto LABEL_88;
  }
  return (unsigned int)-1073741811;
}
