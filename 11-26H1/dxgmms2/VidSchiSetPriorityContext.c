/*
 * XREFs of VidSchiSetPriorityContext @ 0x140046788
 * Callers:
 *     VidSchSubmitGlobalCommand @ 0x140108A8C (VidSchSubmitGlobalCommand.c)
 *     VidSchSubmitPagingCommand @ 0x1401092D8 (VidSchSubmitPagingCommand.c)
 *     VidSchSubmitCommand @ 0x14010A830 (VidSchSubmitCommand.c)
 *     VidSchSetPriorityContext @ 0x14011A270 (VidSchSetPriorityContext.c)
 *     VidSchSetAbsolutePriorityContext @ 0x140122F90 (VidSchSetAbsolutePriorityContext.c)
 * Callees:
 *     ?VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z @ 0x140026CDC (-VidSchiStopExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K1@Z.c)
 *     ?VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z @ 0x1400361B0 (-VidSchiUpdateReadyBitsInNewPriority@@YAXPEAU_VIDSCH_NODE@@PEAU_VIDSCH_CONTEXT@@@Z.c)
 *     ?VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z @ 0x14003761C (-VidSchiStartExecutionTimeAtThisPriority@@YAXPEAU_VIDSCH_NODE@@K_K@Z.c)
 *     McTemplateK0pqqtttt_EtwWriteTransfer @ 0x140046074 (McTemplateK0pqqtttt_EtwWriteTransfer.c)
 *     VidSchiNotifyContextPriorityChange @ 0x14011B854 (VidSchiNotifyContextPriorityChange.c)
 */

void __fastcall VidSchiSetPriorityContext(struct _VIDSCH_CONTEXT *a1, unsigned int a2)
{
  unsigned __int64 v2; // rsi
  __int64 v3; // r12
  char v5; // bl
  char v6; // bp
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rcx
  unsigned __int64 *v10; // rbx
  __int64 v11; // rax
  unsigned __int64 **v12; // rcx
  unsigned __int64 v13; // rcx
  unsigned __int64 **v14; // rax
  __int64 v15; // rcx
  __int64 QuadPart; // rbx
  struct _VIDSCH_CONTEXT *v18; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-48h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+A0h] [rbp+8h] BYREF

  v2 = *((_QWORD *)a1 + 12);
  v3 = a2;
  v5 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(v2 + 24);
  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 2016), &LockHandle);
  if ( *((_DWORD *)a1 + 102) != (_DWORD)v3 )
  {
    v8 = *((unsigned int *)a1 + 103);
    v9 = gulPriorityToPriorityClass[v3];
    *((_DWORD *)a1 + 103) = gulPublicPriorityToSchedulingPriority[v3];
    *((_DWORD *)a1 + 102) = v3;
    *((_QWORD *)a1 + 60) = *(_QWORD *)(v7 + 8 * v9 + 2912);
    *((_QWORD *)a1 + 61) = *(_QWORD *)(v7 + 8 * v9 + 2960);
    if ( (*((_DWORD *)a1 + 48) & 2) == 0 )
      *((_QWORD *)a1 + 56) = *((_QWORD *)a1 + 60);
    if ( (_DWORD)v8 != *((_DWORD *)a1 + 103) )
    {
      v6 = 1;
      if ( (*((_DWORD *)a1 + 48) & 1) != 0 )
      {
        v10 = (unsigned __int64 *)((char *)a1 + 8);
        v11 = *((_QWORD *)a1 + 1);
        if ( *(struct _VIDSCH_CONTEXT **)(v11 + 8) != (struct _VIDSCH_CONTEXT *)((char *)a1 + 8)
          || (v12 = (unsigned __int64 **)*((_QWORD *)a1 + 2), *v12 != v10)
          || (*v12 = (unsigned __int64 *)v11,
              *(_QWORD *)(v11 + 8) = v12,
              VidSchiUpdateReadyBitsInNewPriority((struct _VIDSCH_NODE *)v2, a1),
              v13 = v2 + 16LL * *((unsigned int *)a1 + 103) + 2184,
              v14 = *(unsigned __int64 ***)(v13 + 8),
              *v14 != (unsigned __int64 *)v13) )
        {
          __fastfail(3u);
        }
        *((_QWORD *)a1 + 2) = v14;
        *v10 = v13;
        *v14 = v10;
        *(_QWORD *)(v13 + 8) = v10;
        if ( *(_QWORD *)(v2 + 16 * v8 + 2184) == v2 + 16 * v8 + 2184 )
          *(_DWORD *)(v2 + 1888) &= ~(1 << v8);
        v5 = 1;
      }
      if ( (*((_DWORD *)a1 + 48) & 2) != 0 )
      {
        ++*(_DWORD *)(v2 + 4LL * *((unsigned int *)a1 + 103) + 1896);
        v15 = *((unsigned int *)a1 + 103);
        if ( *(_DWORD *)(v2 + 4 * v15 + 1896) == 1 )
          *(_DWORD *)(v2 + 1892) |= 1 << v15;
        if ( (*(_DWORD *)(v2 + 4 * v8 + 1896))-- == 1 )
          *(_DWORD *)(v2 + 1892) &= ~(1 << v8);
        if ( *(struct _VIDSCH_CONTEXT **)(v2 + 8LL * *(unsigned int *)(v2 + 1576) + 1584) == a1 )
        {
          PerformanceFrequency.QuadPart = 0LL;
          QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
          VidSchiStopExecutionTimeAtThisPriority(v2, v8, QuadPart, PerformanceFrequency.QuadPart);
          VidSchiStartExecutionTimeAtThisPriority((struct _VIDSCH_NODE *)v2, *((_DWORD *)a1 + 103), QuadPart);
        }
        v5 = 1;
      }
      if ( (byte_14008A201 & 1) != 0 )
      {
        v18 = (struct _VIDSCH_CONTEXT *)*((_QWORD *)a1 + 7);
        if ( !v18 || (*((_DWORD *)a1 + 28) & 0x40) != 0 )
          v18 = a1;
        McTemplateK0pqqtttt_EtwWriteTransfer(
          *(unsigned __int8 *)(v7 + 7077),
          *(unsigned __int8 *)(v7 + 7079),
          *(unsigned __int8 *)(v7 + 7078),
          v18,
          *((_DWORD *)a1 + 102),
          *((_DWORD *)a1 + 103),
          *(unsigned __int8 *)(v7 + 7076),
          *(unsigned __int8 *)(v7 + 7078),
          *(unsigned __int8 *)(v7 + 7079),
          *(unsigned __int8 *)(v7 + 7077));
      }
      if ( v5 )
      {
        *(_QWORD *)(v7 + 1496) = MEMORY[0xFFFFF78000000320];
        KeSetEvent((PRKEVENT)(v7 + 1464), 0, 0);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
    VidSchiNotifyContextPriorityChange(a1);
}
