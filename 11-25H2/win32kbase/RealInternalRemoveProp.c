/*
 * XREFs of RealInternalRemoveProp @ 0x14009CA10
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14003F3E0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserGlobalAtomTableCallout @ 0x14009CF40 (UserGlobalAtomTableCallout.c)
 *     UserDeleteAtomFromAtomTable @ 0x14009D060 (UserDeleteAtomFromAtomTable.c)
 */

__int64 __fastcall RealInternalRemoveProp(struct _KTHREAD **a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v6; // rdx
  struct _KTHREAD *v7; // rdi
  int v8; // ecx
  char *v9; // rbx
  __int64 result; // rax
  __int16 v11; // ax
  __int64 v12; // rbp
  __int64 v13; // rcx
  struct _RTL_ATOM_TABLE *v14; // rax

  v4 = a2;
  LockRefactorStagingAssertOwned(a1, a2);
  LockRefactorStagingAssertOwned(a1, v6);
  v7 = a1[3];
  if ( v7 && (_WORD)v4 )
  {
    v8 = *((_DWORD *)v7 + 1);
    v9 = (char *)v7 + 8;
    while ( v8 )
    {
      if ( *((_WORD *)v9 + 4) == (_WORD)v4 )
      {
        v11 = *((_WORD *)v9 + 5) & 1;
        if ( a3 )
        {
          if ( v11 )
            goto LABEL_8;
        }
        else if ( !v11 )
        {
LABEL_8:
          if ( !v9 )
            return 0LL;
          v12 = *(_QWORD *)v9;
          if ( !a3 && ((v9[10] & 2) != 0 || HIWORD(v4) == 1) )
          {
            v14 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
            if ( v14 )
              UserDeleteAtomFromAtomTable(v14);
          }
          --*((_DWORD *)v7 + 1);
          result = v12;
          v13 = 2LL * *((unsigned int *)v7 + 1);
          *(_OWORD *)v9 = *(_OWORD *)((char *)v7 + 16 * *((unsigned int *)v7 + 1) + 8);
          *(_OWORD *)((char *)v7 + 8 * v13 + 8) = 0LL;
          return result;
        }
      }
      v9 += 16;
      --v8;
    }
  }
  return 0LL;
}
