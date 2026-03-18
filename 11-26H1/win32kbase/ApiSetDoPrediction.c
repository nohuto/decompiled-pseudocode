/*
 * XREFs of ApiSetDoPrediction @ 0x1401B8F48
 * Callers:
 *     rimPredictionPolicyUpdateStateAndApply @ 0x140137548 (rimPredictionPolicyUpdateStateAndApply.c)
 * Callees:
 *     DoPrediction @ 0x1401618A8 (DoPrediction.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 *__fastcall ApiSetDoPrediction(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 *a6,
        __int64 *a7)
{
  int (*v11)(void); // rax
  __int64 *result; // rax

  v11 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(a1) + 48) + 4000LL);
  if ( v11 && v11() >= 0 )
    return (__int64 *)DoPrediction(a1, a2, a3, a4, a5, (__int64)a6, (__int64)a7);
  *a6 = a2;
  result = a7;
  *a7 = a3;
  return result;
}
