/*
 * XREFs of ?RemoveVadFromFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C943C
 * Callers:
 *     ?AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDMM_VAD@@E@Z @ 0x1400CCB80 (-AllocateVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAU_RTL_AVL_TREE@@_K111IPEAPEAUVIDM.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ValidateVadInFreeTree @ 0x1400C9968 (ValidateVadInFreeTree.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromFreeList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        __int64 a3)
{
  int v5; // [rsp+20h] [rbp-28h]

  if ( byte_14008A202 < 0 )
  {
    v5 = *((_DWORD *)a2 + 18);
    McTemplateK0pqxx_EtwWriteTransfer(
      (__int64)this,
      &DestroyGpuVirtualAddressRange,
      a3,
      this,
      v5,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  ValidateVadInFreeTree(this, a2);
  RtlAvlRemoveNode((char *)this + 48, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
