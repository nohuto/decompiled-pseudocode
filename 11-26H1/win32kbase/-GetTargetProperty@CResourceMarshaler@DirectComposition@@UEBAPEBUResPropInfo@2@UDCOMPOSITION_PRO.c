/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14023B050
 * Callers:
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022ACC0 (-GetTargetProperty@-$CSharedResourceMarshaler@VCResourceMarshaler@DirectComposition@@$0A@@Direct.c)
 *     ?GetTargetProperty@?$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectComposition@@UEBAPEBUResPropInfo@2@UDCOMPOSITION_PROPERTY_ID@@@Z @ 0x14022AD00 (-GetTargetProperty@-$CSharedResourceMarshaler@VCVisualMarshaler@DirectComposition@@$01@DirectCom.c)
 * Callees:
 *     ?IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193ABC (-IsIndividuallyAddressableElement@ResPropInfo@DirectComposition@@QEBA_NUDCOMPOSITION_PROPERTY_ID.c)
 */

_DWORD *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(__int64 a1, unsigned int a2)
{
  unsigned __int64 v2; // r10
  int v3; // r9d
  int i; // ecx
  _DWORD *v5; // rcx

  v2 = 0x140000000uLL;
  v3 = 375;
  for ( i = *((_DWORD *)&DirectComposition::ResourceInformation::s_resourceTypeInformation + *(unsigned int *)(a1 + 36));
        ;
        i = v5[2] )
  {
    if ( i == v3 )
      return 0LL;
    v5 = (_DWORD *)(v2 + 28LL * i + 2609664);
    if ( *v5 == a2 || DirectComposition::ResPropInfo::IsIndividuallyAddressableElement(v5, a2) )
      break;
  }
  return v5;
}
