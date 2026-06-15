/*
 * XREFs of sub_1400738A4 @ 0x1400738A4
 * Callers:
 *     sub_1400733C4 @ 0x1400733C4 (sub_1400733C4.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400737F8 @ 0x1400737F8 (sub_1400737F8.c)
 */

__int64 __fastcall sub_1400738A4(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // rcx
  _DWORD *v11; // rcx
  _DWORD *v12; // rcx
  _DWORD *v13; // r10

  if ( sub_14001FC10(a2, &xmmword_1400C6688) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_14001FC10(v2, &xmmword_1400C65B8)
      || sub_14001FC10(v6, &xmmword_1400C65C8)
      || sub_14001FC10(v10, &xmmword_1400C65F8)
      || sub_14001FC10(v11, &xmmword_1400C6618)
      || sub_14001FC10(v12, &xmmword_1400C6608) )
    {
      *v7 = v9;
    }
    else
    {
      return (unsigned int)sub_1400737F8(v9 + 8, v13);
    }
    return v8;
  }
}
