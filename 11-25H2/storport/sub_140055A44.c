/*
 * XREFs of sub_140055A44 @ 0x140055A44
 * Callers:
 *     sub_140040448 @ 0x140040448 (sub_140040448.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 */

__int64 __fastcall sub_140055A44(void *a1)
{
  unsigned int v1; // ebx

  v1 = KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  if ( v1 == 258
    && off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055930((__int64)off_140168120->AttachedDevice, 0xBu, (__int64)&unk_140148B00);
  }
  return v1;
}
