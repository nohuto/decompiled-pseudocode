/*
 * XREFs of ??_0path@filesystem@std@@QEAAAEAV012@AEBV012@@Z @ 0x18013CE90
 * Callers:
 *     ??Kfilesystem@std@@YA?AVpath@01@AEBV201@0@Z @ 0x1800C58A8 (--Kfilesystem@std@@YA-AVpath@01@AEBV201@0@Z.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x18013CDB4 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 *     ?CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ @ 0x1801DF5B0 (-CheckForRemovedStartupApp@StartupFolderNotification@@UEAAXXZ.c)
 *     ?_Open_dir@_Dir_enum_impl@filesystem@std@@SA?AW4__std_win_error@@AEAVpath@23@W4directory_options@23@AEAU_Find_file_handle@23@AEAU__std_fs_find_data@@@Z @ 0x1802AE6AC (-_Open_dir@_Dir_enum_impl@filesystem@std@@SA-AW4__std_win_error@@AEAVpath@23@W4directory_options.c)
 *     _lambda_88c52b909d46191f2a7b9cf853665f36_::operator() @ 0x180586378 (_lambda_88c52b909d46191f2a7b9cf853665f36_--operator().c)
 * Callees:
 *     ?_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z @ 0x18003250C (-_Find_root_name_end@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800334F0 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?push_back@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXG@Z @ 0x1800336D8 (-push_back@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXG@Z.c)
 *     ??$_Traits_compare@U?$char_traits@G@std@@@std@@YAHQEBG_K01@Z @ 0x180033B70 (--$_Traits_compare@U-$char_traits@G@std@@@std@@YAHQEBG_K01@Z.c)
 *     ?is_absolute@path@filesystem@std@@QEBA_NXZ @ 0x18013CFE0 (-is_absolute@path@filesystem@std@@QEBA_NXZ.c)
 *     ?erase@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_K@Z @ 0x18013D04C (-erase@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_K@Z.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18013D314 (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

std::filesystem *__fastcall std::filesystem::path::operator/=(std::filesystem *a1, std::filesystem::path *this)
{
  const unsigned __int16 *v4; // r8
  std::filesystem *v5; // r14
  std::filesystem::path *v6; // r11
  char *v7; // r13
  char *v8; // rbp
  const unsigned __int16 *root_name_end; // rbx
  const unsigned __int16 *v10; // r8
  std::filesystem *v11; // r11
  const unsigned __int16 *v12; // rax
  const wchar_t *v13; // r11
  char *v14; // r15
  int v16; // eax

  if ( std::filesystem::path::is_absolute(this) )
    goto LABEL_16;
  v5 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v5 = *(std::filesystem **)a1;
  v6 = this;
  v7 = (char *)v5 + 2 * *((_QWORD *)a1 + 2);
  if ( *((_QWORD *)this + 3) > 7uLL )
    v6 = *(std::filesystem::path **)this;
  v8 = (char *)v6 + 2 * *((_QWORD *)this + 2);
  root_name_end = std::filesystem::_Find_root_name_end(v5, v7, v4);
  v12 = std::filesystem::_Find_root_name_end(v11, v8, v10);
  v14 = (char *)v12;
  if ( v13 != v12 )
  {
    LOBYTE(v16) = std::_Traits_compare<std::char_traits<unsigned short>>(
                    (const wchar_t *)v5,
                    ((char *)root_name_end - (char *)v5) >> 1,
                    v13,
                    v12 - v13);
    if ( v16 )
    {
LABEL_16:
      std::wstring::operator=(a1);
      return a1;
    }
  }
  if ( v14 != v8 && (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(unsigned __int16 *)v14) )
  {
    std::wstring::erase(a1, ((char *)root_name_end - (char *)v5) >> 1);
    goto LABEL_12;
  }
  if ( root_name_end == (const unsigned __int16 *)v7 )
  {
    if ( (__int64)(((char *)root_name_end - (char *)v5) & 0xFFFFFFFFFFFFFFFEuLL) < 6 )
      goto LABEL_12;
    goto LABEL_11;
  }
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)v7 - 1)) )
LABEL_11:
    std::wstring::push_back((const void **)a1, 92);
LABEL_12:
  std::wstring::append(a1, v14, (v8 - v14) >> 1);
  return a1;
}
