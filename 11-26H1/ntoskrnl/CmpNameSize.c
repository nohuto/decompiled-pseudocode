/*
 * XREFs of CmpNameSize @ 0x1408E3D10
 * Callers:
 *     CmRenameKey @ 0x14085DDCC (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x14085F2D0 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x1408E3B9C (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1408E3FE4 (CmpSetValueKeyNew.c)
 *     CmpCreateChild @ 0x1408E5A60 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140B4D6CC (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140CF0C94 (CmpCreateRootNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpNameSize(unsigned __int16 *a1)
{
  unsigned __int16 v1; // r10
  __int64 i; // rax

  v1 = *a1;
  for ( i = 0LL; (unsigned int)i < *a1 >> 1; i = (unsigned int)(i + 1) )
  {
    if ( *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * i) > 0xFFu )
      return v1;
  }
  v1 >>= 1;
  return v1;
}
