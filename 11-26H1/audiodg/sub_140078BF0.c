/*
 * XREFs of sub_140078BF0 @ 0x140078BF0
 * Callers:
 *     sub_140078C40 @ 0x140078C40 (sub_140078C40.c)
 *     sub_140078C50 @ 0x140078C50 (sub_140078C50.c)
 *     sub_140078C60 @ 0x140078C60 (sub_140078C60.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140078BF0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 40);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 40), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)sub_140017CB0((volatile signed __int32 *)(2 * v1 + 16));
}
