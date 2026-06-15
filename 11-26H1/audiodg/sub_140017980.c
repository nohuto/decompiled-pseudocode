/*
 * XREFs of sub_140017980 @ 0x140017980
 * Callers:
 *     sub_140050270 @ 0x140050270 (sub_140050270.c)
 *     sub_140050280 @ 0x140050280 (sub_140050280.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140017980(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v4; // rtt

  v2 = *(_QWORD *)(a1 + 32);
  while ( 1 )
  {
    if ( v2 < 0 )
    {
      LODWORD(a2) = sub_140017CB0(2 * v2 + 16, a2, 0x7FFFFFFFLL);
      return (unsigned int)a2;
    }
    if ( (_DWORD)v2 == 0x7FFFFFFF )
      break;
    a2 = v2 + 1;
    v4 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v2 + 1, v2);
    if ( v4 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = 0x7FFFFFFF;
  return (unsigned int)a2;
}
