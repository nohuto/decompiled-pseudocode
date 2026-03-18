/*
 * XREFs of CmpNameSize @ 0x1408DD750
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140858F40 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x1408DD5DC (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140CEA8F4 (CmpCreateRootNode.c)
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
