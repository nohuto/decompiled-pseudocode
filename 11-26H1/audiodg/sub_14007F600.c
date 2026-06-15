/*
 * XREFs of sub_14007F600 @ 0x14007F600
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_14007F600(__int64 a1, _DWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 64);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      352,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
