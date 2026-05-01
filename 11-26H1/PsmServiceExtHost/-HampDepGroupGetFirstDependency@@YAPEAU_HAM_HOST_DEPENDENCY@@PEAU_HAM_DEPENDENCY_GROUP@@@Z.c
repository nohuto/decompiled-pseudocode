/*
 * XREFs of ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015E68
 * Callers:
 *     ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180015A70 (-HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTI.c)
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x180016510 (-HampDepGroupEvaluateDependencies@@YAXPEAU_HAM_DEPENDENCY_GROUP@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180016758 (-HampDepGroupProcessTerminations@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18007BFDC (-HampManagerRundown@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 * Callees:
 *     <none>
 */

struct _HAM_HOST_DEPENDENCY *__fastcall HampDepGroupGetFirstDependency(struct _HAM_DEPENDENCY_GROUP *a1)
{
  __int64 v1; // rax
  _QWORD *j; // r8
  _QWORD *v3; // r9
  _QWORD *v5; // rcx
  _QWORD **v6; // rcx
  _QWORD *v7; // rax
  _QWORD *i; // rcx

  v1 = *((_QWORD *)a1 + 10);
  if ( (v1 & 1) != 0 )
  {
    if ( v1 == 1 )
      j = 0LL;
    else
      j = (_QWORD *)(v1 ^ (((unsigned __int64)a1 + 72) | 1));
  }
  else
  {
    j = (_QWORD *)*((_QWORD *)a1 + 10);
  }
  while ( 1 )
  {
    v3 = 0LL;
    if ( !j )
      break;
    v5 = (_QWORD *)j[8];
    if ( v5 != j + 8 )
      v3 = v5 - 2;
    if ( v3 )
      break;
    v6 = (_QWORD **)j[1];
    v7 = j;
    if ( v6 )
    {
      j = (_QWORD *)j[1];
      for ( i = *v6; i; i = (_QWORD *)*i )
        j = i;
    }
    else
    {
      for ( j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL); j; j = (_QWORD *)(j[2] & 0xFFFFFFFFFFFFFFFCuLL) )
      {
        if ( (_QWORD *)*j == v7 )
          break;
        v7 = j;
      }
    }
  }
  return (struct _HAM_HOST_DEPENDENCY *)v3;
}
