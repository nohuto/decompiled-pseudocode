/*
 * XREFs of ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18013A1D8
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x180139E90 (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     ??$_Construct@$00PEBG@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXQEBG_K@Z @ 0x180031E08 (--$_Construct@$00PEBG@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXQEBG_K@Z.c)
 *     ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800331B8 (-_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

__int64 __fastcall std::filesystem::path::parent_path(std::filesystem *a1, __int64 a2, const unsigned __int16 *a3)
{
  std::filesystem *v4; // r11
  std::filesystem *relative_path; // rax
  std::filesystem *v6; // rdx
  const void *v7; // r11
  char v8; // al
  std::filesystem *v9; // r8
  std::filesystem *v10; // r9
  bool v11; // zf
  std::filesystem *v13; // r8
  std::filesystem *v14; // r9

  v4 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v4 = *(std::filesystem **)a1;
  relative_path = std::filesystem::_Find_relative_path(v4, (const unsigned __int16 *)v4 + *((_QWORD *)a1 + 2), a3);
  if ( relative_path != v6 )
  {
    while ( 1 )
    {
      v8 = std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)v6 - 1));
      v11 = v8 == 0;
      if ( v8 )
        break;
      if ( v9 == v6 )
      {
        v11 = 1;
        break;
      }
    }
    if ( !v11 )
      v6 = v10;
    if ( v9 != v6 )
    {
      do
      {
        if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)v6 - 1)) )
          break;
        v6 = v14;
      }
      while ( v13 != v14 );
    }
  }
  *(_OWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  std::wstring::_Construct<1,unsigned short const *>((char **)a2, v7, (v6 - (std::filesystem *)v7) >> 1);
  return a2;
}
