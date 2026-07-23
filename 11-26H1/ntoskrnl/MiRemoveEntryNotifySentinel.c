/*
 * XREFs of MiRemoveEntryNotifySentinel @ 0x1402EE30C
 * Callers:
 *     MiUnlinkUnusedControlArea @ 0x1402EDDD4 (MiUnlinkUnusedControlArea.c)
 *     MiUnlinkUnusedSubsection @ 0x1402EE29C (MiUnlinkUnusedSubsection.c)
 *     MiUnlinkAllAgingEntries @ 0x1402EFA7C (MiUnlinkAllAgingEntries.c)
 *     MiUnlinkHardLimitWorkingSet @ 0x1402EFB08 (MiUnlinkHardLimitWorkingSet.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406EC488 (MiMoveUnusedSubsectionsToDeleteOnClose.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

unsigned __int64 *__fastcall MiRemoveEntryNotifySentinel(_QWORD *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // rbp
  _QWORD *v4; // rdi
  char v6; // bl
  unsigned __int64 v7; // rcx
  unsigned __int64 *result; // rax
  _QWORD *i; // rcx
  _QWORD *v10; // rdx
  _QWORD *v11; // r8
  _QWORD *v12; // r8
  __int64 v13; // r8
  _QWORD **v14; // rax
  _QWORD *v15; // rcx
  _QWORD *j; // rcx
  _QWORD *v17; // rdx
  _QWORD *v18; // rax
  _QWORD *v19; // rdx

  v2 = *a2;
  v4 = (_QWORD *)*a1;
  v6 = 0;
  while ( v4 )
  {
    if ( (unsigned __int64)a2 > v4[3] )
    {
      v4 = (_QWORD *)v4[1];
    }
    else
    {
      if ( (unsigned __int64)a2 >= v4[3] )
        break;
      v4 = (_QWORD *)*v4;
    }
  }
  if ( v4 )
  {
    RtlAvlRemoveNode(a1, v4);
    v4[3] = v2;
    v14 = (_QWORD **)(v4 + 4);
    v15 = (_QWORD *)*a1;
    while ( v15 )
    {
      if ( v2 > v15[3] )
      {
        v15 = (_QWORD *)v15[1];
      }
      else
      {
        if ( v2 >= v15[3] )
          break;
        v15 = (_QWORD *)*v15;
      }
    }
    if ( v15 )
    {
      for ( i = v15 + 4; ; i[1] = v10 )
      {
        v10 = *v14;
        if ( *v14 == v14 )
          break;
        if ( (_QWORD **)v10[1] != v14 )
          goto LABEL_15;
        v11 = (_QWORD *)*v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 )
          goto LABEL_15;
        *v14 = v11;
        v11[1] = v14;
        *(v10 - 1) = v2;
        v12 = (_QWORD *)i[1];
        if ( (_QWORD *)*v12 != i )
          goto LABEL_15;
        *v10 = i;
        v10[1] = v12;
        *v12 = v10;
      }
      v19 = (_QWORD *)i[1];
      if ( (_QWORD *)*v19 != i )
LABEL_15:
        __fastfail(3u);
      *v14 = i;
      v4[5] = v19;
      *v19 = v14;
      i[1] = v14;
    }
    else
    {
      for ( j = *v14; j != v14; j = (_QWORD *)*j )
        *(j - 1) = v2;
      v17 = (_QWORD *)*a1;
      if ( *a1 )
      {
        while ( 1 )
        {
          if ( v2 >= v17[3] )
          {
            v18 = (_QWORD *)v17[1];
            if ( !v18 )
            {
              v6 = 1;
              break;
            }
          }
          else
          {
            v18 = (_QWORD *)*v17;
            if ( !*v17 )
              break;
          }
          v17 = v18;
        }
      }
      LOBYTE(v13) = v6;
      RtlAvlInsertNodeEx(a1, v17, v13, v4);
    }
  }
  v7 = *a2;
  if ( *(unsigned __int64 **)(*a2 + 8) != a2 )
    goto LABEL_15;
  result = (unsigned __int64 *)a2[1];
  if ( (unsigned __int64 *)*result != a2 )
    goto LABEL_15;
  *result = v7;
  *(_QWORD *)(v7 + 8) = result;
  return result;
}
