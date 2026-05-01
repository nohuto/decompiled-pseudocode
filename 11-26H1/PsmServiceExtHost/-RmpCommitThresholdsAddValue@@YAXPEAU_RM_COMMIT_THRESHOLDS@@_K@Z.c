/*
 * XREFs of ?RmpCommitThresholdsAddValue@@YAXPEAU_RM_COMMIT_THRESHOLDS@@_K@Z @ 0x18005D41C
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpCommitThresholdsAddValue(struct _RM_COMMIT_THRESHOLDS *a1, __int64 a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  v3 = -1LL;
  v4 = *((_QWORD *)a1 + 3);
  if ( v4 == -1LL || a2 == -1 )
  {
    *((_QWORD *)a1 + 3) = -1LL;
  }
  else
  {
    v9 = v4 + a2;
    v10 = -1LL;
    if ( v9 >= v4 )
      v10 = v9;
    *((_QWORD *)a1 + 3) = v10;
  }
  v6 = *((_QWORD *)a1 + 2);
  if ( v6 == -1LL || a2 == -1 )
  {
    *((_QWORD *)a1 + 2) = -1LL;
  }
  else
  {
    v11 = -1LL;
    if ( v6 + a2 >= v6 )
      v11 = v6 + a2;
    *((_QWORD *)a1 + 2) = v11;
  }
  v7 = *((_QWORD *)a1 + 1);
  if ( v7 == -1LL || a2 == -1 )
  {
    *((_QWORD *)a1 + 1) = -1LL;
  }
  else
  {
    v12 = -1LL;
    if ( v7 + a2 >= v7 )
      v12 = v7 + a2;
    *((_QWORD *)a1 + 1) = v12;
  }
  v8 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 != -1LL && a2 != -1 && v8 + a2 >= v8 )
    v3 = v8 + a2;
  *(_QWORD *)a1 = v3;
}
