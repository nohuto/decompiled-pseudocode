/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___ @ 0x1801349EC
 * Callers:
 *     ?ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ @ 0x18013B790 (-ReconcileEffectPacksOnEndpoint@CEndpointCharacteristics@@QEAAXXZ.c)
 * Callees:
 *     ??4?$shared_ptr@V?$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800584C0 (--4-$shared_ptr@V-$function@$$A6AXXZ@std@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_std::shared_ptr_EffectPack_________lambda_4e7757eacc48e777df79214de0431eb5___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 v3; // r9
  __int64 i; // rdx
  __int64 *j; // rsi
  __m128i v9; // xmm0
  __int64 **result; // rax

  v3 = *(_QWORD *)&CLSID_VOCAAudioEffectPackID.Data1;
  for ( i = *(_QWORD *)CLSID_VOCAAudioEffectPackID.Data4; a2 != a3; a2 += 2 )
  {
    if ( __PAIR128__(_mm_srli_si128(*(__m128i *)*(_QWORD *)(*a2 + 1568), 8).m128i_u64[0], **(_QWORD **)(*a2 + 1568)) == *(_OWORD *)&CLSID_VOCAAudioEffectPackID )
      break;
  }
  if ( a2 != a3 )
  {
    for ( j = a2 + 2; j != a3; j += 2 )
    {
      v9 = *(__m128i *)*(_QWORD *)(*j + 1568);
      if ( v9.m128i_i64[0] != v3 || _mm_srli_si128(v9, 8).m128i_u64[0] != i )
      {
        std::shared_ptr<std::function<void (void)>>::operator=(a2, j);
        i = *(_QWORD *)CLSID_VOCAAudioEffectPackID.Data4;
        a2 += 2;
        v3 = *(_QWORD *)&CLSID_VOCAAudioEffectPackID.Data1;
      }
    }
  }
  result = a1;
  *a1 = a2;
  return result;
}
