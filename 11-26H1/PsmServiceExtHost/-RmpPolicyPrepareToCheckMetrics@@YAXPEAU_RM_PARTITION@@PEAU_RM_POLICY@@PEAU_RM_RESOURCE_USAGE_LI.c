/*
 * XREFs of ?RmpPolicyPrepareToCheckMetrics@@YAXPEAU_RM_PARTITION@@PEAU_RM_POLICY@@PEAU_RM_RESOURCE_USAGE_LIMITS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x180005744
 * Callers:
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18006CE8C (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ @ 0x1800889BC (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJXZ.c)
 *     ?RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x18008A39C (-RmpMemoryMonitorCheckAndApplyActiveLowPriPolicy@@YAXPEAU_RM_MEMORY_MONITOR_DATA@@PEAU_RM_RESOUR.c)
 *     ?RmpMemoryMonitorWorker@@YAKPEAX@Z @ 0x18008A7F0 (-RmpMemoryMonitorWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ?RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU_RM_SYSTEM_MEMORY_METRICS@@_KPEAU_RM_RESOURCE_USAGE_LIMITS@@@Z @ 0x1800058E0 (-RmpPolicyComputeUsageLimits@@YAXPEAU_RM_USAGE_LIMIT_SETTINGS@@PEAU_RM_REMEDIATION_ACTIONS@@PEAU.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 */

void __fastcall RmpPolicyPrepareToCheckMetrics(
        struct _RM_PARTITION *a1,
        struct _RM_POLICY *a2,
        struct _RM_RESOURCE_USAGE_LIMITS *a3,
        struct _RM_SYSTEM_MEMORY_METRICS *a4)
{
  __int64 v8; // rsi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rbx
  __int64 PageCount64; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  char *v14; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v20; // [rsp+40h] [rbp-C0h]
  __int128 v21; // [rsp+50h] [rbp-B0h]
  __int128 v22; // [rsp+60h] [rbp-A0h]
  __int128 v23; // [rsp+70h] [rbp-90h]
  _BYTE v24[4]; // [rsp+80h] [rbp-80h] BYREF
  int v25; // [rsp+84h] [rbp-7Ch]
  int v26; // [rsp+88h] [rbp-78h]
  __int64 v27; // [rsp+98h] [rbp-68h]
  __int64 v28; // [rsp+A0h] [rbp-60h]
  __int64 v29; // [rsp+B0h] [rbp-50h]
  __int64 v30; // [rsp+C0h] [rbp-40h]
  __int64 v31; // [rsp+C8h] [rbp-38h]
  _BYTE v32[64]; // [rsp+D8h] [rbp-28h] BYREF
  char v33; // [rsp+118h] [rbp+18h] BYREF
  __int64 v34; // [rsp+158h] [rbp+58h]

  memset_0(a3, 0, 0x80uLL);
  memset_0(v24, 0, 0xF8uLL);
  v25 = -1;
  v26 = -1;
  NtManagePartition(-2LL, 0LL, 0LL, v24, 248);
  v8 = 0LL;
  v9 = RmpPageSize * v34;
  v10 = RmpPageSize * v29;
  *(_QWORD *)&v21 = 0LL;
  *((_QWORD *)&v23 + 1) = 0LL;
  *((_QWORD *)&v19 + 1) = RmpPageSize * v28;
  *(_QWORD *)&v19 = RmpPageSize * v34;
  *((_QWORD *)&v20 + 1) = RmpPageSize * v28 - RmpPageSize * v27;
  *(_QWORD *)&v20 = RmpPageSize * v27;
  *((_QWORD *)&v21 + 1) = RmpPageSize * v29;
  PageCount64 = SwGetPageCount64(v32, 0LL, 5LL);
  v12 = 8LL;
  v13 = PageCount64 + v30 + v31;
  v14 = &v33;
  *(_QWORD *)&v22 = RmpPageSize * v13;
  *((_QWORD *)&v22 + 1) = v10 - RmpPageSize * v13;
  do
  {
    v8 += *(_QWORD *)v14;
    v14 += 8;
    --v12;
  }
  while ( v12 );
  *(_QWORD *)&v23 = v8;
  RmpPolicyComputeUsageLimits(
    a2,
    (struct _RM_POLICY *)((char *)a2 + 56),
    (struct _RM_SYSTEM_MEMORY_METRICS *)&v19,
    v9,
    a3);
  if ( a4 )
  {
    v15 = v20;
    *(_OWORD *)a4 = v19;
    v16 = v21;
    *((_OWORD *)a4 + 1) = v15;
    v17 = v22;
    *((_OWORD *)a4 + 2) = v16;
    v18 = v23;
    *((_OWORD *)a4 + 3) = v17;
    *((_OWORD *)a4 + 4) = v18;
  }
  *((_WORD *)a1 + 82) = 0;
}
