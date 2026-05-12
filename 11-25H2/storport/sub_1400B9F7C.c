/*
 * XREFs of sub_1400B9F7C @ 0x1400B9F7C
 * Callers:
 *     sub_14003E780 @ 0x14003E780 (sub_14003E780.c)
 * Callees:
 *     sub_1400AE5D0 @ 0x1400AE5D0 (sub_1400AE5D0.c)
 *     sub_1400B3B48 @ 0x1400B3B48 (sub_1400B3B48.c)
 */

__int64 __fastcall sub_1400B9F7C(__int64 a1)
{
  __int64 v2; // rax
  int v3; // edi
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r9
  char v8; // [rsp+B8h] [rbp-10h]

  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    v3 = *(_DWORD *)(v2 + 5348);
  else
    LOBYTE(v3) = 0;
  v4 = *(_QWORD *)(a1 + 3408);
  v5 = v4 / 0x989680;
  if ( v4 >= 0x98968000 )
    LOBYTE(v5) = -1;
  v8 = v5;
  if ( *(_QWORD *)(a1 + 2248) || *(_QWORD *)(a1 + 2256) || *(_DWORD *)(a1 + 2264) || (*(_BYTE *)(a1 + 506) & 2) != 0 )
  {
    if ( (byte_140168DB8 != 1 || dword_140168DBC) && dword_140168DC0 < (unsigned int)dword_140168488 )
    {
      if ( (*(_DWORD *)(a1 + 2120) & 0x20) != 0 )
        dword_140168DBC = -1;
      if ( *(_BYTE *)(a1 + 2124) )
        dword_140168DBC = -1;
      if ( (*(_BYTE *)(a1 + 506) & 2) != 0 )
        dword_140168DBC = -1;
    }
    sub_1400B3B48(a1);
    if ( (byte_1401694F4 & 4) != 0 )
    {
      v6 = *(_QWORD *)(a1 + 24);
      sub_1400AE5D0(
        a1 + 242,
        a1 + 177,
        a1 + 168,
        *(const wchar_t **)(v6 + 4720),
        *(_DWORD *)(v6 + 56),
        v6 + 5064,
        *(_BYTE *)(a1 + 104),
        *(_BYTE *)(a1 + 105),
        *(_BYTE *)(a1 + 106),
        a1 + 2104,
        (const char *)(a1 + 168),
        (const char *)(a1 + 177),
        (const char *)(a1 + 242),
        *(_QWORD *)(a1 + 2232),
        *(_QWORD *)(a1 + 2240),
        v8,
        *(_QWORD *)(a1 + 2256),
        *(_QWORD *)(a1 + 2248),
        *(_DWORD *)(a1 + 2264),
        *(_DWORD *)(a1 + 2268),
        v3);
    }
  }
  *(_QWORD *)(a1 + 2232) = 0LL;
  *(_QWORD *)(a1 + 2240) = 0LL;
  *(_QWORD *)(a1 + 2248) = 0LL;
  *(_QWORD *)(a1 + 2256) = 0LL;
  *(_DWORD *)(a1 + 2268) = 0;
  return 0LL;
}
