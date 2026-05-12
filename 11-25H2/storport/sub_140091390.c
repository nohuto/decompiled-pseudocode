/*
 * XREFs of sub_140091390 @ 0x140091390
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_14003A710 @ 0x14003A710 (sub_14003A710.c)
 *     sub_140040448 @ 0x140040448 (sub_140040448.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140091390(__int64 a1)
{
  char v2; // al
  __int64 v3; // rcx
  _DWORD *v4; // rdx

  if ( *(_DWORD *)(a1 + 56) != 5 )
  {
    _InterlockedExchange((volatile __int32 *)(a1 + 56), 6);
    sub_140040448(a1);
    v2 = sub_1400215B0(a1, 9);
    v3 = 0LL;
    if ( v2 )
    {
      v4 = *(_DWORD **)(a1 + 24);
      if ( *v4 == 1094997074 )
      {
        v3 = (__int64)(v4 + 94);
      }
      else if ( *v4 == 1314275652 )
      {
        v3 = (__int64)(v4 + 42);
      }
      sub_140021760(v3);
    }
    sub_14003A710(a1);
  }
  return 0LL;
}
