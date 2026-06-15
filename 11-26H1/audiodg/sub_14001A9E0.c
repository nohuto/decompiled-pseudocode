/*
 * XREFs of sub_14001A9E0 @ 0x14001A9E0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001AA24 @ 0x14001AA24 (sub_14001AA24.c)
 */

__int64 __fastcall sub_14001A9E0(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = sub_14001AA24(a1 + 152);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 2692, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v1);
  return v2;
}
