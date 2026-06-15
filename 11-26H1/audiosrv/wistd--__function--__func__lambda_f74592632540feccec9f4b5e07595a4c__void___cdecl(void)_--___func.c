/*
 * XREFs of wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_::___func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_ @ 0x180154B04
 * Callers:
 *     wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801557D0 (wistd--__function--__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl(void)_--_scalar.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void **__fastcall wistd::__function::__func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl_void__::___func__lambda_f74592632540feccec9f4b5e07595a4c__void___cdecl_void__(
        _QWORD *a1)
{
  void **result; // rax

  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 1);
  result = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  *a1 = &wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  return result;
}
