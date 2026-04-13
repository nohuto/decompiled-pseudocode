/*
 * XREFs of ?_Getfmt@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@IEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@PEBD@Z @ 0x1800B5A00
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B5F10 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
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
__int128 *__fastcall std::time_get<wchar_t,std::istreambuf_iterator<wchar_t>>::_Getfmt(
        __int64 a1,
        __int128 *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5,
        _DWORD *a6,
        __int64 a7,
        _BYTE *a8)
{
  __int64 v12; // r12
  std::locale *v13; // rax
  const struct std::locale::facet *v14; // r15
  _DWORD *v15; // rdi
  _BYTE *i; // rsi
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rax
  int v20; // [rsp+38h] [rbp-70h]
  int v21; // [rsp+40h] [rbp-68h]
  __int128 v22; // [rsp+50h] [rbp-58h] BYREF
  __int128 v23; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v24[16]; // [rsp+70h] [rbp-38h] BYREF
  char v25; // [rsp+B8h] [rbp+10h] BYREF

  v12 = a5;
  v13 = std::ios_base::getloc(a5, (std::locale *)&v25);
  v14 = std::use_facet<std::ctype<wchar_t>>(v13);
  std::locale::~locale((std::locale *)&v25);
  v15 = a6;
  for ( i = a8; *i; ++i )
  {
    if ( *i == 37 )
    {
      ++i;
      v22 = *a4;
      v23 = *a3;
      LOBYTE(v21) = 0;
      LOBYTE(v20) = *i;
      *a3 = *(_OWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *, __int128 *, __int128 *, __int64, _DWORD *, __int64, int, int))(*(_QWORD *)a1 + 72LL))(
                         a1,
                         v24,
                         &v23,
                         &v22,
                         v12,
                         v15,
                         a7,
                         v20,
                         v21);
    }
    else if ( *i == 32 )
    {
      while ( !std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
      {
        v17 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
        if ( !(*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, __int64, _QWORD))(*(_QWORD *)v14 + 32LL))(
                v14,
                72LL,
                *v17) )
          break;
        std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
      }
    }
    else
    {
      v18 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*((__int64)a3);
      if ( (*(unsigned __int8 (__fastcall **)(const struct std::locale::facet *, _QWORD, _QWORD))(*(_QWORD *)v14 + 112LL))(
             v14,
             *v18,
             0LL) != *i )
      {
        *v15 |= 2u;
        break;
      }
      std::istreambuf_iterator<unsigned short>::_Inc((__int64)a3);
    }
  }
  if ( std::istreambuf_iterator<wchar_t>::equal((__int64)a3, (__int64)a4) )
    *v15 |= 1u;
  *a2 = *a3;
  return a2;
}
