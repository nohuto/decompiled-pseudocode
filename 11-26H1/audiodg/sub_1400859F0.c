/*
 * XREFs of sub_1400859F0 @ 0x1400859F0
 * Callers:
 *     sub_140080F10 @ 0x140080F10 (sub_140080F10.c)
 *     sub_140081650 @ 0x140081650 (sub_140081650.c)
 *     sub_140081AE0 @ 0x140081AE0 (sub_140081AE0.c)
 *     sub_140082240 @ 0x140082240 (sub_140082240.c)
 *     sub_140082410 @ 0x140082410 (sub_140082410.c)
 *     sub_1400837C0 @ 0x1400837C0 (sub_1400837C0.c)
 *     sub_140083A90 @ 0x140083A90 (sub_140083A90.c)
 *     sub_140084920 @ 0x140084920 (sub_140084920.c)
 *     sub_140084B80 @ 0x140084B80 (sub_140084B80.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400859F0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v3; // edx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 776);
  if ( !v2 )
  {
    v3 = 1188;
LABEL_3:
    sub_14000C2A8((int)retaddr, v3, (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp", -2147024890);
    return 2147942406LL;
  }
  if ( a2 != *(_QWORD *)(v2 + 16) )
  {
    v3 = 1191;
    goto LABEL_3;
  }
  if ( *(_BYTE *)(a1 + 785) )
  {
    sub_14000C2A8(
      (int)retaddr,
      1194,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2005139407);
    return 2289827889LL;
  }
  else if ( *(_BYTE *)(a1 + 786) )
  {
    sub_14000C2A8(
      (int)retaddr,
      1195,
      (int)"avcore\\audiocore\\engine\\core\\processor\\audioprocessor2.cpp",
      -2005139406);
    return 2289827890LL;
  }
  else
  {
    return 0LL;
  }
}
