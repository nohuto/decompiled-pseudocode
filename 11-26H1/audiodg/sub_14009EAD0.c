/*
 * XREFs of sub_14009EAD0 @ 0x14009EAD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009EAD0(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *(_DWORD *)(a1 + 56) )
  {
    if ( a2 )
    {
      *a2 = *(_DWORD *)(a1 + 112);
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
