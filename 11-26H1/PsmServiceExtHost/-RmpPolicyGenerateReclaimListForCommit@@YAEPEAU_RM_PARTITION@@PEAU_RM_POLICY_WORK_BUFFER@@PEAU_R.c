/*
 * XREFs of ?RmpPolicyGenerateReclaimListForCommit@@YAEPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@PEAU_RM_ACTIVITY_HOST@@_KW4Enum@Priority@ExecutionModel@@W4_RM_REVOKE_POLICY@@@Z @ 0x18006BD9C
 * Callers:
 *     ?EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@PEAU_RM_INTERNAL_RESOURCE_REVOKE_CONTEXT@@PEA_N4@Z @ 0x18002AA30 (-EvaluateResourceRequest@ResourceSet@ExecutionModel@@QEAAJ_KPEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_.c)
 *     ?RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_KW4_RM_REVOKE_POLICY@@W4_RM_REVOKE_REASON_INTERNAL@@PEAU_RM_ACTIVITY_HOST_REMEDIATION_GROUP@@@Z @ 0x18006DB84 (-RmpMemoryMonitorGenerateHostListAndRevoke@@YAKPEAU_RM_PARTITION@@W4_RM_ACTIVITY_HOST_METRIC@@_K.c)
 * Callees:
 *     ?RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180004070 (-RmpActivityHostIsRevocable@@YAKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z @ 0x18005A9E0 (-RmpPolicyGetHostCommitForReclaim@@YA_KW4_RM_RECLAIM_POLICY@@PEBU_RM_ACTIVITY_HOST_METRICS@@@Z.c)
 *     ?RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z @ 0x18005ACCC (-RmpEmPriorityCompare@@YAJW4Enum@Priority@ExecutionModel@@0@Z.c)
 *     ?RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_REVOKE_POLICY@@PEAU_RM_POLICY_RECLAIM_CONTEXT@@@Z @ 0x1800887C4 (-RmpPolicyReclaimContextInitialize@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY_WORK_BUFFER@@_KW4_RM_RE.c)
 */

bool __fastcall RmpPolicyGenerateReclaimListForCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        unsigned int a6)
{
  unsigned int v6; // ebp
  unsigned __int64 v7; // rbx
  int v11; // edx
  int v12; // r12d
  unsigned int v13; // r13d
  unsigned __int64 v14; // r15
  __int64 v15; // rsi
  int v16; // r8d
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 HostCommitForReclaim; // rax
  int v20; // r10d
  __int64 v21; // r8
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  int v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+34h] [rbp-54h]
  __int128 Context; // [rsp+38h] [rbp-50h] BYREF
  __int64 v28; // [rsp+48h] [rbp-40h]
  unsigned int v29; // [rsp+98h] [rbp+10h]
  int v31; // [rsp+A8h] [rbp+20h]

  v6 = 0;
  v29 = 0;
  v7 = 0LL;
  Context = 0LL;
  v28 = 0LL;
  if ( *(_DWORD *)(a2 + 36) )
  {
    RmpPolicyReclaimContextInitialize(a1, a2, a4, a6, &Context);
    qsort_s(
      *(void **)a2,
      *(unsigned int *)(a2 + 36),
      0x40uLL,
      (_CoreCrtSecureSearchSortCompareFunction)RmpPolicyCompareActivityHostsByPriorityAndCommitQSortThunk,
      &Context);
    v26 = HIDWORD(Context);
    v31 = DWORD2(Context);
    switch ( HIDWORD(Context) )
    {
      case 0:
        v11 = *(_DWORD *)(a1 + 320);
        goto LABEL_8;
      case 1:
        v11 = a5;
        v12 = 1;
LABEL_9:
        v13 = *(_DWORD *)(a1 + 172);
        v25 = v11;
        while ( 1 )
        {
          if ( v6 >= *(_DWORD *)(a2 + 36) || a4 <= v7 )
          {
LABEL_31:
            v6 = v29;
            goto LABEL_32;
          }
          v14 = *(_QWORD *)a2 + ((unsigned __int64)v6 << 6);
          v15 = *(_QWORD *)(v14 + 48);
          if ( v15 != a3 )
            break;
LABEL_29:
          v11 = v25;
          ++v6;
        }
        if ( (int)RmpEmPriorityCompare(*(_DWORD *)(v14 + 56), v11) >= 0 )
          goto LABEL_31;
        if ( v16 == 1 )
        {
          if ( (*(_BYTE *)(v15 + 1168) & 0x10) == 0 )
            goto LABEL_31;
        }
        else if ( (unsigned int)(v16 - 2) >= 2 )
        {
          goto LABEL_19;
        }
        if ( !(unsigned int)RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v15) )
          goto LABEL_29;
LABEL_19:
        RmpActivityHostIsRevocable((struct _RM_ACTIVITY_HOST *)v15);
        v17 = *(_QWORD *)(a2 + 8);
        v18 = 3LL * v29++;
        *(_QWORD *)(v17 + 8 * v18 + 8) = v15;
        if ( v26 == 2 )
        {
          if ( v31 == 1 )
            goto LABEL_24;
          if ( v7 + *(_QWORD *)(v14 + 40) >= a4 )
          {
            *(_DWORD *)(v17 + 8 * v18 + 16) = 1;
            v23 = a4 - v7;
            v7 = a4;
            *(_QWORD *)(v17 + 8 * v18) = v23;
            goto LABEL_31;
          }
        }
        if ( v26 == 1 )
          *(_DWORD *)(v17 + 8 * v18 + 20) |= 1u;
LABEL_24:
        *(_DWORD *)(v17 + 8 * v18 + 16) = v12;
        HostCommitForReclaim = RmpPolicyGetHostCommitForReclaim(SHIDWORD(Context), (_QWORD *)v14);
        v7 += HostCommitForReclaim;
        *(_QWORD *)(v22 + 8 * v21) = HostCommitForReclaim;
        if ( !v12 && *(char *)(v15 + 1168) < 0 )
          --v13;
        if ( !v20 && v13 <= (unsigned int)v28 )
          goto LABEL_31;
        goto LABEL_29;
      case 2:
        v11 = a5;
LABEL_8:
        v12 = 0;
        goto LABEL_9;
    }
  }
LABEL_32:
  *(_DWORD *)(a2 + 40) = v6;
  return v7 >= a4;
}
