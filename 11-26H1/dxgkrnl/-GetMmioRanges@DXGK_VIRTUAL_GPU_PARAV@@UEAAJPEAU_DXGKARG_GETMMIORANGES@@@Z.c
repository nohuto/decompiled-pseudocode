/*
 * XREFs of ?GetMmioRanges@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_GETMMIORANGES@@@Z @ 0x14021C550
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 */

__int64 __fastcall DXGK_VIRTUAL_GPU_PARAV::GetMmioRanges(
        DXGK_VIRTUAL_GPU_PARAV *this,
        struct _DXGKARG_GETMMIORANGES *a2)
{
  memset(a2->pMmioRanges, 0, 24LL * a2->NumRanges);
  return 0LL;
}
