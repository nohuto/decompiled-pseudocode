/*
 * XREFs of sub_140138324 @ 0x140138324
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 *     sub_14013A76C @ 0x14013A76C (sub_14013A76C.c)
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_1400860EC @ 0x1400860EC (sub_1400860EC.c)
 */

__int64 __fastcall sub_140138324(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( a2 && a3 )
  {
    result = sub_1400860EC(a1, a2);
    if ( (int)result >= 0 )
      return sub_1400860EC(a1, a3);
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055930((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_140154F38);
    return 3221225485LL;
  }
  return result;
}
