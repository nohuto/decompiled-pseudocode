/*
 * XREFs of VfMiscIoInitializeWorkItem_Entry @ 0x140B8DB90
 * Callers:
 *     <none>
 * Callees:
 *     IoSizeofWorkItem @ 0x14046B860 (IoSizeofWorkItem.c)
 *     MmIsNonPagedSystemAddressValid @ 0x1404ABE70 (MmIsNonPagedSystemAddressValid.c)
 *     VfMiscCheckKernelAddress @ 0x1404B11E4 (VfMiscCheckKernelAddress.c)
 *     CarReportRuleViolationFromNt @ 0x140B7D934 (CarReportRuleViolationFromNt.c)
 */

BOOLEAN __fastcall VfMiscIoInitializeWorkItem_Entry(__int64 a1)
{
  ULONG v2; // eax
  void *v3; // rdi
  BOOLEAN result; // al

  v2 = IoSizeofWorkItem();
  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), v2, *(_QWORD *)a1);
  v3 = *(void **)(a1 + 8);
  result = MmIsNonPagedSystemAddressValid(v3);
  if ( !result )
    return CarReportRuleViolationFromNt(196, 305LL, (ULONG_PTR)v3, 0LL, 0LL, 0xBu, *(_QWORD *)a1);
  return result;
}
