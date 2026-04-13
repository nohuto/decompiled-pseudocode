/*
 * XREFs of ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W0@Z @ 0x18008A360
 * Callers:
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z @ 0x1800A94D8 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0PEB_W@Z.c)
 * Callees:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800047D4 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180004800 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 *     ?_Grow@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA_N_K_N@Z @ 0x18005BB00 (-_Grow@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA_N_K_N@Z.c)
 *     ?_Inside@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA_NPEB_W@Z @ 0x18005C144 (-_Inside@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA_NPEB_W@Z.c)
 *     ?copy@?$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z @ 0x18005CF58 (-copy@-$char_traits@_W@std@@SAPEA_WPEA_WPEB_W_K@Z.c)
 *     ?move@?$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z @ 0x18005E9C8 (-move@-$char_traits@G@std@@SAPEAGPEAGPEBG_K@Z.c)
 *     ?replace@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00@Z @ 0x18008A090 (-replace@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K0AEBV12@00.c)
 */

_QWORD *__fastcall std::wstring::replace(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4,
        unsigned __int64 a5)
{
  _QWORD *v9; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rbp
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r12
  _QWORD *v16; // rdx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rax

  if ( std::wstring::_Inside(a1, (unsigned __int64)a4) )
  {
    if ( a1[3] < 8uLL )
      v9 = a1;
    else
      v9 = (_QWORD *)*a1;
    return std::wstring::replace(a1, a2, a3, a1, (a4 - (_BYTE *)v9) >> 1, a5);
  }
  else
  {
    v11 = a1[2];
    if ( v11 < a2 )
      std::_Xout_of_range("invalid string position");
    if ( v11 - a2 < a3 )
      a3 = v11 - a2;
    if ( ~a5 <= v11 - a3 )
      std::_Xlength_error("string too long");
    v12 = v11 - a2 - a3;
    if ( a5 < a3 )
    {
      if ( a1[3] < 8uLL )
      {
        v13 = a1;
        v14 = a1;
      }
      else
      {
        v13 = (_QWORD *)*a1;
        v14 = (_QWORD *)*a1;
      }
      std::char_traits<unsigned short>::move((char *)v14 + 2 * a2 + 2 * a5, (char *)v13 + 2 * a2 + 2 * a3, v12);
    }
    if ( a5 || a3 )
    {
      v15 = a5 + a1[2] - a3;
      if ( std::wstring::_Grow(a1, v15, 0) )
      {
        if ( a3 < a5 )
        {
          if ( a1[3] < 8uLL )
          {
            v16 = a1;
            v17 = a1;
          }
          else
          {
            v16 = (_QWORD *)*a1;
            v17 = (_QWORD *)*a1;
          }
          std::char_traits<unsigned short>::move((char *)v17 + 2 * a2 + 2 * a5, (char *)v16 + 2 * a2 + 2 * a3, v12);
        }
        if ( a1[3] < 8uLL )
          v18 = a1;
        else
          v18 = (_QWORD *)*a1;
        std::char_traits<wchar_t>::copy((char *)v18 + 2 * a2, a4, a5);
        if ( a1[3] < 8uLL )
          v19 = a1;
        else
          v19 = (_QWORD *)*a1;
        a1[2] = v15;
        *((_WORD *)v19 + v15) = 0;
      }
    }
    return a1;
  }
}
