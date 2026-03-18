/*
 * XREFs of ?RemoveVadFromReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CC758
 * Callers:
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1401061D4 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ValidateVadInReservedTree @ 0x1400CD3D8 (ValidateVadInReservedTree.c)
 */

void __fastcall CVirtualAddressAllocator::RemoveVadFromReservedList(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // [rsp+20h] [rbp-28h]

  ValidateVadInReservedTree();
  if ( byte_14008A202 < 0 )
  {
    v6 = *((_DWORD *)a2 + 18);
    McTemplateK0pqxx_EtwWriteTransfer(
      v4,
      &DestroyGpuVirtualAddressRange,
      v5,
      this,
      v6,
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
  }
  RtlAvlRemoveNode((char *)this + 56, a2);
  *((_DWORD *)a2 + 18) &= 0xFFFFFFF0;
}
