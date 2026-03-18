/*
 * XREFs of RealInternalRemoveProp @ 0x1400485B0
 * Callers:
 *     <none>
 * Callees:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     UserDeleteAtomFromAtomTable @ 0x14013F470 (UserDeleteAtomFromAtomTable.c)
 *     UserGlobalAtomTableCallout @ 0x1401AAD60 (UserGlobalAtomTableCallout.c)
 */

__int64 __fastcall RealInternalRemoveProp(struct tagObjLock *a1, int a2, int a3)
{
  __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rbx
  __int64 result; // rax
  __int16 v10; // ax
  __int64 v11; // rbp
  __int64 v12; // rcx
  struct _RTL_ATOM_TABLE *v13; // rax

  LockRefactorStagingAssertOwned(a1);
  LockRefactorStagingAssertOwned(a1);
  v6 = *((_QWORD *)a1 + 3);
  if ( v6 && (_WORD)a2 )
  {
    v7 = *(_DWORD *)(v6 + 4);
    v8 = v6 + 8;
    while ( v7 )
    {
      if ( *(_WORD *)(v8 + 8) == (_WORD)a2 )
      {
        v10 = *(_WORD *)(v8 + 10) & 1;
        if ( a3 )
        {
          if ( v10 )
            goto LABEL_8;
        }
        else if ( !v10 )
        {
LABEL_8:
          if ( !v8 )
            return 0LL;
          v11 = *(_QWORD *)v8;
          if ( !a3 && ((*(_BYTE *)(v8 + 10) & 2) != 0 || HIWORD(a2) == 1) )
          {
            v13 = (struct _RTL_ATOM_TABLE *)UserGlobalAtomTableCallout();
            if ( v13 )
              UserDeleteAtomFromAtomTable(v13);
          }
          --*(_DWORD *)(v6 + 4);
          result = v11;
          v12 = 2LL * *(unsigned int *)(v6 + 4);
          *(_OWORD *)v8 = *(_OWORD *)(v6 + 16LL * *(unsigned int *)(v6 + 4) + 8);
          *(_OWORD *)(v6 + 8 * v12 + 8) = 0LL;
          return result;
        }
      }
      v8 += 16LL;
      --v7;
    }
  }
  return 0LL;
}
