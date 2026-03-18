/*
 * XREFs of ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400CD1F4
 * Callers:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N6@Z @ 0x1400CC7D4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 * Callees:
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x140031B5C (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ReportVadValidationError @ 0x1400AAEE0 (ReportVadValidationError.c)
 *     ?CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1400CD350 (-CompareVadRangeAvl@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ValidateVadInReservedTree @ 0x1400CD3D8 (ValidateVadInReservedTree.c)
 */

void __fastcall CVirtualAddressAllocator::InsertVadToReservedListForNewVaRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_VAD *a2,
        struct _D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE a3)
{
  char v3; // bl
  struct _RTL_BALANCED_NODE *v6; // r14
  struct _RTL_BALANCED_NODE *v7; // rax
  int v8; // eax
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r8

  v3 = (char)a3.0;
  if ( *((_QWORD *)a2 + 4) <= *((_QWORD *)a2 + 3) )
    ReportVadValidationError((__int64)this, (__int64)a2, 441759449LL);
  if ( *((_QWORD *)a2 + 3) < *((_QWORD *)this + 3) )
    ReportVadValidationError((__int64)this, (__int64)a2, 2140854717LL);
  if ( *((_QWORD *)a2 + 4) > *((_QWORD *)this + 2) )
    ReportVadValidationError((__int64)this, (__int64)a2, 1034618386LL);
  v6 = (struct _RTL_BALANCED_NODE *)*((_QWORD *)this + 7);
  *(_BYTE *)&a3.0 = 0;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)CompareVadRangeAvl(a2, v6) < 0 )
      {
        v7 = v6->Children[0];
        if ( !v6->Children[0] )
        {
          *(_BYTE *)&a3.0 = 0;
          break;
        }
      }
      else
      {
        v7 = v6->Children[1];
        if ( !v7 )
        {
          *(_BYTE *)&a3.0 = 1;
          break;
        }
      }
      v6 = v7;
    }
  }
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))RtlAvlInsertNodeEx)((char *)this + 56, v6, a3.0, a2);
  if ( (v3 & 0x10) != 0 )
    *((_DWORD *)a2 + 18) |= 0x800u;
  v8 = *((_DWORD *)a2 + 18);
  if ( (v3 & 0xC) != 0 )
    v9 = v8 & 0xFFFFFFF0 | 2;
  else
    v9 = v8 & 0xFFFFFFF0 | 3;
  *((_DWORD *)a2 + 18) = v9;
  ValidateVadInReservedTree(this, a2);
  if ( byte_14008A202 < 0 )
    McTemplateK0pqxx_EtwWriteTransfer(
      v10,
      &CreateGpuVirtualAddressRange,
      v11,
      this,
      *((_DWORD *)a2 + 18),
      *((_QWORD *)a2 + 3),
      *((_QWORD *)a2 + 4));
}
