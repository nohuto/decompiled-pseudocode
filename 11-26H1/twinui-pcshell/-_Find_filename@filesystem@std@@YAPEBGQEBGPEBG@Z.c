/*
 * XREFs of ?_Find_filename@filesystem@std@@YAPEBGQEBGPEBG@Z @ 0x1800327E0
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z @ 0x1800E17E0 (-CheckForNewStartupAppAdded@StartupFolderNotification@@UEAAX_N@Z.c)
 *     ?filename@path@filesystem@std@@QEBA?AV123@XZ @ 0x1800E1E34 (-filename@path@filesystem@std@@QEBA-AV123@XZ.c)
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 *     ?_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z @ 0x18013CDB4 (-_Refresh@_Dir_enum_impl@filesystem@std@@QEAAXAEBU__std_fs_find_data@@@Z.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

const unsigned __int16 *__fastcall std::filesystem::_Find_filename(
        std::filesystem *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  std::filesystem *i; // r8
  unsigned __int16 *v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v8; // r9
  const unsigned __int16 *v9; // r8
  const unsigned __int16 *v10; // r9
  __int64 v11; // r9
  __int16 v12; // cx
  std::filesystem *v13; // r10
  std::filesystem *v14; // rax

  i = this;
  if ( ((char *)a2 - (char *)this) >> 1 >= 2 )
  {
    if ( std::filesystem::_Is_drive_prefix(this, a2) )
    {
      i = (std::filesystem *)(v5 + 4);
      goto LABEL_6;
    }
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v4) )
    {
      if ( v8 >= 4 )
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 3))
          && (v11 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 4))) )
        {
          if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 1))
            && ((v14 = v13, *((_WORD *)i + 2) == 63) || *((_WORD *)i + 2) == 46)
            || v12 == 63 && (v14 = v13, *((_WORD *)i + 2) == 63) )
          {
            i = v14;
            goto LABEL_6;
          }
        }
      }
      else if ( v8 < 3 )
      {
        goto LABEL_6;
      }
      if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 1))
        && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 2)) )
      {
        for ( i = (std::filesystem *)((char *)i + 6);
              i != (std::filesystem *)a2
           && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(unsigned __int16 *)i);
              i = (std::filesystem *)((char *)i + 2) )
        {
          ;
        }
      }
    }
  }
LABEL_6:
  while ( i != (std::filesystem *)a2 )
  {
    if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(unsigned __int16 *)i) )
    {
      do
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(a2 - 1)) )
          break;
        a2 = v10;
      }
      while ( v9 != v10 );
      return a2;
    }
    i = (std::filesystem *)(v6 + 2);
  }
  return a2;
}
