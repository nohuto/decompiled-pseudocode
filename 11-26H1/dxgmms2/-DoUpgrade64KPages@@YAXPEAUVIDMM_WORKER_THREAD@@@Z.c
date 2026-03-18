/*
 * XREFs of ?DoUpgrade64KPages@@YAXPEAUVIDMM_WORKER_THREAD@@@Z @ 0x140099884
 * Callers:
 *     VidMmWorkerThreadProc @ 0x140128480 (VidMmWorkerThreadProc.c)
 * Callees:
 *     McTemplateK0ppxx_EtwWriteTransfer @ 0x14003886C (McTemplateK0ppxx_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EE84 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?StartUpgradingAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7958 (-StartUpgradingAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A7EAC (-StopUpgradingAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400A8668 (-VidMmUpgradeAllocation@@YAJPEAUVIDMM_WORKER_THREAD@@PEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z @ 0x1400B4BC8 (-VidMmQueryAllocationContiguity@@YA_NPEBUVIDMM_PHYSICAL_ALLOC@@_K1PEA_K2@Z.c)
 *     ?VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@Z @ 0x14010C224 (-VidMmSetWorkerThreadTimeout@@YAXPEAUVIDMM_WORKER_THREAD@@_JW4VIDMM_WORKER_THREAD_WAKE_REASON@@@.c)
 */

