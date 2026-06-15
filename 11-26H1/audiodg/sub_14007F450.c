/*
 * XREFs of sub_14007F450 @ 0x14007F450
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14007A820 @ 0x14007A820 (sub_14007A820.c)
 */

__int64 __fastcall sub_14007F450(__int64 a1, _QWORD *a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v2 = sub_14007A820(a1 + 16, a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 1717, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v2);
  return v3;
}
