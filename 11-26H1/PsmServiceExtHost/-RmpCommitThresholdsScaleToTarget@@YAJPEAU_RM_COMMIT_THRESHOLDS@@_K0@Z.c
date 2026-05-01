/*
 * XREFs of ?RmpCommitThresholdsScaleToTarget@@YAJPEAU_RM_COMMIT_THRESHOLDS@@_K0@Z @ 0x18008073C
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     ?RtlULongLongMult@@YAJ_K0PEA_K@Z @ 0x1800479D0 (-RtlULongLongMult@@YAJ_K0PEA_K@Z.c)
 *     ?RmpCommitValuesDivide@@YAX_K0PEA_K@Z @ 0x180080834 (-RmpCommitValuesDivide@@YAX_K0PEA_K@Z.c)
 *     ?RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z @ 0x180080850 (-RmpCommitValuesMultiply@@YAJ_K0PEA_K@Z.c)
 */

__int64 __fastcall RmpCommitThresholdsScaleToTarget(
        struct _RM_COMMIT_THRESHOLDS *a1,
        unsigned __int64 a2,
        struct _RM_COMMIT_THRESHOLDS *a3)
{
  unsigned __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 *v9; // rbx
  unsigned __int64 v10; // rdx
  unsigned __int64 *v11; // r11
  unsigned __int64 v12; // rdx
  unsigned __int64 *v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  bool v16; // cc
  unsigned __int64 *v17; // r11
  unsigned __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v3 = a2;
  v18 = 0LL;
  result = RtlULongLongMult(a2, 0x400uLL, &v18);
  if ( (int)result >= 0 )
  {
    v7 = v18 / *((_QWORD *)a1 + 2);
    v8 = v7;
    if ( v7 )
    {
      v9 = (unsigned __int64 *)((char *)a3 + 24);
      RmpCommitValuesMultiply(*((_QWORD *)a1 + 3), v7, (unsigned __int64 *)a3 + 3);
      RmpCommitValuesMultiply(*((_QWORD *)a1 + 2), v8, (unsigned __int64 *)a3 + 2);
      RmpCommitValuesMultiply(*((_QWORD *)a1 + 1), v8, (unsigned __int64 *)a3 + 1);
      RmpCommitValuesMultiply(*(_QWORD *)a1, v8, (unsigned __int64 *)a3);
      RmpCommitValuesDivide(*((_QWORD *)a3 + 3), v10, (unsigned __int64 *)a3 + 3);
      RmpCommitValuesDivide(*v11, v12, v11);
      RmpCommitValuesDivide(*v13, v14, v13);
      RmpCommitValuesDivide(*(_QWORD *)a3, v15, (unsigned __int64 *)a3);
      v16 = *((_QWORD *)a3 + 3) <= v3;
      *v17 = v3;
      if ( !v16 )
        v3 = *v9;
      result = 0LL;
      *v9 = v3;
    }
    else
    {
      return 3221225620LL;
    }
  }
  return result;
}
