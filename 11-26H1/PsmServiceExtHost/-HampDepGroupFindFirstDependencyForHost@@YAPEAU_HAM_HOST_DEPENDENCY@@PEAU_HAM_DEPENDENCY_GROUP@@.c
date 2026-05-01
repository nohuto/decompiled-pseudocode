/*
 * XREFs of ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180062C74
 * Callers:
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016510 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D7A4 (-HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACT.c)
 * Callees:
 *     ?HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z @ 0x1800162B0 (-HampDepGroupGetNextLink@@YAPEAU_HAM_DEPENDENCY_LINK@@PEAU1@@Z.c)
 *     ?HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x180062D48 (-HampDepGroupCompareDependencyLinkForHost@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RTL_BALANCED_NODE **__fastcall HampDepGroupFindFirstDependencyForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  struct _RTL_BALANCED_NODE *NextLink; // rbx
  __int64 v3; // r8
  int v4; // eax
  struct _RTL_BALANCED_NODE *v5; // rdi
  struct _RTL_BALANCED_NODE *v6; // rsi
  int v7; // eax
  struct _RTL_BALANCED_NODE *v8; // r8
  struct _RTL_BALANCED_NODE *ParentValue; // rcx
  struct _RTL_BALANCED_NODE **result; // rax
  struct _RTL_BALANCED_NODE *v11; // [rsp+30h] [rbp+8h] BYREF

  NextLink = (struct _RTL_BALANCED_NODE *)*((_QWORD *)a1 + 9);
  v3 = 32LL;
  if ( a2 )
    v3 = (__int64)a2 - 24;
  v11 = *(struct _RTL_BALANCED_NODE **)v3;
  while ( 1 )
  {
    if ( !NextLink )
      return 0LL;
    v4 = HampDepGroupCompareDependencyLinkForHost(&v11, NextLink);
    if ( !v4 )
      break;
    if ( v4 >= 0 )
      NextLink = NextLink->Children[1];
    else
      NextLink = NextLink->Children[0];
  }
  v5 = NextLink->Children[0];
  v6 = 0LL;
  if ( NextLink->Children[0] )
  {
    while ( 1 )
    {
      v7 = HampDepGroupCompareDependencyLinkForHost(&v11, v5);
      if ( v7 >= 0 )
      {
        if ( v7 > 0 )
        {
          v5 = v5->Children[1];
          goto LABEL_12;
        }
        v6 = v5;
      }
      v5 = v5->Children[0];
LABEL_12:
      if ( !v5 )
      {
        if ( v6 )
          NextLink = v6;
        break;
      }
    }
  }
  v8 = v11;
  while ( NextLink && NextLink[1].Children[0] == v8 )
  {
    ParentValue = (struct _RTL_BALANCED_NODE *)NextLink[2].ParentValue;
    if ( ParentValue != (struct _RTL_BALANCED_NODE *)&NextLink[2].16 )
    {
      result = &ParentValue[-1].Children[1];
      if ( ParentValue != (struct _RTL_BALANCED_NODE *)16 )
        return result;
    }
    NextLink = (struct _RTL_BALANCED_NODE *)HampDepGroupGetNextLink((struct _HAM_DEPENDENCY_LINK *)NextLink);
  }
  return 0LL;
}
