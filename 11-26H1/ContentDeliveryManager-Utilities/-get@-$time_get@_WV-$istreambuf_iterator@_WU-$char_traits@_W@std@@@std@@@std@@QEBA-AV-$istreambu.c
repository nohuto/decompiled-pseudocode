/*
 * XREFs of ?get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@QEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEB_W4@Z @ 0x1800B6C28
 * Callers:
 *     ??$?5_WU?$char_traits@_W@std@@_W@std@@YAAEAV?$basic_istream@_WU?$char_traits@_W@std@@@0@AEAV10@AEBU?$_Timeobj@_W@0@@Z @ 0x1800B4F24 (--$-5_WU-$char_traits@_W@std@@_W@std@@YAAEAV-$basic_istream@_WU-$char_traits@_W@std@@@0@AEAV10@A.c)
 * Callees:
 *     ??1locale@std@@QEAA@XZ @ 0x18004D320 (--1locale@std@@QEAA@XZ.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004D728 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005BB90 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005E954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     ??$use_facet@V?$ctype@_W@std@@@std@@YAAEBV?$ctype@_W@0@AEBVlocale@0@@Z @ 0x180084ED0 (--$use_facet@V-$ctype@_W@std@@@std@@YAAEBV-$ctype@_W@0@AEBVlocale@0@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int128 *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::get(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        __int16 *a8,
        __int16 *a9)
{
  int v9; // ebp
  std::locale *v12; // rax
  const struct std::locale::facet *v13; // r14
  _DWORD *v14; // rsi
  __int16 *i; // rdi
  __int16 *v16; // r15
  unsigned __int16 *v17; // rax
  char v18; // dl
  __int16 v19; // r15
  __int64 v20; // rax
  unsigned __int16 *v21; // rax
  bool v22; // zf
  __int128 *result; // rax
  int v24; // [rsp+38h] [rbp-80h]
  int v25; // [rsp+40h] [rbp-78h]
  __int128 v26; // [rsp+50h] [rbp-68h] BYREF
  __int128 v27; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v28[72]; // [rsp+70h] [rbp-48h] BYREF
  char v31; // [rsp+D0h] [rbp+18h] BYREF

  v12 = std::ios_base::getloc(a5, (std::locale *)&v31);
  v13 = std::use_facet<std::ctype<wchar_t>>(v12);
  std::locale::~locale((std::locale *)&v31);
  v14 = a6;
  for ( i = a8; ; ++i )
  {
    v16 = i;
    if ( i == a9 )
      goto LABEL_24;
    if ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
           v13,
           (unsigned __int16)*i,
           0LL) != 37 )
    {
      if ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
             v13,
             72LL,
             (unsigned __int16)*i) )
      {
        while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
        {
          v17 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
          if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(
                  v13,
                  72LL,
                  *v17) )
            break;
          std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
        }
      }
      else
      {
        if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) != *i )
          goto LABEL_22;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
      }
      continue;
    }
    if ( ++i == a9 )
      break;
    LOBYTE(v9) = (*(__int64 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                   v13,
                   (unsigned __int16)*i,
                   0LL);
    v18 = 0;
    v19 = *v16;
    if ( (unsigned __int8)(v9 - 35) <= 0x2Eu )
    {
      v20 = 0x500400000001LL;
      if ( _bittest64(&v20, (unsigned int)(v9 - 35)) )
      {
        if ( ++i == a9 )
        {
          if ( *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) == v19 )
          {
            std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
            if ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
            {
              v21 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
              v22 = (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v13 + 112LL))(
                      v13,
                      *v21,
                      0LL) == (unsigned __int8)v9;
              goto LABEL_21;
            }
          }
          goto LABEL_22;
        }
        LOBYTE(a8) = v9;
        LOBYTE(v9) = (*(__int64 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v13
                                                                                                  + 112LL))(
                       v13,
                       (unsigned __int16)*i,
                       0LL);
        v18 = (char)a8;
      }
    }
    v26 = *a4;
    v27 = *a3;
    LOBYTE(v25) = v18;
    LOBYTE(v24) = v9;
    *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                       a1,
                       v28,
                       &v27,
                       &v26,
                       a5,
                       v14,
                       a7,
                       v24,
                       v25);
  }
  v22 = *(_WORD *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3) == (unsigned __int16)*v16;
LABEL_21:
  if ( !v22 )
  {
LABEL_22:
    *v14 |= 2u;
    goto LABEL_24;
  }
  std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
LABEL_24:
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    *v14 |= 1u;
  result = a2;
  *a2 = *a3;
  return result;
}
