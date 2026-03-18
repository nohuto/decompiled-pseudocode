/*
 * XREFs of ?GetElement@?$CMarshaledArray@M$0GBHEEDEE@$0CMH@$0CMI@$0A@@DirectComposition@@QEBAM_K@Z @ 0x140233890
 * Callers:
 *     ?GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAM@Z @ 0x140233C20 (-GetFloatAnimatableProperty@CTableTransferEffectMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_.c)
 * Callees:
 *     <none>
 */

double __fastcall DirectComposition::CMarshaledArray<float,1635009348,711,712,0>::GetElement(
        _QWORD *a1,
        unsigned __int64 a2)
{
  double result; // xmm0_8

  if ( a2 >= a1[1] )
    return 0.0;
  *(_QWORD *)&result = *(unsigned int *)(*a1 + 4 * a2);
  return result;
}
