/*
 * XREFs of ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016510
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180015E08 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015E68 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180018064 (-HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062C74 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepHostStackInsert@@YAXPEAU_HAM_DEP_HOST_STACK@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064B8C (-HampDepHostStackInsert@@YAXPEAU_HAM_DEP_HOST_STACK@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampActGetDependencyAction@@YA?AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z @ 0x180067244 (-HampActGetDependencyAction@@YA-AW4_HAM_DEPENDENCY_ACTION@@PEAU_HAM_HOST_DEPENDENCY@@K@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18006EAB0 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18007F270 (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

void __fastcall HampDepGroupEvaluateDependencies(struct _HAM_DEPENDENCY_GROUP *a1, unsigned __int64 a2)
{
  struct _HAM_HOST_DEPENDENCY *i; // rax
  __int64 v5; // rax
  struct _HAM_HOST_DEPENDENCY *k; // rax
  struct _HAM_HOST_DEPENDENCY *v7; // r11
  struct _RM_HAM_ACTIVITY_HOST *v8; // r15
  struct _HAM_HOST_DEPENDENCY *j; // rax
  struct _HAM_HOST_DEPENDENCY *v10; // rdi
  char v11; // al
  __int64 v12; // rdx
  int DependencyAction; // eax
  __int64 v14; // r11
  int v15; // edx
  int v16; // ecx
  __int64 v17; // rbp
  int v18; // r8d
  unsigned int v19; // r9d
  __int64 v20; // rdx
  int v21; // eax
  unsigned int v22; // eax

  for ( i = HampDepGroupGetFirstDependency(a1); i; i = HampDepGroupGetNextDependency(i) )
    *((_DWORD *)i + 8) = 0;
  while ( 1 )
  {
    v5 = *(_QWORD *)a2;
    if ( (*(_BYTE *)(a2 + 8) & 1) == 0 )
      goto LABEL_4;
    if ( !v5 )
      break;
    v5 ^= a2;
LABEL_4:
    if ( !v5 )
      break;
    v8 = HampDepHostStackPop((struct _HAM_DEP_HOST_STACK *)a2);
    if ( (*((_QWORD *)v8 + 83) & 0x800000000LL) == 0 )
    {
      for ( j = HampDepGroupFindFirstDependencyForHost(a1, v8); ; j = HampDepGroupGetNextDependencyForHost(v10) )
      {
        v10 = j;
        if ( !j )
          break;
        if ( *((_BYTE *)j + 40) != 3 )
        {
          v15 = *((_DWORD *)j + 9);
          *((_DWORD *)j + 8) |= 8u;
          if ( (unsigned __int8)HampActGetDependencyAction(j, 2 * (v15 & 1u)) != 3 )
          {
            v16 = *((_DWORD *)v8 + 196) >> 2;
            v17 = *(_QWORD *)(*(_QWORD *)v10 + 80LL);
            v18 = *(_DWORD *)(v17 + 784) >> 2;
            v19 = v18 & 3;
            if ( v19 <= (v16 & 3u) )
              LOBYTE(v18) = v16;
            *(_DWORD *)(v17 + 784) ^= ((unsigned __int8)*(_DWORD *)(v17 + 784) ^ (unsigned __int8)(4 * v18)) & 0xC;
            v20 = *(_QWORD *)v10;
            v21 = *(_DWORD *)(*(_QWORD *)v10 + 480LL);
            *(_QWORD *)(v20 + 432) |= 0x20uLL;
            *(_DWORD *)(v20 + 480) = v21 ^ ((unsigned __int8)v21 ^ (unsigned __int8)(*(_DWORD *)(v17 + 784) >> 2)) & 3;
            v22 = *(_DWORD *)(v17 + 784);
            if ( (v22 & 2) != 0 )
            {
              if ( v19 < ((v22 >> 2) & 3) )
              {
                RtlRbRemoveNode(a2, v17 + 760);
                *(_QWORD *)(v17 + 776) = -1LL;
                HampDepHostStackInsert((struct _HAM_DEP_HOST_STACK *)a2, (struct _RM_HAM_ACTIVITY_HOST *)v17);
              }
            }
            else
            {
              HampDepHostStackInsert((struct _HAM_DEP_HOST_STACK *)a2, (struct _RM_HAM_ACTIVITY_HOST *)v17);
              *(_DWORD *)(v17 + 784) |= 2u;
            }
          }
        }
      }
    }
  }
  for ( k = HampDepGroupGetFirstDependency(a1); ; k = HampDepGroupGetNextDependency((struct _HAM_HOST_DEPENDENCY *)v14) )
  {
    v7 = k;
    if ( !k )
      break;
    v11 = *((_BYTE *)k + 40);
    if ( v11 == 1 )
    {
      if ( *(_QWORD *)(*((_QWORD *)v7 + 6) + 808LL) <= *((_QWORD *)v7 + 8)
        && *(_QWORD *)(*((_QWORD *)v7 + 7) + 808LL) <= *((_QWORD *)v7 + 9) )
      {
        goto LABEL_16;
      }
    }
    else if ( v11 != 3 || !HampTerminateDepShouldInvalidate(v7) )
    {
      goto LABEL_16;
    }
    *((_DWORD *)v7 + 9) |= 1u;
LABEL_16:
    v12 = (2 * (*((_DWORD *)v7 + 9) & 1)) | 1u;
    if ( (*((_BYTE *)v7 + 32) & 8) == 0 )
      v12 = 2 * (*((_DWORD *)v7 + 9) & 1u);
    DependencyAction = HampActGetDependencyAction(v7, v12);
    *(_DWORD *)(v14 + 32) ^= (*(_DWORD *)(v14 + 32) ^ DependencyAction) & 7;
  }
}
