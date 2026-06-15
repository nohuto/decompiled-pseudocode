/*
 * XREFs of sub_1400499B8 @ 0x1400499B8
 * Callers:
 *     sub_140004CF8 @ 0x140004CF8 (sub_140004CF8.c)
 *     sub_140018318 @ 0x140018318 (sub_140018318.c)
 *     sub_14001E3D8 @ 0x14001E3D8 (sub_14001E3D8.c)
 *     sub_140023C54 @ 0x140023C54 (sub_140023C54.c)
 *     sub_1400263C8 @ 0x1400263C8 (sub_1400263C8.c)
 *     sub_140035C30 @ 0x140035C30 (sub_140035C30.c)
 *     sub_14003D070 @ 0x14003D070 (sub_14003D070.c)
 *     sub_140059FF0 @ 0x140059FF0 (sub_140059FF0.c)
 *     sub_1400644A8 @ 0x1400644A8 (sub_1400644A8.c)
 *     sub_140070B90 @ 0x140070B90 (sub_140070B90.c)
 *     sub_140080C8C @ 0x140080C8C (sub_140080C8C.c)
 *     sub_1400833D0 @ 0x1400833D0 (sub_1400833D0.c)
 *     sub_140088288 @ 0x140088288 (sub_140088288.c)
 * Callees:
 *     sub_1400499AC @ 0x1400499AC (sub_1400499AC.c)
 */

__int64 __fastcall sub_1400499B8(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  try
  {
    result = sub_1400499AC(a1, a2);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
