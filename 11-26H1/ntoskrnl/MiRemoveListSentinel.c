/*
 * XREFs of MiRemoveListSentinel @ 0x1402EE518
 * Callers:
 *     MiWalkAllWorkingSets @ 0x1402A8780 (MiWalkAllWorkingSets.c)
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiPruneUnusedList @ 0x140488FD0 (MiPruneUnusedList.c)
 *     MiDeleteCachedSubsections @ 0x1404A05EC (MiDeleteCachedSubsections.c)
 *     MiMakeUnusedSegmentDeleteOnClose @ 0x1406EC344 (MiMakeUnusedSegmentDeleteOnClose.c)
 * Callees:
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x1402EEAE0 (RtlAvlInsertNodeEx.c)
 */

unsigned __int64 __fastcall MiRemoveListSentinel(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // rsi
  char v3; // bl
  _QWORD *v6; // rdx
  _QWORD *v7; // rdi
  __int64 v8; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // r9
  _QWORD *v12; // rdx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  __int64 v15; // rdx
  _QWORD *v16; // rax
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rdx

  v2 = a2[3];
  v3 = 0;
  if ( v2 )
  {
    v6 = (_QWORD *)*a1;
    while ( v6 )
    {
      if ( v2 > v6[3] )
      {
        v6 = (_QWORD *)v6[1];
      }
      else
      {
        if ( v2 >= v6[3] )
          break;
        v6 = (_QWORD *)*v6;
      }
    }
    v7 = a2 + 4;
    if ( v6 == a2 )
    {
      RtlAvlRemoveNode(a1, v6);
      v9 = (_QWORD *)*v7;
      if ( (_QWORD *)*v7 != v7 )
      {
        v10 = *v9;
        v11 = v9 - 4;
        if ( *(_QWORD **)(*v9 + 8LL) == v9 )
        {
          v12 = (_QWORD *)v9[1];
          if ( (_QWORD *)*v12 == v9 )
          {
            *v12 = v10;
            *(_QWORD *)(v10 + 8) = v12;
            v13 = (_QWORD *)*v7;
            if ( (_QWORD *)*v7 == v7 )
            {
              v9[1] = v9;
              *v9 = v9;
            }
            else
            {
              if ( (_QWORD *)v13[1] != v7 )
                goto LABEL_12;
              v14 = (_QWORD *)v7[1];
              if ( (_QWORD *)*v14 != v7 )
                goto LABEL_12;
              *v14 = v13;
              v13[1] = v14;
              v15 = *v13;
              if ( *(_QWORD **)(*v13 + 8LL) != v13 )
                goto LABEL_12;
              *v9 = v15;
              v9[1] = v13;
              *(_QWORD *)(v15 + 8) = v9;
              *v13 = v9;
            }
            v20 = (_QWORD *)*a1;
            if ( *a1 )
            {
              while ( 1 )
              {
                if ( v2 >= v20[3] )
                {
                  v16 = (_QWORD *)v20[1];
                  if ( !v16 )
                  {
                    v3 = 1;
                    break;
                  }
                }
                else
                {
                  v16 = (_QWORD *)*v20;
                  if ( !*v20 )
                    break;
                }
                v20 = v16;
              }
            }
            LOBYTE(v8) = v3;
            RtlAvlInsertNodeEx(a1, v20, v8, v11);
            return v2;
          }
        }
LABEL_12:
        __fastfail(3u);
      }
    }
    else
    {
      v18 = (_QWORD *)*v7;
      if ( *(_QWORD **)(*v7 + 8LL) != v7 )
        goto LABEL_12;
      v19 = (_QWORD *)a2[5];
      if ( (_QWORD *)*v19 != v7 )
        goto LABEL_12;
      *v19 = v18;
      v18[1] = v19;
    }
    return v2;
  }
  return 0LL;
}
