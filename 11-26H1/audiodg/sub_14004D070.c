/*
 * XREFs of sub_14004D070 @ 0x14004D070
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_14004D070(__int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 96LL);
  v5 = 0LL;
  sub_140026F50(v1, (__int64)&xmmword_1400C7FA8, &v5);
  if ( v5 )
  {
    v2 = sub_1400B6010(v5);
    if ( v2 < 0 )
      sub_14000C2A8(
        (int)retaddr,
        17,
        (int)"avcore\\audiocore\\server\\audiodg\\exe\\apodevicenotificationshandler.cpp",
        v2);
  }
  return sub_140003238(&v5);
}
