/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x140AE01CC
 * Callers:
 *     SPCall2ServerInternal @ 0x140A24430 (SPCall2ServerInternal.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  unsigned int *v7; // r15
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // rcx
  signed int v12; // ebx
  unsigned int *v14; // rax
  __int64 v15; // r10
  unsigned int j; // ecx
  unsigned __int64 v17; // r9
  unsigned int *v18; // rdx
  _WORD *v19; // rcx
  unsigned __int64 v20; // rax
  const void *v21; // rbp
  unsigned __int64 v22; // rdx
  unsigned int v23; // edi
  void *Pool2; // rax
  void *v25; // rsi
  unsigned int *v26; // rdx
  unsigned int v27; // r10d
  unsigned int *v28; // rax
  unsigned int k; // r8d
  __int64 v30; // rbx
  unsigned int *v31; // rcx
  __int64 v32; // r11
  unsigned int *v33; // rax
  unsigned int m; // r8d
  __int64 v35; // r9
  unsigned int *v36; // rcx
  unsigned int *v37; // rax
  unsigned int n; // r8d
  __int64 v39; // r12
  unsigned int *v40; // rcx
  unsigned int ii; // r8d
  __int64 v42; // rax
  unsigned int *v43; // rcx
  size_t v44; // r15
  unsigned int *v45; // rax
  int v46; // r12d
  unsigned int v47; // edx
  __int64 v48; // rax
  int v49; // r12d
  __int64 v50; // r9
  _DWORD *v51; // rdx
  unsigned int jj; // ecx
  unsigned int v53; // eax
  __int64 v54; // r8
  unsigned __int64 v55; // rdx
  unsigned int kk; // ecx
  unsigned int v57; // eax
  __int64 v58; // r8
  _DWORD *v59; // rdx
  unsigned int mm; // ecx
  unsigned int v61; // eax
  __int64 v62; // r8
  _DWORD *v63; // rdx
  unsigned int nn; // ecx
  unsigned int v65; // eax
  __int64 v66; // r8
  _DWORD *v67; // rdx
  unsigned int i1; // ecx
  unsigned int v69; // eax
  unsigned int v70; // r15d
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int v74; // ecx
  unsigned int v75; // eax
  int v76; // r8d
  unsigned int v77; // ecx
  unsigned int v78; // eax
  unsigned int v79; // eax
  __int64 v80; // r8
  unsigned int v81; // eax
  _DWORD *v82; // rdx
  unsigned int i2; // ecx
  unsigned int v84; // eax
  unsigned int *Src; // [rsp+70h] [rbp-58h]
  __int64 v86; // [rsp+78h] [rbp-50h]
  __int64 v87; // [rsp+80h] [rbp-48h]

  v4 = *(unsigned int **)(a1 + 8);
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
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *(_QWORD *)v14;
  v86 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *v4;
    v18 = v4 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v17 )
    return (unsigned int)-1073741762;
  v19 = v4 + 1;
  if ( (v17 & 1) != 0 )
    return (unsigned int)-1073741762;
  v20 = v17 >> 1;
  if ( *((_WORD *)v18 + (v17 >> 1) - 1) || v4 == (unsigned int *)-4LL )
    return (unsigned int)-1073741762;
  v21 = v4 + 1;
  if ( !v20 )
    goto LABEL_172;
  v86 = v15;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v20;
  }
  while ( v20 );
  if ( v20 )
    v22 = (v17 >> 1) - v20;
  else
