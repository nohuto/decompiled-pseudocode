/*
 * XREFs of ??1_Creator@_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x1802CE024
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Initialize_dir_enum_std::filesystem::_Dir_enum_impl__::_1_::dtor$0 @ 0x1806B5A3C (_std--filesystem--_Dir_enum_impl--_Initialize_dir_enum_std--filesystem--_Dir_enum_impl__--_1_--d.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1802D4C4C (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::_Creator::~_Creator(std::filesystem::_Dir_enum_impl::_Creator *this)
{
  _std_fs_directory_iterator_close(*((_QWORD *)this + 4));
  std::wstring::_Tidy_deallocate((void **)this);
}
