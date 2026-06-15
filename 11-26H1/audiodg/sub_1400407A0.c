/*
 * XREFs of sub_1400407A0 @ 0x1400407A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 */

__int64 __fastcall sub_1400407A0(__int64 a1, _DWORD *a2)
{
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    *a2 = *(_DWORD *)(a1 + 72);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      410,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
