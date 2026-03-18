/*
 * XREFs of ?Set@?$CResourceMarshalerArray@$0CIA@$0CIB@$0A@$0HF@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023557C
 * Callers:
 *     ?SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402379D0 (-SetReferenceArrayProperty@CSceneNodeMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2.c)
 * Callees:
 *     ?IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z @ 0x1400AA340 (-IsDerivedResourceType@CResourceMarshaler@DirectComposition@@SA_NW4MIL_RESOURCE_TYPE@@0@Z.c)
 *     ?Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14023DF8C (-Set@CResourceMarshalerArrayBase@DirectComposition@@IEAAXPEAVCApplicationChannel@2@PEAPEAVCResou.c)
 */

__int64 __fastcall DirectComposition::CResourceMarshalerArray<640,641,0,117>::Set(
        DirectComposition::CResourceMarshalerArrayBase *this,
        struct DirectComposition::CApplicationChannel *a2,
        struct DirectComposition::CResourceMarshaler **a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // r10
  struct DirectComposition::CApplicationChannel *v5; // r11
  struct DirectComposition::CResourceMarshaler *v7; // rcx
  __int64 v8; // r10

  v4 = 0LL;
  v5 = a2;
  if ( a4 )
  {
    while ( 1 )
    {
      v7 = a3[v4];
      if ( !v7 || !DirectComposition::CResourceMarshaler::IsDerivedResourceType(*((_DWORD *)v7 + 9), 117) )
        return 3221225485LL;
      v4 = v8 + 1;
      if ( v4 >= a4 )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    DirectComposition::CResourceMarshalerArrayBase::Set(this, v5, a3, a4);
    return 0LL;
  }
}
