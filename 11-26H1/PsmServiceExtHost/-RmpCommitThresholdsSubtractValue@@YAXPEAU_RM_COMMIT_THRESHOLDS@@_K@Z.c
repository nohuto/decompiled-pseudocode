/*
 * XREFs of ?RmpCommitThresholdsSubtractValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x180055B90
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCommitThresholdsSubtractValue(struct _RM_COMMIT_THRESHOLDS *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // r8
  __int64 v4; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // rax

  v2 = *((_QWORD *)a1 + 3);
  if ( v2 == -1LL )
  {
    v4 = -1LL;
  }
  else
  {
    v4 = 0LL;
    if ( v2 >= a2 )
      v4 = v2 - a2;
  }
  *((_QWORD *)a1 + 3) = v4;
  v5 = *((_QWORD *)a1 + 2);
  if ( v5 == -1LL )
  {
    v6 = -1LL;
  }
  else
  {
    v6 = 0LL;
    if ( v5 >= a2 )
      v6 = v5 - a2;
  }
  *((_QWORD *)a1 + 2) = v6;
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 == -1LL )
  {
    v8 = -1LL;
  }
  else
  {
    v8 = 0LL;
    if ( v7 >= a2 )
      v8 = v7 - a2;
  }
  *((_QWORD *)a1 + 1) = v8;
  v9 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 == -1LL )
  {
    *(_QWORD *)a1 = -1LL;
  }
  else if ( v9 < a2 )
  {
    *(_QWORD *)a1 = 0LL;
  }
  else
  {
    *(_QWORD *)a1 = v9 - a2;
  }
}
