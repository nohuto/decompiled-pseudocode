/*
 * XREFs of ??$_Construct_in_place@U_Dir_enum_impl@filesystem@std@@U_Creator@123@AEBW4directory_options@23@@std@@YAXAEAU_Dir_enum_impl@filesystem@0@$$QEAU_Creator@120@AEBW4directory_options@20@@Z @ 0x1802B442C
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1800E16FC (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180033674 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180034F0C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x18013CDB4 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Construct_in_place<std::filesystem::_Dir_enum_impl,std::filesystem::_Dir_enum_impl::_Creator,enum std::filesystem::directory_options const &>(
        std::filesystem::_Dir_enum_impl *this,
        __int64 a2)
{
  _OWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  _QWORD *v7; // rcx

  *(_OWORD *)this = 0LL;
  *((_OWORD *)this + 1) = 0LL;
  v4 = (_OWORD *)((char *)this + 32);
  *v4 = 0LL;
  v4[1] = 0LL;
  std::wstring::wstring((__int64)v4);
  v6 = v5[4];
  v5[4] = -1LL;
  *((_QWORD *)this + 8) = v6;
  std::wstring::operator=(v7, v5);
  std::filesystem::_Dir_enum_impl::_Refresh(this, (const struct __std_fs_find_data *)(a2 + 40));
}
