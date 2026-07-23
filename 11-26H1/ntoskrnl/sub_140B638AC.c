/*
 * XREFs of sub_140B638AC @ 0x140B638AC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     StringCbLengthW @ 0x14047D11C (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140B638AC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const wchar_t *v4; // r8
  void *v7; // r15
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // rcx
  unsigned int *v12; // rax
  signed int v13; // ebx
  bool v14; // cc
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // r9
  unsigned int *v18; // rcx
  unsigned int *v19; // rax
  unsigned int k; // r9d
  size_t v21; // rdx
  const wchar_t *v22; // rcx
  const void *v23; // rbp
  __int64 v24; // r11
  size_t v25; // r14
  void *Pool2; // rax
  void *v27; // rdi
  unsigned int *v28; // rdx
  unsigned int v29; // r9d
  _DWORD *v30; // rax
  unsigned int m; // r8d
  __int64 v32; // r11
  _DWORD *v33; // rcx
  _DWORD *v34; // r10
  unsigned int *v35; // rax
  unsigned int n; // r8d
  __int64 v37; // r12
  unsigned int *v38; // rcx
  unsigned int ii; // r8d
  __int64 v40; // rax
  unsigned int *v41; // rcx
  unsigned int *v42; // rbp
  size_t v43; // rbp
  void *v44; // rax
  int v45; // r15d
  unsigned int v46; // edx
  unsigned int v47; // ecx
  unsigned int v48; // eax
  int v49; // r8d
  unsigned int v50; // ecx
  unsigned int v51; // eax
  __int64 v52; // rax
  int v53; // r15d
  __int64 v54; // r9
  unsigned int v55; // ecx
  __int64 v56; // r11
  _DWORD *v57; // rdx
  unsigned int v58; // eax
  __int64 v59; // r8
  unsigned int v60; // eax
  unsigned __int64 v61; // rdx
  unsigned int jj; // ecx
  unsigned int v63; // eax
  void *v64; // r11
  __int64 v65; // r8
  unsigned int v66; // ebp
  unsigned int v67; // eax
  _DWORD *v68; // rdx
  unsigned int kk; // ecx
  unsigned int v70; // eax
  __int64 v71; // r8
  unsigned int v72; // eax
  _DWORD *v73; // rdx
  unsigned int mm; // ecx
  unsigned int v75; // eax
  size_t pcbLength; // [rsp+50h] [rbp-68h] BYREF
  unsigned int v78; // [rsp+58h] [rbp-60h]
  void *Src; // [rsp+60h] [rbp-58h]
  __int64 v80; // [rsp+68h] [rbp-50h]
  _DWORD *v81; // [rsp+70h] [rbp-48h]

  v4 = *(const wchar_t **)(a1 + 8);
  Src = 0LL;
  v7 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = (unsigned int *)v4;
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
  v14 = *(_DWORD *)a1 <= 4u;
  v80 = *(_QWORD *)v12;
  if ( v14 )
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
    v19 = v18;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v14 = *(_DWORD *)a1 <= 5u;
  v78 = *v19;
  pcbLength = 0LL;
  if ( v14 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v21 = *(unsigned int *)v4;
    v22 = v4 + 2;
    if ( k >= 5 )
      break;
    if ( v22 < v4 )
      return (unsigned int)-1073741675;
    v4 = (const wchar_t *)((char *)v22 + v21);
    if ( (const wchar_t *)((char *)v22 + v21) < v22 )
      return (unsigned int)-1073741675;
  }
  if ( v22 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v21 )
    return (unsigned int)-1073741762;
  v23 = v4 + 2;
  if ( (v21 & 1) != 0
    || v22[(v21 >> 1) - 1]
    || StringCbLengthW(v22, v21, &pcbLength) < 0
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
  v28 = *(unsigned int **)(a1 + 8);
  if ( v28 )
  {
    v29 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 6u )
    {
      v30 = *(_DWORD **)(a1 + 8);
      for ( m = 0; ; ++m )
      {
        v32 = (unsigned int)*v30;
        v33 = v30 + 1;
        LODWORD(pcbLength) = *v30;
        if ( m >= 6 )
          break;
        if ( v33 < v30 )
          goto LABEL_49;
        v30 = (_DWORD *)((char *)v33 + v32);
        if ( (_DWORD *)((char *)v33 + v32) < v33 )
          goto LABEL_49;
      }
      if ( v33 < v30 )
        goto LABEL_49;
      v34 = 0LL;
      if ( (_DWORD)v32 )
        v34 = v30 + 1;
      v81 = v34;
      if ( v29 <= 7 )
        goto LABEL_54;
      v35 = v28;
      for ( n = 0; ; ++n )
      {
        v37 = *v35;
        v38 = v35 + 1;
        if ( n >= 7 )
          break;
        if ( v38 < v35 )
          goto LABEL_49;
        v35 = (unsigned int *)((char *)v38 + v37);
        if ( (unsigned int *)((char *)v38 + v37) < v38 )
          goto LABEL_49;
      }
      if ( v38 < v35 )
        goto LABEL_49;
      if ( v29 <= 8 )
      {
LABEL_54:
        v13 = -1073741811;
        goto LABEL_86;
      }
      for ( ii = 0; ; ++ii )
      {
        v40 = *v28;
        v41 = v28 + 1;
        if ( ii >= 8 )
          break;
        if ( v41 < v28 )
          goto LABEL_49;
        v28 = (unsigned int *)((char *)v41 + v40);
        if ( (unsigned int *)((char *)v41 + v40) < v41 )
          goto LABEL_49;
      }
      if ( v41 < v28 )
      {
LABEL_49:
        v13 = -1073741675;
        goto LABEL_86;
      }
      v42 = 0LL;
      if ( (_DWORD)v40 )
        v42 = v28 + 1;
      if ( (_DWORD)v40 != 4 )
      {
        v13 = -1073741789;
        goto LABEL_86;
      }
      v43 = *v42;
      if ( (_DWORD)v43 )
      {
        v44 = (void *)ExAllocatePool2(0x100uLL);
        Src = v44;
        if ( !v44 )
        {
          v13 = -1073741801;
          v7 = 0LL;
          goto LABEL_86;
        }
        memset_0(v44, 0, v43);
      }
      if ( ExpPlatformBinaryLock.SchedulerApc.SystemArgument1 )
        v45 = guard_dispatch_icall_no_overrides(v78, (__int64)v27);
      else
        v45 = -1073741637;
      if ( (unsigned int)v43 >= 0xFFFFFFFC )
        goto LABEL_84;
      if ( (unsigned int)(v43 + 24) < 0x14 )
        goto LABEL_84;
      v46 = v43 + 32;
      if ( (int)v43 + 32 < (unsigned int)(v43 + 24) )
        goto LABEL_84;
      if ( v46 >= 0xFFFFFFF8 )
        goto LABEL_84;
      v47 = (v43 + 47) & 0xFFFFFFF8;
      if ( v47 < (int)v43 + 40 || v47 + 8 < v47 )
        goto LABEL_84;
      v48 = v47 + 12;
      v49 = *(_DWORD *)(a2 + 16);
      if ( v47 + 12 < 4 || (v50 = v47 + 16, v48 + 4 < v48) || (v51 = v50 + v49, v50 + v49 < v50) || v51 + 4 < v51 )
        v13 = -1073741675;
      else
        v13 = v51 + 4 + *(_DWORD *)(a2 + 32) < v51 + 4 ? 0xC0000095 : 0;
      if ( v13 < 0 )
        goto LABEL_85;
      if ( !a4 )
      {
        v13 = -1073741811;
        goto LABEL_85;
      }
      *(_DWORD *)(a4 + 4) = v46;
      if ( (_DWORD)v43 == -32 )
      {
        v13 = -1073741762;
        goto LABEL_85;
      }
      v52 = ExAllocatePool2(0x100uLL);
      if ( !v52 )
      {
        v13 = -1073741801;
        goto LABEL_85;
      }
      *(_QWORD *)(a4 + 8) = v52;
      v53 = v45 | 0x10000000;
      *(_DWORD *)a4 = 0;
      v54 = v52;
      v55 = 0;
      v56 = v80;
      v57 = (_DWORD *)v52;
      while ( v55 < *(_DWORD *)a4 )
      {
        v58 = *v57 + 4;
        if ( v58 < 4 || (_DWORD *)((char *)v57 + v58) < v57 )
          goto LABEL_84;
        v57 = (_DWORD *)((char *)v57 + v58);
        ++v55;
      }
      if ( v57 + 1 < v57 )
        goto LABEL_84;
      if ( (unsigned __int64)(v57 + 2) > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      {
LABEL_112:
        v13 = -1073741789;
        goto LABEL_85;
      }
      *v57 = 4;
      v57[1] = v53;
      ++*(_DWORD *)a4;
      v59 = *(_QWORD *)(a4 + 8);
      if ( v59 )
      {
        v61 = *(_QWORD *)(a4 + 8);
        for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
        {
          v63 = *(_DWORD *)v61 + 4;
          if ( v63 < 4 || v61 + v63 < v61 )
            goto LABEL_84;
          v61 += v63;
        }
        if ( v61 + 4 < v61 )
          goto LABEL_84;
        if ( v61 + 12 > v59 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          goto LABEL_112;
        *(_DWORD *)v61 = 8;
        *(_QWORD *)(v61 + 4) = v56;
      }
      else
      {
        v60 = *(_DWORD *)(a4 + 4);
        if ( v60 + 12 < v60 )
        {
LABEL_105:
          *(_DWORD *)(a4 + 4) = -1;
          goto LABEL_84;
        }
        *(_DWORD *)(a4 + 4) = v60 + 12;
      }
      ++*(_DWORD *)a4;
      v64 = Src;
      if ( Src )
      {
        if ( !(_DWORD)v43 )
          goto LABEL_126;
      }
      else if ( (_DWORD)v43 )
      {
LABEL_126:
        v13 = -1073741811;
LABEL_134:
        v7 = v64;
LABEL_86:
        if ( !v27 )
          goto LABEL_88;
        goto LABEL_87;
      }
      v65 = *(_QWORD *)(a4 + 8);
      if ( v65 )
      {
        v68 = *(_DWORD **)(a4 + 8);
        for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
        {
          v70 = *v68 + 4;
          if ( v70 < 4 || (_DWORD *)((char *)v68 + v70) < v68 )
            goto LABEL_133;
          v68 = (_DWORD *)((char *)v68 + v70);
        }
        if ( v68 + 1 >= v68 )
        {
          if ( (unsigned __int64)v68 + v43 + 4 > v65 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v13 = -1073741789;
            goto LABEL_134;
          }
          *v68 = v43;
          if ( v64 )
            memmove(v68 + 1, v64, v43);
          goto LABEL_145;
        }
      }
      else
      {
        v66 = v43 + 4;
        if ( v66 >= 4 )
        {
          v67 = *(_DWORD *)(a4 + 4);
          if ( v67 + v66 >= v67 )
          {
            *(_DWORD *)(a4 + 4) = v67 + v66;
LABEL_145:
            ++*(_DWORD *)a4;
            v71 = *(_QWORD *)(a4 + 8);
            if ( !v71 )
            {
              v72 = *(_DWORD *)(a4 + 4);
              if ( v72 + 8 >= v72 )
              {
                *(_DWORD *)(a4 + 4) = v72 + 8;
                ++*(_DWORD *)a4;
                v13 = 0;
                goto LABEL_85;
              }
              goto LABEL_105;
            }
            v73 = *(_DWORD **)(a4 + 8);
            for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
            {
              v75 = *v73 + 4;
              if ( v75 < 4 || (_DWORD *)((char *)v73 + v75) < v73 )
                goto LABEL_84;
              v73 = (_DWORD *)((char *)v73 + v75);
            }
            if ( v73 + 1 >= v73 )
            {
              v13 = 0;
              if ( (unsigned __int64)(v73 + 2) <= v71 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v73 = 4;
                v73[1] = 0;
                ++*(_DWORD *)a4;
                goto LABEL_85;
              }
              goto LABEL_112;
            }
LABEL_84:
            v13 = -1073741675;
LABEL_85:
            v7 = Src;
            goto LABEL_86;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
LABEL_133:
      v13 = -1073741675;
      goto LABEL_134;
    }
  }
  v13 = -1073741811;
LABEL_87:
  ExFreePoolWithTag(v27, 0);
LABEL_88:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v13;
}
