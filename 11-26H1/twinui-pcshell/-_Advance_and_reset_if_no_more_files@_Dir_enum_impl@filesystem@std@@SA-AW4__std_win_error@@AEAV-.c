/*
 * XREFs of ?_Advance_and_reset_if_no_more_files@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAV?$shared_ptr@U_Dir_enum_impl@filesystem@std@@@3@@Z @ 0x1802B03F8
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ??Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ @ 0x180225990 (--Edirectory_iterator@filesystem@std@@QEAAAEAV012@XZ.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x18013CDB4 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     __std_fs_directory_iterator_advance @ 0x1802CD5F4 (__std_fs_directory_iterator_advance.c)
 *     ?_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z @ 0x180586E20 (-_Is_dot_or_dotdot@filesystem@std@@YA_NAEBU__std_fs_find_data@@@Z.c)
 */

__int64 __fastcall std::filesystem::_Dir_enum_impl::_Advance_and_reset_if_no_more_files(
        std::filesystem::_Dir_enum_impl **a1)
{
  std::filesystem::_Dir_enum_impl *v1; // rdi
  __int64 result; // rax
  const struct __std_fs_find_data *v4; // rdx
  std::_Ref_count_base *v5; // rcx
  _BYTE v6[592]; // [rsp+20h] [rbp-268h] BYREF

  v1 = *a1;
  memset_0(v6, 0, sizeof(v6));
  while ( 1 )
  {
    result = _std_fs_directory_iterator_advance(*((_QWORD *)v1 + 8), v6);
    if ( (_DWORD)result == 18 )
      break;
    if ( (_DWORD)result )
      return result;
    if ( !std::filesystem::_Is_dot_or_dotdot((std::filesystem *)v6, v4) )
    {
      std::filesystem::_Dir_enum_impl::_Refresh(v1, (const struct __std_fs_find_data *)v6);
      return 0LL;
    }
  }
  *a1 = 0LL;
  v5 = a1[1];
  a1[1] = 0LL;
  if ( v5 )
    std::_Ref_count_base::_Decref(v5);
  return 0LL;
}
