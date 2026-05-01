/*
 * XREFs of WINRT_IMPL_CoGetApartmentType @ 0x1802CA759
 * Callers:
 *     ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1801BF7E4 (-get_apartment_type@impl@winrt@@YA-AU-$pair@HH@std@@XZ.c)
 *     ?is_sta_thread@impl@winrt@@YA_NXZ @ 0x1801D6434 (-is_sta_thread@impl@winrt@@YA_NXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HRESULT __stdcall WINRT_IMPL_CoGetApartmentType(APTTYPE *pAptType, APTTYPEQUALIFIER *pAptQualifier)
{
  return CoGetApartmentType(pAptType, pAptQualifier);
}
