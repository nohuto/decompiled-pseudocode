/*
 * XREFs of MiAllocateKernelCfgBitmapPageTables @ 0x140AC8E80
 * Callers:
 *     MiApplyDriverHotPatch @ 0x140873E94 (MiApplyDriverHotPatch.c)
 *     MiMarkKernelImageCfgBits @ 0x140AC8C4C (MiMarkKernelImageCfgBits.c)
 *     MiInitializeKernelCfgImages @ 0x140D04E50 (MiInitializeKernelCfgImages.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x1402A4624 (MiMakeZeroedPageTables.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiAcquireKernelCfgLock @ 0x140773CD8 (MiAcquireKernelCfgLock.c)
 *     MiReleaseKernelCfgLock @ 0x140AC8E1C (MiReleaseKernelCfgLock.c)
 */

__int64 __fastcall MiAllocateKernelCfgBitmapPageTables(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v4; // ebx
  int v5; // esi
  __int64 v7; // r9
  int PteAddress; // eax
  int v9; // edx
  unsigned int v10; // edi

  v4 = a3;
  v5 = a2;
  if ( !(_DWORD)a3 )
    MiAcquireKernelCfgLock(a1, a2, a3, a4);
  MiGetPteAddress(
    (unsigned __int64)stru_140E2D2D0.WaitBlock[0].SparePtr
  + ((a1 + (unsigned __int64)(unsigned int)(v5 - 1) + 0x800000000000LL) >> 6));
  PteAddress = MiGetPteAddress((unsigned __int64)stru_140E2D2D0.WaitBlock[0].SparePtr + ((unsigned __int64)(a1 + v7) >> 6));
  v10 = (unsigned int)MiMakeZeroedPageTables(PteAddress, v9, 1, 18) == 0 ? 0xC000009A : 0;
  if ( !v4 )
    MiReleaseKernelCfgLock();
  return v10;
}
