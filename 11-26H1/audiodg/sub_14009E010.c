/*
 * XREFs of sub_14009E010 @ 0x14009E010
 * Callers:
 *     <none>
 * Callees:
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009E010(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( a2 )
  {
    *a2 = 1;
  }
  else
  {
    v2 = -2147467261;
    sub_140048108();
  }
  return v2;
}
