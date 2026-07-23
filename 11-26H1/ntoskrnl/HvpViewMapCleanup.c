/*
 * XREFs of HvpViewMapCleanup @ 0x1408BE2D0
 * Callers:
 *     HvHiveCleanup @ 0x1408BF5E0 (HvHiveCleanup.c)
 * Callees:
 *     CmSiCloseSection @ 0x1404D598C (CmSiCloseSection.c)
 *     HvpViewMapDeleteViewTreeNode @ 0x1408BE3B0 (HvpViewMapDeleteViewTreeNode.c)
 */

NTSTATUS __fastcall HvpViewMapCleanup(__int64 a1)
{
  __int64 v1; // rsi
  bool v3; // zf
  unsigned __int64 v4; // rcx
  int v5; // ebp
  unsigned __int64 v6; // rax
  _QWORD *v7; // rdx
  unsigned __int64 v8; // rbx
  NTSTATUS result; // eax

  v1 = a1 + 40;
  v3 = (*(_BYTE *)(a1 + 48) & 1) == 0;
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v3 && v4 )
    v4 ^= v1;
  v5 = *(_BYTE *)(v1 + 8) & 1;
  if ( v4 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = *(_QWORD *)v4;
        v7 = (_QWORD *)v4;
        if ( !*(_QWORD *)v4 )
        {
          v7 = (_QWORD *)(v4 + 8);
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
        }
        if ( v5 )
          v4 ^= v6;
        else
          v4 = v6;
        *v7 = 0LL;
      }
      v8 = *(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v5 && v8 )
        v8 ^= v4;
      HvpViewMapDeleteViewTreeNode(v4, a1);
      if ( !v8 )
        break;
      v4 = v8;
    }
  }
  result = *(unsigned __int8 *)(a1 + 48);
  *(_QWORD *)v1 = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  if ( (result & 1) != 0 )
    *(_BYTE *)(a1 + 48) = 1;
  if ( *(_QWORD *)a1 )
    return CmSiCloseSection(*(void **)a1);
  return result;
}
