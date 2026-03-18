/*
 * XREFs of MiConfirmQuotaAmount @ 0x1403BCDC0
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

char __fastcall MiConfirmQuotaAmount(_BYTE *BugCheckParameter2, ULONG_PTR BugCheckParameter4)
{
  char result; // al

  result = *BugCheckParameter2 >> 4;
  if ( result != (unsigned __int8)BugCheckParameter4 >> 4 )
    KeBugCheckEx(
      0x1Au,
      0x1101uLL,
      (ULONG_PTR)BugCheckParameter2,
      (unsigned __int8)*BugCheckParameter2,
      BugCheckParameter4);
  return result;
}
