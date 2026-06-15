/*
 * XREFs of sub_140078AF0 @ 0x140078AF0
 * Callers:
 *     sub_140078B40 @ 0x140078B40 (sub_140078B40.c)
 *     sub_140078B50 @ 0x140078B50 (sub_140078B50.c)
 *     sub_140078B60 @ 0x140078B60 (sub_140078B60.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140078AF0(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 168);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 168), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)sub_140017CB0((volatile signed __int32 *)(2 * v1 + 16));
}
