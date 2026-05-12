/*
 * XREFs of sub_14013500C @ 0x14013500C
 * Callers:
 *     sub_14008CE14 @ 0x14008CE14 (sub_14008CE14.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136BF4 @ 0x140136BF4 (sub_140136BF4.c)
 */

__int64 __fastcall sub_14013500C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v8; // rdx
  int v9; // ebx
  int v10; // r9d
  int v11; // r10d
  int v12; // eax

  v9 = sub_140136180(a1, a2);
  if ( v9 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x2Cu, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v12 = sub_140136BF4(a1, v8, v11, v10, a5, a6);
      v9 = v12;
      if ( v12 < 0 )
        v9 = sub_1401361CC(a1, a2, (unsigned int)v12);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x2Bu, (__int64)&unk_140154D78, v9);
  }
  return (unsigned int)v9;
}
