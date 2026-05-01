/*
 * XREFs of ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D7A4
 * Callers:
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180079180 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180018064 (-HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062C74 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepHostStackInsert@@YAXPEAU_HAM_DEP_HOST_STACK@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180064B8C (-HampDepHostStackInsert@@YAXPEAU_HAM_DEP_HOST_STACK@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18006A204 (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18006EAB0 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x18007F270 (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampDepGroupGetTransitiveTaskCompletionsForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  struct _RM_HAM_ACTIVITY_HOST *v6; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // r11
  struct _RTL_BALANCED_NODE **i; // rax
  struct _RTL_BALANCED_NODE *v9; // rdx
  int v10; // eax
  struct _RTL_BALANCED_NODE **v11; // rbx
  __int128 v13; // [rsp+20h] [rbp-18h] BYREF

  v13 = 0LL;
  HampDepHostStackInsert((unsigned __int64)&v13, a2);
  *((_DWORD *)a2 + 196) |= 2u;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = v13;
    if ( (BYTE8(v13) & 1) != 0 )
    {
      if ( !(_QWORD)v13 )
        return v4;
      v5 = (unsigned __int64)&v13 ^ v13;
    }
    if ( !v5 )
      break;
    v6 = HampDepHostStackPop((unsigned __int64)&v13);
    v4 |= HampHostGetAppliedTaskCompletions(v6);
    for ( i = HampDepGroupFindFirstDependencyForHost(a1, v7);
          ;
          i = (struct _RTL_BALANCED_NODE **)HampDepGroupGetNextDependencyForHost((struct _HAM_HOST_DEPENDENCY *)v11) )
    {
      v11 = i;
      if ( !i )
        break;
      if ( *((_BYTE *)i + 40) == 3 && !HampTerminateDepShouldInvalidate((struct _HAM_TERMINATE_DEPENDENCY *)i) )
      {
        v9 = v11[7];
        v10 = (int)v9[32].16;
        if ( (v10 & 2) == 0 )
        {
          *(_DWORD *)&v9[32].16 = v10 | 2;
          HampDepHostStackInsert((unsigned __int64)&v13, (struct _RM_HAM_ACTIVITY_HOST *)v9);
        }
      }
    }
  }
  return v4;
}
