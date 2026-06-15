/*
 * XREFs of sub_140051390 @ 0x140051390
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140026F50 @ 0x140026F50 (sub_140026F50.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_140051390(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  v5 = 0LL;
  sub_140026F50(*(_QWORD *)(a1 + 16), (__int64)&xmmword_1400C83B0, &v5);
  if ( v5 && (v1 = sub_1400B6010(v5), v2 = v1, v1 < 0) )
    sub_14000C2A8(
      (int)retaddr,
      68,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\apomicboostnotificationshandler.cpp",
      v1);
  else
    v2 = 0;
  sub_140003238(&v5);
  return v2;
}
