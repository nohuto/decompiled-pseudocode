/*
 * XREFs of MiReturnPteMappingSet @ 0x140457050
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1406F7544 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x1406F93E0 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x1406F9E28 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 */

struct _KPRCB *__fastcall MiReturnPteMappingSet(__int64 a1)
{
  struct _KPRCB *result; // rax
  unsigned __int64 v2; // rbx

  if ( *(_BYTE *)(a1 + 8) == 17 )
    return (struct _KPRCB *)MiReleasePtes(
                              (__int64)&stru_140E36558.WaitBlockList,
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
