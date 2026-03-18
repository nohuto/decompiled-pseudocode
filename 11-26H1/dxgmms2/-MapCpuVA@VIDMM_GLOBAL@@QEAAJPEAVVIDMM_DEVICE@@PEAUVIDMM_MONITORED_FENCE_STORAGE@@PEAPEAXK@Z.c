/*
 * XREFs of ?MapCpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAPEAXK@Z @ 0x14011787C
 * Callers:
 *     VidMmMapCpuVA @ 0x1400430C0 (VidMmMapCpuVA.c)
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x14002E900 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@_N3PEAPEAXK@Z @ 0x140117910 (-MapCpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_PROCESS@@PEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORE.c)
 */

__int64 __fastcall VIDMM_GLOBAL::MapCpuVA(
        VIDMM_GLOBAL *this,
        struct VIDMM_DEVICE *a2,
        VIDMM_FENCE_STORAGE_PAGE **a3,
        void **a4,
        unsigned int a5)
{
  struct VIDMM_DEVICE *v8; // r8
  struct VIDMM_PROCESS *v9; // rbx
  __int64 v10; // rdx

  v9 = 0LL;
  if ( DXGPROCESS::GetCurrent() )
  {
    v10 = *((_QWORD *)DXGPROCESS::GetCurrent() + 8);
    if ( v10 )
      v9 = *(struct VIDMM_PROCESS **)(v10 + 8);
  }
  LOBYTE(v8) = (*((_BYTE *)this + 41064) & 0x20) != 0;
  return VIDMM_FENCE_STORAGE_PAGE::MapCpuVA(
           *a3,
           v9,
           v8,
           (struct VIDMM_MONITORED_FENCE_STORAGE *)a3,
           (bool)v8,
           (*((_BYTE *)this + 41064) & 0x40) != 0,
           a4,
           a5);
}
