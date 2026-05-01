/*
 * XREFs of ?HampActAddCommitThresholds@@YAXPEAU_HAM_ACTIVITY@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180055FE0
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

void __fastcall HampActAddCommitThresholds(struct _HAM_ACTIVITY *a1, struct _RM_COMMIT_THRESHOLDS *a2)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r10
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v2 = *((_QWORD *)a1 + 58);
  v3 = -1LL;
  v4 = *((_QWORD *)a1 + 57);
  v5 = *((_QWORD *)a1 + 56);
  v6 = *((_QWORD *)a1 + 55);
  if ( v2 == -1LL || (v10 = *((_QWORD *)a2 + 3), v10 == -1) || (v7 = v2 + v10, v7 < v2) )
    v7 = -1LL;
  *((_QWORD *)a2 + 3) = v7;
  if ( v4 == -1LL || (v11 = *((_QWORD *)a2 + 2), v11 == -1) || (v8 = v4 + v11, v8 < v4) )
    v8 = -1LL;
  *((_QWORD *)a2 + 2) = v8;
  if ( v5 == -1LL || (v12 = *((_QWORD *)a2 + 1), v12 == -1) || (v9 = v5 + v12, v9 < v5) )
    v9 = -1LL;
  *((_QWORD *)a2 + 1) = v9;
  if ( v6 != -1LL && *(_QWORD *)a2 != -1LL && v6 + *(_QWORD *)a2 >= v6 )
    v3 = v6 + *(_QWORD *)a2;
  *(_QWORD *)a2 = v3;
}
