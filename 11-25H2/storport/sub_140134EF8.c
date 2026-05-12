/*
 * XREFs of sub_140134EF8 @ 0x140134EF8
 * Callers:
 *     sub_14008BC18 @ 0x14008BC18 (sub_14008BC18.c)
 *     sub_14008C144 @ 0x14008C144 (sub_14008C144.c)
 * Callees:
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140085F28 @ 0x140085F28 (sub_140085F28.c)
 *     sub_140136180 @ 0x140136180 (sub_140136180.c)
 *     sub_1401361CC @ 0x1401361CC (sub_1401361CC.c)
 *     sub_140136B1C @ 0x140136B1C (sub_140136B1C.c)
 */

__int64 __fastcall sub_140134EF8(int **a1, __int64 a2, unsigned int a3)
{
  __int64 v6; // rdx
  int v7; // ebx
  int v8; // eax

  v7 = sub_140136180(a1, a2);
  if ( v7 >= 0 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) == 1 )
    {
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
        sub_140055930((__int64)off_140168120->AttachedDevice, 0x2Au, (__int64)&unk_140154D78);
      return (unsigned int)-2147483631;
    }
    else
    {
      v8 = sub_140136B1C(a1, v6, a3);
      v7 = v8;
      if ( v8 >= 0 )
        sub_140085F28(*a1, "TcglibEraseBand success", a3, 0, 0LL);
      else
        v7 = sub_1401361CC(a1, a2, (unsigned int)v8);
      _InterlockedExchange((volatile __int32 *)(a2 + 28), 0);
    }
  }
  else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x29u, (__int64)&unk_140154D78, v7);
  }
  return (unsigned int)v7;
}
