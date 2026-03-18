/*
 * XREFs of ?Set@?$CResourceMarshalerArray@$0EE@$0EB@$0A@$0DC@$0FH@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140241018
 * Callers:
 *     ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402410E0 (-SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicat.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023DF8C (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArray<68,65,0,50,87>::Set(
        DirectComposition::CResourceMarshalerArrayBase *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  struct DirectComposition::CResourceMarshaler *v7; // rax
  __int64 v8; // r10
  unsigned int v9; // r11d

  v4 = 0LL;
  if ( a4 )
  {
    while ( 1 )
    {
      v7 = a3[v4];
      if ( !v7
        || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v7 + 9), 50)
        && !DirectComposition::CResourceMarshaler::IsDerivedResourceType(v9, 87) )
      {
        return 3221225485LL;
      }
      v4 = v8 + 1;
      if ( v4 >= a4 )
        goto LABEL_6;
    }
  }
  else
  {
LABEL_6:
    DirectComposition::CResourceMarshalerArrayBase::Set(this, a2, a3, a4);
    return 0LL;
  }
}
