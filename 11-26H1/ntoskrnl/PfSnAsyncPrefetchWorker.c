/*
 * XREFs of PfSnAsyncPrefetchWorker @ 0x1409887A0
 * Callers:
 *     <none>
 * Callees:
 *     KiUnstackDetachProcess @ 0x140232120 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402491E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     MmGetAvailablePagesBelowPriority @ 0x1403FF408 (MmGetAvailablePagesBelowPriority.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memcmp @ 0x140742350 (memcmp.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140983B38 (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchSharedInitialize @ 0x140988084 (PfpPrefetchSharedInitialize.c)
 *     PfpPrefetchSharedStart @ 0x1409880CC (PfpPrefetchSharedStart.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140988658 (PfSnPreallocatePrefetchHeader.c)
 *     PfSnLogAsyncWorker @ 0x140988B24 (PfSnLogAsyncWorker.c)
 *     PfSnPowerBoost @ 0x140988C2C (PfSnPowerBoost.c)
 *     PfSnAsyncContextCleanup @ 0x140988D60 (PfSnAsyncContextCleanup.c)
 *     PfSnCleanupPrefetchHeader @ 0x14098976C (PfSnCleanupPrefetchHeader.c)
 *     PfSnAsyncPrefetchStep @ 0x140A58E44 (PfSnAsyncPrefetchStep.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfSnAsyncPrefetchWorker(PVOID P)
{
  _DWORD *v1; // r14
  int v3; // r12d
  int v4; // r15d
  unsigned int v5; // ebx
  unsigned int v6; // esi
  unsigned int DefaultPagePriority; // eax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 AvailablePagesBelowPriority; // rax
  __int64 v12; // rax
  struct _KTHREAD *Pool2; // rax
  char v14; // bl
  __int64 v15; // r8
  __int64 v16; // rbx
  __int64 v17; // rcx
  int v18[4]; // [rsp+20h] [rbp-99h] BYREF
  _DWORD *v19; // [rsp+30h] [rbp-89h] BYREF
  struct _KTHREAD *v20; // [rsp+38h] [rbp-81h]
  _QWORD v21[2]; // [rsp+48h] [rbp-71h] BYREF
  _QWORD v22[7]; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v23; // [rsp+90h] [rbp-29h]
  unsigned int v24; // [rsp+94h] [rbp-25h]
  __int64 v25; // [rsp+98h] [rbp-21h]
  __int64 v26; // [rsp+A0h] [rbp-19h]
  int v27; // [rsp+A8h] [rbp-11h]
  _OWORD v28[3]; // [rsp+B0h] [rbp-9h] BYREF

  v1 = (_DWORD *)*((_QWORD *)P + 26);
  v18[0] = 0;
  v3 = 0;
  memset(v28, 0, sizeof(v28));
  v4 = 0;
  memset_0(&v19, 0, 0x80uLL);
  v5 = *((_DWORD *)P + 59);
  v21[1] = v21;
  v19 = v1;
  v21[0] = v21;
  v22[1] = v22;
  v22[0] = v22;
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Start);
  v6 = 1;
  if ( (*((_DWORD *)P + 60) & 1) != 0 )
  {
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
    v4 = 1;
  }
  KiStackAttachProcess(*((_KPROCESS **)P + 27), 0, (__int64)v28);
  DefaultPagePriority = MmGetDefaultPagePriority();
  if ( v5 <= DefaultPagePriority - 1 )
  {
    v23 = v5;
    v24 = v5;
  }
  else
  {
    v23 = DefaultPagePriority - 1;
    v24 = DefaultPagePriority;
  }
  if ( (int)PfSnPreallocatePrefetchHeader((__int64 *)&v19) >= 0 )
  {
    AvailablePagesBelowPriority = MmGetAvailablePagesBelowPriority(v24 + 1, v8, v9, v10);
    v12 = AvailablePagesBelowPriority < 0xF00 ? 0LL : AvailablePagesBelowPriority - 3840;
    v25 = v12;
    if ( v12 )
    {
      Pool2 = (struct _KTHREAD *)ExAllocatePool2(0x40uLL);
      v20 = Pool2;
      if ( Pool2 )
      {
        PfpPrefetchSharedInitialize((__int64)Pool2);
        v20->QuantumTarget = (unsigned __int64)&v19;
        HIDWORD(v20->StackBase) = 250;
        LODWORD(v20->StackBase) = 15;
        if ( (int)PfpPrefetchSharedStart((struct _LIST_ENTRY *)v20) >= 0
          && (int)PfSnOpenVolumesForPrefetch((__int64 *)&v19, v18) >= 0 )
        {
          v14 = v18[0];
          if ( v1[20] == 1 )
            v14 = LOBYTE(v18[0]) | 1;
          if ( (stru_140E66D40.AbCompletedIoQoSBoostCount & 4) != 0 )
          {
            v6 = 0;
            v14 &= ~2u;
            goto LABEL_20;
          }
          if ( (v14 & 1) != 0 )
          {
            v6 = v1[31];
            v15 = (unsigned int)((1 << v6) - 1);
            if ( 1 << v6 == 1 )
            {
LABEL_19:
              ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
              v3 = 1;
              PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
LABEL_20:
              if ( v6 < v1[31] && (v14 & 2) == 0 )
              {
                _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1632LL), 5000);
                while ( v6 < v1[31] && (int)PfSnAsyncPrefetchStep(P, &v19, (unsigned int)(1 << v6)) >= 0 )
                  ++v6;
              }
              goto LABEL_21;
            }
          }
          else
          {
            v15 = 1LL;
          }
          if ( (int)PfSnAsyncPrefetchStep(P, &v19, v15) < 0 )
            goto LABEL_21;
          goto LABEL_19;
        }
      }
    }
  }
LABEL_21:
  _InterlockedExchange((volatile __int32 *)(*((_QWORD *)P + 27) + 1632LL), 0);
  v16 = *((_QWORD *)P + 28);
  if ( v16 && !*(_QWORD *)(v16 + 472) && !memcmp((const void *)(v16 + 24), v1 + 4, 0x40uLL) )
  {
    *(_QWORD *)(v16 + 472) = v26;
    v17 = *((_QWORD *)P + 28);
    v26 = 0LL;
    *(_DWORD *)(v17 + 480) = v27;
  }
  PfSnCleanupPrefetchHeader(&v19);
  _InterlockedDecrement((volatile signed __int32 *)&stru_140E67200.ApcStateFill[40]);
  if ( v4 )
    PfSnPowerBoost((PEX_RUNDOWN_REF)P + 5);
  KiUnstackDetachProcess((__int64)v28, 0);
  if ( !v3 )
  {
    ExReleaseRundownProtection_0(*((PEX_RUNDOWN_REF *)P + 4));
    PfSnLogAsyncWorker(v1, PfSnEvt_SyncPrefetchingDone_Info);
  }
  PfSnLogAsyncWorker(v1, PfSnEvt_AsyncWorker_Stop);
  PfSnAsyncContextCleanup(P);
  ExFreePoolWithTag(P, 0);
}
