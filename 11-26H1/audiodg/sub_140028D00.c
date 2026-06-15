/*
 * XREFs of sub_140028D00 @ 0x140028D00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

__int64 __fastcall sub_140028D00(__int64 a1, __int64 a2, _QWORD *a3)
{
  signed __int32 v4; // eax
  unsigned int v5; // ebx

  *a3 = 0LL;
  while ( 1 )
  {
    v4 = *(_DWORD *)(a1 + 16);
    if ( !v4 )
      break;
    if ( v4 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 16), v4 + 1, v4) )
    {
      v5 = sub_1400B6010(*(_QWORD *)(a1 + 24));
      sub_1400B6010(*(_QWORD *)(a1 + 24));
      return v5;
    }
  }
  return 0LL;
}
