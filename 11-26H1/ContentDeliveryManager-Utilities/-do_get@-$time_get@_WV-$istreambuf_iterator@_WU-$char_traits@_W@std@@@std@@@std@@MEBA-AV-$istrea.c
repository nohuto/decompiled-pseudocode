/*
 * XREFs of ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B5F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18004D320 (--1locale@std@@QEAA@XZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005E954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800B5070 (--$_Getloctxt@DV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@YAHAEAV-$istreambuf_i.c)
 *     ?_Getfmt@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800B5A00 (-_Getfmt@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@IEBA-AV-$istre.c)
 *     ?_Getint@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@0HHAEAHAEBV?$ctype@_W@2@@Z @ 0x1800B5B94 (-_Getint@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAHAEAV-$ist.c)
 *     ?get_monthname@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B6ECC (-get_monthname@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-.c)
 *     ?get_weekday@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B6F34 (-get_weekday@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$i.c)
 *     ?get_year@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x1800B6F9C (-get_year@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@QEBA-AV-$istr.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::do_get(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        char a8)
{
  __int64 v12; // r12
  std::locale *v13; // rax
  const struct std::locale::facet *v14; // r15
  _DWORD *v15; // rbx
  _DWORD *v16; // rax
  int v17; // r9d
  char *v18; // rax
  __int128 *v19; // r9
  __int128 *v20; // r8
  int v21; // ecx
  __int128 *weekday; // rax
  __int128 v23; // xmm0
  int v24; // eax
  int v26; // [rsp+20h] [rbp-50h]
  _DWORD *v27; // [rsp+28h] [rbp-48h]
  __int64 v28; // [rsp+30h] [rbp-40h]
  __int128 v29; // [rsp+40h] [rbp-30h] BYREF
  __int128 v30; // [rsp+50h] [rbp-20h] BYREF
  __int128 v31; // [rsp+60h] [rbp-10h] BYREF
  int v32; // [rsp+B8h] [rbp+48h] BYREF
  char v33; // [rsp+C0h] [rbp+50h] BYREF

  v12 = a5;
  v13 = std::ios_base::getloc(a5, (std::locale *)&v33);
  v14 = std::use_facet<std::ctype<wchar_t>>(v13);
  std::locale::~locale((std::locale *)&v33);
  v32 = 0;
  v15 = a6;
  if ( a8 <= 97 )
  {
    if ( a8 == 97 )
    {
LABEL_32:
      v30 = *a4;
      v29 = *a3;
      weekday = (__int128 *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_weekday(
                              a1,
                              (unsigned int)&v31,
                              (unsigned int)&v29,
                              (unsigned int)&v30,
                              v12,
                              (__int64)a6,
                              (__int64)a7);
      goto LABEL_33;
    }
    if ( a8 <= 82 )
    {
      if ( a8 != 82 )
      {
        if ( a8 != 65 )
        {
          if ( a8 != 66 )
          {
            if ( a8 != 67 )
            {
              if ( a8 != 68 )
              {
                switch ( a8 )
                {
                  case 'H':
                    v28 = (__int64)v14;
                    v27 = a7 + 2;
                    v26 = 23;
                    goto LABEL_16;
                  case 'I':
                    v28 = (__int64)v14;
                    v27 = a7 + 2;
                    v26 = 11;
                    goto LABEL_16;
                  case 'M':
                    v16 = a7 + 1;
LABEL_13:
                    v28 = (__int64)v14;
                    v27 = v16;
                    v26 = 59;
LABEL_16:
                    v17 = 0;
LABEL_48:
                    *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                              a1,
                              (__int64)a3,
                              (__int64)a4,
                              v17,
                              v26,
                              v27,
                              v28);
                    goto LABEL_69;
                }
                goto LABEL_67;
              }
              v29 = *a4;
              v30 = *a3;
              v18 = "%m / %d / %y";
              v19 = &v29;
              v20 = &v30;
              goto LABEL_51;
            }
            *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                      a1,
                      (__int64)a3,
                      (__int64)a4,
                      0,
                      99,
                      &v32,
                      (__int64)v14);
            if ( (*(_BYTE *)v15 & 2) != 0 )
              goto LABEL_69;
            v21 = 100 * (v32 - 19);
LABEL_20:
            a7[5] = v21;
            goto LABEL_69;
          }
LABEL_52:
          v30 = *a4;
          v29 = *a3;
          weekday = (__int128 *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_monthname(
                                  a1,
                                  (unsigned int)&v31,
                                  (unsigned int)&v29,
                                  (unsigned int)&v30,
                                  v12,
                                  (__int64)a6,
                                  (__int64)a7);
          goto LABEL_33;
        }
        goto LABEL_32;
      }
      v18 = "%H : %M";
LABEL_50:
      v23 = *a4;
      v29 = *a3;
      v30 = v23;
      v19 = &v30;
      v20 = &v29;
LABEL_51:
      weekday = std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getfmt(
                  a1,
                  &v31,
                  v20,
                  v19,
                  v12,
                  a6,
                  (__int64)a7,
                  v18);
      goto LABEL_33;
    }
    switch ( a8 )
    {
      case 'S':
        v16 = a7;
        goto LABEL_13;
      case 'T':
        goto LABEL_30;
      case 'U':
      case 'W':
        v28 = (__int64)v14;
        v27 = a7 + 7;
        v26 = 53;
        goto LABEL_16;
      case 'X':
LABEL_30:
        v18 = "%H : %M : S";
        goto LABEL_50;
      case 'Y':
        v30 = *a4;
        v29 = *a3;
        weekday = (__int128 *)std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get_year(
                                a1,
                                (unsigned int)&v31,
                                (unsigned int)&v29,
                                (unsigned int)&v30,
                                v12,
                                (__int64)a6,
                                (__int64)a7);
LABEL_33:
        *a3 = *weekday;
        goto LABEL_69;
    }
LABEL_67:
    *v15 |= 2u;
    goto LABEL_69;
  }
  if ( a8 > 110 )
  {
    if ( a8 == 112 )
    {
      v24 = std::_Getloctxt<char,std::istreambuf_iterator<wchar_t>>((__int64)a3, (__int64)a4, 0LL, ":AM:am:PM:pm");
      if ( v24 < 0 )
        goto LABEL_67;
      a7[2] += 12 * v24;
      goto LABEL_69;
    }
    if ( a8 == 114 )
    {
      v18 = "%I : %M : %S %p";
      goto LABEL_50;
    }
    if ( a8 != 116 )
    {
      switch ( a8 )
      {
        case 'w':
          v28 = (__int64)v14;
          v27 = a7 + 6;
          v26 = 6;
          goto LABEL_16;
        case 'x':
          v18 = "%d / %m / %y";
          goto LABEL_50;
        case 'y':
          *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
                    a1,
                    (__int64)a3,
                    (__int64)a4,
                    0,
                    99,
                    &v32,
                    (__int64)v14);
          if ( (*(_BYTE *)v15 & 2) != 0 )
            goto LABEL_69;
          v21 = v32;
          if ( v32 < 69 )
            v21 = v32 + 100;
          goto LABEL_20;
      }
      goto LABEL_67;
    }
LABEL_64:
    v18 = " ";
    goto LABEL_50;
  }
  switch ( a8 )
  {
    case 'n':
      goto LABEL_64;
    case 'b':
      goto LABEL_52;
    case 'c':
      v18 = "%b %d %H : %M : %S %Y";
      goto LABEL_50;
    case 'd':
    case 'e':
      v28 = (__int64)v14;
      v27 = a7 + 3;
      v26 = 31;
      goto LABEL_47;
    case 'h':
      goto LABEL_52;
    case 'j':
      v28 = (__int64)v14;
      v27 = a7 + 7;
      v26 = 366;
LABEL_47:
      v17 = 1;
      goto LABEL_48;
  }
  if ( a8 != 109 )
    goto LABEL_67;
  *v15 |= std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getint(
            a1,
            (__int64)a3,
            (__int64)a4,
            1,
            12,
            &v32,
            (__int64)v14);
  if ( (*(_BYTE *)v15 & 2) == 0 )
    a7[4] = v32 - 1;
LABEL_69:
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    *v15 |= 1u;
  *a2 = *a3;
  return a2;
}
