/*
 * XREFs of ?HampDepGroupProcessActivityActionForGroup@@YAJPEAU_HAM_DEPENDENCY_GROUP@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x180015A70
 * Callers:
 *     ?HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015B68 (-HampDepGroupRunStateChangeWorkerIteration@@YAJPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 * Callees:
 *     ?HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x180015E08 (-HampDepGroupGetNextDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180015E68 (-HampDepGroupGetFirstDependency@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z @ 0x18001B354 (-HampHostDepDestroy@@YAXPEAU_HAM_HOST_DEPENDENCY@@@Z.c)
 *     ?HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z @ 0x18007DA28 (-HampDepGroupProcessActionForActivity@@YAJPEAU_HAM_ACTIVITY@@W4_HAM_DEPENDENCY_ACTION@@@Z.c)
 */

__int64 __fastcall HampDepGroupProcessActivityActionForGroup(struct _HAM_DEPENDENCY_GROUP *a1, char a2)
{
  struct _HAM_HOST_DEPENDENCY *FirstDependency; // rdi
  struct _HAM_HOST_DEPENDENCY *v4; // rbx
  _QWORD *v5; // r10
  __int64 v6; // rdx
  __int64 result; // rax

  FirstDependency = HampDepGroupGetFirstDependency(a1);
  while ( FirstDependency )
  {
    v4 = FirstDependency;
    FirstDependency = HampDepGroupGetNextDependency(FirstDependency);
    v6 = *((_DWORD *)v4 + 8) & 7;
    if ( (*((_BYTE *)v4 + 32) & 7) == a2 )
    {
      if ( *((_BYTE *)v4 + 40) == 3 )
      {
        HampHostDepDestroy(v4);
      }
      else
      {
        LOBYTE(v6) = a2;
        result = HampDepGroupProcessActionForActivity(*v5, v6);
        if ( (int)result < 0 )
          return result;
        if ( a2 == 1 )
        {
          *((_DWORD *)v4 + 8) &= 0xFFFFFFFC;
          *((_DWORD *)v4 + 8) |= 4u;
        }
      }
    }
  }
  return 0LL;
}
