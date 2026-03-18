/*
 * XREFs of ?InsertVadToReservedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400CD7F4
 * Callers:
 *     ?ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z @ 0x1400CBDB4 (-ReserveVirtualAddressRangeNoAccess@CVirtualAddressAllocator@@QEAAJ_K000IPEA_K@Z.c)
 *     ?ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESERVATION_TYPE@@_KEPEA_KPEAPEAUVIDMM_MAPPED_VA_RANGE@@E@Z @ 0x1400CC50C (-ReserveVirtualAddressRange@CVirtualAddressAllocator@@QEAAJ_K000IW4_D3DDDIGPUVIRTUALADDRESS_RESE.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ValidateVadAddressRange @ 0x1400CBD40 (ValidateVadAddressRange.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CD350 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ValidateVadInReservedTree @ 0x1400CD3D8 (ValidateVadInReservedTree.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToReservedList(CVirtualAddressAllocator *this, struct VIDMM_VAD *a2)
{
  struct _RTL_BALANCED_NODE *v4; // rdi
  __int64 v5; // r8
  struct _RTL_BALANCED_NODE *v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8

  ValidateVadAddressRange((__int64)this, (__int64)a2);
  v4 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  LOBYTE(v5) = 0;
  if ( !v4 )
    goto LABEL_8;
  while ( (int)CompareVadRangeAvl((char *)a2, v4) < 0 )
  {
    v6 = v4->Children[0];
    if ( !v4->Children[0] )
    {
      LOBYTE(v5) = 0;
      goto LABEL_8;
    }
LABEL_4:
    v4 = v6;
  }
  v6 = v4->Children[1];
  if ( v6 )
    goto LABEL_4;
  LOBYTE(v5) = 1;
LABEL_8:
  RtlAvlInsertNodeEx((char *)this + 56, v4, v5, a2);
  *((_DWORD *)a2 + 18) = *((_DWORD *)a2 + 18) & 0xFFFFFFF0 | 2;
  ValidateVadInReservedTree((__int64)this, (__int64)a2);
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
