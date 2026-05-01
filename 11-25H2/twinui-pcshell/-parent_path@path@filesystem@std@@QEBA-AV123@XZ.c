/*
 * XREFs of ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18005BF74
 * Callers:
 *     ?Create@JsonGameMruManager@@SA?AV?$unique_ptr@VJsonGameMruManager@@U?$default_delete@VJsonGameMruManager@@@std@@@std@@V?$basic_string_view@GU?$char_traits@G@std@@@3@E@Z @ 0x18005C9BC (-Create@JsonGameMruManager@@SA-AV-$unique_ptr@VJsonGameMruManager@@U-$default_delete@VJsonGameMr.c)
 * Callees:
 *     ??$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@V?$basic_string_view@GU?$char_traits@G@std@@@1@U_Normal_conversion@01@@Z @ 0x18005B0F0 (--$_Convert_stringoid_to_wide@U_Normal_conversion@filesystem@std@@@filesystem@std@@YA-AV-$basic_.c)
 *     ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x18005C010 (-_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z.c)
 */

_QWORD *__fastcall std::filesystem::path::parent_path(std::filesystem *a1, _QWORD *a2, const unsigned __int16 *a3)
{
  std::filesystem *v4; // r11
  const unsigned __int16 *relative_path; // rax
  const unsigned __int16 *v6; // rdx
  __int64 v7; // r11
  const unsigned __int16 *v8; // rcx
  const unsigned __int16 *v10; // rcx
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  v4 = a1;
  if ( *((_QWORD *)a1 + 3) > 7uLL )
    v4 = *(std::filesystem **)a1;
  relative_path = std::filesystem::_Find_relative_path(v4, (const unsigned __int16 *const)v4 + *((_QWORD *)a1 + 2), a3);
  if ( relative_path != v6 )
  {
    do
    {
      v8 = v6 - 1;
      if ( *(v6 - 1) == 92 )
        break;
      if ( *v8 == 47 )
        break;
      --v6;
    }
    while ( relative_path != v8 );
    if ( relative_path != v6 )
    {
      do
      {
        v10 = v6 - 1;
        if ( *(v6 - 1) != 92 && *v10 != 47 )
          break;
        --v6;
      }
      while ( relative_path != v10 );
    }
  }
  *(_QWORD *)&v11 = v7;
  *((_QWORD *)&v11 + 1) = ((__int64)v6 - v7) >> 1;
  std::filesystem::_Convert_stringoid_to_wide<std::filesystem::_Normal_conversion>(a2, &v11);
  return a2;
}
