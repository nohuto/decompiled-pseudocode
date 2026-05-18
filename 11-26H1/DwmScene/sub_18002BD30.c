/*
 * XREFs of sub_18002BD30 @ 0x18002BD30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall sub_18002BD30(__int64 a1, int a2, _QWORD *a3, double *a4)
{
  __int64 v4; // r10
  char result; // al

  v4 = *(_QWORD *)(a1 + 424);
  result = 0;
  if ( *(_QWORD *)(a1 + 416) != v4 && !a2 )
  {
    *a3 = *(_QWORD *)(v4 - 24);
    result = 1;
    *a4 = *(double *)(v4 - 136) - *(double *)(v4 - 144);
  }
  return result;
}
