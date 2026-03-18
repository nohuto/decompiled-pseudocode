/*
 * XREFs of ??$UpdateProperty@UD2D_MATRIX_3X2_F@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x140127344
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector4@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127420 (--$GetPropertyValue@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<D2D_MATRIX_3X2_F>(
        __int64 a1,
        unsigned int *a2,
        __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v7; // rsi
  __int64 Property; // rax
  ULONG_PTR v9; // rcx
  __int64 v10; // rdx
  int v11; // ecx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80)
    && (v7 = a1 + 72, a2[1] == (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v3 + 4) & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(*(_QWORD *)v7 + 8LL * (unsigned int)v3) )
  {
    Property = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector4>(
                 v7,
                 *a2);
    v9 = *a2;
    *(_OWORD *)Property = *(_OWORD *)a3;
    *(_QWORD *)(Property + 16) = *(_QWORD *)(a3 + 16);
    if ( (unsigned int)v9 >= *(_DWORD *)(v7 + 8) )
      KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, v9, *(unsigned int *)(v7 + 8));
    v10 = (unsigned int)v9;
    v11 = *(_DWORD *)(*(_QWORD *)v7 + 8 * v9 + 4);
    if ( (v11 & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(*(_QWORD *)v7 + 8 * v10 + 4) = v11 & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
