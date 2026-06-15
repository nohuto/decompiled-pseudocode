/*
 * XREFs of sub_14003A240 @ 0x14003A240
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14003A240(__int64 a1)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h]

  v5 = *(_OWORD *)(a1 - 48);
  EtwEventActivityIdControl(4LL, &v5);
  if ( *(_DWORD *)(a1 - 152 + 208) == 1 || (v4 = sub_1400B6010(a1 - 152), v2 = v4, v4 >= 0) )
    v2 = 0;
  else
    sub_14000C2A8(
      (int)retaddr,
      504,
      (int)"avcore\\audiocore\\server\\audiodg\\exe\\systemaudiodevicesharedbase.cpp",
      v4);
  EtwEventActivityIdControl(4LL, &v5);
  return v2;
}
