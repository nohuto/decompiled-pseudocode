/*
 * XREFs of CmpCopyName @ 0x1408DD790
 * Callers:
 *     CmRenameKey @ 0x140857A3C (CmRenameKey.c)
 *     CmpAddValueKeyTombstone @ 0x140858F40 (CmpAddValueKeyTombstone.c)
 *     CmpAddValueKeyNew @ 0x1408DD5DC (CmpAddValueKeyNew.c)
 *     CmpSetValueKeyNew @ 0x1408DDA24 (CmpSetValueKeyNew.c)
 *     CmpCreateChild @ 0x1408DF4A0 (CmpCreateChild.c)
 *     CmpCreateHiveRootCell @ 0x140B4B93C (CmpCreateHiveRootCell.c)
 *     CmpCreateRootNode @ 0x140CEA8F4 (CmpCreateRootNode.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

__int64 __fastcall CmpCopyName(_BYTE *a1, const void **a2)
{
  __int64 i; // rax
  unsigned __int16 v4; // dx

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *(unsigned __int16 *)a2 >> 1 )
      return *(_WORD *)a2 >> 1;
    v4 = *((_WORD *)a2[1] + i);
    if ( v4 > 0xFFu )
      break;
    a1[i] = v4;
  }
  memmove(a1, a2[1], *(unsigned __int16 *)a2);
  return *(unsigned __int16 *)a2;
}
