/*
 * XREFs of HalpDmaIsAutomaticDomain @ 0x14058D4E0
 * Callers:
 *     HalGetAdapterV3 @ 0x140785E68 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x140786454 (HalGetAdapterV2.c)
 * Callees:
 *     HalpDmaDereferenceDomainObject @ 0x140346528 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaReferenceDomainObject @ 0x14034B1CC (HalpDmaReferenceDomainObject.c)
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
