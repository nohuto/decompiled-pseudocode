/*
 * XREFs of ?do_get@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@@Z @ 0x18001EE60
 * Callers:
 *     <none>
 * Callees:
 *     ?equal@?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z @ 0x18000BA44 (-equal@-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?_Getmfld@?$money_get@DV?$istreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@DU?$char_traits@D@std@@@2@0_NAEAVios_base@2@PEAD@Z @ 0x18001CC74 (-_Getmfld@-$money_get@DV-$istreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x18005C934 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<char,std::istreambuf_iterator<char>>::do_get(
        __int64 a1,
        _OWORD *a2,
        __int64 *a3,
        __int64 *a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  _BYTE *v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  void **v15; // rax
  _BYTE *v16; // rcx
  void **v17; // rax
  char v18; // cl
  _QWORD *v19; // rax
  _BYTE v21[8]; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  void *v23[3]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-20h]
  char v25[16]; // [rsp+68h] [rbp-18h] BYREF

  v22 = -2LL;
  std::money_get<char,std::istreambuf_iterator<char>>::_Getmfld(a1, v23, (__int64)a3, a4, a5, a6, v25);
  v11 = v23[2];
  v12 = std::istreambuf_iterator<char>::equal(a3, a4);
  v13 = 0LL;
  if ( v12 )
    *a7 |= 1u;
  if ( v11 )
  {
    if ( (unsigned __int64)v11 > a8[2] )
    {
      std::string::append(a8, &v11[-a8[2]]);
    }
    else
    {
      if ( a8[3] < 0x10uLL )
        v14 = a8;
      else
        v14 = (_QWORD *)*a8;
      a8[2] = v11;
      v11[(_QWORD)v14] = 0;
    }
    v15 = v23;
    if ( v24 >= 0x10 )
      v15 = (void **)v23[0];
    if ( *(_BYTE *)v15 == 45 )
    {
      if ( a8[3] < 0x10uLL )
        v16 = a8;
      else
        v16 = (_BYTE *)*a8;
      *v16 = v25[10];
      v13 = 1LL;
    }
    while ( v13 < (unsigned __int64)v11 )
    {
      v17 = v23;
      if ( v24 >= 0x10 )
        v17 = (void **)v23[0];
      v18 = v21[*((char *)v17 + v13)];
      if ( a8[3] < 0x10uLL )
        v19 = a8;
      else
        v19 = (_QWORD *)*a8;
      *((_BYTE *)v19 + v13++) = v18;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *(_OWORD *)a3;
  if ( v24 >= 0x10 )
    operator delete(v23[0]);
  return a2;
}
