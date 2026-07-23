/*
 * XREFs of sub_140AB940C @ 0x140AB940C
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB940C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v7; // rbp
  unsigned int *v8; // rcx
  unsigned int *v9; // rax
  unsigned int i; // r8d
  __int64 v11; // r9
  unsigned int *v12; // rdx
  unsigned int v13; // ebx
  unsigned int *v15; // rax
  __int64 v16; // r10
  unsigned int *v17; // rax
  unsigned int j; // r8d
  __int64 v19; // r9
  unsigned int *v20; // rdx
  unsigned int *v21; // rax
  unsigned int v22; // r12d
  unsigned int k; // r9d
  unsigned __int64 v24; // r8
  unsigned int *v25; // rdx
  _WORD *v26; // rcx
  unsigned __int64 v27; // rax
  unsigned int *v28; // r14
  unsigned __int64 v29; // rdx
  unsigned int v30; // ebx
  void *Pool2; // rax
  void *v32; // rdi
  unsigned int *v33; // rax
  unsigned int m; // ecx
  unsigned __int64 v35; // r8
  unsigned int *v36; // rdx
  _WORD *v37; // rcx
  __int64 v38; // r9
  unsigned __int64 v39; // rax
  unsigned __int64 v40; // r8
  unsigned int *v41; // r14
  unsigned __int64 v42; // r8
  unsigned int v43; // ebx
  void *v44; // rax
  unsigned int *v45; // rdx
  unsigned int *v46; // rax
  unsigned int n; // r8d
  __int64 v48; // r11
  unsigned int *v49; // rcx
  unsigned int ii; // r8d
  __int64 v51; // r9
  unsigned int *v52; // rcx
  int v53; // r12d
  int v54; // ecx
  unsigned int v55; // edx
  _DWORD *v56; // rax
  int v57; // r12d
  unsigned int v58; // ecx
  __int64 v59; // r8
  unsigned __int64 v60; // rdx
  unsigned int v61; // eax
  __int64 v62; // r8
  unsigned __int64 v63; // rdx
  unsigned int jj; // ecx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // eax
  __int64 v68; // [rsp+40h] [rbp-48h]

  v7 = 0LL;
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
  v15 = 0LL;
  if ( (_DWORD)v11 )
    v15 = v12;
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v16 = *(_QWORD *)v15;
  v68 = *(_QWORD *)v15;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v17 = v8;
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
    v21 = v20;
  if ( (_DWORD)v19 != 4 )
    return (unsigned int)-1073741789;
  v22 = *v21;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v24 = *v8;
    v25 = v8 + 1;
    if ( k >= 5 )
      break;
    if ( v25 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v25 + v24);
    if ( (unsigned int *)((char *)v25 + v24) < v25 )
      return (unsigned int)-1073741675;
  }
  if ( v25 < v8 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v24 )
    return (unsigned int)-1073741762;
  v26 = v8 + 1;
  if ( (v24 & 1) != 0 )
    return (unsigned int)-1073741762;
  v27 = v24 >> 1;
  if ( *((_WORD *)v25 + (v24 >> 1) - 1) || !v25 )
    return (unsigned int)-1073741762;
  v28 = v25;
  if ( !v27 )
    goto LABEL_131;
  v68 = v16;
  do
  {
    if ( !*v26 )
      break;
    ++v26;
    --v27;
  }
  while ( v27 );
  if ( v27 )
    v29 = (v24 >> 1) - v27;
  else
LABEL_131:
    v29 = 0LL;
  if ( !v27 || 2 * v29 + 2 != v24 || 2 * (unsigned int)((2 * v29) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v30 = 2 * ((2 * v29) >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v32 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v28, v30);
  v33 = *(unsigned int **)(a1 + 8);
  if ( v33 && *(_DWORD *)a1 > 6u )
  {
    for ( m = 0; ; ++m )
    {
      v35 = *v33;
      v36 = v33 + 1;
      if ( m >= 6 )
        break;
      if ( v36 < v33 )
        goto LABEL_52;
      v33 = (unsigned int *)((char *)v36 + v35);
      if ( (unsigned int *)((char *)v36 + v35) < v36 )
        goto LABEL_52;
    }
    if ( v36 < v33 )
      goto LABEL_52;
    if ( !(_DWORD)v35 )
      goto LABEL_129;
    v37 = v33 + 1;
    if ( (v35 & 1) != 0 )
      goto LABEL_129;
    v38 = *v33;
    v39 = v35 >> 1;
    if ( *((_WORD *)v36 + (v35 >> 1) - 1) || !v36 )
      goto LABEL_129;
    v40 = v35 >> 1;
    v41 = v36;
    if ( !v39 )
      goto LABEL_132;
    do
    {
      if ( !*v37 )
        break;
      ++v37;
      --v39;
    }
    while ( v39 );
    if ( v39 )
      v42 = v40 - v39;
    else
LABEL_132:
      v42 = 0LL;
    if ( !v39 || 2 * v42 + 2 != v38 || 2 * (unsigned int)((2 * v42) >> 1) == -2 )
    {
LABEL_129:
      v13 = -1073741762;
LABEL_53:
      if ( !v32 )
        goto LABEL_55;
      goto LABEL_54;
    }
    v43 = 2 * ((2 * v42) >> 1) + 2;
    v44 = (void *)ExAllocatePool2(0x100uLL);
    if ( v44 )
    {
      v7 = v44;
      memmove(v44, v41, v43);
      v45 = *(unsigned int **)(a1 + 8);
      if ( !v45 || *(_DWORD *)a1 <= 7u )
        goto LABEL_120;
      v46 = *(unsigned int **)(a1 + 8);
      for ( n = 0; ; ++n )
      {
        v48 = *v46;
        v49 = v46 + 1;
        if ( n >= 7 )
          break;
        if ( v49 < v46 )
          goto LABEL_52;
        v46 = (unsigned int *)((char *)v49 + v48);
        if ( (unsigned int *)((char *)v49 + v48) < v49 )
          goto LABEL_52;
      }
      if ( v49 < v46 )
        goto LABEL_52;
      if ( *(_DWORD *)a1 <= 8u )
      {
LABEL_120:
        v13 = -1073741811;
        goto LABEL_53;
      }
      for ( ii = 0; ; ++ii )
      {
        v51 = *v45;
        v52 = v45 + 1;
        if ( ii >= 8 )
          break;
        if ( v52 < v45 )
          goto LABEL_52;
        v45 = (unsigned int *)((char *)v52 + v51);
        if ( (unsigned int *)((char *)v52 + v51) < v52 )
          goto LABEL_52;
      }
      if ( v52 < v45 )
      {
LABEL_52:
        v13 = -1073741675;
        goto LABEL_53;
      }
      if ( (_DWORD)v51 != 4 )
        goto LABEL_127;
      if ( ExpPlatformBinaryLock.SchedulerApc.NormalContext )
        v53 = guard_dispatch_icall_no_overrides(v22, (__int64)v32);
      else
        v53 = -1073700223;
      v54 = *(_DWORD *)(a2 + 32);
      if ( *(_DWORD *)(a2 + 16) >= 0xFFFFFFC0 )
        goto LABEL_52;
      v55 = *(_DWORD *)(a2 + 16) + 68;
      if ( v55 < *(_DWORD *)(a2 + 16) + 64 )
        goto LABEL_52;
      v13 = v55 + v54 < v55 ? 0xC0000095 : 0;
      if ( v55 + v54 < v55 )
        goto LABEL_53;
      *(_DWORD *)(a4 + 4) = 40;
      v56 = (_DWORD *)ExAllocatePool2(0x100uLL);
      if ( v56 )
      {
        *(_QWORD *)(a4 + 8) = v56;
        v57 = v53 | 0x10000000;
        *(_DWORD *)a4 = 0;
        if ( v56 + 1 < v56 )
          goto LABEL_52;
        if ( v56 + 2 <= (_DWORD *)((char *)v56 + *(unsigned int *)(a4 + 4)) )
        {
          *v56 = 4;
          v56[1] = v57;
          ++*(_DWORD *)a4;
          v58 = 0;
          v59 = *(_QWORD *)(a4 + 8);
          if ( !v59 )
          {
            v66 = *(_DWORD *)(a4 + 4);
            if ( v66 + 12 < v66 )
              goto LABEL_122;
            *(_DWORD *)(a4 + 4) = v66 + 12;
LABEL_106:
            ++*(_DWORD *)a4;
            v13 = 0;
            v62 = *(_QWORD *)(a4 + 8);
            if ( v62 )
            {
              v63 = *(_QWORD *)(a4 + 8);
              for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
              {
                v65 = *(_DWORD *)v63 + 4;
                if ( *(_DWORD *)v63 >= 0xFFFFFFFC || v63 + v65 < v63 )
                  goto LABEL_52;
                v63 += v65;
              }
              if ( v63 + 4 >= v63 )
              {
                if ( v63 + 20 <= v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *(_DWORD *)v63 = 16;
                  *(_OWORD *)(v63 + 4) = 0LL;
LABEL_115:
                  ++*(_DWORD *)a4;
                  goto LABEL_53;
                }
                goto LABEL_127;
              }
              goto LABEL_52;
            }
            v67 = *(_DWORD *)(a4 + 4);
            if ( v67 + 20 >= v67 )
            {
              *(_DWORD *)(a4 + 4) = v67 + 20;
              goto LABEL_115;
            }
LABEL_122:
            *(_DWORD *)(a4 + 4) = -1;
            goto LABEL_52;
          }
          v60 = *(_QWORD *)(a4 + 8);
          while ( v58 < *(_DWORD *)a4 )
          {
            v61 = *(_DWORD *)v60 + 4;
            if ( *(_DWORD *)v60 >= 0xFFFFFFFC || v60 + v61 < v60 )
              goto LABEL_52;
            v60 += v61;
            ++v58;
          }
          if ( v60 + 4 < v60 )
            goto LABEL_52;
          if ( v60 + 12 <= v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *(_DWORD *)v60 = 8;
            *(_QWORD *)(v60 + 4) = v68;
            goto LABEL_106;
          }
        }
LABEL_127:
        v13 = -1073741789;
        goto LABEL_53;
      }
    }
    v13 = -1073741801;
    goto LABEL_53;
  }
  v13 = -1073741811;
LABEL_54:
  ExFreePoolWithTag(v32, 0);
LABEL_55:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return v13;
}
