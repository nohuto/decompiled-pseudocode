/*
 * XREFs of ?is_sta_thread@impl@winrt@@YA_NXZ @ 0x1801D6434
 * Callers:
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802344F0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     WINRT_IMPL_CoGetApartmentType @ 0x1802CA759 (WINRT_IMPL_CoGetApartmentType.c)
 */

char __fastcall winrt::impl::is_sta_thread(winrt::impl *this)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  v3 = 0;
  if ( WINRT_IMPL_CoGetApartmentType((APTTYPE *)&v2, (APTTYPEQUALIFIER *)&v3) )
    return 0;
  if ( !v2 )
    return 1;
  if ( v2 != 2 )
    return v2 == 3;
  return ((v3 - 3) & 0xFFFFFFFD) == 0;
}
