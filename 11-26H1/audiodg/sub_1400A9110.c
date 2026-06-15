/*
 * XREFs of sub_1400A9110 @ 0x1400A9110
 * Callers:
 *     sub_140068234 @ 0x140068234 (sub_140068234.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_1400A9110(__int64 (__fastcall **a1)(), __int128 *a2, int a3)
{
  __int64 (__fastcall **v3)(); // r9
  unsigned int v4; // ebx
  int v5; // edx
  int v7; // eax
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (__int64 (__fastcall **)())&unk_1400C10A0;
  while ( *a1 != *v3 || a1[1] != v3[1] || a3 != *((_DWORD *)v3 + 4) )
  {
    v3 += 4;
    if ( v3 == off_1400C1120 )
    {
      v4 = -2147418113;
      v5 = 82;
LABEL_7:
      sub_14000C2A8(
        (int)retaddr,
        v5,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpendpointcreation.cpp",
        v4);
      return v4;
    }
  }
  v8 = *a2;
  sub_1400B6010(&v8);
  v4 = v7;
  if ( v7 < 0 )
  {
    v5 = 77;
    goto LABEL_7;
  }
  return 0LL;
}
