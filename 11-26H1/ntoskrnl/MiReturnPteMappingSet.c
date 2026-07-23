/*
 * XREFs of MiReturnPteMappingSet @ 0x14044E8C0
 * Callers:
 *     MiCopyPage @ 0x140293504 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1406FC1B4 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x1406FE0B0 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x1406FEAF8 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x140711550 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 */

struct _KPRCB *__fastcall MiReturnPteMappingSet(__int64 a1)
{
  struct _KPRCB *result; // rax
  unsigned __int64 v2; // rbx

  if ( *(_BYTE *)(a1 + 8) == 17 )
    return (struct _KPRCB *)MiReleasePtes(
                              (__int64)&stru_140E366D8.WaitBlockList,
                              *(unsigned __int64 **)(a1 + 16),
                              *(_DWORD *)(a1 + 4));
  result = KeGetCurrentPrcb();
  *(_QWORD *)result->MmInternal = 0LL;
  v2 = *(unsigned __int8 *)(a1 + 8);
  if ( KiIrqlFlags )
    result = (struct _KPRCB *)KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
  __writecr8(v2);
  return result;
}
