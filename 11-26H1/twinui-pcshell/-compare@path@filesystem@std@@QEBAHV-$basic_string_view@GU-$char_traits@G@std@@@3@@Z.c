/*
 * XREFs of ?compare@path@filesystem@std@@QEBAHV?$basic_string_view@GU?$char_traits@G@std@@@3@@Z @ 0x180032908
 * Callers:
 *     ?GetFileDescription@StartupNotification@@SA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEBV23@@Z @ 0x180030780 (-GetFileDescription@StartupNotification@@SA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator.c)
 * Callees:
 *     ?_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z @ 0x180032624 (-_Is_drive_prefix@filesystem@std@@YA_NQEBG@Z.c)
 *     ?compare@?$_WChar_traits@G@std@@SAHQEBG0_K@Z @ 0x180033BD0 (-compare@-$_WChar_traits@G@std@@SAHQEBG0_K@Z.c)
 *     ??R_Is_slash_oper@filesystem@std@@SA_NG@Z @ 0x180289AC8 (--R_Is_slash_oper@filesystem@std@@SA_NG@Z.c)
 */

int __fastcall std::filesystem::path::compare(std::filesystem *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // r10
  unsigned __int16 *v3; // r9
  __int64 v4; // rax
  unsigned __int16 *v5; // r15
  unsigned __int16 *i; // rdi
  __int64 v7; // rax
  unsigned __int16 *v8; // rdx
  unsigned __int16 *v9; // rsi
  unsigned __int16 *j; // rbx
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // rbp
  size_t v13; // r8
  int result; // eax
  unsigned __int16 *k; // rdx
  unsigned __int16 *m; // r8
  int v17; // ecx
  unsigned __int16 *v18; // r8
  unsigned __int8 v19; // al
  int v20; // r9d
  __int64 v21; // r8
  __int64 v22; // r8
  __int64 v23; // r8
  __int16 v24; // cx
  __int16 v25; // r11
  __int64 v26; // r8
  __int16 v27; // cx
  __int16 v28; // r11

  v2 = a2;
  v3 = (unsigned __int16 *)this;
  if ( *((_QWORD *)this + 3) > 7uLL )
    v3 = *(unsigned __int16 **)this;
  v4 = *((_QWORD *)this + 2);
  v5 = &v3[v4];
  if ( (2 * v4) >> 1 < 2 )
    goto LABEL_32;
  if ( !std::filesystem::_Is_drive_prefix((std::filesystem *)v3, a2) )
  {
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v3) )
    {
      if ( v21 >= 4 )
      {
        if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[3])
          && (v23 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[4]))
          && ((unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[1]) && (v3[2] == v25 || v3[2] == 46)
           || v24 == v25 && v3[2] == v25) )
        {
          i = v3 + 3;
          goto LABEL_6;
        }
      }
      else if ( v21 < 3 )
      {
        goto LABEL_32;
      }
      if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[1])
        && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v3[2]) )
      {
        for ( i = v3 + 3; i != v5 && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*i); ++i )
          ;
        goto LABEL_6;
      }
    }
LABEL_32:
    i = v3;
    goto LABEL_6;
  }
  i = v3 + 2;
LABEL_6:
  v7 = *((_QWORD *)v2 + 1);
  v8 = *(unsigned __int16 **)a2;
  v9 = &v8[v7];
  if ( (2 * v7) >> 1 < 2 )
    goto LABEL_36;
  if ( std::filesystem::_Is_drive_prefix((std::filesystem *)v8, v8) )
  {
    j = v8 + 2;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*v8) )
    goto LABEL_36;
  if ( v22 >= 4 )
  {
    if ( (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[3])
      && (v26 == 4 || !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[4]))
      && ((unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[1]) && (v8[2] == v28 || v8[2] == 46)
       || v27 == v28 && v8[2] == v28) )
    {
      j = v8 + 3;
      goto LABEL_9;
    }
  }
  else if ( v22 < 3 )
  {
LABEL_36:
    j = v8;
    goto LABEL_9;
  }
  if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[1])
    || (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(v8[2]) )
  {
    goto LABEL_36;
  }
  for ( j = v8 + 3; j != v9 && !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*j); ++j )
    ;
LABEL_9:
  v11 = j - v8;
  v12 = i - v3;
  v13 = v12;
  if ( v11 < v12 )
    v13 = j - v8;
  result = std::_WChar_traits<unsigned short>::compare(v3, v8, v13);
  if ( !result )
  {
    if ( v12 > v11 )
    {
      return 1;
    }
    else if ( v12 < v11 )
    {
      return -1;
    }
    else
    {
      for ( k = i; k != v5; ++k )
      {
        if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*k) )
          break;
      }
      for ( m = j; m != v9; ++m )
      {
        if ( !(unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*m) )
          break;
      }
      result = (i != k) - (j != m);
      if ( !result )
      {
        while ( 1 )
        {
          v17 = (m == v9) - (k == v5);
          if ( k == v5 || v17 )
            break;
          std::filesystem::_Is_slash_oper::operator()(*k);
          v19 = std::filesystem::_Is_slash_oper::operator()(*v18);
          result = v19 - v20;
          if ( result )
            return result;
          if ( (_BYTE)v20 )
          {
            do
              ++k;
            while ( k != v5 && (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*k) );
            do
              ++m;
            while ( m != v9 && (unsigned __int8)std::filesystem::_Is_slash_oper::operator()(*m) );
          }
          else
          {
            v17 = *k - *m;
            if ( v17 )
              return v17;
            ++k;
            ++m;
          }
        }
        return v17;
      }
    }
  }
  return result;
}
