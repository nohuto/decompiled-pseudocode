/*
 * XREFs of ??1bad_cast@std@@UEAA@XZ @ 0x1802D4E18
 * Callers:
 *     _std::filesystem::filesystem_error::filesystem_error_::_1_::dtor$0 @ 0x1806E138F (_std--filesystem--filesystem_error--filesystem_error_--_1_--dtor$0.c)
 *     _std::filesystem::_Throw_fs_error_::_1_::dtor$1 @ 0x1806F7117 (_std--filesystem--_Throw_fs_error_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::bad_cast::~bad_cast(std::bad_cast *this)
{
  *(_QWORD *)this = &std::exception::`vftable';
  o___std_exception_destroy_0();
}
