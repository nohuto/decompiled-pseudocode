/*
 * XREFs of MiConfirmQuotaAmount @ 0x1403C6C30
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
