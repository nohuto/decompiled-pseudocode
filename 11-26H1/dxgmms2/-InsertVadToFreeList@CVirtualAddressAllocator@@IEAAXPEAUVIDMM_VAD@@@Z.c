/*
 * XREFs of ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0
 * Callers:
 *     ?InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1400C8FA4 (-InitializeVaAllocator@CVirtualAddressAllocator@@QEAAJ_KIPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z.c)
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 *     ?CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400C9940 (-CompareVadSizeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ValidateVadInFreeTree @ 0x1400C9968 (ValidateVadInFreeTree.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  struct _RTL_BALANCED_NODE *v5; // rsi
  struct _RTL_BALANCED_NODE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_QWORD *)a2 + 4) <= *((_QWORD *)a2 + 3) )
    ReportVadValidationError((__int64)this, (__int64)a2, 441759449LL);
  if ( *((_QWORD *)a2 + 3) < *((_QWORD *)this + 3) )
    ReportVadValidationError((__int64)this, (__int64)a2, 2140854717LL);
  if ( *((_QWORD *)a2 + 4) > *((_QWORD *)this + 2) )
    ReportVadValidationError((__int64)this, (__int64)a2, 1034618386LL);
  LOBYTE(a3) = 0;
  v5 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 6);
  v9 = *((_QWORD *)a2 + 4) - *((_QWORD *)a2 + 3);
  if ( v5 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadSizeAvl(&v9, v5) < 0 )
      {
        v6 = v5->Children[0];
        if ( !v5->Children[0] )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v6 = v5->Children[1];
        if ( !v6 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v5 = v6;
    }
  }
  RtlAvlInsertNodeEx((char *)this + 48, v5, a3, a2);
  *((_DWORD *)a2 + 18) = *((_DWORD *)a2 + 18) & 0xFFFFE7F0 | 1;
  ValidateVadInFreeTree(this, a2);
  if ( byte_14008A202 < 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v7,
      &CreateGpuVirtualAddressRange,
      v8,
      this,
      *((_DWORD *)a2 + 18),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
}
