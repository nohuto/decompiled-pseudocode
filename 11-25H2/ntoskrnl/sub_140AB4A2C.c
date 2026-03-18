/*
 * XREFs of sub_140AB4A2C @ 0x140AB4A2C
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     StringCbLengthW @ 0x1404508A4 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB4A2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const wchar_t *v4; // r8
  void *v7; // r13
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // r14
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // r9
  unsigned int *v18; // rcx
  unsigned int *v19; // r15
  bool v20; // cc
  unsigned int v21; // r15d
  unsigned int k; // r9d
  size_t v23; // rdx
  const wchar_t *v24; // rcx
  const void *v25; // rbp
  __int64 v26; // r11
  size_t v27; // r12
  void *Pool2; // rax
  void *v29; // rdi
  unsigned int *v30; // rdx
  unsigned int *v31; // rax
  unsigned int m; // r8d
  __int64 v33; // r13
  unsigned int *v34; // rcx
  unsigned int *v35; // rax
  unsigned int n; // r9d
  __int64 v37; // r8
  unsigned int *v38; // rcx
  size_t v39; // rax
  unsigned int ii; // r10d
  __int64 v41; // r11
  unsigned int *v42; // rcx
  unsigned int *v43; // rbp
  size_t v44; // rbp
  void *v45; // rax
  int v46; // r15d
  unsigned int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // eax
  int v50; // r8d
  unsigned int v51; // edx
  unsigned int v52; // eax
  __int64 v53; // rax
  _DWORD *v54; // rdx
  int v55; // r15d
  unsigned int v56; // eax
  unsigned int jj; // ecx
  unsigned int v58; // eax
  unsigned __int64 v59; // rdx
  unsigned int v60; // eax
  unsigned int kk; // ecx
  unsigned int v62; // eax
  _DWORD *v63; // rdx
  unsigned int v64; // ebp
  unsigned int v65; // eax
  unsigned int mm; // ecx
  unsigned int v67; // eax
  _DWORD *v68; // rdx
  unsigned int v69; // eax
  unsigned int nn; // ecx
  unsigned int v71; // eax
  void *Src; // [rsp+58h] [rbp-50h]
  size_t pcbLength[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(const wchar_t **)(a1 + 8);
  Src = 0LL;
  v7 = 0LL;
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
    v12 = (__int64 *)(v8 + 1);
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v13 = *v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = (unsigned int *)v4;
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
    v19 = v15 + 1;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v20 = *(_DWORD *)a1 <= 5u;
  v21 = *v19;
  pcbLength[0] = 0LL;
  if ( v20 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v23 = *(unsigned int *)v4;
    v24 = v4 + 2;
    if ( k >= 5 )
      break;
    if ( v24 < v4 )
      return (unsigned int)-1073741675;
    v4 = (const wchar_t *)((char *)v24 + v23);
    if ( (const wchar_t *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v23 )
    return (unsigned int)-1073741762;
  v25 = v4 + 2;
  if ( (v23 & 1) != 0
    || v24[(v23 >> 1) - 1]
    || StringCbLengthW(v24, v23, pcbLength) < 0
    || pcbLength[0] + 2 != v26
    || 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v27 = 2 * (unsigned int)(pcbLength[0] >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v29 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v25, v27);
  v30 = *(unsigned int **)(a1 + 8);
  if ( v30 && *(_DWORD *)a1 > 6u )
  {
    v31 = *(unsigned int **)(a1 + 8);
    for ( m = 0; ; ++m )
    {
      v33 = *v31;
      v34 = v31 + 1;
      if ( m >= 6 )
        break;
      if ( v34 < v31 )
        goto LABEL_101;
      v31 = (unsigned int *)((char *)v34 + v33);
      if ( (unsigned int *)((char *)v34 + v33) < v34 )
        goto LABEL_101;
    }
    if ( v34 < v31 )
      goto LABEL_101;
    if ( *(_DWORD *)a1 <= 7u )
    {
LABEL_50:
      v14 = -1073741811;
LABEL_102:
      v7 = Src;
      goto LABEL_103;
    }
    v35 = *(unsigned int **)(a1 + 8);
    for ( n = 0; ; ++n )
    {
      v37 = *v35;
      v38 = v35 + 1;
      if ( n >= 7 )
        break;
      if ( v38 < v35 )
        goto LABEL_101;
      v35 = (unsigned int *)((char *)v38 + v37);
      if ( (unsigned int *)((char *)v38 + v37) < v38 )
        goto LABEL_101;
    }
    if ( v38 < v35 )
      goto LABEL_101;
    v39 = 0LL;
    if ( (_DWORD)v37 )
      v39 = (size_t)v38;
    v20 = *(_DWORD *)a1 <= 8u;
    pcbLength[0] = v39;
    if ( v20 )
      goto LABEL_50;
    for ( ii = 0; ; ++ii )
    {
      v41 = *v30;
      v42 = v30 + 1;
      if ( ii >= 8 )
        break;
      if ( v42 < v30 )
        goto LABEL_101;
      v30 = (unsigned int *)((char *)v42 + v41);
      pcbLength[0] = v39;
      if ( (unsigned int *)((char *)v42 + v41) < v42 )
        goto LABEL_101;
    }
    if ( v42 < v30 )
      goto LABEL_101;
    v43 = 0LL;
    if ( (_DWORD)v41 )
      v43 = v30 + 1;
    if ( (_DWORD)v41 != 4 )
      goto LABEL_69;
    v44 = *v43;
    if ( (_DWORD)v44 )
    {
      v45 = (void *)ExAllocatePool2(0x100uLL);
      Src = v45;
      if ( !v45 )
      {
        v14 = -1073741801;
        v7 = 0LL;
        goto LABEL_103;
      }
      memset_0(v45, 0, v44);
    }
    v46 = qword_140FD7380 ? guard_dispatch_icall_no_overrides(v21) : -1073741637;
    if ( (unsigned int)v44 >= 0xFFFFFFFC )
      goto LABEL_101;
    if ( (unsigned int)(v44 + 24) < 0x14 )
      goto LABEL_101;
    v47 = v44 + 32;
    if ( (int)v44 + 32 < (unsigned int)(v44 + 24) )
      goto LABEL_101;
    if ( v47 >= 0xFFFFFFF8 )
      goto LABEL_101;
    v48 = (v44 + 47) & 0xFFFFFFF8;
    if ( v48 < (int)v44 + 40 || v48 + 8 < v48 )
      goto LABEL_101;
    v49 = v48 + 12;
    v50 = *(_DWORD *)(a2 + 16);
    if ( v48 + 12 < 4 || (v51 = v48 + 16, v49 + 4 < v49) || (v52 = v50 + v51, v50 + v51 < v51) || v52 + 4 < v52 )
      v14 = -1073741675;
    else
      v14 = *(_DWORD *)(a2 + 32) + v52 + 4 < v52 + 4 ? 0xC0000095 : 0;
    if ( v14 < 0 )
      goto LABEL_102;
    if ( !a4 )
      goto LABEL_50;
    *(_DWORD *)(a4 + 4) = v47;
    v14 = 0;
    if ( (_DWORD)v44 == -32 )
    {
      v14 = -1073741762;
    }
    else
    {
      v53 = ExAllocatePool2(0x100uLL);
      if ( v53 )
      {
        *(_QWORD *)(a4 + 8) = v53;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v14 = -1073741801;
      }
    }
    if ( v14 < 0 )
      goto LABEL_102;
    v54 = *(_DWORD **)(a4 + 8);
    v55 = v46 | 0x10000000;
    if ( v54 )
    {
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v58 = *v54 + 4;
        if ( *v54 >= 0xFFFFFFFC || (_DWORD *)((char *)v54 + v58) < v54 )
          goto LABEL_101;
        v54 = (_DWORD *)((char *)v54 + v58);
      }
      if ( v54 + 1 < v54 )
        goto LABEL_101;
      if ( (unsigned __int64)(v54 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_69;
      *v54 = 4;
      v54[1] = v55;
    }
    else
    {
      v56 = *(_DWORD *)(a4 + 4);
      if ( v56 + 8 < v56 )
        goto LABEL_100;
      *(_DWORD *)(a4 + 4) = v56 + 8;
    }
    ++*(_DWORD *)a4;
    v59 = *(_QWORD *)(a4 + 8);
    if ( !v59 )
    {
      v60 = *(_DWORD *)(a4 + 4);
      if ( v60 + 12 >= v60 )
      {
        *(_DWORD *)(a4 + 4) = v60 + 12;
        goto LABEL_126;
      }
LABEL_100:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_101;
    }
    for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
    {
      v62 = *(_DWORD *)v59 + 4;
      if ( *(_DWORD *)v59 >= 0xFFFFFFFC || v59 + v62 < v59 )
        goto LABEL_101;
      v59 += v62;
    }
    if ( v59 + 4 < v59 )
      goto LABEL_101;
    if ( v59 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v59 = 8;
      *(_QWORD *)(v59 + 4) = v13;
LABEL_126:
      ++*(_DWORD *)a4;
      if ( Src )
      {
        if ( !(_DWORD)v44 )
          goto LABEL_128;
      }
      else if ( (_DWORD)v44 )
      {
LABEL_128:
        v14 = -1073741811;
LABEL_136:
        v7 = Src;
        goto LABEL_103;
      }
      v63 = *(_DWORD **)(a4 + 8);
      if ( v63 )
      {
        for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
        {
          v67 = *v63 + 4;
          if ( *v63 >= 0xFFFFFFFC || (_DWORD *)((char *)v63 + v67) < v63 )
            goto LABEL_135;
          v63 = (_DWORD *)((char *)v63 + v67);
        }
        if ( v63 + 1 >= v63 )
        {
          if ( (unsigned __int64)v63 + v44 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v14 = -1073741789;
            goto LABEL_136;
          }
          *v63 = v44;
          if ( Src )
            memmove(v63 + 1, Src, (unsigned int)v44);
          goto LABEL_147;
        }
      }
      else
      {
        v64 = v44 + 4;
        if ( v64 >= 4 )
        {
          v65 = *(_DWORD *)(a4 + 4);
          if ( v65 + v64 >= v65 )
          {
            *(_DWORD *)(a4 + 4) = v65 + v64;
LABEL_147:
            ++*(_DWORD *)a4;
            v68 = *(_DWORD **)(a4 + 8);
            if ( !v68 )
            {
              v69 = *(_DWORD *)(a4 + 4);
              if ( v69 + 8 >= v69 )
              {
                ++*(_DWORD *)a4;
                v14 = 0;
                *(_DWORD *)(a4 + 4) = v69 + 8;
                goto LABEL_102;
              }
              goto LABEL_100;
            }
            for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
            {
              v71 = *v68 + 4;
              if ( *v68 >= 0xFFFFFFFC || (_DWORD *)((char *)v68 + v71) < v68 )
                goto LABEL_101;
              v68 = (_DWORD *)((char *)v68 + v71);
            }
            if ( v68 + 1 >= v68 )
            {
              v14 = 0;
              if ( (unsigned __int64)(v68 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v68 = 4;
                v68[1] = 0;
                ++*(_DWORD *)a4;
                goto LABEL_102;
              }
              goto LABEL_69;
            }
LABEL_101:
            v14 = -1073741675;
            goto LABEL_102;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
LABEL_135:
      v14 = -1073741675;
      goto LABEL_136;
    }
LABEL_69:
    v14 = -1073741789;
    goto LABEL_102;
  }
  v14 = -1073741811;
LABEL_103:
  if ( v29 )
    ExFreePoolWithTag(v29, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v14;
}
