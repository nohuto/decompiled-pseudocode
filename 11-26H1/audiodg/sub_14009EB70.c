/*
 * XREFs of sub_14009EB70 @ 0x14009EB70
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009EB70(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 - 376), 1, 1) )
    {
      *a2 = *(unsigned int *)(*(_QWORD *)(a1 - 336) + 188LL);
      return v2;
    }
    v2 = -2005139437;
  }
  else
  {
    v2 = -2147467261;
  }
  sub_140048108();
  return v2;
}
