/*
 * XREFs of sub_140006BCC @ 0x140006BCC
 * Callers:
 *     sub_140005910 @ 0x140005910 (sub_140005910.c)
 *     sub_140010230 @ 0x140010230 (sub_140010230.c)
 *     sub_140028E18 @ 0x140028E18 (sub_140028E18.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_140030E30 @ 0x140030E30 (sub_140030E30.c)
 *     sub_14003AD50 @ 0x14003AD50 (sub_14003AD50.c)
 *     sub_140055360 @ 0x140055360 (sub_140055360.c)
 *     sub_140055610 @ 0x140055610 (sub_140055610.c)
 *     sub_140055840 @ 0x140055840 (sub_140055840.c)
 *     sub_140056FE0 @ 0x140056FE0 (sub_140056FE0.c)
 *     sub_14005B8E0 @ 0x14005B8E0 (sub_14005B8E0.c)
 *     sub_14005BAC8 @ 0x14005BAC8 (sub_14005BAC8.c)
 *     sub_140060180 @ 0x140060180 (sub_140060180.c)
 *     sub_140060370 @ 0x140060370 (sub_140060370.c)
 *     sub_14006E6C0 @ 0x14006E6C0 (sub_14006E6C0.c)
 *     sub_14009E960 @ 0x14009E960 (sub_14009E960.c)
 *     sub_14009E9C0 @ 0x14009E9C0 (sub_14009E9C0.c)
 *     sub_14009EA20 @ 0x14009EA20 (sub_14009EA20.c)
 *     sub_1400A9C90 @ 0x1400A9C90 (sub_1400A9C90.c)
 *     sub_1400A9CF0 @ 0x1400A9CF0 (sub_1400A9CF0.c)
 * Callees:
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 */

__int64 __fastcall sub_140006BCC(unsigned __int16 *Src, _QWORD *a2)
{
  __int64 v2; // r14
  void *v5; // rax
  unsigned int v6; // ebx
  void *v7; // rdi
  __int64 result; // rax

  v2 = Src[8];
  v5 = CoTaskMemAlloc(v2 + 18);
  v6 = 0;
  v7 = v5;
  if ( v5 )
    memcpy(v5, Src, v2 + 18);
  else
    v6 = -2147024882;
  result = v6;
  *a2 = v7;
  return result;
}
