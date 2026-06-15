/*
 * XREFs of sub_140071FE0 @ 0x140071FE0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400632D4 @ 0x1400632D4 (sub_1400632D4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140071FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rbx
  __int128 v9; // [rsp+30h] [rbp-48h] BYREF

  v7 = a1;
  v9 = *(_OWORD *)(a1 + 104);
  EtwEventActivityIdControl(4LL, &v9);
  LODWORD(v7) = sub_1400632D4(*(_QWORD *)(v7 + 184), a2, a3, a4);
  EtwEventActivityIdControl(4LL, &v9);
  return (unsigned int)v7;
}
