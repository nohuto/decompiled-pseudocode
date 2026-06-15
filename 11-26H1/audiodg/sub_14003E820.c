/*
 * XREFs of sub_14003E820 @ 0x14003E820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14003E820(__int64 a1, double *a2)
{
  __int64 v3; // rcx
  double v4; // xmm0_8

  v3 = *(unsigned int *)(a1 + 400);
  v4 = 0.0;
  if ( (_DWORD)v3 )
    v4 = (double)(int)(*(_QWORD *)(a1 + 392) / v3) / 10000.0;
  *a2 = v4;
  return 0LL;
}
