/*
 * XREFs of sub_1400652B0 @ 0x1400652B0
 * Callers:
 *     sub_140065328 @ 0x140065328 (sub_140065328.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_140065398 @ 0x140065398 (sub_140065398.c)
 */

__int64 __fastcall sub_1400652B0(__int64 a1, _DWORD *a2)
{
  BOOL v2; // eax
  _DWORD *v3; // rcx
  _QWORD *v4; // r8
  __int64 v5; // r10
  unsigned int v6; // r9d
  _DWORD *v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // r11

  v2 = sub_14001FC10(a2, &xmmword_1400C5218);
  v6 = 0;
  if ( v2
    || sub_14001FC10(v3, &xmmword_1400C97D0)
    || sub_14001FC10(v7, &xmmword_1400C5228)
    || sub_14001FC10(v8, &xmmword_1400C97D0) )
  {
    *v4 = v5;
  }
  else
  {
    return (unsigned int)sub_140065398(v5 + 8, v9);
  }
  return v6;
}
