/*
 * XREFs of ?do_put@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEBX@Z @ 0x18001A6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Iput@?$num_put@_WV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@std@@@std@@AEBA?AV?$ostreambuf_iterator@_WU?$char_traits@_W@std@@@2@V32@AEAVios_base@2@_WPEAD_K@Z @ 0x180014544 (-_Iput@-$num_put@_WV-$ostreambuf_iterator@_WU-$char_traits@_W@std@@@std@@@std@@AEBA-AV-$ostreamb.c)
 *     sprintf_s_0 @ 0x180021CB8 (sprintf_s_0.c)
 *     __security_check_cookie @ 0x1800B9110 (__security_check_cookie.c)
 */

__int64 __fastcall std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::do_put(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        __int64 a4,
        unsigned __int16 a5,
        const void *a6)
{
  int v9; // eax
  __int128 v11; // [rsp+40h] [rbp-78h] BYREF
  char Buffer[64]; // [rsp+50h] [rbp-68h] BYREF

  v11 = *a3;
  v9 = sprintf_s_0(Buffer, 0x40uLL, "%p", a6);
  std::num_put<wchar_t,std::ostreambuf_iterator<wchar_t>>::_Iput(a1, a2, &v11, a4, a5, Buffer, v9);
  return a2;
}
