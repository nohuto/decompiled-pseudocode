/*
 * XREFs of MiConfirmQuotaProcess @ 0x1403C6C74
 * Callers:
 *     MiFreeVadRange @ 0x1403C67C8 (MiFreeVadRange.c)
 *     MiDeleteAweBitMap @ 0x14087F1E0 (MiDeleteAweBitMap.c)
 *     MiInsertVadCharges @ 0x140996DA0 (MiInsertVadCharges.c)
 *     MiCreatePlaceholderStorage @ 0x14099782C (MiCreatePlaceholderStorage.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     MiCreateVadEvent @ 0x14099F5BC (MiCreateVadEvent.c)
 *     MiDeleteVadEventBlock @ 0x140A01DE0 (MiDeleteVadEventBlock.c)
 *     MiReturnVadQuotaCharges @ 0x140A81B4C (MiReturnVadQuotaCharges.c)
 *     MiDeleteVadEventPlaceholder @ 0x140B01CC0 (MiDeleteVadEventPlaceholder.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall MiConfirmQuotaProcess(unsigned __int8 *BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v2; // r9
  char result; // al

  v2 = *BugCheckParameter2;
  result = v2 ^ ((unsigned __int8)BugCheckParameter4 >> 4);
  if ( (result & 0xF) != 0 )
    KeBugCheckEx(0x1Au, 0x1100uLL, (ULONG_PTR)BugCheckParameter2, v2, BugCheckParameter4);
  return result;
}
