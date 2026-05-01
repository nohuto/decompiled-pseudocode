/*
 * XREFs of ??1directory_entry@filesystem@std@@QEAA@XZ @ 0x1805620A4
 * Callers:
 *     _std::_Construct_in_place_std::filesystem::_Dir_enum_impl_std::filesystem::_Dir_enum_impl::_Creator_enum_std::filesystem::directory_options_const_&__::_1_::dtor$0 @ 0x1806B8D54 (_std--_Construct_in_place_std--filesystem--_Dir_enum_impl_std--filesystem--_Dir_enum_impl--_Crea.c)
 * Callees:
 *     <none>
 */

void __fastcall std::filesystem::directory_entry::~directory_entry(void **this)
{
  std::wstring::_Tidy_deallocate(this + 4);
}
