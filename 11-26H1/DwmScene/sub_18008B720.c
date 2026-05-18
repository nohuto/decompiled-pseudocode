/*
 * XREFs of sub_18008B720 @ 0x18008B720
 * Callers:
 *     <none>
 * Callees:
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

char __fastcall sub_18008B720(__int64 a1, __int64 a2, double (__fastcall ***a3)(_QWORD))
{
  double v4; // xmm0_8

  v4 = (**a3)(a3);
  return sub_18008B25C(a1, (float)(*(float *)(a1 + 44) - *(float *)(a1 + 40)) * v4 + *(float *)(a1 + 40));
}
