/*
 * XREFs of ValidateVadAddressRange @ 0x1400CBD40
 * Callers:
 *     ?AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z @ 0x1400C9374 (-AllocateVad@CVirtualAddressAllocator@@QEAAPEAUVIDMM_VAD@@_K0I@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CD7F4 (-InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z @ 0x140104E98 (-FreeVad@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 */

unsigned __int64 __fastcall ValidateVadAddressRange(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( *(_QWORD *)(a2 + 32) <= *(_QWORD *)(a2 + 24) )
    ReportVadValidationError(a1, a2, 441759449LL);
  if ( *(_QWORD *)(a2 + 24) < *(_QWORD *)(a1 + 24) )
    ReportVadValidationError(a1, a2, 2140854717LL);
  result = *(_QWORD *)(a1 + 16);
  if ( *(_QWORD *)(a2 + 32) > result )
    return ReportVadValidationError(a1, a2, 1034618386LL);
  return result;
}
