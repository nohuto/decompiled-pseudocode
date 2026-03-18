/*
 * XREFs of VidMmSuspendDevices @ 0x14010107C
 * Callers:
 *     VidMmHandleRecoverablePageInFailure @ 0x14010048C (VidMmHandleRecoverablePageInFailure.c)
 * Callees:
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Suspend@VIDMM_DEVICE@@QEAAX_N0@Z @ 0x140100468 (-Suspend@VIDMM_DEVICE@@QEAAX_N0@Z.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1401016B4 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z @ 0x140102574 (-SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO@@QEAA_N_N@Z.c)
 *     ?FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ @ 0x1401028B0 (-FaultAllAllocations@VIDMM_DEVICE@@QEAAXXZ.c)
 *     ??1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ @ 0x14010FC50 (--1VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR@@QEAA@XZ.c)
 *     ?FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM_PLACEMENT_RESTRICTION@@@Z @ 0x14011B504 (-FreeSpaceForSecureResource@VIDMM_SEGMENT@@QEAAEPEAU_LIST_ENTRY@@PEBUVIDMM_GLOBAL_ALLOC@@W4VIDMM.c)
 *     ?GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W4VIDMM_BUDGET_PRIORITY_BAND@@PEAPEAV2@@Z @ 0x14012540C (-GetDeviceToSuspend@VIDMM_SEGMENT@@QEAAPEAVVIDMM_DEVICE@@PEBV2@W4VIDMM_SUSPEND_CANDIDATE_PASS@@W.c)
 */

char __fastcall VidMmSuspendDevices(
        __int64 *a1,
        _DWORD **a2,
        __int64 a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v7; // r12
  char v9; // si
  __int64 v10; // r13
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v13; // r9
  LARGE_INTEGER v14; // rbx
  _DWORD *v15; // rdx
  unsigned int v16; // r15d
  __int64 v17; // r8
  unsigned int v18; // r12d
  int v19; // r13d
  unsigned int v20; // r14d
  char v21; // cl
  int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // eax
  __int64 v25; // rdi
  VIDMM_GLOBAL *v26; // rcx
  struct _LIST_ENTRY *v27; // rdi
  struct _LIST_ENTRY *v28; // rdx
  VIDMM_DEVICE *p_Blink; // rbx
  __int64 v30; // rax
  VIDMM_DEVICE *v31; // rdi
  VIDMM_PROCESS_ADAPTER_INFO *v32; // rcx
  __int64 v34; // [rsp+38h] [rbp-51h]
  __int64 v35; // [rsp+40h] [rbp-49h]
  struct _LIST_ENTRY *v36[2]; // [rsp+48h] [rbp-41h] BYREF
  LARGE_INTEGER v37; // [rsp+58h] [rbp-31h] BYREF
  _QWORD *v38; // [rsp+60h] [rbp-29h]
  char v39; // [rsp+68h] [rbp-21h]
  _BYTE v40[88]; // [rsp+70h] [rbp-19h] BYREF
  _DWORD *v41; // [rsp+D8h] [rbp+4Fh]

  v35 = *a1;
  v7 = v35;
  v9 = 1;
  v38 = a1 + 42;
  v39 = 1;
  v10 = a4;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ++*((_DWORD *)a1 + 94);
  v14 = PerformanceCounter;
  v15 = *a2;
  v37 = PerformanceCounter;
  v41 = v15;
  v16 = 0;
  v17 = *(_QWORD *)(*(_QWORD *)(v7 + 40320) + 8LL * ((v15[13] >> 2) & 0x3F));
  v34 = v17;
LABEL_2:
  if ( (signed int)v16 > *(_DWORD *)(v10 + 4) )
  {
    *v38 += *(_QWORD *)&KeQueryPerformanceCounter(0LL) - v14.QuadPart;
    return 0;
  }
  v18 = 0;
  v19 = v15[10];
  v20 = v15[11] == 0 ? 6 : 0;
  while ( 1 )
  {
    do
    {
      if ( !v19 )
      {
        v10 = a4;
        ++v16;
        goto LABEL_2;
      }
      if ( v20 > 5 )
      {
        v24 = v18;
        v23 = v18++;
        if ( !_bittest(&v19, v24) )
          goto LABEL_4;
      }
      else
      {
        v21 = 6 * v20++;
        v22 = (v15[11] >> v21) & 0x1F;
        if ( !v22 )
          goto LABEL_4;
        v23 = v22 - 1;
      }
      v19 &= ~(1 << v23);
      v25 = *(_QWORD *)(*(_QWORD *)(v17 + 1752) + 8LL * v23);
      if ( (*a2[46] & 0x20000) != 0 )
      {
        v16 = *(_DWORD *)(a4 + 4);
        v36[1] = (struct _LIST_ENTRY *)v36;
        v36[0] = (struct _LIST_ENTRY *)v36;
        DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
          (DXGAUTOPUSHLOCKEXCLUSIVE *)v40,
          (struct _KTHREAD **)(v35 + 45000));
        if ( (unsigned __int8)VIDMM_SEGMENT::FreeSpaceForSecureResource(v25, v36, a2, a6) )
        {
          if ( *(_DWORD *)(v25 + 420) )
          {
            v27 = v36[0];
            if ( (struct _LIST_ENTRY **)v36[0] == v36 )
            {
LABEL_27:
              v9 = 0;
            }
            else
            {
              do
              {
                v28 = v27;
                p_Blink = (VIDMM_DEVICE *)&v27[-12].Blink;
                v27 = v27->Flink;
                VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v26, v28);
                VIDMM_DEVICE::PartiallySuspend(p_Blink);
                VIDMM_DEVICE::FaultAllAllocations(p_Blink);
              }
              while ( v27 != (struct _LIST_ENTRY *)v36 );
            }
            DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
            goto LABEL_30;
          }
        }
        else
        {
          while ( (struct _LIST_ENTRY **)v36[0] != v36 )
            VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v26, v36[0]);
          if ( *(_DWORD *)(v25 + 420) )
            goto LABEL_27;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v40);
      }
      LOBYTE(v13.LowPart) = a5;
      v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))VIDMM_SEGMENT::GetDeviceToSuspend)(
              v25,
              a3,
              v16,
              (LARGE_INTEGER)v13.QuadPart,
              a7);
      v15 = v41;
      v31 = (VIDMM_DEVICE *)v30;
      v17 = v34;
    }
    while ( !v30 );
    if ( (*(_BYTE *)(v30 + 312) & 7) == 1 || v16 == 2 )
      break;
    v32 = *(VIDMM_PROCESS_ADAPTER_INFO **)(v30 + 16);
    if ( v32 )
    {
      if ( VIDMM_PROCESS_ADAPTER_INFO::SuspendAllDevices(v32, 0) )
        goto LABEL_30;
      v17 = v34;
LABEL_4:
      v15 = v41;
    }
  }
  VIDMM_DEVICE::Suspend((VIDMM_DEVICE *)v30, 1, 1);
  VIDMM_DEVICE::FaultAllAllocations(v31);
LABEL_30:
  VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR::~VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR((VIDMM_WORKER_THREAD_PAGING_TIME_ACCUMULATOR *)&v37);
  return v9;
}
