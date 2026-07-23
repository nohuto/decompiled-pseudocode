/*
 * XREFs of WheapPfaMemoryCheck @ 0x1408503FC
 * Callers:
 *     WheapPredictiveFailureAnalysis @ 0x140ACA4C8 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     MmGetPageBadStatus @ 0x1406F6FB0 (MmGetPageBadStatus.c)
 *     WheaAttemptPhysicalPageOffline @ 0x14084E3B0 (WheaAttemptPhysicalPageOffline.c)
 *     WheapExecuteRowFailureCheck @ 0x1408500C0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaLogPageMonitorRemoval @ 0x140850368 (WheapPfaLogPageMonitorRemoval.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1408506D4 (WheapPfaRetireExpiredMemoryEntries.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall WheapPfaMemoryCheck(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct _LIST_ENTRY *Blink; // rbx
  unsigned int v11; // ecx
  struct _LIST_ENTRY *Flink; // rax
  void **p_Flink; // rcx
  _QWORD *v14; // rcx
  void **v15; // rax
  unsigned int v16; // ecx
  struct _LIST_ENTRY *v17; // rax
  unsigned __int64 v18; // [rsp+60h] [rbp+8h] BYREF

  v18 = a1;
  if ( !*(_BYTE *)off_140E093D8 && (*(_BYTE *)a2 & 2) != 0 )
  {
    v4 = *(_QWORD *)(a2 + 16);
    v18 = v4;
    if ( !(unsigned int)MmGetPageBadStatus(&v18, a2, a3) )
    {
      v5 = v4 >> 12;
      v6 = MEMORY[0xFFFFF78000000008];
      WheapPfaRetireExpiredMemoryEntries(MEMORY[0xFFFFF78000000008]);
      if ( !WheapExecuteRowFailureCheck(v5, v7, v8, v9, a3) )
      {
        Blink = WheapPfaLock.Header.WaitListHead.Blink;
        v11 = 0;
        while ( Blink != (struct _LIST_ENTRY *)&WheapPfaLock.Header.WaitListHead.Blink )
        {
          Flink = Blink->Flink;
          if ( Blink[2].Blink == (struct _LIST_ENTRY *)v5 )
          {
            if ( Flink->Blink == Blink )
            {
              p_Flink = (void **)&Blink->Blink->Flink;
              if ( *p_Flink == Blink )
              {
                *p_Flink = Flink;
                Flink->Blink = (struct _LIST_ENTRY *)p_Flink;
                goto LABEL_19;
              }
            }
LABEL_23:
            __fastfail(3u);
          }
          ++v11;
          Blink = Blink->Flink;
        }
        if ( v11 >= *(_DWORD *)off_140E093F8 )
        {
          Blink = (struct _LIST_ENTRY *)WheapPfaLock.SListFaultAddress;
          v14 = *(_QWORD **)WheapPfaLock.SListFaultAddress;
          if ( *(void **)(*(_QWORD *)WheapPfaLock.SListFaultAddress + 8LL) != WheapPfaLock.SListFaultAddress )
            goto LABEL_23;
          v15 = (void **)*((_QWORD *)WheapPfaLock.SListFaultAddress + 1);
          if ( *v15 != WheapPfaLock.SListFaultAddress )
            goto LABEL_23;
          *v15 = v14;
          v14[1] = v15;
          WheapPfaLogPageMonitorRemoval((__int64)Blink, 3, v6);
        }
        else
        {
          Blink = (struct _LIST_ENTRY *)ExAllocatePool2(0x102uLL);
          if ( !Blink )
            return;
        }
        Blink->Flink = 0LL;
        Blink->Blink = 0LL;
        *(_DWORD *)((char *)&Blink[1].Flink + 2) = 0;
        HIWORD(Blink[1].Flink) = 0;
        LOWORD(Blink[1].Flink) = 0;
        Blink[1].Blink = (struct _LIST_ENTRY *)v6;
        Blink[2].Blink = (struct _LIST_ENTRY *)v5;
LABEL_19:
        v16 = (unsigned __int16)++LOWORD(Blink[1].Flink);
        Blink[2].Flink = (struct _LIST_ENTRY *)v6;
        if ( v16 >= *(_DWORD *)off_140E09418 )
        {
          WheapPfaLogPageMonitorRemoval((__int64)Blink, 1, v6);
          WheaAttemptPhysicalPageOffline(v5, 0, 0, 0, a3);
          ExFreePoolWithTag(Blink, 0x61656857u);
        }
        else
        {
          v17 = WheapPfaLock.Header.WaitListHead.Blink;
          if ( (struct _LIST_ENTRY **)WheapPfaLock.Header.WaitListHead.Blink->Blink != &WheapPfaLock.Header.WaitListHead.Blink )
            goto LABEL_23;
          Blink->Flink = WheapPfaLock.Header.WaitListHead.Blink;
          Blink->Blink = (struct _LIST_ENTRY *)&WheapPfaLock.Header.WaitListHead.Blink;
          v17->Blink = Blink;
          WheapPfaLock.Header.WaitListHead.Blink = Blink;
        }
      }
    }
  }
}
