/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14058AD58
 * Callers:
 *     HalGetAdapterV3 @ 0x140783334 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140783920 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x1403444A8 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14034914C (HalpDmaReferenceDomainObject.c)
 */

bool __fastcall HalpDmaIsAutomaticDomain(__int64 *a1)
{
  char v2; // di
  __int64 v3; // rbx

  v2 = 0;
  if ( (int)HalpDmaReferenceDomainObject((__int64)a1) >= 0 )
  {
    v3 = a1[7];
    HalpDmaDereferenceDomainObject(a1);
    return v3 != 0;
  }
  return v2;
}
