/*
 * XREFs of ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233C20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetElement@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEBAM_K@Z @ 0x140233890 (-GetElement@-$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEBAM_K@Z.c)
 *     ?GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x14023AFC0 (-GetFloatAnimatableProperty@CResourceMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID.c)
 */

__int64 __fastcall DirectComposition::CTableTransferEffectMarshaler::GetFloatAnimatableProperty(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _DWORD *v3; // r8
  unsigned int v4; // r9d
  double Element; // xmm0_8

  if ( (unsigned int)(a2 - 16) > 0x3FF )
  {
    if ( (unsigned int)(a2 - 1041) > 0x3FF )
    {
      if ( (unsigned int)(a2 - 2066) > 0x3FF )
      {
        if ( (unsigned int)(a2 - 3091) > 0x3FF )
          return (unsigned int)DirectComposition::CResourceMarshaler::GetFloatAnimatableProperty(a1, a2, a3, 0LL);
        Element = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::GetElement(
                    a1 + 42,
                    (unsigned int)(a2 - 3091));
      }
      else
      {
        Element = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::GetElement(
                    a1 + 39,
                    (unsigned int)(a2 - 2066));
      }
    }
    else
    {
      Element = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::GetElement(
                  a1 + 36,
                  (unsigned int)(a2 - 1041));
    }
  }
  else
  {
    Element = DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::GetElement(
                a1 + 33,
                (unsigned int)(a2 - 16));
  }
  *v3 = LODWORD(Element);
  return v4;
}
