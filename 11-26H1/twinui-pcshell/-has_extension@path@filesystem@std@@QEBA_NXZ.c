/*
 * XREFs of ?has_extension@path@filesystem@std@@QEBA_NXZ @ 0x18003263C
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 *     ??$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z @ 0x180334B6C (--$_Find_vectorized@$$CBGG@std@@YAPEBGQEBG0G@Z.c)
 */

bool __fastcall std::filesystem::path::has_extension(std::filesystem::path *this)
{
  unsigned __int16 *v1; // rdx
  __int64 v2; // rax
  unsigned __int16 *v3; // r9
  unsigned __int16 *v4; // rbx
  unsigned __int16 *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rax
  _WORD *v8; // rcx
  __int64 v10; // r8
  unsigned __int16 *v11; // rdx
  unsigned __int16 *v12; // r8
  __int64 v13; // r8
  __int16 v14; // cx

  v1 = (unsigned __int16 *)this;
  if ( *((_QWORD *)this + 3) > 7uLL )
    v1 = *(unsigned __int16 **)this;
  v2 = *((_QWORD *)this + 2);
  v3 = &v1[v2];
  v4 = v3;
  if ( (2 * v2) >> 1 >= 2 )
  {
    if ( std::filesystem::_Is_drive_prefix((std::filesystem *)v1, v1) )
    {
      v1 = v5 + 2;
      goto LABEL_8;
    }
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v5) )
    {
      if ( v10 >= 4 )
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v1[3])
          && (v13 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v1[4]))
          && ((unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v1[1]) && (v1[2] == 63 || v1[2] == 46)
           || v14 == 63 && v1[2] == 63) )
        {
          v1 += 3;
          goto LABEL_8;
        }
      }
      else if ( v10 < 3 )
      {
        goto LABEL_8;
      }
      if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v1[1])
        && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v1[2]) )
      {
        for ( v1 += 3; v1 != v3 && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v1); ++v1 )
          ;
      }
    }
  }
LABEL_8:
  while ( v1 != v3 )
  {
    if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v1) )
    {
      do
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(v4 - 1)) )
          break;
        v4 = v12;
      }
      while ( v11 != v12 );
      break;
    }
    v1 = (unsigned __int16 *)(v6 + 2);
  }
  v7 = std::_Find_vectorized<unsigned short const,unsigned short>(v4, v3, 58LL);
  if ( v4 == (unsigned __int16 *)v7 )
    goto LABEL_39;
  v8 = (_WORD *)(v7 - 2);
  if ( v4 == (unsigned __int16 *)(v7 - 2) )
    goto LABEL_39;
  if ( *v8 != 46 )
  {
    while ( v4 != --v8 )
    {
      if ( *v8 == 46 )
        return v7 != (_QWORD)v8;
    }
    goto LABEL_39;
  }
  if ( v4 == (unsigned __int16 *)(v7 - 4) && *(_WORD *)(v7 - 4) == 46 )
LABEL_39:
    v8 = (_WORD *)v7;
  return v7 != (_QWORD)v8;
}
