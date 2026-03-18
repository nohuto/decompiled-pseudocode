/*
 * XREFs of ?FreeStorage@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110B98
 * Callers:
 *     ?Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVIDMM_PROCESS@@IPEAX@Z @ 0x140110710 (-Init@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEAVVI.c)
 *     ??1VIDMM_FENCE_STORAGE_PAGE@@MEAA@XZ @ 0x140110B78 (--1VIDMM_FENCE_STORAGE_PAGE@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     ?FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ @ 0x140110C4C (-FreeVmMapping@VIDMM_FENCE_STORAGE_PAGE@@QEAAXXZ.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::FreeStorage(PVOID *this)
{
  struct _MDL *v2; // rcx
  PVOID v3; // rcx
  PVOID v4; // rcx
  PVOID v5; // rcx

  VIDMM_FENCE_STORAGE_PAGE::FreeVmMapping((VIDMM_FENCE_STORAGE_PAGE *)this);
  v2 = (struct _MDL *)this[16];
  if ( v2 )
  {
    if ( (v2->MdlFlags & 2) != 0 )
      MmUnlockPages(v2);
    ExFreePoolWithTag(this[16], 0);
    this[16] = 0LL;
  }
  v3 = this[15];
  if ( v3 )
  {
    MmUnmapViewInSystemSpace(v3);
    this[15] = 0LL;
  }
  v4 = this[14];
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    this[14] = 0LL;
  }
  v5 = this[19];
  if ( v5 )
  {
    operator delete(v5);
    this[19] = 0LL;
  }
}
