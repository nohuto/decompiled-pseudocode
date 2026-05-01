/*
 * XREFs of ?_Find_relative_path@filesystem@std@@YAPEBGQEBG0@Z @ 0x1800331B8
 * Callers:
 *     ?parent_path@path@filesystem@std@@QEBA?AV123@XZ @ 0x18013A1D8 (-parent_path@path@filesystem@std@@QEBA-AV123@XZ.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

std::filesystem *__fastcall std::filesystem::_Find_relative_path(
        std::filesystem *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *const a3)
{
  std::filesystem *i; // r8
  unsigned __int16 *v4; // rcx
  __int64 v5; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int16 v9; // cx
  std::filesystem *v10; // r10
  std::filesystem *v11; // rax

  i = this;
  if ( ((char *)a2 - (char *)this) >> 1 >= 2 )
  {
    if ( std::filesystem::_Is_drive_prefix(this, a2) )
    {
      i = (std::filesystem *)(v5 + 4);
    }
    else if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v4) )
    {
      if ( v7 >= 4 )
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 3))
          && (v8 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 4))) )
        {
          if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*((unsigned __int16 *)i + 1))
            && ((v11 = v10, *((_WORD *)i + 2) == 63) || *((_WORD *)i + 2) == 46)
            || v9 == 63 && (v11 = v10, *((_WORD *)i + 2) == 63) )
          {
            i = v11;
            goto LABEL_6;
          }
        }
      }
      else if ( v7 < 3 )
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
  while ( i != (std::filesystem *)a2
       && (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*(unsigned __int16 *)i) )
    i = (std::filesystem *)((char *)i + 2);
  return i;
}
