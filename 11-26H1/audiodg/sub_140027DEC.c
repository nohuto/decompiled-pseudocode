/*
 * XREFs of sub_140027DEC @ 0x140027DEC
 * Callers:
 *     sub_140027570 @ 0x140027570 (sub_140027570.c)
 *     sub_14007054C @ 0x14007054C (sub_14007054C.c)
 *     sub_140070700 @ 0x140070700 (sub_140070700.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140027630 @ 0x140027630 (sub_140027630.c)
 *     sub_140027F4C @ 0x140027F4C (sub_140027F4C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140027DEC(__int64 a1)
{
  DWORD v2; // ecx
  DWORD v3; // ecx
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF

  *(_QWORD *)a1 = off_1400B9BA8;
  *(_QWORD *)(a1 + 8) = off_1400B9C68;
  *(_QWORD *)(a1 + 16) = off_1400B9B68;
  *(_QWORD *)(a1 + 24) = off_1400B9B48;
  *(_QWORD *)(a1 + 152) = &off_1400B9B88;
  *(_QWORD *)(a1 + 160) = &off_1400B9A70;
  v5 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v5);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  sub_140027630(a1);
  v2 = *(_DWORD *)(a1 + 216);
  if ( v2 != -1 )
  {
    FlsSetValue(v2, 0LL);
    FlsFree(*(_DWORD *)(a1 + 216));
  }
  v3 = *(_DWORD *)(a1 + 212);
  if ( v3 != -1 )
    TlsFree(v3);
  if ( a1 != -40 )
    LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 40));
  EtwEventActivityIdControl(4LL, &v5);
  sub_140003238((__int64 *)(a1 + 184));
  sub_140003238((__int64 *)(a1 + 176));
  return sub_140027F4C(a1);
}
