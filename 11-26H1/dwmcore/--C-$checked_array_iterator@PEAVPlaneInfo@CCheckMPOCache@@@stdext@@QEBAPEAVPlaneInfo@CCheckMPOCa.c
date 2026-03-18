/*
 * XREFs of ??C?$checked_array_iterator@PEAVPlaneInfo@CCheckMPOCache@@@stdext@@QEBAPEAVPlaneInfo@CCheckMPOCache@@XZ @ 0x180296524
 * Callers:
 *     ?reserve_region@?$vector_facade@VPlaneInfo@CCheckMPOCache@@V?$buffer_impl@VPlaneInfo@CCheckMPOCache@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVPlaneInfo@CCheckMPOCache@@_K0@Z @ 0x180127610 (-reserve_region@-$vector_facade@VPlaneInfo@CCheckMPOCache@@V-$buffer_impl@VPlaneInfo@CCheckMPOCa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall stdext::checked_array_iterator<CCheckMPOCache::PlaneInfo *>::operator->(_QWORD *a1)
{
  unsigned __int64 v1; // rax

  if ( !*a1 || (v1 = a1[2], v1 >= a1[1]) )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  return *a1 + 76 * v1;
}
