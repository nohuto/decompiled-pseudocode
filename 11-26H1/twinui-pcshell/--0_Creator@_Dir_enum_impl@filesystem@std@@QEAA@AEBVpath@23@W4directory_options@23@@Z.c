/*
 * XREFs of ??0_Creator@_Dir_enum_impl@filesystem@std@@QEAA@AEBVpath@23@W4directory_options@23@@Z @ 0x1802AE620
 * Callers:
 *     ??$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@2@AEBVpath@12@W4directory_options@12@@Z @ 0x1800E16FC (--$_Initialize_dir_enum@U_Dir_enum_impl@filesystem@std@@@_Dir_enum_impl@filesystem@std@@SA-AW4__.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180030E44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802AE6AC (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::filesystem::_Dir_enum_impl::_Creator::_Creator(__int64 a1, _QWORD *a2, unsigned int a3)
{
  int v5; // eax
  __int64 v7; // [rsp+30h] [rbp+10h]

  std::wstring::wstring(a1, a2);
  *(_QWORD *)(a1 + 32) = -1LL;
  v5 = std::filesystem::_Dir_enum_impl::_Open_dir(a1, a3, a1 + 32, a1 + 40);
  if ( v5 )
  {
    LOBYTE(v7) = 0;
    if ( v5 != 18 )
    {
      *(_WORD *)((char *)&v7 + 1) = 0;
      BYTE3(v7) = 0;
      HIDWORD(v7) = v5;
      goto LABEL_6;
    }
  }
  else
  {
    LOBYTE(v7) = 1;
  }
  *(_WORD *)((char *)&v7 + 1) = 0;
  BYTE3(v7) = 0;
  HIDWORD(v7) = 0;
LABEL_6:
  *(_QWORD *)(a1 + 632) = v7;
  return a1;
}
