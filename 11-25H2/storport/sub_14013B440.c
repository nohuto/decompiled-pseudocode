/*
 * XREFs of sub_14013B440 @ 0x14013B440
 * Callers:
 *     sub_140137E38 @ 0x140137E38 (sub_140137E38.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_14013B2AC @ 0x14013B2AC (sub_14013B2AC.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 *     sub_14013B98C @ 0x14013B98C (sub_14013B98C.c)
 */

__int64 __fastcall sub_14013B440(__int64 a1)
{
  __int64 result; // rax
  char v3; // [rsp+30h] [rbp+8h] BYREF
  int v4; // [rsp+38h] [rbp+10h] BYREF

  result = sub_14013B5CC(a1 + 56, a1 + 72);
  if ( (int)result >= 0 )
  {
    v4 = 0;
    v3 = 0;
    if ( (int)sub_14013B98C(a1 + 56, &v3, &v4) < 0 || v3 == -7 )
    {
      ++*(_DWORD *)(a1 + 68);
      return sub_14013B2AC(a1);
    }
    else
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_1401552C8);
      return 3221225861LL;
    }
  }
  return result;
}
