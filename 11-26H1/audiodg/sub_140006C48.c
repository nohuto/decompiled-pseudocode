/*
 * XREFs of sub_140006C48 @ 0x140006C48
 * Callers:
 *     sub_14000A8A0 @ 0x14000A8A0 (sub_14000A8A0.c)
 *     sub_14000CB10 @ 0x14000CB10 (sub_14000CB10.c)
 *     sub_140080A38 @ 0x140080A38 (sub_140080A38.c)
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140082A00 @ 0x140082A00 (sub_140082A00.c)
 *     sub_140082DA0 @ 0x140082DA0 (sub_140082DA0.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 *     sub_1400861E0 @ 0x1400861E0 (sub_1400861E0.c)
 * Callees:
 *     sub_140006CB8 @ 0x140006CB8 (sub_140006CB8.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140006C48(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  unsigned int v4; // ebx
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_140006CB8();
  if ( v2 < 0 )
    sub_140007934(retaddr, 501LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v2);
  v3 = sub_1400B6010(*(_QWORD *)(a1 + 16));
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8(retaddr, 502LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v3);
  return v4;
}
