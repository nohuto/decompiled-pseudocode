/*
 * XREFs of RebalanceNode @ 0x1403C2F40
 * Callers:
 *     RtlInsertElementGenericTableAvl @ 0x1403C27C0 (RtlInsertElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvl @ 0x1403C2960 (RtlDeleteElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x1403C2BE0 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlInsertElementGenericTableFullAvl @ 0x1403C2E00 (RtlInsertElementGenericTableFullAvl.c)
 * Callees:
 *     PromoteNode @ 0x1403C2FF8 (PromoteNode.c)
 */

__int64 __fastcall RebalanceNode(__int64 a1)
{
  int v1; // r9d
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r10
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 result; // rax
  int v8; // ebx
  __int64 v9; // rdi
  __int64 v10; // rcx
  char v11; // r9
  __int64 v12; // r10
  __int64 v13; // r11
  char v14; // r9
  __int64 v15; // r10

  v1 = *(char *)(a1 + 24);
  v2 = 16LL;
  v3 = 8LL;
  if ( *(_BYTE *)(a1 + 24) != 1 )
    v2 = 8LL;
  v4 = *(_QWORD *)(v2 + a1);
  if ( *(_BYTE *)(v4 + 24) == (_BYTE)v1 )
  {
    PromoteNode(v4);
    *(_BYTE *)(v5 + 24) = 0;
    *(_BYTE *)(v6 + 24) = 0;
    return 0LL;
  }
  v8 = -v1;
  if ( *(char *)(v4 + 24) == -v1 )
  {
    if ( (_BYTE)v1 != 1 )
      v3 = 16LL;
    v9 = *(_QWORD *)(v3 + v4);
    PromoteNode(v9);
    PromoteNode(v10);
    *(_BYTE *)(v13 + 24) = 0;
    *(_BYTE *)(v12 + 24) = 0;
    if ( *(_BYTE *)(v9 + 24) == v11 )
    {
      *(_BYTE *)(v13 + 24) = -v11;
    }
    else if ( *(char *)(v9 + 24) == v8 )
    {
      *(_BYTE *)(v12 + 24) = v11;
    }
    *(_BYTE *)(v9 + 24) = 0;
    return 0LL;
  }
  PromoteNode(v4);
  result = 1LL;
  *(_BYTE *)(v15 + 24) = -v14;
  return result;
}
