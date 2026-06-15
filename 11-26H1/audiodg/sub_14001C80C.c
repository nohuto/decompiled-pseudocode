/*
 * XREFs of sub_14001C80C @ 0x14001C80C
 * Callers:
 *     sub_14001C780 @ 0x14001C780 (sub_14001C780.c)
 *     sub_140074340 @ 0x140074340 (sub_140074340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14001C80C(__int64 a1)
{
  signed __int64 v1; // rax
  unsigned int v3; // edx
  signed __int64 v4; // rtt

  v1 = *(_QWORD *)(a1 + 120);
  while ( 1 )
  {
    if ( v1 < 0 )
      return sub_1400178AC((volatile signed __int32 *)(2 * v1 + 16));
    if ( (_DWORD)v1 == 0x7FFFFFFF )
      break;
    v3 = v1 - 1;
    v4 = v1;
    v1 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 120), v1 - 1, v1);
    if ( v4 == v1 )
      return v3;
  }
  return 2147483646LL;
}
