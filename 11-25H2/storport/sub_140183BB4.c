/*
 * XREFs of sub_140183BB4 @ 0x140183BB4
 * Callers:
 *     DllInitialize @ 0x1400A3DE0 (DllInitialize.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 */

__int64 sub_140183BB4()
{
  int v0; // r9d
  int v1; // eax
  __int64 result; // rax

  v0 = KseRegisterShim(&unk_1401682E8, 0LL, 0LL);
  if ( v0 < 0
    && off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x100) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_14014EF40, v0);
  }
  v1 = KseRegisterShim(&unk_1401682B0, 0LL, 0LL);
  if ( v1 < 0
    && off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x100) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xBu, (__int64)&unk_14014EF40, v1);
  }
  result = KseRegisterShim(&unk_140168320, 0LL, 0LL);
  if ( (int)result < 0
    && off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x100) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    return sub_140055BD4((__int64)off_140168120->AttachedDevice, 0xCu, (__int64)&unk_14014EF40, result);
  }
  return result;
}
