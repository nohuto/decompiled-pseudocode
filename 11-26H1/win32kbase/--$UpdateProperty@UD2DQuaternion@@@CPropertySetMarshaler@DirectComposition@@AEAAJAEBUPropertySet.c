/*
 * XREFs of ??$UpdateProperty@UD2DQuaternion@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2DQuaternion@@@Z @ 0x140127B9C
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector4@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127420 (--$GetPropertyValue@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXUDCOMPOSITION_PROPERTY_ID@@W4MarshalStatus@@@Z @ 0x140127C6C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2DQuaternion>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // esi
  ULONG_PTR v7; // rax

  v3 = *a2;
  v4 = a1 + 72;
  v5 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80)
    && a2[1] == (*(_DWORD *)(*(_QWORD *)v4 + 8 * v3 + 4) & 0x1FFFFFFF)
    && a2[2] == *(_DWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)v3) )
  {
    *(_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector4>(
                 v4,
                 *a2) = *a3;
    v7 = *a2;
    if ( (unsigned int)v7 >= *(_DWORD *)(v4 + 8) )
      KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v7, *(unsigned int *)(v4 + 8));
    if ( (*(_DWORD *)(*(_QWORD *)v4 + 8LL * (unsigned int)v7 + 4) & 0xE0000000) != 0x20000000 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v4, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v5;
}
