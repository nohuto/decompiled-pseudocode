/*
 * XREFs of ?_Getint@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0HHAEAHAEBV?$ctype@G@2@@Z @ 0x18001235C
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x180017CF0 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_date@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018210 (-do_get_date@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_time@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018820 (-do_get_time@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 *     ?do_get_year@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x180018A30 (-do_get_year@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istr.c)
 * Callees:
 *     _Stolx @ 0x180004B6C (_Stolx.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004D728 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005BB90 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall std::time_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getint(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        _DWORD *a6,
        __int64 a7)
{
  unsigned __int8 *v7; // rdi
  unsigned __int16 *v11; // rax
  char v12; // al
  char v13; // r14
  unsigned __int16 *v14; // rax
  unsigned __int16 *v15; // rax
  unsigned __int8 v16; // al
  unsigned __int8 *v17; // rax
  unsigned __int8 *v18; // rax
  int v19; // edi
  __int64 result; // rax
  int v21; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int8 *v22; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int8 v23; // [rsp+30h] [rbp-30h] BYREF
  char v24; // [rsp+31h] [rbp-2Fh] BYREF
  char v25; // [rsp+4Fh] [rbp-11h] BYREF

  v7 = &v23;
  v22 = 0LL;
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
    goto LABEL_7;
  v11 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v11, 0LL);
  if ( v12 == 43 )
  {
    v23 = 43;
LABEL_6:
    v7 = (unsigned __int8 *)&v24;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
    goto LABEL_7;
  }
  if ( v12 == 45 )
  {
    v23 = 45;
    goto LABEL_6;
  }
LABEL_7:
  v13 = 0;
  if ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
  {
    do
    {
      v14 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
      if ( (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v14, 0LL) != 48 )
        break;
      v13 = 1;
      std::istreambuf_iterator<unsigned short>::_Inc(a2);
    }
    while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) );
    if ( v13 )
      *v7++ = 48;
  }
  while ( !(unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3) )
  {
    v15 = (unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a2);
    v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)a7 + 112LL))(a7, *v15, 0LL);
    if ( (unsigned __int8)(v16 - 48) > 9u )
      break;
    *v7 = v16;
    v13 = 1;
    std::istreambuf_iterator<unsigned short>::_Inc(a2);
    v17 = v7 + 1;
    if ( v7 >= (unsigned __int8 *)&v25 )
      v17 = v7;
    v7 = v17;
  }
  v18 = &v23;
  v21 = 0;
  if ( v13 )
    v18 = v7;
  *v18 = 0;
  v19 = Stolx(&v23, &v22, 0xAu, &v21);
  result = (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a2, a3);
  if ( v22 == &v23 || v21 || v19 < a4 || a5 < v19 )
    return (unsigned __int8)result | 2u;
  *a6 = v19;
  return result;
}
