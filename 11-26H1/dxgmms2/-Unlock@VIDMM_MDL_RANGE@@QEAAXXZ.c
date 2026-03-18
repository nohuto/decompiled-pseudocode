/*
 * XREFs of ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1400F79E8
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1400F3360 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?UnlockAllRanges@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXXZ @ 0x1400F6954 (-UnlockAllRanges@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_MDL_RANGE::Unlock(PMDL *this)
{
  MmUnlockPages(*this);
  IoFreeMdl(*this);
  *this = 0LL;
}
