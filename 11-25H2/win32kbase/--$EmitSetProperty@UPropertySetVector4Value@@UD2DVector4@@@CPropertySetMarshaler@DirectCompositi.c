/*
 * XREFs of ??$EmitSetProperty@UPropertySetVector4Value@@UD2DVector4@@@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@1@I@Z @ 0x140109704
 * Callers:
 *     ?EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z @ 0x14002626C (-EmitSetProperties@CPropertySetMarshaler@DirectComposition@@AEAA_NPEAPEAVCBatch@2@@Z.c)
 * Callees:
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400238D0 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x140023B74 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@I@Z @ 0x1400263E4 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAII@Z @ 0x14002655C (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ??$GetPropertyValue@UD2DVector3@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector3@@I@Z @ 0x1400265B0 (--$GetPropertyValue@UD2DVector3@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXIW4MarshalStatus@@@Z @ 0x140026604 (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetDataType@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4DCOMPOSITION_EXPRESSION_TYPE@@I@Z @ 0x1402370AC (-GetDataType@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@Q.c)
 */

char __fastcall DirectComposition::CPropertySetMarshaler::EmitSetProperty<PropertySetVector4Value,D2DVector4>(
        __int64 a1,
        struct DirectComposition::CBatch ***a2,
        unsigned int a3)
{
  struct DirectComposition::CBatch **v3; // rbx
  char v7; // si
  struct DirectComposition::CBatch *BatchFragment; // rcx
  char *v10; // rdi
  __int64 v11; // r8
  void *v12; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v7 = 1;
  if ( (unsigned __int64)(4096LL - *((_QWORD *)(*a2)[17] + 5)) >= 0x2C )
    goto LABEL_5;
  BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(
                    v3[1],
                    *((_DWORD *)v3 + 4),
                    (_BYTE)v3[4] & 1,
                    1,
                    0);
  if ( BatchFragment )
  {
    *((_BYTE *)v3[17] + 64) = 0;
    *v3 = BatchFragment;
    *a2 = (struct DirectComposition::CBatch **)BatchFragment;
LABEL_5:
    v12 = 0LL;
    DirectComposition::CBatch::EnsureBatchBuffer(a2, 0x2CuLL, &v12);
    v10 = (char *)v12;
    *(_DWORD *)v12 = 44;
    *(_OWORD *)(v10 + 4) = 0LL;
    *(_QWORD *)(v10 + 20) = 0LL;
    *((_DWORD *)v10 + 1) = 300;
    *((_DWORD *)v10 + 2) = *(_DWORD *)(a1 + 32);
    *((_DWORD *)v10 + 3) = a3;
    *((_DWORD *)v10 + 4) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                             a1 + 72,
                             a3);
    *((_DWORD *)v10 + 5) = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetDataType(
                             a1 + 72,
                             a3);
    v10[24] = (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                              a1 + 72,
                              a3) == 1;
    *(_OWORD *)(v10 + 28) = *(_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector3>(
                                         a1 + 72,
                                         a3,
                                         v11);
    PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(
      (__int64 *)(a1 + 72),
      a3,
      0LL);
    return v7;
  }
  return 0;
}
