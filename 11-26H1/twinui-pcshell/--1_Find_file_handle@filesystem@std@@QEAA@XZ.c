/*
 * XREFs of ??1_Find_file_handle@filesystem@std@@QEAA@XZ @ 0x1802C7D70
 * Callers:
 *     _std::filesystem::_Dir_enum_impl::_Creator::_Creator_::_1_::dtor$1 @ 0x1806DFC8C (_std--filesystem--_Dir_enum_impl--_Creator--_Creator_--_1_--dtor$1.c)
 *     _std::_Construct_in_place_std::filesystem::_Dir_enum_impl_std::filesystem::_Dir_enum_impl::_Creator_enum_std::filesystem::directory_options_const_&__::_1_::dtor$1 @ 0x1806E004A (_std--_Construct_in_place_std--filesystem--_Dir_enum_impl_std--filesystem--_Dir_enu_ea_1806E004A.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::_Find_file_handle::~_Find_file_handle(std::filesystem::_Find_file_handle *this)
{
  _std_fs_directory_iterator_close(*(_QWORD *)this);
}
