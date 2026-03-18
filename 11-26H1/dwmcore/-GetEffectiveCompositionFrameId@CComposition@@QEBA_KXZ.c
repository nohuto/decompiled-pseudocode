/*
 * XREFs of ?GetEffectiveCompositionFrameId@CComposition@@QEBA_KXZ @ 0x18013E700
 * Callers:
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z @ 0x18013E0F4 (-TransitionToInertia@CInteractionTracker@@AEAA_NW4InertiaReason@1@@Z.c)
 *     ?HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z @ 0x18013E6AC (-HoneyBadgerCalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180242DCC (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCE.c)
 *     ?InvalidateAnimationSources@CDataSourceReader@@QEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180266B3C (-InvalidateAnimationSources@CDataSourceReader@@QEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CComposition::GetEffectiveCompositionFrameId(CComposition *this)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx

  result = *((_QWORD *)this + 110);
  if ( result == *((_QWORD *)this + 111) )
  {
    v2 = result + 1;
    result = 1LL;
    if ( v2 )
      return v2;
  }
  return result;
}
