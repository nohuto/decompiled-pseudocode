/*
 * XREFs of sub_140B6BD78 @ 0x140B6BD78
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B6BD78(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rsi
  unsigned int v7; // ebx
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int *v13; // rax
  bool v14; // cc
  unsigned int *v15; // rax
  unsigned int j; // r8d
  __int64 v17; // r9
  unsigned int *v18; // rdx
  unsigned int *v19; // rax
  unsigned int k; // r9d
  unsigned __int64 v21; // r8
  unsigned int *v22; // rdx
  const wchar_t *v23; // rbp
  __int64 v24; // r11
  size_t v25; // r15
  void *Pool2; // rax
  void *v27; // rdi
  const wchar_t *v28; // rax
  unsigned int m; // r8d
  size_t v30; // rdx
  const wchar_t *v31; // rcx
  const void *v32; // r15
  __int64 v33; // r11
  unsigned int v34; // r12d
  void *v35; // rax
  unsigned int *v36; // rdx
  unsigned int v37; // r9d
  unsigned int *v38; // rax
  unsigned int n; // r8d
  __int64 v40; // r13
  unsigned int *v41; // rcx
  unsigned int *v42; // rax
  unsigned int ii; // r8d
  __int64 v44; // r11
  unsigned int *v45; // rcx
  unsigned int jj; // r8d
  __int64 v47; // rax
  unsigned int *v48; // rcx
  int v49; // r12d
  int v50; // ecx
  unsigned int v51; // edx
  _DWORD *v52; // rax
  int v53; // r12d
  __int64 v54; // rbp
  __int64 v55; // r8
  unsigned int v56; // eax
  unsigned __int64 v57; // rdx
  unsigned int kk; // ecx
  unsigned int v59; // eax
  size_t pcbLength; // [rsp+50h] [rbp-48h] BYREF
  __int64 v62; // [rsp+58h] [rbp-40h]
  unsigned int v64; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
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
  v14 = *(_DWORD *)a1 <= 4u;
  v62 = *(_QWORD *)v13;
  if ( v14 )
    return (unsigned int)-1073741811;
  v15 = v8;
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
    v19 = v18;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1 <= 5u;
  v64 = *v19;
  pcbLength = 0LL;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v21 = *v8;
    v22 = v8 + 1;
    if ( k >= 5 )
      break;
    if ( v22 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v22 + v21);
    if ( (unsigned int *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v22 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v21 )
    return (unsigned int)-1073741762;
  v23 = (const wchar_t *)(v8 + 1);
  if ( (v21 & 1) != 0
    || *((_WORD *)v22 + (v21 >> 1) - 1)
    || StringCbLengthW(v23, *v8, &pcbLength) < 0
    || pcbLength + 2 != v24
    || 2 * (unsigned int)(pcbLength >> 1) == -2 )
  {
    return (unsigned int)-1073741762;
  }
  v25 = 2 * (unsigned int)(pcbLength >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v27 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v23, v25);
  v28 = *(const wchar_t **)(a1 + 8);
  pcbLength = 0LL;
  if ( v28 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; ; ++m )
    {
      v30 = *(unsigned int *)v28;
      v31 = v28 + 2;
      if ( m >= 6 )
        break;
      if ( v31 < v28 )
        goto LABEL_93;
      v28 = (const wchar_t *)((char *)v31 + v30);
      if ( (const wchar_t *)((char *)v31 + v30) < v31 )
        goto LABEL_93;
    }
    if ( v31 < v28 )
      goto LABEL_93;
    if ( !(_DWORD)v30
      || (v32 = v28 + 2,
          (v30 & 1) != 0
       || v31[(v30 >> 1) - 1]
       || StringCbLengthW(v31, v30, &pcbLength) < 0
       || pcbLength + 2 != v33
       || 2 * (unsigned int)(pcbLength >> 1) == -2) )
    {
      v7 = -1073741762;
      goto LABEL_94;
    }
    v34 = 2 * (pcbLength >> 1) + 2;
    v35 = (void *)ExAllocatePool2(0x100uLL);
    if ( !v35 )
    {
LABEL_90:
      v7 = -1073741801;
      goto LABEL_94;
    }
    v6 = v35;
    memmove(v35, v32, v34);
    v36 = *(unsigned int **)(a1 + 8);
    if ( !v36 )
      goto LABEL_62;
    v37 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 <= 7u )
      goto LABEL_62;
    v38 = *(unsigned int **)(a1 + 8);
    for ( n = 0; ; ++n )
    {
      v40 = *v38;
      v41 = v38 + 1;
      if ( n >= 7 )
        break;
      if ( v41 < v38 )
        goto LABEL_93;
      v38 = (unsigned int *)((char *)v41 + v40);
      if ( (unsigned int *)((char *)v41 + v40) < v41 )
        goto LABEL_93;
    }
    if ( v41 < v38 )
      goto LABEL_93;
    if ( v37 <= 8 )
      goto LABEL_62;
    v42 = *(unsigned int **)(a1 + 8);
    for ( ii = 0; ; ++ii )
    {
      v44 = *v42;
      v45 = v42 + 1;
      if ( ii >= 8 )
        break;
      if ( v45 < v42 )
        goto LABEL_93;
      v42 = (unsigned int *)((char *)v45 + v44);
      if ( (unsigned int *)((char *)v45 + v44) < v45 )
        goto LABEL_93;
    }
    if ( v45 < v42 )
      goto LABEL_93;
    if ( v37 <= 9 )
    {
LABEL_62:
      v7 = -1073741811;
      goto LABEL_94;
    }
    for ( jj = 0; ; ++jj )
    {
      v47 = *v36;
      v48 = v36 + 1;
      if ( jj >= 9 )
        break;
      if ( v48 < v36 )
        goto LABEL_93;
      v36 = (unsigned int *)((char *)v48 + v47);
      if ( (unsigned int *)((char *)v48 + v47) < v48 )
        goto LABEL_93;
    }
    if ( v48 >= v36 )
    {
      if ( ExpPlatformBinaryLock.SchedulerSharedSystemSlot )
      {
        v49 = guard_dispatch_icall_no_overrides(v64, (__int64)v27);
        v7 = v49;
        if ( v49 < 0 )
          goto LABEL_94;
        v50 = *(_DWORD *)(a2 + 32);
        if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFD0 )
          goto LABEL_93;
        v51 = *(_DWORD *)(a2 + 16) + 52;
        if ( v51 < *(_DWORD *)(a2 + 16) + 48 )
          goto LABEL_93;
        v7 = v51 + v50 < v51 ? 0xC0000095 : 0;
        if ( v51 + v50 < v51 )
          goto LABEL_94;
        *(_DWORD *)(a4 + 4) = 20;
        v52 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v52 )
          goto LABEL_90;
        *(_QWORD *)(a4 + 8) = v52;
        v53 = v49 | 0x10000000;
        *(_DWORD *)a4 = 0;
        v54 = v62;
        if ( v52 + 1 < v52 )
          goto LABEL_93;
        if ( v52 + 2 > (_DWORD *)((char *)v52 + *(unsigned int *)(a4 + 4)) )
        {
LABEL_100:
          v7 = -1073741789;
          goto LABEL_94;
        }
        *v52 = 4;
        v52[1] = v53;
        ++*(_DWORD *)a4;
        v55 = *(_QWORD *)(a4 + 8);
        if ( !v55 )
        {
          v56 = *(_DWORD *)(a4 + 4);
          if ( v56 + 12 >= v56 )
          {
            *(_DWORD *)(a4 + 4) = v56 + 12;
            v7 = 0;
            ++*(_DWORD *)a4;
            goto LABEL_94;
          }
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_93;
        }
        v57 = *(_QWORD *)(a4 + 8);
        for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
        {
          v59 = *(_DWORD *)v57 + 4;
          if ( *(_DWORD *)v57 >= 0xFFFFFFFC || v57 + v59 < v57 )
            goto LABEL_93;
          v57 += v59;
        }
        if ( v57 + 4 < v57 )
          goto LABEL_93;
        v7 = 0;
        if ( v57 + 12 > v55 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_100;
        *(_DWORD *)v57 = 8;
        *(_QWORD *)(v57 + 4) = v54;
        ++*(_DWORD *)a4;
      }
      else
      {
        v7 = -1073741637;
      }
LABEL_94:
      if ( !v27 )
        goto LABEL_96;
      goto LABEL_95;
    }
LABEL_93:
    v7 = -1073741675;
    goto LABEL_94;
  }
  v7 = -1073741811;
LABEL_95:
  ExFreePoolWithTag(v27, 0);
LABEL_96:
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  return v7;
}
