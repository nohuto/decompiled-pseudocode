/*
 * XREFs of sub_14000B2CC @ 0x14000B2CC
 * Callers:
 *     sub_14000B0B0 @ 0x14000B0B0 (sub_14000B0B0.c)
 * Callees:
 *     sub_14000B358 @ 0x14000B358 (sub_14000B358.c)
 *     sub_14001F350 @ 0x14001F350 (sub_14001F350.c)
 *     sub_140067F78 @ 0x140067F78 (sub_140067F78.c)
 */

__int64 __fastcall sub_14000B2CC(__int64 a1, int a2, int a3)
{
  unsigned __int8 v4; // bl
  __int64 v5; // rax
  __int64 result; // rax

  v4 = a2;
  v5 = sub_14001F350();
  if ( v5 )
    return sub_14000B358(v5, (unsigned int)(1000 * a3));
  result = (__int64)&off_140168120;
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
  {
    result = HIDWORD(off_140168120->Timer);
    if ( (result & 0x20) != 0 && BYTE1(off_140168120->Timer) >= 3u )
      return sub_140067F78(off_140168120->AttachedDevice, 49LL, &unk_14014A2D8, v4, BYTE1(a2), BYTE2(a2));
  }
  return result;
}
