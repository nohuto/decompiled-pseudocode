/*
 * XREFs of sub_140065328 @ 0x140065328
 * Callers:
 *     sub_1400653D0 @ 0x1400653D0 (sub_1400653D0.c)
 * Callees:
 *     sub_14001FC10 @ 0x14001FC10 (sub_14001FC10.c)
 *     sub_1400652B0 @ 0x1400652B0 (sub_1400652B0.c)
 */

__int64 __fastcall sub_140065328(__int64 a1, _DWORD *a2)
{
  _DWORD *v2; // rcx
  _QWORD *v3; // r8
  __int64 v4; // r11
  _DWORD *v6; // rcx
  _QWORD *v7; // r8
  unsigned int v8; // r9d
  __int64 v9; // r11
  _DWORD *v10; // r10

  if ( sub_14001FC10(a2, &xmmword_1400C65B8) )
  {
    *v3 = v4;
    return 0LL;
  }
  else
  {
    if ( sub_14001FC10(v2, &xmmword_1400C6B38) || sub_14001FC10(v6, &xmmword_1400C97D0) )
      *v7 = v9;
    else
      return (unsigned int)sub_1400652B0(v9 + 8, v10);
    return v8;
  }
}
