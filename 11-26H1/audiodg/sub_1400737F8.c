/*
 * XREFs of sub_1400737F8 @ 0x1400737F8
 * Callers:
 *     sub_1400738A4 @ 0x1400738A4 (sub_1400738A4.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 */

__int64 __fastcall sub_1400737F8(__int64 a1, _DWORD *a2)
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
  _QWORD *v13; // r8
  __int64 v14; // r11

  if ( sub_14001FC10(a2, &xmmword_1400C6628) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_14001FC10(v2, &xmmword_1400C6638)
      || sub_14001FC10(v6, &xmmword_1400C6648)
      || sub_14001FC10(v10, &xmmword_1400C97F0)
      || sub_14001FC10(v11, &xmmword_1400C6668) )
    {
      *v7 = v9;
    }
    else if ( sub_14001FC10(v12, &xmmword_1400C6678) )
    {
      *v13 = v14 + 8;
    }
    else
    {
      return (unsigned int)-2147467262;
    }
    return v8;
  }
}