void __fastcall DoUpgrade64KPages(struct VIDMM_WORKER_THREAD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  struct VIDMM_WORKER_THREAD *v4; // r13
  __int64 v5; // r15
  _QWORD *v6; // rdi
  __int64 v7; // rax
  const struct VIDMM_PHYSICAL_ALLOC **v8; // r14
  _QWORD *v9; // rax
  const struct VIDMM_PHYSICAL_ALLOC *v10; // rax
  unsigned __int64 v11; // rsi
  char v12; // r12
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r8
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rax
  struct VIDMM_GLOBAL_ALLOC *v22; // rdx
  unsigned __int64 v23[11]; // [rsp+40h] [rbp-58h] BYREF
  char v24; // [rsp+A0h] [rbp+8h]
  char v25; // [rsp+A8h] [rbp+10h]
  unsigned __int64 v26; // [rsp+B0h] [rbp+18h] BYREF
  unsigned __int64 v27; // [rsp+B8h] [rbp+20h]

  v3 = *(_QWORD *)a1;
  v4 = a1;
  LOBYTE(a1) = 0;
  v24 = 0;
  v25 = 0;
  v5 = v3 + 44680;
  while ( 1 )
  {
    v6 = *(_QWORD **)v5;
    if ( *(_QWORD *)v5 == v5 || (_BYTE)a1 || *(_QWORD *)(v3 + 44632) && !*(_QWORD *)(v3 + 44712) )
      break;
    if ( v6[1] != v5 || (v7 = *v6, *(_QWORD **)(*v6 + 8LL) != v6) )
LABEL_39:
      __fastfail(3u);
    *(_QWORD *)v5 = v7;
    v8 = (const struct VIDMM_PHYSICAL_ALLOC **)(v6 - 44);
    *(_QWORD *)(v7 + 8) = v5;
    *v6 = 0LL;
    v6[1] = 0LL;
    v9 = *(_QWORD **)(v3 + 44632);
    if ( v6 - 44 != v9 )
    {
      if ( v9 )
        VIDMM_GLOBAL::StopUpgradingAllocation((VIDMM_GLOBAL *)v3, (struct VIDMM_GLOBAL_ALLOC *)(v6 - 44));
      if ( VIDMM_GLOBAL::StartUpgradingAllocation((VIDMM_GLOBAL *)v3, (struct VIDMM_GLOBAL_ALLOC *)(v6 - 44)) < 0 )
      {
        VIDMM_GLOBAL::StopUpgradingAllocation((VIDMM_GLOBAL *)v3, (struct VIDMM_GLOBAL_ALLOC *)(v6 - 44));
        break;
      }
    }
    v10 = *v8;
    v11 = 0LL;
    v12 = 1;
    v23[0] = 0LL;
    v26 = 0LL;
    v13 = *((_QWORD *)v10 + 2);
    v27 = v13;
    if ( !*(_QWORD *)(v3 + 44712) )
      goto LABEL_18;
    v14 = *(_QWORD *)(v3 + 44608) >> 16;
    v24 = 1;
    v15 = VidMmUpgradeAllocation(v4, (struct VIDMM_GLOBAL_ALLOC *)(v6 - 44));
    *(_QWORD *)(v3 + 44712) = 0LL;
    if ( v15 < 0 )
    {
      v11 = v14;
      v26 = v14;
    }
    else
    {
      v12 = 0;
    }
    if ( v11 )
    {
LABEL_26:
      v21 = *(_QWORD **)v5;
      if ( *(_QWORD *)(*(_QWORD *)v5 + 8LL) != v5 )
        goto LABEL_39;
      LOBYTE(a1) = v24;
      *v6 = v21;
      v6[1] = v5;
      v21[1] = v6;
      *(_QWORD *)v5 = v6;
      if ( *(_QWORD *)(v3 + 44712) < v11 )
      {
        LOBYTE(a1) = 1;
        *(_QWORD *)(v3 + 44704) = v11;
        *(_QWORD *)(v3 + 44712) = 0LL;
        v24 = 1;
        if ( (byte_14008A201 & 1) != 0 )
        {
          McTemplateK0ppp_EtwWriteTransfer(
            (__int64)a1,
            &VidMmUpgradeAllocationRequestPages,
            a3,
            v6 - 44,
            *((_QWORD *)*v8 + 2),
            v11);
          LOBYTE(a1) = 1;
        }
        if ( !*(_BYTE *)(v3 + 44696) )
        {
          *(_BYTE *)(v3 + 44696) = 1;
          ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 44728), DelayedWorkQueue);
          v25 = 1;
          goto LABEL_33;
        }
      }
    }
    else
    {
      v13 = v27;
LABEL_18:
      while ( *(_QWORD *)(v3 + 44560) < v13 )
      {
        if ( v12 )
        {
          VidMmQueryAllocationContiguity(*v8, *(_QWORD *)(v3 + 44576), *(_QWORD *)(v3 + 44584), v23, &v26);
          v11 = v26;
          if ( v26 )
            goto LABEL_26;
          if ( (byte_14008A201 & 1) != 0 )
            McTemplateK0ppxx_EtwWriteTransfer(
              *(_QWORD *)(v3 + 44568) - *(_QWORD *)(v3 + 44560),
              &VidMmUpgradeAllocationChunkSkip,
              a3,
              v6 - 44,
              *(_QWORD *)(v3 + 44568) - *(_QWORD *)(v3 + 44560),
              *(_QWORD *)(v3 + 44576),
              *(_QWORD *)(v3 + 44560));
        }
        v16 = *(_QWORD *)(v3 + 44568);
        v17 = v13;
        v18 = *(_QWORD *)(v3 + 44584);
        v12 = 1;
        v19 = v16 + *(unsigned int *)(v3 + 44660);
        *(_QWORD *)(v3 + 44576) = v18;
        *(_QWORD *)(v3 + 44560) = v16;
        if ( v19 < v13 )
          v17 = v19;
        *(_QWORD *)(v3 + 44568) = v17;
        v20 = v17 - v16;
        *(_QWORD *)(v3 + 44608) = v20;
        ++*(_DWORD *)(v3 + 44648);
        *(_QWORD *)(v3 + 44584) = v20 + v18;
      }
      v22 = *(struct VIDMM_GLOBAL_ALLOC **)(v3 + 44632);
      *(_QWORD *)(v3 + 44560) = 0LL;
      *(_QWORD *)(v3 + 44568) = 0LL;
      VIDMM_GLOBAL::StopUpgradingAllocation((VIDMM_GLOBAL *)v3, v22);
      ++*(_DWORD *)(v3 + 44772);
LABEL_33:
      LOBYTE(a1) = v24;
    }
  }
  if ( !v25 && *(_QWORD *)(v3 + 44680) != v3 + 44680 )
  {
    LOBYTE(a3) = 9;
    VidMmSetWorkerThreadTimeout(v4, -170000LL, a3);
  }
}
