/*
 * XREFs of wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::___func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_ @ 0x18035D01C
 * Callers:
 *     wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(unsigned_long_const_&)_::_scalar_deleting_destructor_ @ 0x18035D790 (wistd--__function--__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl(un_ea_18035D790.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall wistd::__function::__func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____::___func__lambda_56f82e2d72bc142b92699b1566ad23a5__void___cdecl_unsigned_long_const____(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 2);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
