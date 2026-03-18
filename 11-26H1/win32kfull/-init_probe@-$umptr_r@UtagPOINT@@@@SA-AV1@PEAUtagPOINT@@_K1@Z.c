/*
 * XREFs of ?init_probe@?$umptr_r@UtagPOINT@@@@SA?AV1@PEAUtagPOINT@@_K1@Z @ 0x140206B68
 * Callers:
 *     NtGdiPolyDraw @ 0x140206AD0 (NtGdiPolyDraw.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall umptr_r<tagPOINT>::init_probe(__int64 a1, volatile void *a2, unsigned __int64 a3)
{
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)(a1 + 24) = 0;
  if ( is_mul_ok(a3, 8uLL) )
  {
    ProbeForRead(a2, (unsigned int)(8 * a3), 4u);
    *(_QWORD *)a1 = a2;
    *(_QWORD *)(a1 + 8) = a3;
  }
  return a1;
}
