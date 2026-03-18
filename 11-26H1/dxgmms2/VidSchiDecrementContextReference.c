/*
 * XREFs of VidSchiDecrementContextReference @ 0x140026270
 * Callers:
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1400269F0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiProcessDpcSystemRequest @ 0x140028570 (VidSchiProcessDpcSystemRequest.c)
 *     VidSchiReportHwHang @ 0x140048588 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1400E8CE0 (VidSchiRun_PriorityTable.c)
 *     VidSchTerminateContext @ 0x140116930 (VidSchTerminateContext.c)
 *     VidSchiTerminateNode @ 0x140124F40 (VidSchiTerminateNode.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     ?VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z @ 0x140026504 (-VidSchiFlushGpuWorkEntries@@YAXPEAU_VIDSCH_CONTEXT@@@Z.c)
 */

void __fastcall VidSchiDecrementContextReference(struct _VIDSCH_CONTEXT *a1, int a2)
{
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rdx
  struct _VIDSCH_CONTEXT **v7; // rcx
  __int64 v8; // rdx
  struct _VIDSCH_CONTEXT **v9; // rax
  __int64 v10; // rax
  void *v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // r8
  _QWORD *v14; // rdx
  __int64 v15; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  __int128 v17; // [rsp+38h] [rbp-30h]
  __int64 v18; // [rsp+48h] [rbp-20h]

  v4 = *(_QWORD *)(*((_QWORD *)a1 + 12) + 24LL);
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 2016), &LockHandle);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)a1 + 18, 0xFFFFFFFF) == 1 )
  {
    v5 = *((_QWORD *)a1 + 12);
    if ( *(struct _VIDSCH_CONTEXT **)(v5 + 224) == a1 )
      *(_QWORD *)(v5 + 224) = 0LL;
    v6 = *((_QWORD *)a1 + 1);
    if ( *(struct _VIDSCH_CONTEXT **)(v6 + 8) == (struct _VIDSCH_CONTEXT *)((char *)a1 + 8) )
    {
      v7 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 2);
      if ( *v7 == (struct _VIDSCH_CONTEXT *)((char *)a1 + 8) )
      {
        *v7 = (struct _VIDSCH_CONTEXT *)v6;
        *(_QWORD *)(v6 + 8) = v7;
        v8 = *((_QWORD *)a1 + 3);
        if ( *(struct _VIDSCH_CONTEXT **)(v8 + 8) == (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
        {
          v9 = (struct _VIDSCH_CONTEXT **)*((_QWORD *)a1 + 4);
          if ( *v9 == (struct _VIDSCH_CONTEXT *)((char *)a1 + 24) )
          {
            *v9 = (struct _VIDSCH_CONTEXT *)v8;
            *(_QWORD *)(v8 + 8) = v9;
            while ( 1 )
            {
              v10 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 2024, (char *)a1 + 720, (char *)a1 + 736);
              if ( !v10 )
                break;
              ExFreePoolWithTag((PVOID)(v10 - 8), 0);
            }
            if ( (*((_DWORD *)a1 + 28) & 0x100) != 0 )
            {
              while ( 1 )
              {
                v15 = VidSchiInterlockedRemoveHeadListIfExist(v4 + 2024, (char *)a1 + 744, (char *)a1 + 760);
                if ( !v15 )
                  break;
                ExFreePoolWithTag((PVOID)(v15 - 8), 0);
              }
            }
            if ( bTracingEnabled )
              VidSchiFlushGpuWorkEntries(a1);
            v11 = (void *)*((_QWORD *)a1 + 125);
            if ( v11 )
              ExFreePoolWithTag(v11, 0);
            v12 = *((_QWORD *)a1 + 13);
            v17 = 0LL;
            v18 = 0LL;
            if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + 32), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
              goto LABEL_23;
            v13 = *(_QWORD *)(v12 + 112);
            if ( *(_QWORD *)(v13 + 8) == v12 + 112 )
            {
              v14 = *(_QWORD **)(v12 + 120);
              if ( *v14 == v12 + 112 )
              {
                *v14 = v13;
                *(_QWORD *)(v13 + 8) = v14;
                ExFreePoolWithTag((PVOID)v12, 0);
LABEL_23:
                ExFreePoolWithTag(a1, 0);
                goto LABEL_4;
              }
            }
          }
        }
      }
    }
    __fastfail(3u);
  }
LABEL_4:
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
}