LABEL_172:
    v22 = 0LL;
  if ( !v20 || 2 * v22 + 2 != v17 || 2 * (unsigned int)((2 * v22) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v23 = 2 * ((2 * v22) >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v25 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v23);
  v26 = *(unsigned int **)(a1 + 8);
  if ( v26 )
  {
    v27 = *(_DWORD *)a1;
    if ( *(_DWORD *)a1 > 5u )
    {
      v28 = *(unsigned int **)(a1 + 8);
      for ( k = 0; ; ++k )
      {
        v30 = *v28;
        v31 = v28 + 1;
        if ( k >= 5 )
          break;
        if ( v31 < v28 )
          goto LABEL_40;
        v28 = (unsigned int *)((char *)v31 + v30);
        if ( (unsigned int *)((char *)v31 + v30) < v31 )
          goto LABEL_40;
      }
      if ( v31 < v28 )
        goto LABEL_40;
      v32 = 0LL;
      if ( (_DWORD)v30 )
        v32 = (__int64)(v28 + 1);
      v87 = v32;
      if ( v27 > 6 )
      {
        v33 = v26;
        for ( m = 0; ; ++m )
        {
          v35 = *v33;
          v36 = v33 + 1;
          if ( m >= 6 )
            break;
          if ( v36 < v33 )
            goto LABEL_40;
          v33 = (unsigned int *)((char *)v36 + v35);
          if ( (unsigned int *)((char *)v36 + v35) < v36 )
            goto LABEL_40;
        }
        if ( v36 < v33 )
          goto LABEL_40;
        if ( (_DWORD)v35 != 4 )
        {
          v12 = -1073741789;
          goto LABEL_41;
        }
        if ( v27 > 7 )
        {
          v37 = v26;
          for ( n = 0; ; ++n )
          {
            v39 = *v37;
            v40 = v37 + 1;
            if ( n >= 7 )
              break;
            if ( v40 < v37 )
              goto LABEL_40;
            v37 = (unsigned int *)((char *)v40 + v39);
            if ( (unsigned int *)((char *)v40 + v39) < v40 )
              goto LABEL_40;
          }
          if ( v40 < v37 )
            goto LABEL_40;
          if ( v27 > 8 )
          {
            for ( ii = 0; ; ++ii )
            {
              v42 = *v26;
              v43 = v26 + 1;
              if ( ii >= 8 )
                break;
              if ( v43 < v26 )
                goto LABEL_40;
              v26 = (unsigned int *)((char *)v43 + v42);
              if ( (unsigned int *)((char *)v43 + v42) < v43 )
                goto LABEL_40;
            }
            if ( v43 >= v26 )
            {
              if ( (_DWORD)v42 )
                v7 = v26 + 1;
              if ( (_DWORD)v42 != 4 )
                goto LABEL_156;
              v44 = *v7;
              if ( !(_DWORD)v44 )
              {
LABEL_77:
                if ( ExpPlatformBinaryLock.SchedulerApc.SystemArgument2 )
                  v46 = guard_dispatch_icall_no_overrides((__int64)v25, v32);
                else
                  v46 = -1073741637;
                if ( (unsigned int)v44 >= 0xFFFFFFFC
                  || (unsigned int)(v44 + 24) < 0x14
                  || (int)v44 + 32 < (unsigned int)(v44 + 24)
                  || (int)v44 + 40 < (unsigned int)(v44 + 32)
                  || (v47 = v44 + 48, (int)v44 + 48 < (unsigned int)(v44 + 40))
                  || v47 >= 0xFFFFFFF8
                  || (v74 = (v44 + 63) & 0xFFFFFFF8, v74 < (int)v44 + 56)
                  || v74 + 8 < v74 )
                {
                  v12 = -1073741675;
LABEL_97:
                  v7 = Src;
                  goto LABEL_41;
                }
                v75 = v74 + 12;
                v76 = *(_DWORD *)(a2 + 16);
                if ( v74 + 12 < 4
                  || (v77 = v74 + 16, v75 + 4 < v75)
                  || (v78 = v77 + v76, v77 + v76 < v77)
                  || v78 + 4 < v78 )
                {
                  v12 = -1073741675;
                }
                else
                {
                  v12 = v78 + 4 + *(_DWORD *)(a2 + 32) < v78 + 4 ? 0xC0000095 : 0;
                }
                if ( v12 < 0 )
                  goto LABEL_97;
                if ( !a4 )
                {
                  v12 = -1073741811;
                  goto LABEL_97;
                }
                *(_DWORD *)(a4 + 4) = v47;
                if ( (_DWORD)v44 == -48 )
                {
                  v12 = -1073741762;
                  goto LABEL_97;
                }
                v48 = ExAllocatePool2(0x100uLL);
                if ( !v48 )
                {
                  v12 = -1073741801;
                  goto LABEL_97;
                }
                *(_QWORD *)(a4 + 8) = v48;
                v49 = v46 | 0x10000000;
                *(_DWORD *)a4 = 0;
                v50 = v48;
                v51 = (_DWORD *)v48;
                for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
                {
                  v53 = *v51 + 4;
                  if ( v53 < 4 || (_DWORD *)((char *)v51 + v53) < v51 )
                    goto LABEL_96;
                  v51 = (_DWORD *)((char *)v51 + v53);
                }
                if ( v51 + 1 < v51 )
                {
LABEL_96:
                  v12 = -1073741675;
                  goto LABEL_97;
                }
                if ( (unsigned __int64)(v51 + 2) > v50 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_156;
                *v51 = 4;
                v51[1] = v49;
                ++*(_DWORD *)a4;
                v54 = *(_QWORD *)(a4 + 8);
                if ( v54 )
                {
                  v55 = *(_QWORD *)(a4 + 8);
                  for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
                  {
                    v57 = *(_DWORD *)v55 + 4;
                    if ( v57 < 4 || v55 + v57 < v55 )
                      goto LABEL_96;
                    v55 += v57;
                  }
                  if ( v55 + 4 < v55 )
                    goto LABEL_96;
                  if ( v55 + 12 > v54 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                    goto LABEL_156;
                  *(_DWORD *)v55 = 8;
                  *(_QWORD *)(v55 + 4) = v86;
                }
                else
                {
                  v73 = *(_DWORD *)(a4 + 4);
                  if ( v73 + 12 < v73 )
                    goto LABEL_142;
                  *(_DWORD *)(a4 + 4) = v73 + 12;
                }
                ++*(_DWORD *)a4;
                if ( Src )
                {
                  if ( (_DWORD)v44 )
                    goto LABEL_111;
                }
                else if ( !(_DWORD)v44 )
                {
LABEL_111:
                  v58 = *(_QWORD *)(a4 + 8);
                  if ( v58 )
                  {
                    v59 = *(_DWORD **)(a4 + 8);
                    for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
                    {
                      v61 = *v59 + 4;
                      if ( v61 < 4 || (_DWORD *)((char *)v59 + v61) < v59 )
                        goto LABEL_115;
                      v59 = (_DWORD *)((char *)v59 + v61);
                    }
                    if ( v59 + 1 >= v59 )
                    {
                      if ( (unsigned __int64)v59 + v44 + 4 <= v58 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                      {
                        *v59 = v44;
                        if ( Src )
                          memmove(v59 + 1, Src, v44);
LABEL_121:
                        ++*(_DWORD *)a4;
                        v62 = *(_QWORD *)(a4 + 8);
                        if ( v62 )
                        {
                          v63 = *(_DWORD **)(a4 + 8);
                          for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
                          {
                            v65 = *v63 + 4;
                            if ( v65 < 4 || (_DWORD *)((char *)v63 + v65) < v63 )
                              goto LABEL_96;
                            v63 = (_DWORD *)((char *)v63 + v65);
                          }
                          if ( v63 + 1 < v63 )
                            goto LABEL_96;
                          if ( (unsigned __int64)(v63 + 2) > v62 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                            goto LABEL_156;
                          *v63 = 4;
                          v63[1] = 0;
                        }
                        else
                        {
                          v72 = *(_DWORD *)(a4 + 4);
                          if ( v72 + 8 < v72 )
                            goto LABEL_142;
                          *(_DWORD *)(a4 + 4) = v72 + 8;
                        }
                        ++*(_DWORD *)a4;
                        v66 = *(_QWORD *)(a4 + 8);
                        if ( v66 )
                        {
                          v67 = *(_DWORD **)(a4 + 8);
                          for ( i1 = 0; i1 < *(_DWORD *)a4; ++i1 )
                          {
                            v69 = *v67 + 4;
                            if ( v69 < 4 || (_DWORD *)((char *)v67 + v69) < v67 )
                              goto LABEL_96;
                            v67 = (_DWORD *)((char *)v67 + v69);
                          }
                          if ( v67 + 1 < v67 )
                            goto LABEL_96;
                          if ( (unsigned __int64)(v67 + 2) <= v66 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                          {
                            *v67 = 4;
                            v67[1] = 0;
LABEL_178:
                            ++*(_DWORD *)a4;
                            v80 = *(_QWORD *)(a4 + 8);
                            if ( !v80 )
                            {
                              v81 = *(_DWORD *)(a4 + 4);
                              if ( v81 + 8 >= v81 )
                              {
                                *(_DWORD *)(a4 + 4) = v81 + 8;
                                ++*(_DWORD *)a4;
                                v12 = 0;
                                goto LABEL_97;
                              }
                              goto LABEL_142;
                            }
                            v82 = *(_DWORD **)(a4 + 8);
                            for ( i2 = 0; i2 < *(_DWORD *)a4; ++i2 )
                            {
                              v84 = *v82 + 4;
                              if ( v84 < 4 || (_DWORD *)((char *)v82 + v84) < v82 )
                                goto LABEL_96;
                              v82 = (_DWORD *)((char *)v82 + v84);
                            }
                            if ( v82 + 1 < v82 )
                              goto LABEL_96;
                            v12 = 0;
                            if ( (unsigned __int64)(v82 + 2) <= v80 + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                            {
                              *v82 = 4;
                              v82[1] = 0;
                              ++*(_DWORD *)a4;
                              goto LABEL_97;
                            }
                          }
LABEL_156:
                          v12 = -1073741789;
                          goto LABEL_97;
                        }
                        v79 = *(_DWORD *)(a4 + 4);
                        if ( v79 + 8 >= v79 )
                        {
                          *(_DWORD *)(a4 + 4) = v79 + 8;
                          goto LABEL_178;
                        }
LABEL_142:
                        *(_DWORD *)(a4 + 4) = -1;
                        goto LABEL_96;
                      }
                      v12 = -1073741789;
                      goto LABEL_116;
                    }
                  }
                  else
                  {
                    v70 = v44 + 4;
                    if ( v70 >= 4 )
                    {
                      v71 = *(_DWORD *)(a4 + 4);
                      if ( v70 + v71 >= v71 )
                      {
                        *(_DWORD *)(a4 + 4) = v70 + v71;
                        goto LABEL_121;
                      }
                      *(_DWORD *)(a4 + 4) = -1;
                    }
                  }
LABEL_115:
                  v12 = -1073741675;
LABEL_116:
                  v7 = Src;
                  goto LABEL_41;
                }
                v12 = -1073741811;
                goto LABEL_116;
              }
              v45 = (unsigned int *)ExAllocatePool2(0x100uLL);
              Src = v45;
              if ( v45 )
              {
                memset_0(v45, 0, (unsigned int)v44);
                v32 = v87;
                goto LABEL_77;
              }
              v12 = -1073741801;
              v7 = 0LL;
LABEL_41:
              if ( !v25 )
                goto LABEL_42;
              goto LABEL_138;
            }
LABEL_40:
            v12 = -1073741675;
            goto LABEL_41;
          }
        }
      }
      v12 = -1073741811;
      goto LABEL_41;
    }
  }
  v12 = -1073741811;
LABEL_138:
  ExFreePoolWithTag(v25, 0);
LABEL_42:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v12;
}
