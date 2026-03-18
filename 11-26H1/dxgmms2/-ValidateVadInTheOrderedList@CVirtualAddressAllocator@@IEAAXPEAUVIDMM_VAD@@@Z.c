/*
 * XREFs of ?ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x14011056C
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 */

void __fastcall CVirtualAddressAllocator::ValidateVadInTheOrderedList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2)
{
  unsigned __int64 v2; // rax
  char *v3; // rsi
  char *v6; // rcx
  char *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // r8

  v2 = *((_QWORD *)a2 + 3);
  v3 = (char *)this + 32;
  v6 = (char *)*((_QWORD *)a2 + 6);
  if ( v6 == v3 )
  {
    if ( v2 == *((_QWORD *)this + 3) )
      goto LABEL_3;
    v10 = 157123952LL;
  }
  else
  {
    if ( v2 >= *((_QWORD *)v6 - 1) )
      goto LABEL_3;
    v10 = 1140164592LL;
  }
  ReportVadValidationError((__int64)this, (__int64)a2, v10);
LABEL_3:
  v7 = (char *)*((_QWORD *)a2 + 5);
  v8 = *((_QWORD *)a2 + 4);
  if ( v7 != v3 )
  {
    if ( v8 <= *((_QWORD *)v7 - 2) )
      return;
    v9 = 769917942LL;
LABEL_8:
    ReportVadValidationError((__int64)this, (__int64)a2, v9);
    return;
  }
  if ( v8 != *((_QWORD *)this + 2) )
  {
    v9 = 2451751071LL;
    goto LABEL_8;
  }
}
