/*
 * XREFs of ?do_get@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0_NAEAVios_base@2@AEAHAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x180017920
 * Callers:
 *     <none>
 * Callees:
 *     ?_Getmfld@?$money_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@AEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@0_NAEAVios_base@2@PEAG@Z @ 0x180012528 (-_Getmfld@-$money_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBA-AV-$basic_.c)
 *     ??3@YAXPEAX@Z_0 @ 0x180021B5D (--3@YAXPEAX@Z_0.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18005CAB8 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        char a5,
        __int64 a6,
        _DWORD *a7,
        _QWORD *a8)
{
  char *v11; // rsi
  char v12; // al
  unsigned __int64 v13; // rbx
  _QWORD *v14; // rax
  void **v15; // rax
  _WORD *v16; // rcx
  void **v17; // rax
  __int16 v18; // cx
  _QWORD *v19; // rax
  _WORD v21[12]; // [rsp+8h] [rbp-81h]
  __int64 v22; // [rsp+40h] [rbp-49h]
  void *v23[3]; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int64 v24; // [rsp+60h] [rbp-29h]
  __int16 v25[12]; // [rsp+68h] [rbp-21h] BYREF

  v22 = -2LL;
  std::money_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getmfld(
    a1,
    v23,
    (__int64)a3,
    a4,
    a5,
    a6,
    v25);
  v11 = (char *)v23[2];
  v12 = std::istreambuf_iterator<wchar_t>::equal(a3, a4);
  v13 = 0LL;
  if ( v12 )
    *a7 |= 1u;
  if ( v11 )
  {
    if ( (unsigned __int64)v11 > a8[2] )
    {
      std::wstring::append(a8, &v11[-a8[2]], 0LL);
    }
    else
    {
      if ( a8[3] < 8uLL )
        v14 = a8;
      else
        v14 = (_QWORD *)*a8;
      a8[2] = v11;
      *((_WORD *)v14 + (_QWORD)v11) = 0;
    }
    v15 = v23;
    if ( v24 >= 0x10 )
      v15 = (void **)v23[0];
    if ( *(_BYTE *)v15 == 45 )
    {
      if ( a8[3] < 8uLL )
        v16 = a8;
      else
        v16 = (_WORD *)*a8;
      *v16 = v25[10];
      v13 = 1LL;
    }
    while ( v13 < (unsigned __int64)v11 )
    {
      v17 = v23;
      if ( v24 >= 0x10 )
        v17 = (void **)v23[0];
      v18 = v21[*((char *)v17 + v13)];
      if ( a8[3] < 8uLL )
        v19 = a8;
      else
        v19 = (_QWORD *)*a8;
      *((_WORD *)v19 + v13++) = v18;
    }
  }
  else
  {
    *a7 |= 2u;
  }
  *a2 = *a3;
  if ( v24 >= 0x10 )
    operator delete(v23[0]);
  return a2;
}
