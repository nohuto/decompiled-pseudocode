/*
 * XREFs of sub_14009E168 @ 0x14009E168
 * Callers:
 *     sub_140092CC8 @ 0x140092CC8 (sub_140092CC8.c)
 *     sub_14018213C @ 0x14018213C (sub_14018213C.c)
 * Callees:
 *     sub_1400215B0 @ 0x1400215B0 (sub_1400215B0.c)
 *     sub_140021760 @ 0x140021760 (sub_140021760.c)
 *     sub_1400530B8 @ 0x1400530B8 (sub_1400530B8.c)
 *     sub_14008B650 @ 0x14008B650 (sub_14008B650.c)
 *     sub_140090338 @ 0x140090338 (sub_140090338.c)
 *     sub_14009038C @ 0x14009038C (sub_14009038C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14009E168(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rax
  __int64 v4; // rbx
  _DWORD *v5; // rax

  v1 = a1 + 704;
  v3 = sub_1400530B8(a1 + 704);
  v4 = 0LL;
  while ( v3 )
  {
    sub_14008B650(a1, 8, v3);
    v3 = sub_1400530B8(v1);
  }
  if ( *(_QWORD *)(a1 + 32) && sub_1400215B0(a1, 31) )
  {
    if ( !(unsigned int)sub_140090338() )
      sub_14009038C();
    v5 = *(_DWORD **)(a1 + 24);
    if ( *v5 == 1094997074 )
    {
      v4 = (__int64)(v5 + 94);
    }
    else if ( *v5 == 1314275652 )
    {
      v4 = (__int64)(v5 + 42);
    }
    sub_140021760(v4);
  }
  return 0LL;
}
