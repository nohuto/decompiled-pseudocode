/*
 * XREFs of sub_14009EA20 @ 0x14009EA20
 * Callers:
 *     <none>
 * Callees:
 *     sub_140006BCC @ 0x140006BCC (sub_140006BCC.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 */

__int64 __fastcall sub_14009EA20(__int64 a1, _QWORD *a2)
{
  int v2; // ebx

  if ( !*(_DWORD *)(a1 + 56) )
  {
    v2 = -2005139437;
LABEL_6:
    sub_140048108();
    return (unsigned int)v2;
  }
  if ( !a2 )
  {
    v2 = -2147467261;
    goto LABEL_6;
  }
  v2 = sub_140006BCC((unsigned __int16 *)(*(_QWORD *)(a1 + 96) + 180LL), a2);
  if ( v2 < 0 )
    goto LABEL_6;
  return (unsigned int)v2;
}
