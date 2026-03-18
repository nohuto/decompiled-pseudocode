/*
 * XREFs of ?DestroyPagingFenceObjects@VIDMM_GLOBAL@@QEAAXXZ @ 0x14009D6F0
 * Callers:
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x14009CB9C (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 *     ?CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ @ 0x14009D390 (-CreatePagingFenceObjects@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E12E0 (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z.c)
 *     VidSchDestroySyncObject @ 0x1400E15C0 (VidSchDestroySyncObject.c)
 */

void __fastcall VIDMM_GLOBAL::DestroyPagingFenceObjects(struct VIDMM_DEVICE **this)
{
  __int64 i; // rdi
  struct VIDMM_DEVICE *v3; // rcx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 1738); i = (unsigned int)(i + 1) )
  {
    if ( *(_BYTE *)(*((_QWORD *)this[2] + 93) + 63LL) && this[i + 805] )
      VIDMM_GLOBAL::UnmapGpuVA(
        (VIDMM_GLOBAL *)this,
        this[5065],
        (struct VIDMM_DEVICE *)((char *)this[i + 741] + 64),
        i,
        1);
    v3 = this[i + 741];
    if ( v3 )
    {
      VidSchDestroySyncObject(v3);
      this[i + 741] = 0LL;
    }
  }
}
