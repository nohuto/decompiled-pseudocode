/*
 * XREFs of sub_14007F6D0 @ 0x14007F6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14007F6D0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h]

  if ( a2 )
  {
    v3 = *(_QWORD *)(a1 + 64);
    *a2 = v3;
    sub_1400B6010(v3);
    return 0LL;
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      224,
      (int)"avcore\\audiocore\\deviceapi\\device\\lib\\audiodevicemodule.cpp",
      -2147467261);
    return 2147500035LL;
  }
}
