/*
 * XREFs of ??1directory_entry@filesystem@std@@QEAA@XZ @ 0x180586210
 * Callers:
 *     _std::_Construct_in_place_std::filesystem::_Dir_enum_impl_std::filesystem::_Dir_enum_impl::_Creator_enum_std::filesystem::directory_options_const_&__::_1_::dtor$0 @ 0x1806E0038 (_std--_Construct_in_place_std--filesystem--_Dir_enum_impl_std--filesystem--_Dir_enum_impl--_Crea.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::directory_entry::~directory_entry(std::filesystem::directory_entry *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 4);
}
