/*
 * XREFs of ??$AddProperty@U_D3DCOLORVALUE@@@CPropertySetMarshaler@DirectComposition@@AEAAJAEBUPropertySetValue@@PEBU_D3DCOLORVALUE@@@Z @ 0x14024130C
 * Callers:
 *     ?SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401878D0 (-SetBufferProperty@CPropertySetMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ?GetLocalOffset@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAIUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140127B4C (-GetLocalOffset@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@.c)
 *     ?SetMarshalStatus@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAXUDCOMPOSITION_PROPERTY_ID@@W4MarshalStatus@@@Z @ 0x140127C6C (-SetMarshalStatus@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator.c)
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKernelModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140241254 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VCDynamicArrayDefaultTag@@VPropertySetKern.c)
 */

__int64 __fastcall DirectComposition::CPropertySetMarshaler::AddProperty<_D3DCOLORVALUE>(
        __int64 a1,
        _DWORD *a2,
        _OWORD *a3)
{
  __int64 *v3; // r14
  int v5; // edx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  int LocalOffset; // eax
  int v10; // eax
  unsigned int v11; // edx
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 72);
  v5 = a2[2];
  v7 = 0;
  v13 = 0;
  if ( (int)PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::AddProperty<_D3DCOLORVALUE>(
              a1 + 72,
              v5,
              a3,
              &v13) >= 0 )
  {
    v8 = v13;
    LocalOffset = PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::GetLocalOffset(
                    (__int64)v3,
                    v13);
    if ( v8 == *a2 && LocalOffset == a2[1] )
    {
      PropertySetStorage<CDynamicArrayDefaultTag,PropertySetKernelModeAllocator>::SetMarshalStatus(v3, v8, 1);
    }
    else
    {
      v10 = *(_DWORD *)(a1 + 80);
      v7 = -1073741811;
      if ( !v10 || (v11 = *(_DWORD *)(a1 + 96), v11 < 0x10) )
        KeBugCheckEx(0x164u, 0x1EuLL, 0xFFFFFFFF8000FFFFuLL, 0LL, *(unsigned int *)(a1 + 80));
      *(_DWORD *)(a1 + 80) = v10 - 1;
      *(_DWORD *)(a1 + 96) = v11 - 16;
    }
  }
  else
  {
    return (unsigned int)-1073741684;
  }
  return v7;
}
