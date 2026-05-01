/*
 * XREFs of wistd::__function::__func__lambda_b38e7178277656866a6ae1d155e28b4d__void___cdecl(enum_wil::RegistryChangeKind)_::_scalar_deleting_destructor_ @ 0x180342900
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802D2D4C (--3@YAXPEAX@Z.c)
 */

_QWORD *__fastcall wistd::__function::__func__lambda_b38e7178277656866a6ae1d155e28b4d__void___cdecl_enum_wil::RegistryChangeKind__::_scalar_deleting_destructor_(
        _QWORD *a1,
        char a2)
{
  *a1 = &wistd::__function::__base<void (enum Windows::Internal::Shell::Holographic::UserDisplayContext const &)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
