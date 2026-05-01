/*
 * XREFs of ?get_apartment_type@impl@winrt@@YA?AU?$pair@HH@std@@XZ @ 0x1801C9050
 * Callers:
 *     ??0resume_apartment_context@impl@winrt@@QEAA@XZ @ 0x1800FAB4C (--0resume_apartment_context@impl@winrt@@QEAA@XZ.c)
 *     ?resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U?$coroutine_handle@X@experimental@std@@PEAH@Z @ 0x1802432E0 (-resume_apartment@impl@winrt@@YA@AEBUresume_apartment_context@12@U-$coroutine_handle@X@experimen.c)
 * Callees:
 *     WINRT_IMPL_CoGetApartmentType @ 0x1802D3839 (WINRT_IMPL_CoGetApartmentType.c)
 */

_DWORD *__fastcall winrt::impl::get_apartment_type(_DWORD *a1)
{
  int v2; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  if ( WINRT_IMPL_CoGetApartmentType((APTTYPE *)&v4, (APTTYPEQUALIFIER *)&v5) )
  {
    v2 = 1;
    *a1 = 1;
  }
  else
  {
    *a1 = v4;
    v2 = v5;
  }
  a1[1] = v2;
  return a1;
}
