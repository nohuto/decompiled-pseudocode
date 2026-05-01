/*
 * XREFs of _JointResize::TagViewWithLogoAsync$_ResumeCoro$1_::_1_::dtor$15 @ 0x1806CB8AD
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180028330 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 */

void __fastcall JointResize::TagViewWithLogoAsync__ResumeCoro_1_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a2 + 256) = *(_QWORD *)(a2 + 64) + 216LL;
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(*(__int64 **)(a2 + 256));
}
