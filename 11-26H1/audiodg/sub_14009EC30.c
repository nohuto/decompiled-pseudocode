/*
 * XREFs of sub_14009EC30 @ 0x14009EC30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009EC30(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( a2 )
    {
      *a2 = *(_QWORD *)(a1 + 184);
      return v2;
    }
    v2 = -2147467261;
  }
  else
  {
    v2 = -2005139437;
  }
  sub_140048108();
  return v2;
}
