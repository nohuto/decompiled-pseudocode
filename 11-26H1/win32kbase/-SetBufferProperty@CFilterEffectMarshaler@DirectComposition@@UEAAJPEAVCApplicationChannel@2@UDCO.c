/*
 * XREFs of ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235B90
 * Callers:
 *     ?SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235C80 (-SetBufferProperty@CFloodEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 *     ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236330 (-SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel.c)
 *     ?SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236580 (-SetBufferProperty@CTurbulenceEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@.c)
 * Callees:
 *     ?Copy@?$CMarshaledArray@I$0GFGGEDEE@$0BMF@$0BMG@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B4C4 (-Copy@-$CMarshaledArray@I$0GFGGEDEE@$0BMF@$0BMG@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?Copy@?$CMarshaledArray@UtagRECT@@$0GFGGEDEE@$0BMJ@$0BMK@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B554 (-Copy@-$CMarshaledArray@UtagRECT@@$0GFGGEDEE@$0BMJ@$0BMK@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 */

__int64 __fastcall DirectComposition::CFilterEffectMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  __int64 result; // rax

  *a6 = 0;
  v6 = a3 - 2;
  if ( v6 )
  {
    v7 = v6 - 2;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 == 1 && (a4 || !a5) )
          {
            result = DirectComposition::CMarshaledArray<tagRECT,1701200708,457,458,0>::Copy(
                       (DirectComposition::CMarshaledArrayBase *)(a1 + 224),
                       a4,
                       a5);
            goto LABEL_22;
          }
          return 3221225485LL;
        }
        if ( !a4 && a5 )
          return 3221225485LL;
        result = DirectComposition::CMarshaledArray<unsigned int,1701200708,453,454,0>::Copy(
                   (DirectComposition::CMarshaledArrayBase *)(a1 + 200),
                   a4,
                   a5);
      }
      else
      {
        if ( !a4 && a5 )
          return 3221225485LL;
        result = DirectComposition::CMarshaledArray<unsigned int,1701200708,453,454,0>::Copy(
                   (DirectComposition::CMarshaledArrayBase *)(a1 + 176),
                   a4,
                   a5);
      }
    }
    else
    {
      if ( !a4 && a5 )
        return 3221225485LL;
      result = DirectComposition::CMarshaledArray<unsigned int,1701200708,453,454,0>::Copy(
                 (DirectComposition::CMarshaledArrayBase *)(a1 + 128),
                 a4,
                 a5);
    }
  }
  else
  {
    if ( !a4 && a5 )
      return 3221225485LL;
    result = DirectComposition::CMarshaledArray<unsigned int,1701200708,453,454,0>::Copy(
               (DirectComposition::CMarshaledArrayBase *)(a1 + 80),
               a4,
               a5);
  }
LABEL_22:
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
