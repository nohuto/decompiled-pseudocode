/*
 * XREFs of sub_14003B5C0 @ 0x14003B5C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14003B610 @ 0x14003B610 (sub_14003B610.c)
 */

__int64 __fastcall sub_14003B5C0(__int64 a1, __int64 a2, __int128 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v6 = *a3;
  v3 = sub_14003B610(a2, &v6);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  sub_14000C2A8((int)retaddr, 231, (int)"avcore\\audiocore\\server\\audiodg\\exe\\rpc.cpp", v3);
  return v4;
}
