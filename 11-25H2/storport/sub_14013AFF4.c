/*
 * XREFs of sub_14013AFF4 @ 0x14013AFF4
 * Callers:
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 * Callees:
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_14013B5CC @ 0x14013B5CC (sub_14013B5CC.c)
 *     sub_14013B98C @ 0x14013B98C (sub_14013B98C.c)
 *     sub_14013BC18 @ 0x14013BC18 (sub_14013BC18.c)
 */

__int64 __fastcall sub_14013AFF4(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rsi
  __int64 result; // rax
  int v6; // r9d
  __int64 v7; // r8
  unsigned __int8 v8; // [rsp+48h] [rbp+10h] BYREF
  int v9; // [rsp+50h] [rbp+18h] BYREF

  *(_DWORD *)(a2 + 12) = 0;
  v2 = (_QWORD *)(a2 + 16);
  result = sub_14013B5CC(a1, a2 + 16);
  if ( (int)result >= 0 )
  {
    ++*(_DWORD *)(a2 + 12);
    v6 = *(_DWORD *)(*v2 + 8LL);
    if ( (unsigned int)(v6 - 7) > 0xA )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x22u, (__int64)&unk_1401552C8, v6);
      return 3221225861LL;
    }
    result = sub_14013B5CC(a1, *v2);
    if ( (int)result >= 0 )
    {
      ++*(_DWORD *)(a2 + 12);
      v9 = 0;
      v8 = 0;
      result = sub_14013B98C(a1, &v8, &v9);
      if ( (int)result >= 0 )
      {
        if ( v8 == 0xF3 )
        {
          ++*(_DWORD *)(a1 + 12);
          return result;
        }
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
          sub_14013BC18(off_140168120->AttachedDevice, 35LL, v7, v8, v9);
        return 3221225861LL;
      }
    }
  }
  return result;
}
