/*
 * XREFs of ReportDmaAllocationCB @ 0x140126B30
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x14002B940 (McTemplateK0pqx_EtwWriteTransfer.c)
 */

__int64 __fastcall ReportDmaAllocationCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *a3,
        void *a4)
{
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 v7; // rcx
  __int64 v8; // rax
  int v9; // r9d
  __int64 v10; // rax

  if ( (*(_BYTE *)(*((_QWORD *)a1 + 7) + 41065LL) & 0x20) == 0 )
  {
    v5 = *((unsigned __int16 *)a3 + 8);
    v6 = 0LL;
    v7 = *(_QWORD *)(*((_QWORD *)a1 + 219) + 8 * v5);
    v8 = v7 + 70;
    if ( !v7 )
      v8 = 62LL;
    v9 = (unsigned __int16)(*(_WORD *)v8 + 1);
    v10 = v7 + 108;
    if ( !v7 )
      v10 = 100LL;
    if ( *(_DWORD *)v10 )
      v6 = *(_QWORD *)a3 << 12;
    if ( (byte_14008A201 & 1) != 0 )
      McTemplateK0pqx_EtwWriteTransfer(v7, &EventReportCommittedGlobalAllocation, v6, *(_QWORD *)a2, v9, v6);
  }
  return 0LL;
}
