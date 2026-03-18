/*
 * XREFs of ConvertGdiScalingToDMMScaling @ 0x1401D3788
 * Callers:
 *     ?PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM_VIDPN_INTERFACE@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@QEBU_DXGDMM_VIDPNTOPOLOGY_INTERFACE@@I_KPEAU_DXGK_DISPLAYMODE_INFO@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@EEPEAPEAU2@@Z @ 0x140340D3C (-PinPresentPathModalityFromMode@@YAJPEBU_DXGDMM_INTERFACE@@QEAXPEAUD3DKMDT_HVIDPN__@@QEBU_DXGDMM.c)
 *     ?_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXGADAPTER@@@Z @ 0x14037F138 (-_FillPathDescriptor@CDS_JOURNAL@@CAXPEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@AEBU_ENTRY@1@_N2PEAVDXG.c)
 *     ?_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z @ 0x140429994 (-_PreVerify@CDS_JOURNAL@@CAJAEBUD3DKMT_AUGMENT_CDSJ@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertGdiScalingToDMMScaling(int a1, _DWORD *a2)
{
  unsigned int v3; // edx

  v3 = 1;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      *a2 = 3;
      return v3;
    }
    if ( a1 == 2 )
    {
      *a2 = 2;
      return v3;
    }
    WdLogSingleEntry1(3LL);
    v3 = 0;
    WdLogGlobalForLineNumber = 189;
  }
  *a2 = 253;
  return v3;
}
