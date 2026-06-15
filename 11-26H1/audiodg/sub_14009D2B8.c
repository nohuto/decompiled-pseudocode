/*
 * XREFs of sub_14009D2B8 @ 0x14009D2B8
 * Callers:
 *     sub_14006083C @ 0x14006083C (sub_14006083C.c)
 * Callees:
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140048384 @ 0x140048384 (sub_140048384.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_14009D2B8(__int64 a1, __int128 *a2, int a3)
{
  __int64 (__fastcall **v3)(); // r9
  unsigned int v4; // ebx
  int v6; // eax
  __int128 v7; // [rsp+90h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+B8h] [rbp+0h]

  v3 = (__int64 (__fastcall **)())&unk_1400C02C0;
  while ( *(__int64 (__fastcall **)())a1 != *v3
       || *(__int64 (__fastcall **)())(a1 + 8) != v3[1]
       || a3 != *((_DWORD *)v3 + 4) )
  {
    v3 += 4;
    if ( v3 == off_1400C0300 )
    {
      v4 = -2147418113;
      sub_140048384(
        (int)retaddr,
        124,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
        2147549183LL,
        "CrossProcessClientEndpoint factory not found for {%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}(v%d)",
        *(_DWORD *)a1,
        *(unsigned __int16 *)(a1 + 4),
        *(unsigned __int16 *)(a1 + 6),
        *(unsigned __int8 *)(a1 + 8),
        *(unsigned __int8 *)(a1 + 9),
        *(unsigned __int8 *)(a1 + 10),
        *(unsigned __int8 *)(a1 + 11),
        *(unsigned __int8 *)(a1 + 12),
        *(unsigned __int8 *)(a1 + 13),
        *(unsigned __int8 *)(a1 + 14),
        *(unsigned __int8 *)(a1 + 15),
        a3);
      return v4;
    }
  }
  v7 = *a2;
  sub_1400B6010(&v7);
  v4 = v6;
  if ( v6 < 0 )
  {
    sub_14000C2A8(
      (int)retaddr,
      119,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\crossprocessendpointcreation.cpp",
      v6);
    return v4;
  }
  return 0LL;
}
