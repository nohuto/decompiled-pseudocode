/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4
 * Callers:
 *     VidMmFreeGpuVirtualAddress @ 0x140041B80 (VidMmFreeGpuVirtualAddress.c)
 *     ?MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400A5570 (-MapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_S.c)
 *     ?UnmapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@I_N@Z @ 0x1400A6200 (-UnmapGpuVaVidMmAlloc@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@I_N@Z.c)
 *     ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@I_N@Z @ 0x1400E1334 (-UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@.c)
 * Callees:
 *     memset @ 0x14005BBC0 (memset.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1400CF280 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z @ 0x1400E68D8 (-QueueSystemCleanupCommandAndWait@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
        VIDMM_GLOBAL *this,
        struct VIDMM_PROCESS *a2,
        const struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3,
        char a4,
        unsigned int a5)
{
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // r14
  D3DGPU_VIRTUAL_ADDRESS BaseAddress; // rdi
  bool v11; // r8
  _QWORD v13[12]; // [rsp+20h] [rbp-78h] BYREF

  if ( (*((_BYTE *)this + 41064) & 0x10) == 0 )
    return 0LL;
  VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(
                              a2,
                              *(_DWORD *)(*((_QWORD *)this + 3) + 240LL),
                              a5);
  if ( VirtualAddressAllocator )
  {
    BaseAddress = a3->BaseAddress;
    if ( BaseAddress )
    {
      memset(v13, 0, 0x58uLL);
      v13[8] = a3->Size >> 12;
      v13[0] = -4294967176LL;
      v13[5] = a2;
      v13[7] = BaseAddress;
      v13[6] = VirtualAddressAllocator;
      LOBYTE(v13[9]) = a4;
      return VIDMM_GLOBAL::QueueSystemCleanupCommandAndWait(this, (struct _VIDMM_SYSTEM_COMMAND *)v13, v11);
    }
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 19735;
  }
  return 3221225485LL;
}
