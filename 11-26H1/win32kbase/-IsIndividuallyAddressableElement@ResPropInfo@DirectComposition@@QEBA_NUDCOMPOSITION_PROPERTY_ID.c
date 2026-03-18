/*
 * XREFs of ?IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193ABC
 * Callers:
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x1401B3040 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 *     ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14023B050 (-GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PRO.c)
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x14023B0B0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NUDCOMPOSITION_PROPERTY_ID@@W4D.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::ResPropInfo::IsIndividuallyAddressableElement(_DWORD *a1, unsigned int a2)
{
  char v2; // r8

  v2 = 1;
  if ( *a1 + 1 > a2 || a2 > a1[1] )
    return 0;
  return v2;
}
