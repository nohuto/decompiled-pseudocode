/*
 * XREFs of ?GetTargetProperty@CResourceMarshaler@DirectComposition@@QEBAPEBUResPropInfo@2@I@Z @ 0x140105360
 * Callers:
 *     ?IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x1401052E0 (-IsPropertyAnimatable@CResourceMarshaler@DirectComposition@@UEAA_NIW4DCOMPOSITION_EXPRESSION_TYP.c)
 *     ?SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z @ 0x140105310 (-SetFloatProperty@CResourceMarshaler@DirectComposition@@UEAAJIMPEA_N@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z @ 0x140230340 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJIPEAM@Z.c)
 * Callees:
 *     <none>
 */

const struct DirectComposition::ResPropInfo *__fastcall DirectComposition::CResourceMarshaler::GetTargetProperty(
        DirectComposition::CResourceMarshaler *this,
        int a2)
{
  int i; // ecx
  const struct DirectComposition::ResPropInfo *result; // rax

  for ( i = *((_DWORD *)&DirectComposition::ResourceInformation::s_resourceTypeInformation + *((unsigned int *)this + 9));
        i != 186;
        i = *((_DWORD *)result + 1) )
  {
    result = (const struct DirectComposition::ResPropInfo *)((char *)&DirectComposition::ResourceInformation::s_resourcePropertyInformation
                                                           + 24 * i);
    if ( *(_DWORD *)result == a2 )
      return result;
  }
  return 0LL;
}
