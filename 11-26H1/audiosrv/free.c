/*
 * XREFs of free @ 0x1800B319C
 * Callers:
 *     ?RemoveAll@?$CSimpleArray@GV?$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ @ 0x18008838C (-RemoveAll@-$CSimpleArray@GV-$CSimpleArrayEqualHelper@G@ATL@@@ATL@@QEAAXXZ.c)
 *     ??1_ATL_BASE_MODULE70@ATL@@QEAA@XZ @ 0x1800AAD68 (--1_ATL_BASE_MODULE70@ATL@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl free(void *Block)
{
  __imp_free(Block);
}
