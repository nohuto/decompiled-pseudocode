/*
 * XREFs of ?exists@filesystem@std@@YA_NAEBVpath@12@AEAVerror_code@2@@Z @ 0x1801D71A8
 * Callers:
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802AE6AC (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 * Callees:
 *     ?_Get_any_status@filesystem@std@@YA?AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_flags@@@Z @ 0x1801D72B8 (-_Get_any_status@filesystem@std@@YA-AU_File_status_and_error@12@AEBVpath@12@W4__std_fs_stats_fla.c)
 */

bool __fastcall std::filesystem::exists(
        std::filesystem *this,
        const struct std::filesystem::path *a2,
        struct std::error_code *a3)
{
  __int64 any_status; // rax
  __int64 v6; // [rsp+20h] [rbp-28h]
  __int128 v7; // [rsp+30h] [rbp-18h] BYREF

  any_status = std::filesystem::_Get_any_status(&v7, this, a3);
  v6 = *(_QWORD *)any_status;
  LODWORD(v7) = *(_DWORD *)(any_status + 8);
  *((_QWORD *)&v7 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  *(_OWORD *)a2 = v7;
  if ( !(_DWORD)v6 )
    return 0;
  *(_DWORD *)a2 = 0;
  *((_QWORD *)a2 + 1) = &`std::_Immortalize_memcpy_image<std::_System_error_category>'::`2'::_Static;
  return (_DWORD)v6 != 1;
}
