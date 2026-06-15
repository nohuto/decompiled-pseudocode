/*
 * XREFs of sub_14006C760 @ 0x14006C760
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_140059FF0 @ 0x140059FF0 (sub_140059FF0.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14006C760(__int64 a1, __int64 a2, _DWORD *a3, _OWORD *a4, _DWORD *a5, __int64 *a6)
{
  int v8; // esi
  __int64 v9; // rax

  v8 = sub_1400B6010(a2);
  if ( v8 >= 0 )
  {
    v9 = sub_140059FF0(0LL);
    if ( v9 )
    {
      *a3 = 0;
      *a4 = 0LL;
      *a5 = 0;
      *a6 = v9;
    }
    CoTaskMemFree(0LL);
  }
  return (unsigned int)v8;
}
