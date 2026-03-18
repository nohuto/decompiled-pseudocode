/*
 * XREFs of ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402404D0
 * Callers:
 *     ?SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x140240D80 (-SetReferenceArrayProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationC.c)
 *     ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402410E0 (-SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023DF8C (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  struct DirectComposition::CResourceMarshaler **v6; // r10
  unsigned int v8; // ebx
  unsigned __int64 v9; // r9
  DirectComposition::CResourceMarshalerArrayBase *v10; // r11
  unsigned __int64 i; // r8
  struct DirectComposition::CResourceMarshaler *v12; // rcx
  __int64 v13; // r8

  v6 = a4;
  if ( a3 == 8 )
  {
    v9 = a5;
    v10 = (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 104);
    v8 = 0;
    for ( i = 0LL; i < v9; i = v13 + 1 )
    {
      v12 = v6[i];
      if ( !v12 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v12 + 9), 50) )
        return (unsigned int)-1073741811;
    }
    DirectComposition::CResourceMarshalerArrayBase::Set(v10, a2, v6, v9);
    *a6 = 1;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v8;
}
