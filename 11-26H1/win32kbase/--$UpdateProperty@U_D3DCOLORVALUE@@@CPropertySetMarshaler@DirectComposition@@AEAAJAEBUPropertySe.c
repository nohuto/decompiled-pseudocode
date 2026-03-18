/*
 * XREFs of ??$UpdateProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x140127A44
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector4@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127420 (--$GetPropertyValue@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127B4C (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXUDCOMPOSITION_PROPERTY_ID@@W4MarshalStatus@@@Z @ 0x140127C6C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<_D3DCOLORVALUE>(
        __int64 a1,
        unsigned int *a2,
        _OWORD *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  ULONG_PTR v8; // rax
  ULONG_PTR v9; // rax

  v3 = a1 + 72;
  v4 = 0;
  if ( *a2 >= *(_DWORD *)(a1 + 80)
    || a2[1] != (unsigned int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                                a1 + 72,
                                *a2) )
  {
    return (unsigned int)-1073741811;
  }
  v8 = *a2;
  if ( (unsigned int)v8 >= *(_DWORD *)(v3 + 8) )
    KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v8, *(unsigned int *)(v3 + 8));
  if ( a2[2] == *(_DWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)v8) )
  {
    *(_OWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector4>(
                 v3,
                 *a2) = *a3;
    v9 = *a2;
    if ( (unsigned int)v9 >= *(_DWORD *)(v3 + 8) )
      KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v9, *(unsigned int *)(v3 + 8));
    if ( (*(_DWORD *)(*(_QWORD *)v3 + 8LL * (unsigned int)v9 + 4) & 0xE0000000) != 0x20000000 )
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, *a2, 2LL);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
