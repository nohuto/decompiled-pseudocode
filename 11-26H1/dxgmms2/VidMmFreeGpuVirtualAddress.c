/*
 * XREFs of VidMmFreeGpuVirtualAddress @ 0x140041B80
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@_NI@Z @ 0x1400E11E4 (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDR.c)
 */

int __fastcall VidMmFreeGpuVirtualAddress(VIDMM_GLOBAL *a1, __int64 a2, const struct _D3DKMT_FREEGPUVIRTUALADDRESS *a3)
{
  struct VIDMM_PROCESS *v3; // rdx

  v3 = *(struct VIDMM_PROCESS **)(a2 + 64);
  if ( v3 )
    v3 = (struct VIDMM_PROCESS *)*((_QWORD *)v3 + 1);
  return VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(a1, v3, a3, 0, 0);
}
