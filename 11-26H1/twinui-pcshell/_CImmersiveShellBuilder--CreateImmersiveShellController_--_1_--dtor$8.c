/*
 * XREFs of _CImmersiveShellBuilder::CreateImmersiveShellController_::_1_::dtor$8 @ 0x1806E8BF2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18004C280 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall CImmersiveShellBuilder::CreateImmersiveShellController_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 88) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 88) &= ~4u;
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)(a2 + 96));
  }
}
