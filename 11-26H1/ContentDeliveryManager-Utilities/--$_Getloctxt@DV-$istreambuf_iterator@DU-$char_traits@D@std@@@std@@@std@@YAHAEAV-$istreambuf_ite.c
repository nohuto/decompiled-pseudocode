/*
 * XREFs of ??$_Getloctxt@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@YAHAEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@0@0_KPEBD@Z @ 0x180006310
 * Callers:
 *     ?do_get@?$num_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHAEA_N@Z @ 0x18000AC30 (-do_get@-$num_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-A_ea_18000AC30.c)
 *     ?do_get@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@DD@Z @ 0x18001EFC0 (-do_get@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$istreambu.c)
 *     ?do_get_monthname@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x18001FCE0 (-do_get_monthname@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-.c)
 *     ?do_get_weekday@?$time_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0AEAVios_base@2@AEAHPEAUtm@@@Z @ 0x18001FF70 (-do_get_weekday@-$time_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@MEBA-AV-$i.c)
 * Callees:
 *     ?_Inc@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@AEAAXXZ @ 0x1800092EC (-_Inc@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@AEAAXXZ.c)
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BA44 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005CB68 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Getloctxt<char,std::istreambuf_iterator<char>>(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        _BYTE *a4)
{
  char v7; // dl
  _BYTE *v8; // rcx
  unsigned __int64 v9; // rax
  char v10; // cl
  __int64 v11; // rbx
  __int64 v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r13
  void **v15; // r12
  char i; // al
  void **v17; // rax
  void **v18; // rax
  char v19; // al
  __int64 v20; // rcx
  unsigned __int8 *v21; // rdx
  int v22; // eax
  void **v23; // rdx
  char v24; // cl
  char v26; // [rsp+20h] [rbp-50h]
  unsigned int v27; // [rsp+24h] [rbp-4Ch]
  __int64 v28; // [rsp+28h] [rbp-48h]
  void *v30[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v31; // [rsp+58h] [rbp-18h]

  if ( *a4 )
  {
    v7 = *a4;
    v8 = a4;
    do
    {
      v9 = a3 + 1;
      if ( v7 != *a4 )
        v9 = a3;
      a3 = v9;
      v7 = *++v8;
    }
    while ( *v8 );
  }
  v31 = 15LL;
  v30[2] = 0LL;
  LOBYTE(v30[0]) = 0;
  std::string::assign(v30, a3, 0LL);
  v10 = 0;
  v26 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v27 = -2;
  v13 = 1LL;
  v28 = 1LL;
  v14 = v31;
  v15 = (void **)v30[0];
  if ( a3 )
  {
    while ( 1 )
    {
      for ( i = a4[v11]; i && i != *a4; i = a4[v11] )
        ++v11;
      v17 = v30;
      if ( v14 >= 0x10 )
        v17 = v15;
      if ( *((_BYTE *)v17 + v12) )
      {
        v18 = v30;
        if ( v14 >= 0x10 )
          v18 = v15;
        v11 += *((char *)v18 + v12);
      }
      else
      {
        v11 += v13;
        v19 = a4[v11];
        if ( v19 == *a4 || !v19 )
        {
          v27 = v12;
          goto LABEL_34;
        }
        if ( (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
          goto LABEL_32;
        if ( !*((_BYTE *)a1 + 8) )
        {
          v20 = *a1;
          if ( !*a1
            || ((v21 = **(unsigned __int8 ***)(v20 + 56)) == 0LL || **(int **)(v20 + 80) <= 0
              ? (v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v20 + 48LL))(v20))
              : (v22 = *v21),
                v22 == -1) )
          {
            *a1 = 0LL;
          }
          else
          {
            *((_BYTE *)a1 + 9) = v22;
          }
          *((_BYTE *)a1 + 8) = 1;
        }
        if ( a4[v11] != *((_BYTE *)a1 + 9) )
        {
LABEL_32:
          v13 = v28;
LABEL_34:
          v23 = v30;
          if ( v14 >= 0x10 )
            v23 = v15;
          v24 = 127;
          if ( v13 < 0x7F )
            v24 = v13;
          *((_BYTE *)v23 + v12) = v24;
          v10 = v26;
          v15 = (void **)v30[0];
          v14 = v31;
          goto LABEL_39;
        }
        v10 = 1;
        v26 = 1;
        v13 = v28;
      }
LABEL_39:
      if ( ++v12 >= a3 )
      {
        if ( !v10 || (unsigned __int8)std::istreambuf_iterator<char>::equal(a1, a2) )
          break;
        ++v28;
        std::istreambuf_iterator<char>::_Inc(a1);
        v27 = -1;
        v10 = 0;
        v26 = 0;
        v11 = 0LL;
        v12 = 0LL;
        v13 = v28;
      }
    }
  }
  if ( v14 >= 0x10 )
    operator delete(v15);
  return v27;
}
