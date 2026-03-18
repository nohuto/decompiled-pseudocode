/*
 * XREFs of MiConfirmQuotaProcess @ 0x1403BCE04
 * Callers:
 *     MiFreeVadRange @ 0x1403BC958 (MiFreeVadRange.c)
 *     MiDeleteAweBitMap @ 0x140878E00 (MiDeleteAweBitMap.c)
 *     MiDeleteVadEventBlock @ 0x14095C520 (MiDeleteVadEventBlock.c)
 *     MiInsertVadCharges @ 0x1409C5DC0 (MiInsertVadCharges.c)
 *     MiCreatePlaceholderStorage @ 0x1409C684C (MiCreatePlaceholderStorage.c)
 *     MiReturnVadCharges @ 0x1409C6974 (MiReturnVadCharges.c)
 *     MiCreateVadEvent @ 0x1409CE5DC (MiCreateVadEvent.c)
 *     MiReturnVadQuotaCharges @ 0x140A79C0C (MiReturnVadQuotaCharges.c)
 *     MiDeleteVadEventPlaceholder @ 0x140B00030 (MiDeleteVadEventPlaceholder.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
