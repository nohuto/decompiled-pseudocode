/*
 * XREFs of ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18005AF24
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x18005A6C4 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     __std_find_trivial_2 @ 0x1802D5540 (__std_find_trivial_2.c)
 */

bool __fastcall std::filesystem::path::has_extension(std::filesystem::path *this, __int64 a2, __int64 a3, __int64 a4)
{
  std::filesystem::path *i; // rdx
  __int64 v5; // r8
  std::filesystem::path *v6; // rcx
  std::filesystem::path *v7; // rbx
  std::filesystem::path *v8; // rax
  __int64 trivial_2; // rax
  _WORD *v10; // rcx

  i = this;
  if ( *((_QWORD *)this + 3) > 7uLL )
    i = *(std::filesystem::path **)this;
  v5 = *((_QWORD *)this + 2);
  LOWORD(a4) = 47;
  v6 = (std::filesystem::path *)((char *)i + 2 * v5);
  v7 = v6;
  if ( v5 >= 2 )
  {
    if ( (*(_DWORD *)i & 0xFFFFFFDF) - 3801153 >= 0x1A )
    {
      if ( *(_WORD *)i == 92 || *(_WORD *)i == 47 )
      {
        if ( v5 >= 4
          && (*((_WORD *)i + 3) == 92 || *((_WORD *)i + 3) == 47)
          && (v5 == 4 || *((_WORD *)i + 4) != 92 && *((_WORD *)i + 4) != 47)
          && ((*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
           && (*((_WORD *)i + 2) == 63 || *((_WORD *)i + 2) == 46)
           || *((_WORD *)i + 1) == 63 && *((_WORD *)i + 2) == 63) )
        {
          i = (std::filesystem::path *)((char *)i + 6);
        }
        else if ( 2 * v5 >= 6
               && (*((_WORD *)i + 1) == 92 || *((_WORD *)i + 1) == 47)
               && *((_WORD *)i + 2) != 92
               && *((_WORD *)i + 2) != 47 )
        {
          for ( i = (std::filesystem::path *)((char *)i + 6);
                i != v6 && *(_WORD *)i != 92 && *(_WORD *)i != 47;
                i = (std::filesystem::path *)((char *)i + 2) )
          {
            ;
          }
        }
      }
    }
    else
    {
      i = (std::filesystem::path *)((char *)i + 4);
    }
  }
  while ( i != v6 && (*(_WORD *)i == 92 || *(_WORD *)i == 47) )
    i = (std::filesystem::path *)((char *)i + 2);
  if ( i != v6 )
  {
    do
    {
      v8 = (std::filesystem::path *)((char *)v7 - 2);
      if ( *((_WORD *)v7 - 1) == 92 )
        break;
      if ( *(_WORD *)v8 == 47 )
        break;
      v7 = (std::filesystem::path *)((char *)v7 - 2);
    }
    while ( i != v8 );
  }
  trivial_2 = _std_find_trivial_2(v7, v6, 58LL, a4);
  if ( v7 == (std::filesystem::path *)trivial_2 )
    goto LABEL_48;
  v10 = (_WORD *)(trivial_2 - 2);
  if ( v7 == (std::filesystem::path *)(trivial_2 - 2) )
    goto LABEL_48;
  if ( *v10 != 46 )
  {
    while ( v7 != (std::filesystem::path *)--v10 )
    {
      if ( *v10 == 46 )
        return trivial_2 != (_QWORD)v10;
    }
    goto LABEL_48;
  }
  if ( v7 == (std::filesystem::path *)(trivial_2 - 4) && *(_WORD *)(trivial_2 - 4) == 46 )
LABEL_48:
    v10 = (_WORD *)trivial_2;
  return trivial_2 != (_QWORD)v10;
}
