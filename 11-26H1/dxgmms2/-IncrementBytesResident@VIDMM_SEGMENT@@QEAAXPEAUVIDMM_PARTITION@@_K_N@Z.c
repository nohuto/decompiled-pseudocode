/*
 * XREFs of ?IncrementBytesResident@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PARTITION@@_K_N@Z @ 0x1400FA154
 * Callers:
 *     ?ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z @ 0x1400F8CD0 (-ReAllocateOldResource@VIDMM_SEGMENT@@QEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N@Z.c)
 *     ?ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTRICTION@@_K@Z @ 0x1400F98E0 (-ReserveResource@VIDMM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@EEEW4VIDMM_PLACEMENT_RESTR.c)
 * Callees:
 *     ?NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z @ 0x140037B00 (-NotifyMemorySegmentActive@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_SEGMENT@@@Z.c)
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_SEGMENT::IncrementBytesResident(
        VIDMM_SEGMENT *this,
        struct VIDMM_PARTITION *a2,
        __int64 a3,
        char a4)
{
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi

  *((_QWORD *)this + 12) += a3;
  if ( *((_DWORD *)this + 100) != -1 && !a4 )
  {
    v12 = *((_QWORD *)this + 37);
    *((_QWORD *)this + 37) = v12 + a3;
    if ( v12 + a3 > qword_14008A5E8 && v12 <= qword_14008A5E8 )
      (*(void (__fastcall **)(_QWORD))(*((_QWORD *)this + 1) + 40008LL))(*(_QWORD *)(*((_QWORD *)this + 1) + 40072LL));
    if ( !v12 )
      VIDMM_GLOBAL::NotifyMemorySegmentActive(*((VIDMM_GLOBAL **)this + 1), this);
  }
  v7 = *((_QWORD *)this + 1);
  v8 = *((unsigned __int16 *)this + 34);
  v9 = *((int *)this + 26);
  v10 = *(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8 * v8);
  if ( (*(_BYTE *)(v10 + 24 * v9 + 632) & 1) != 0 )
    v11 = *(_QWORD *)(384LL * *(unsigned int *)(*(_QWORD *)(v7 + 24) + 240LL) + *((_QWORD *)a2 + 5) + 24) + 344 * v8;
  else
    v11 = v10 + 344 * v9 + 664;
  *(_QWORD *)(v11 + 128) += a3;
}
