/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@0@0_KPEBD@Z @ 0x18000EA5C
 * Callers:
 *     ?do_get@?$time_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x180017CF0 (-do_get@-$time_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 * Callees:
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ??D?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@QEBAAEBGXZ @ 0x18004D728 (--D-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@QEBAAEBGXZ.c)
 *     ?_Inc@?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@AEAAXXZ @ 0x18005BB90 (-_Inc@-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@AEAAXXZ.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005CB68 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<unsigned short>>(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v6; // dl
  _BYTE *v7; // rcx
  unsigned __int64 v8; // rax
  char v9; // cl
  __int64 v10; // rbx
  __int64 v11; // rsi
  unsigned int v12; // r13d
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r15
  void **v15; // r14
  char i; // al
  void **v17; // rax
  void **v18; // rax
  char v19; // al
  void **v20; // rdx
  char v21; // cl
  char v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h]
  void *v27[3]; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]

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
  v28 = 15LL;
  v27[2] = 0LL;
  LOBYTE(v27[0]) = 0;
  std::string::assign(v27, a3, 0LL);
  v9 = 0;
  v23 = 0;
  v10 = 0LL;
  v11 = 0LL;
  v12 = -2;
  v13 = 1LL;
  v24 = 1LL;
  v14 = v28;
  v15 = (void **)v27[0];
  if ( a3 )
  {
    while ( 1 )
    {
      for ( i = a4[v10]; i && i != *a4; i = a4[v10] )
        ++v10;
      v17 = v27;
      if ( v14 >= 0x10 )
        v17 = v15;
      if ( *((_BYTE *)v17 + v11) )
      {
        v18 = v27;
        if ( v14 >= 0x10 )
          v18 = v15;
        v10 += *((char *)v18 + v11);
      }
      else
      {
        v10 += v13;
        v19 = a4[v10];
        if ( v19 == *a4 || !v19 )
        {
          v12 = v11;
          goto LABEL_24;
        }
        if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2)
          || (char)a4[v10] != *(unsigned __int16 *)std::istreambuf_iterator<unsigned short>::operator*(a1) )
        {
          v13 = v24;
LABEL_24:
          v20 = v27;
          if ( v14 >= 0x10 )
            v20 = v15;
          v21 = 127;
          if ( v13 < 0x7F )
            v21 = v13;
          *((_BYTE *)v20 + v11) = v21;
          v9 = v23;
          v15 = (void **)v27[0];
          v14 = v28;
          goto LABEL_29;
        }
        v9 = 1;
        v23 = 1;
        v13 = v24;
      }
LABEL_29:
      if ( ++v11 >= a3 )
      {
        if ( !v9 || (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a1, a2) )
          break;
        ++v24;
        std::istreambuf_iterator<unsigned short>::_Inc(a1);
        v12 = -1;
        v9 = 0;
        v23 = 0;
        v10 = 0LL;
        v11 = 0LL;
        v13 = v24;
      }
    }
  }
  if ( v14 >= 0x10 )
    operator delete(v15);
  return v12;
}
