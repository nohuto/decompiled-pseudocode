/*
 * XREFs of sub_140019010 @ 0x140019010
 * Callers:
 *     sub_14005FFF0 @ 0x14005FFF0 (sub_14005FFF0.c)
 *     sub_140060000 @ 0x140060000 (sub_140060000.c)
 *     sub_140060010 @ 0x140060010 (sub_140060010.c)
 *     sub_140060020 @ 0x140060020 (sub_140060020.c)
 *     sub_140060030 @ 0x140060030 (sub_140060030.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140019010(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 56);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 56), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)sub_140017CB0((volatile signed __int32 *)(2 * v1 + 16));
}
