/*
 * XREFs of ?SetReferenceArrayProperty@CConditionalExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402410E0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEAPEAVCResourceMarshaler@2@_KPEA_N@Z @ 0x1402404D0 (-SetReferenceArrayProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChan.c)
 *     ?Set@?$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x14024090C (-Set@-$CResourceMarshalerArray@$0IN@$0IK@$0A@$0DC@@DirectComposition@@QEAAJPEAVCApplicationChann.c)
 *     ?Set@?$CResourceMarshalerArray@$0EE@$0EB@$0A@$0DC@$0FH@@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAPEAVCResourceMarshaler@2@_K@Z @ 0x140241018 (-Set@-$CResourceMarshalerArray@$0EE@$0EB@$0A@$0DC@$0FH@@DirectComposition@@QEAAJPEAVCApplication.c)
 */

__int64 __fastcall DirectComposition::CConditionalExpressionMarshaler::SetReferenceArrayProperty(
        __int64 a1,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        struct DirectComposition::CResourceMarshaler **a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  unsigned int v6; // ecx
  DirectComposition::CResourceMarshalerArrayBase *v7; // rcx
  int v8; // eax
  DirectComposition::CResourceMarshalerArrayBase *v9; // rcx

  if ( a3 != 11 )
  {
    if ( a3 != 13 )
      return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetReferenceArrayProperty(
                             a1,
                             a2,
                             a3,
                             a4,
                             a5,
                             a6);
    v7 = (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 160);
    if ( !*((_QWORD *)v7 + 1) )
    {
      v8 = DirectComposition::CResourceMarshalerArray<68,65,0,50,87>::Set(v7, a2, a4, a5);
      goto LABEL_9;
    }
    return (unsigned int)-1073741811;
  }
  v9 = (DirectComposition::CResourceMarshalerArrayBase *)(a1 + 136);
  if ( *((_QWORD *)v9 + 1) )
    return (unsigned int)-1073741811;
  v8 = DirectComposition::CResourceMarshalerArray<141,138,0,50>::Set(v9, a2, a4, a5);
LABEL_9:
  v6 = v8;
  if ( v8 >= 0 )
    *a6 = 1;
  return v6;
}
