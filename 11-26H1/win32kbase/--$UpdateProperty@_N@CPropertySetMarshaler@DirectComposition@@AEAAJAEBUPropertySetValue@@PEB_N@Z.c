/*
 * XREFs of ??$UpdateProperty@_N@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEB_N@Z @ 0x140127820
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector4@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127420 (--$GetPropertyValue@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?GetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAA?AW4MarshalStatus@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x1401278E8 (-GetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127B4C (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXUDCOMPOSITION_PROPERTY_ID@@W4MarshalStatus@@@Z @ 0x140127C6C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<bool>(
        __int64 a1,
        unsigned int *a2,
        _BYTE *a3)
{
  __int64 v3; // rdi
  unsigned int v4; // esi
  ULONG_PTR v7; // rax

  v3 = a1 + 72;
  v4 = 0;
  if ( *a2 >= *(_DWORD *)(a1 + 80)
    || a2[1] != (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                                v3,
                                *a2) )
  {
    return (unsigned int)-1073741811;
  }
  v7 = *a2;
  if ( (unsigned int)v7 >= *(_DWORD *)(v3 + 8) )
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v7, *(unsigned int *)(v3 + 8));
  if ( a2[2] == *(_DWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)v7) )
  {
    *(_BYTE *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector4>(
                v3,
                *a2) = *a3;
    if ( (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetMarshalStatus(
                         v3,
                         *a2) != 1 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
