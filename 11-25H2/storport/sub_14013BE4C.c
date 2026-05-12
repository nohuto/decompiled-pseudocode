/*
 * XREFs of sub_14013BE4C @ 0x14013BE4C
 * Callers:
 *     sub_1401377C0 @ 0x1401377C0 (sub_1401377C0.c)
 *     sub_140138500 @ 0x140138500 (sub_140138500.c)
 *     sub_140139940 @ 0x140139940 (sub_140139940.c)
 *     sub_140139B00 @ 0x140139B00 (sub_140139B00.c)
 *     sub_14013BD18 @ 0x14013BD18 (sub_14013BD18.c)
 *     sub_14013C04C @ 0x14013C04C (sub_14013C04C.c)
 *     sub_14013C0F0 @ 0x14013C0F0 (sub_14013C0F0.c)
 * Callees:
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_14013C26C @ 0x14013C26C (sub_14013C26C.c)
 */

__int64 __fastcall sub_14013BE4C(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rcx
  unsigned int v4; // r10d
  unsigned int v5; // r9d
  int v7; // [rsp+20h] [rbp-18h]

  if ( a2 >= 0x40 )
  {
    return (unsigned int)sub_14013C26C(a1, a2, a1);
  }
  else
  {
    v3 = *(unsigned int *)(a1 + 12);
    v4 = 0;
    v5 = *(_DWORD *)(a1 + 8);
    if ( (int)v3 + 1 <= v5 )
    {
      *(_BYTE *)(v3 + *(_QWORD *)a1) = a2 & 0x3F;
      ++*(_DWORD *)(a1 + 12);
    }
    else
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      {
        v7 = v3 + 1;
        sub_140067F28((__int64)off_140168120->AttachedDevice, 0xAu, (__int64)&unk_1401552D8, v5, v7);
      }
      return (unsigned int)-1073741789;
    }
  }
  return v4;
}
