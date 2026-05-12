/*
 * XREFs of sub_140135334 @ 0x140135334
 * Callers:
 *     sub_14008E060 @ 0x14008E060 (sub_14008E060.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_1401388C0 @ 0x1401388C0 (sub_1401388C0.c)
 *     sub_14013A37C @ 0x14013A37C (sub_14013A37C.c)
 */

__int64 __fastcall sub_140135334(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // r10
  __int64 v8; // r11

  v2 = *(_DWORD *)(a1 + 32);
  if ( v2 == 512 )
  {
    v5 = sub_140136180(a1, a2);
    if ( v5 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x11u, (__int64)&unk_140154D78, v5);
    }
    else if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x12u, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v5 = sub_14013A37C(a1, v6, v7 != 0 ? 0x90001FF01LL : 0x900000006LL, v8);
      if ( v5 < 0 || (v5 = sub_1401388C0(a1, a2), v5 < 0) )
        v5 = sub_1401361CC(a1, a2, (unsigned int)v5);
      else
        sub_140085F28(*(int **)a1, "TcglibRevertLockingSpEx success", 0, 0, 0LL);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
      sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x10u, (__int64)&unk_140154D78, v2);
    return (unsigned int)-1073741637;
  }
  return (unsigned int)v5;
}
