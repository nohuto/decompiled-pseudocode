/*
 * XREFs of sub_1400178E0 @ 0x1400178E0
 * Callers:
 *     sub_1400512F0 @ 0x1400512F0 (sub_1400512F0.c)
 *     sub_140051300 @ 0x140051300 (sub_140051300.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_1400178E0(__int64 a1, signed __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  v2 = *(_QWORD *)(a1 + 32);
  while ( v2 >= 0 )
  {
    if ( (_DWORD)v2 == 0x7FFFFFFF )
    {
      LODWORD(a2) = 0x7FFFFFFF;
      return (unsigned int)a2;
    }
    a2 = v2 + 1;
    v3 = v2;
    v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 32), v2 + 1, v2);
    if ( v3 == v2 )
      return (unsigned int)a2;
  }
  LODWORD(a2) = sub_140017CB0(2 * v2 + 16, a2, 0x7FFFFFFFLL);
  return (unsigned int)a2;
}
