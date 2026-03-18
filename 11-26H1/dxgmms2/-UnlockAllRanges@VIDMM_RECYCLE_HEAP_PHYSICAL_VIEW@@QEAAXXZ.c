/*
 * XREFs of ?UnlockAllRanges@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAXXZ @ 0x1400F6954
 * Callers:
 *     ?FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z @ 0x1400F68A8 (-FinalizedUnlock@VIDMM_RECYCLE_RANGE@@QEAAXAEA_N@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x14003B414 (-RemoveFromLockedRanges@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 *     ??_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z @ 0x14003C3C4 (--_GVIDMM_MDL_RANGE@@QEAAPEAXI@Z.c)
 *     ?Unlock@VIDMM_MDL_RANGE@@QEAAXXZ @ 0x1400F79E8 (-Unlock@VIDMM_MDL_RANGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::UnlockAllRanges(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this)
{
  char *v1; // rsi
  char *v3; // rbx
  VIDMM_MDL_RANGE *v4; // rbp
  void *v5; // rcx

  v1 = (char *)this + 8;
  v3 = (char *)*((_QWORD *)this + 1);
  while ( v3 != v1 )
  {
    v4 = (VIDMM_MDL_RANGE *)(v3 - 24);
    VIDMM_MDL_RANGE::Unlock((VIDMM_MDL_RANGE *)(v3 - 24));
    v3 = *(char **)v3;
    VIDMM_MDL_RANGE::RemoveFromLockedRanges(v4);
    if ( v4 )
      VIDMM_MDL_RANGE::`scalar deleting destructor'(v4);
  }
  v5 = (void *)*((_QWORD *)this + 4);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 3) = 0LL;
  }
}
