/*
 * XREFs of sub_14007F980 @ 0x14007F980
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003E674 @ 0x14003E674 (sub_14003E674.c)
 */

__int64 __fastcall sub_14007F980(__int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  v1 = sub_14003E674(a1 + 80);
  v2 = v1;
  if ( v1 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 829, (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp", v1);
  return v2;
}
