/*
 * XREFs of ?SetBufferProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140236330
 * Callers:
 *     <none>
 * Callees:
 *     ?Copy@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAAJPEBX_K@Z @ 0x14022B50C (-Copy@-$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEAAJPEBX_K@Z.c)
 *     ?SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x140235B90 (-SetBufferProperty@CFilterEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCO.c)
 *     ?SetElement@?$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAAJPEBMI@Z @ 0x140236870 (-SetElement@-$CMarshaledArray@M$0GBHEEDEE@$0CMF@$0CMG@$0A@@DirectComposition@@QEAAJPEBMI@Z.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::SetBufferProperty(
        __int64 a1,
        __int64 a2,
        int a3,
        const void *a4,
        unsigned __int64 a5,
        _BYTE *a6)
{
  __int64 result; // rax

  *a6 = 0;
  switch ( a3 )
  {
    case 15:
      if ( !a4 && a5 )
        return 3221225485LL;
      result = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Copy(
                 (DirectComposition::CMarshaledArrayBase *)(a1 + 264),
                 a4,
                 a5);
      break;
    case 1040:
      if ( !a4 && a5 )
        return 3221225485LL;
      result = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Copy(
                 (DirectComposition::CMarshaledArrayBase *)(a1 + 288),
                 a4,
                 a5);
      break;
    case 2065:
      if ( !a4 && a5 )
        return 3221225485LL;
      result = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Copy(
                 (DirectComposition::CMarshaledArrayBase *)(a1 + 312),
                 a4,
                 a5);
      break;
    case 3090:
      if ( a4 || !a5 )
      {
        result = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::Copy(
                   (DirectComposition::CMarshaledArrayBase *)(a1 + 336),
                   a4,
                   a5);
        break;
      }
      return 3221225485LL;
    default:
      if ( (unsigned int)(a3 - 16) > 0x3FF )
      {
        if ( (unsigned int)(a3 - 1041) > 0x3FF )
        {
          if ( (unsigned int)(a3 - 2066) > 0x3FF )
          {
            if ( (unsigned int)(a3 - 3091) > 0x3FF )
              return DirectComposition::CFilterEffectMarshaler::SetBufferProperty(a1, a2, a3, a4, a5, a6);
            if ( a5 == 4 && a4 )
              return DirectComposition::CMarshaledArray<float,1635009348,709,710,0>::SetElement(
                       a1 + 336,
                       a4,
                       (unsigned int)(a3 - 3091));
          }
          else if ( a5 == 4 && a4 )
          {
            return DirectComposition::CMarshaledArray<float,1635009348,709,710,0>::SetElement(
                     a1 + 312,
                     a4,
                     (unsigned int)(a3 - 2066));
          }
        }
        else if ( a5 == 4 && a4 )
        {
          return DirectComposition::CMarshaledArray<float,1635009348,709,710,0>::SetElement(
                   a1 + 288,
                   a4,
                   (unsigned int)(a3 - 1041));
        }
      }
      else if ( a5 == 4 && a4 )
      {
        return DirectComposition::CMarshaledArray<float,1635009348,709,710,0>::SetElement(
                 a1 + 264,
                 a4,
                 (unsigned int)(a3 - 16));
      }
      return 3221225485LL;
  }
  if ( (int)result >= 0 )
    *a6 = 1;
  return result;
}
