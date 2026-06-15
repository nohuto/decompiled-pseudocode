/*
 * XREFs of free @ 0x1800309BC
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x18002E930 (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x18002EB88 (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
