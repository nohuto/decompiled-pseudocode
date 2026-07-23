/*
 * XREFs of RebalanceNode @ 0x1800BBEF0
 * Callers:
 *     DeleteNodeFromTree @ 0x1800BB9F0 (DeleteNodeFromTree.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1800BBBE0 (RtlInsertElementGenericTableFullAvl.c)
 *     RtlInsertElementGenericTableAvl @ 0x1800BBD20 (RtlInsertElementGenericTableAvl.c)
 * Callees:
 *     PromoteNode @ 0x1800BBFB4 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  int v1; // r9d
  bool v3; // zf
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r10
  __int64 v7; // r10
  __int64 result; // rax
  __int64 v9; // r11
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rcx
  char v13; // r9
  __int64 v14; // r10
  __int64 v15; // r11
  char v16; // r9
  __int64 v17; // r10

  v1 = *(char *)(a1 + 24);
  v3 = *(_BYTE *)(a1 + 24) == 1;
  v4 = 16LL;
  v5 = 8LL;
  if ( !v3 )
    v4 = 8LL;
  v6 = *(_QWORD *)(v4 + a1);
  if ( *(_BYTE *)(v6 + 24) == (_BYTE)v1 )
  {
    PromoteNode(v6);
    *(_BYTE *)(v7 + 24) = 0;
    result = 0LL;
    *(_BYTE *)(v9 + 24) = 0;
  }
  else
  {
    v10 = -v1;
    if ( *(char *)(v6 + 24) == -v1 )
    {
      if ( (_BYTE)v1 != 1 )
        v5 = 16LL;
      PromoteNode(*(_QWORD *)(v5 + v6));
      PromoteNode(v11);
      *(_BYTE *)(v15 + 24) = 0;
      *(_BYTE *)(v14 + 24) = 0;
      if ( *(_BYTE *)(v12 + 24) == v13 )
      {
        *(_BYTE *)(v15 + 24) = -v13;
        result = 0LL;
        *(_BYTE *)(v12 + 24) = 0;
      }
      else
      {
        if ( *(char *)(v12 + 24) == v10 )
          *(_BYTE *)(v14 + 24) = v13;
        *(_BYTE *)(v12 + 24) = 0;
        return 0LL;
      }
    }
    else
    {
      PromoteNode(v6);
      result = 1LL;
      *(_BYTE *)(v17 + 24) = -v16;
    }
  }
  return result;
}
