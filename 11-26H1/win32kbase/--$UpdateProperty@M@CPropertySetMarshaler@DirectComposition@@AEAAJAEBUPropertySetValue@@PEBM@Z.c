/*
 * XREFs of ??$UpdateProperty@M@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBM@Z @ 0x140127D10
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ??$GetPropertyValue@UD2DVector4@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAPEAUD2DVector4@@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127420 (--$GetPropertyValue@UD2DVector4@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKer.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::UpdateProperty<float>(
        __int64 a1,
        unsigned int *a2,
        _DWORD *a3)
{
  __int64 v3; // rax
  unsigned int v4; // edi
  __int64 v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  int v9; // ecx

  v3 = *a2;
  v4 = 0;
  if ( (unsigned int)v3 < *(_DWORD *)(a1 + 80)
    && (v6 = a1 + 72, a2[1] == (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 8 * v3 + 4) & 0x1FFFFFFF))
    && a2[2] == *(_DWORD *)(*(_QWORD *)v6 + 8LL * (unsigned int)v3) )
  {
    *(_DWORD *)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetPropertyValue<D2DVector4>(
                 v6,
                 *a2) = *a3;
    v7 = *a2;
    if ( (unsigned int)v7 >= *(_DWORD *)(v6 + 8) )
      KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF80070057uLL, *a2, *(unsigned int *)(v6 + 8));
    v8 = (unsigned int)v7;
    v9 = *(_DWORD *)(*(_QWORD *)v6 + 8 * v7 + 4);
    if ( (v9 & 0xE0000000) != 0x20000000 )
      *(_DWORD *)(*(_QWORD *)v6 + 8 * v8 + 4) = v9 & 0x1FFFFFFF | 0x40000000;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v4;
}
