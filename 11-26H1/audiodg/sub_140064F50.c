/*
 * XREFs of sub_140064F50 @ 0x140064F50
 * Callers:
 *     sub_140064FA0 @ 0x140064FA0 (sub_140064FA0.c)
 *     sub_140064FB0 @ 0x140064FB0 (sub_140064FB0.c)
 *     sub_140064FC0 @ 0x140064FC0 (sub_140064FC0.c)
 *     sub_140064FD0 @ 0x140064FD0 (sub_140064FD0.c)
 *     sub_140064FE0 @ 0x140064FE0 (sub_140064FE0.c)
 *     sub_140064FF0 @ 0x140064FF0 (sub_140064FF0.c)
 *     sub_140065000 @ 0x140065000 (sub_140065000.c)
 * Callees:
 *     sub_140017CB0 @ 0x140017CB0 (sub_140017CB0.c)
 */

__int64 __fastcall sub_140064F50(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v2; // edx
  signed __int64 v3; // rtt

  v1 = *(_QWORD *)(a1 + 72);
  while ( v1 >= 0 )
  {
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      return 0x7FFFFFFF;
    v2 = v1 + 1;
    v3 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 72), v1 + 1, v1);
    if ( v3 == v1 )
      return v2;
  }
  return (unsigned int)sub_140017CB0((volatile signed __int32 *)(2 * v1 + 16));
}
