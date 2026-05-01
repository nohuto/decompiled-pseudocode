/*
 * XREFs of wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_::___func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_ @ 0x1804594FC
 * Callers:
 *     wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x180459B20 (wistd--__function--__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 */

void **__fastcall wistd::__function::__func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__::___func__lambda_2aac540237c1a3a56b3d1f5dd4da2de6__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  return result;
}
