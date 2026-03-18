/*
 * XREFs of MiGetPteMappingSet @ 0x14044FFD0
 * Callers:
 *     MiCopyPage @ 0x140293FA4 (MiCopyPage.c)
 *     MiSlowRotateCopy @ 0x1406F7544 (MiSlowRotateCopy.c)
 *     MiCopyFilePage @ 0x1406F93E0 (MiCopyFilePage.c)
 *     MiFillPageWithImageExtentContents @ 0x1406F9E28 (MiFillPageWithImageExtentContents.c)
 *     MiCopyMemoryPagefileData @ 0x14070C8A0 (MiCopyMemoryPagefileData.c)
 * Callees:
 *     MiGetUltraMapping @ 0x1402881D0 (MiGetUltraMapping.c)
 *     MiCreatePteCopyList @ 0x1404500A8 (MiCreatePteCopyList.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiGetPteMappingSet(int a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  _QWORD *MmInternal; // rbx
  unsigned __int64 result; // rax

  v4 = a2;
  if ( !a1 || KeGetCurrentIrql() >= 2u || (result = MiCreatePteCopyList(a2, a3), !*(_DWORD *)(a3 + 4)) )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    *(_BYTE *)(a3 + 8) = CurrentIrql;
    MmInternal = KeGetCurrentPrcb()->MmInternal;
    result = (((unsigned __int64)MiGetUltraMapping((__int64)(MmInternal + 13), 3uLL, v4, 4) >> 9) & 0x7FFFFFFFF8LL)
           - 0x98000000000LL;
    *MmInternal = result;
    *(_DWORD *)a3 = 0;
    *(_DWORD *)(a3 + 4) = v4;
    *(_QWORD *)(a3 + 16) = result;
    *(_BYTE *)(a3 + 9) = 1;
  }
  return result;
}
