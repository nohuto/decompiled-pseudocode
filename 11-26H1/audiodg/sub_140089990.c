/*
 * XREFs of sub_140089990 @ 0x140089990
 * Callers:
 *     sub_1400899E0 @ 0x1400899E0 (sub_1400899E0.c)
 *     sub_1400899F0 @ 0x1400899F0 (sub_1400899F0.c)
 *     sub_140089A00 @ 0x140089A00 (sub_140089A00.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140089990(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 80);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 80), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)sub_140017CB0((volatile signed __int32 *)(2 * v1 + 16));
}
