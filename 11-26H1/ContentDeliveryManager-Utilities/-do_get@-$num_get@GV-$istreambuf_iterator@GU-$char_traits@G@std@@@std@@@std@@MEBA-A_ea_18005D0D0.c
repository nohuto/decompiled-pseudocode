/*
 * XREFs of ?do_get@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@MEBA?AV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@V32@0AEAVios_base@2@AEAHAEAI@Z @ 0x18005D0D0
 * Callers:
 *     <none>
 * Callees:
 *     _Stoulx @ 0x180004C5C (_Stoulx.c)
 *     ??1locale@std@@QEAA@XZ @ 0x18004D320 (--1locale@std@@QEAA@XZ.c)
 *     ?_Getifld@?$num_get@GV?$istreambuf_iterator@GU?$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV?$istreambuf_iterator@GU?$char_traits@G@std@@@2@1HAEBVlocale@2@@Z @ 0x18005B730 (-_Getifld@-$num_get@GV-$istreambuf_iterator@GU-$char_traits@G@std@@@std@@@std@@AEBAHPEADAEAV-$is.c)
 *     ?equal@?$istreambuf_iterator@_WU?$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z @ 0x18005DF74 (-equal@-$istreambuf_iterator@_WU-$char_traits@_W@std@@@std@@QEBA_NAEBV12@@Z.c)
 *     ?getloc@ios_base@std@@QEBA?AVlocale@2@XZ @ 0x18005E954 (-getloc@ios_base@std@@QEBA-AVlocale@2@XZ.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::do_get(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        int *a7)
{
  std::locale *v11; // rax
  unsigned int v12; // ebx
  char *v13; // rdi
  int v14; // ebx
  int v16; // [rsp+30h] [rbp-48h] BYREF
  char *v17; // [rsp+38h] [rbp-40h] BYREF
  _BYTE v18[8]; // [rsp+40h] [rbp-38h] BYREF
  char v19; // [rsp+48h] [rbp-30h] BYREF
  int v20; // [rsp+49h] [rbp-2Fh] BYREF

  v17 = 0LL;
  v16 = 0;
  v11 = (std::locale *)std::ios_base::getloc(a5, v18);
  v12 = std::num_get<unsigned short,std::istreambuf_iterator<unsigned short>>::_Getifld(
          a1,
          &v19,
          (__int64)a3,
          a4,
          *(_DWORD *)(a5 + 24),
          v11);
  std::locale::~locale((std::locale *)v18);
  v13 = (char *)&v20;
  if ( v19 != 45 )
    v13 = &v19;
  v14 = Stoulx(v13, &v17, v12, &v16);
  if ( (unsigned __int8)std::istreambuf_iterator<wchar_t>::equal(a3, a4) )
    *a6 |= 1u;
  if ( v17 == v13 || v16 )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v19 == 45 )
      v14 = -v14;
    *a7 = v14;
  }
  *a2 = *a3;
  return a2;
}
