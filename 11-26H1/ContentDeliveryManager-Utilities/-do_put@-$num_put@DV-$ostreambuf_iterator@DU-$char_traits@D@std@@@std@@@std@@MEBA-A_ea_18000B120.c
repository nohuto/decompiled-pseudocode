/*
 * XREFs of ?do_put@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DN@Z @ 0x18000B120
 * Callers:
 *     <none>
 * Callees:
 *     ?_Ffmt@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z @ 0x180006D20 (-_Ffmt@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBAPEADPEADDH@Z.c)
 *     ?_Fput@?$num_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBD_K333@Z @ 0x180006DC4 (-_Fput@-$num_put@DV-$ostreambuf_iterator@DU-$char_traits@D@std@@@std@@@std@@AEBA-AV-$ostreambuf_.c)
 *     sprintf_s_0 @ 0x180021CB8 (sprintf_s_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

_OWORD *__fastcall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        __int64 a1,
        _OWORD *a2,
        _OWORD *a3,
        __int64 a4,
        char a5,
        double a6)
{
  __int64 v6; // rbx
  double v10; // xmm6_8
  int v11; // r14d
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 v14; // rbx
  int v15; // r9d
  const char *v16; // rax
  int v17; // eax
  int v19[4]; // [rsp+50h] [rbp-E8h] BYREF
  _BYTE v20[16]; // [rsp+60h] [rbp-D8h] BYREF
  char Buffer[112]; // [rsp+70h] [rbp-C8h] BYREF

  v6 = *(_QWORD *)(a4 + 32);
  if ( v6 <= 0 && (*(_DWORD *)(a4 + 24) & 0x2000) == 0 )
    v6 = 6LL;
  v10 = a6;
  v11 = v6;
  if ( v6 > 36 )
    v11 = 36;
  v12 = 0LL;
  v13 = 0LL;
  v14 = v6 - v11;
  if ( (*(_DWORD *)(a4 + 24) & 0x3000) == 0x2000 && a6 * 0.5 != a6 )
  {
    if ( a6 < 0.0 )
      *(_QWORD *)&v10 = *(_QWORD *)&a6 ^ _xmm;
    while ( v10 >= 1.0e35 && v12 < 0x1388 )
    {
      v10 = v10 / 1.0e10;
      v12 += 10LL;
    }
    if ( v10 > 0.0 && v14 >= 10 )
    {
      do
      {
        if ( v10 > 1.0e-35 )
          break;
        if ( v13 >= 0x1388 )
          break;
        v14 -= 10LL;
        v10 = v10 * 1.0e10;
        v13 += 10LL;
      }
      while ( v14 >= 10 );
    }
    if ( a6 < 0.0 )
      *(_QWORD *)&v10 ^= _xmm;
  }
  v15 = *(_DWORD *)(a4 + 24);
  *(_OWORD *)v19 = *a3;
  v16 = std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Ffmt(a1, v20, 0, v15);
  v17 = sprintf_s_0(Buffer, 0x6CuLL, v16, (unsigned int)v11, v10);
  std::num_put<char,std::ostreambuf_iterator<char>>::_Fput(a1, a2, (__int128 *)v19, a4, a5, Buffer, v12, v13, v14, v17);
  return a2;
}
