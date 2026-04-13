/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@0@0_KPEBD@Z @ 0x1800B5070
 * Callers:
 *     ?do_get@?$time_get@_WV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x1800B5F10 (-do_get@-$time_get@_WV-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@MEBA-AV-$istrea.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18003E0F8 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@_KD@Z @ 0x18004B5BC (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@_KD@Z.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004D728 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005BB90 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<wchar_t>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v6; // dl
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // r13
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r12d
  unsigned __int64 v13; // r15
  char i; // al
  void **v15; // rax
  void **v16; // rax
  char v17; // al
  char v18; // cl
  void **v19; // rax
  void *v23[3]; // [rsp+38h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+50h] [rbp-10h]

  if ( *a4 )
  {
    v6 = *a4;
    v7 = a4;
    do
    {
      v8 = a3 + 1;
      if ( v6 != *a4 )
        v8 = a3;
      a3 = v8;
      v6 = *++v7;
    }
    while ( *v7 );
  }
  std::string::string((__int64)v23, a3, 0LL);
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -2;
  v13 = 1LL;
  if ( a3 )
  {
    while ( 1 )
    {
      for ( i = a4[v10]; i && i != *a4; i = a4[v10] )
        ++v10;
      v15 = v23;
      if ( v24 >= 0x10 )
        v15 = (void **)v23[0];
      if ( *((_BYTE *)v15 + v11) )
      {
        v16 = v23;
        if ( v24 >= 0x10 )
          v16 = (void **)v23[0];
        v10 += *((char *)v16 + v11);
        goto LABEL_33;
      }
      v10 += v13;
      v17 = a4[v10];
      if ( v17 == *a4 || !v17 )
        break;
      if ( std::istreambuf_iterator<wchar_t>::equal(a1, a2)
        || (char)a4[v10] != *(unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
      {
        v18 = 127;
        if ( v13 < 0x7F )
          v18 = v13;
        v19 = v23;
        if ( v24 >= 0x10 )
          v19 = (void **)v23[0];
LABEL_32:
        *((_BYTE *)v19 + v11) = v18;
        goto LABEL_33;
      }
      v9 = 1;
LABEL_33:
      if ( ++v11 >= a3 )
      {
        if ( !v9 || std::istreambuf_iterator<wchar_t>::equal(a1, a2) )
          goto LABEL_37;
        ++v13;
        std::istreambuf_iterator<unsigned short>::_Inc(a1);
        v12 = -1;
        v9 = 0;
        v10 = 0LL;
        v11 = 0LL;
      }
    }
    v18 = 127;
    if ( v13 < 0x7F )
      v18 = v13;
    v19 = v23;
    if ( v24 >= 0x10 )
      v19 = (void **)v23[0];
    v12 = v11;
    goto LABEL_32;
  }
LABEL_37:
  std::string::_Tidy(v23, 1, 0LL);
  return v12;
}
