/*
 * XREFs of ??1_Dir_enum_impl@filesystem@std@@QEAA@XZ @ 0x18056207C
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ @ 0x180562C50 (-_Destroy@-$_Ref_count_obj2@U_Dir_enum_impl@filesystem@std@@@std@@EEAAXXZ.c)
 * Callees:
 *     __std_fs_directory_iterator_close @ 0x1802D4C4C (__std_fs_directory_iterator_close.c)
 */

void __fastcall std::filesystem::_Dir_enum_impl::~_Dir_enum_impl(void **this)
{
  _std_fs_directory_iterator_close(this[8]);
  std::wstring::_Tidy_deallocate(this + 4);
}
