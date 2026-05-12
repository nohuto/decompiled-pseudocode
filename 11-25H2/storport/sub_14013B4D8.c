/*
 * XREFs of sub_14013B4D8 @ 0x14013B4D8
 * Callers:
 *     sub_14013AAA4 @ 0x14013AAA4 (sub_14013AAA4.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 */

__int64 __fastcall sub_14013B4D8(__int64 a1)
{
  __int64 v1; // rbx
  int v2; // ecx
  int v3; // r9d
  int v4; // r9d
  int v6; // [rsp+20h] [rbp-18h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  v1 = a1 + 56;
  v2 = sub_14013B5CC(a1 + 56, &v7);
  if ( v2 >= 0 )
  {
    v3 = *(_DWORD *)(v7 + 8);
    if ( v3 != 2 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x16u, (__int64)&unk_1401552C8, v3);
      return (unsigned int)-1073741435;
    }
    v2 = sub_14013B5CC(v1, &v7);
    if ( v2 >= 0 )
    {
      v4 = *(_DWORD *)(v7 + 8);
      if ( (unsigned int)(v4 - 7) > 7 || *(_DWORD *)(v7 + 12) > 1u )
      {
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        {
          v6 = *(_DWORD *)(v7 + 12);
          sub_140067F28((__int64)off_140168120->AttachedDevice, 0x17u, (__int64)&unk_1401552C8, v4, v6);
        }
        return (unsigned int)-1073741435;
      }
      if ( *(_QWORD *)(v7 + 16) == 1LL )
        return (unsigned int)-1073741297;
    }
  }
  return (unsigned int)v2;
}
