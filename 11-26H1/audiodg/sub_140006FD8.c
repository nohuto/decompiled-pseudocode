/*
 * XREFs of sub_140006FD8 @ 0x140006FD8
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140085AA0 @ 0x140085AA0 (sub_140085AA0.c)
 * Callees:
 *     sub_140007060 @ 0x140007060 (sub_140007060.c)
 *     sub_140007934 @ 0x140007934 (sub_140007934.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140006FD8(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v2 = sub_1400B6010(*(_QWORD *)(a1 + 16));
  v3 = v2;
  if ( v2 < 0 )
  {
    sub_14000C2A8(retaddr, 494LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v2);
    return v3;
  }
  else
  {
    v4 = sub_140007060(a1);
    if ( v4 < 0 )
      sub_140007934(retaddr, 495LL, "avcore\\audiocore\\Engine\\Include\\AudioEngineObjects.h", (unsigned int)v4);
    return 0LL;
  }
}
