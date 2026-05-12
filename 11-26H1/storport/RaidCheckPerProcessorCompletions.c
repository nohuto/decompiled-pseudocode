/*
 * XREFs of RaidCheckPerProcessorCompletions @ 0x14002ACE0
 * Callers:
 *     RaidStartIoPacket @ 0x140005F70 (RaidStartIoPacket.c)
 * Callees:
 *     RaidUnitCompleteIrpRequest @ 0x140021CC0 (RaidUnitCompleteIrpRequest.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall RaidCheckPerProcessorCompletions(__int64 a1, unsigned __int16 *a2)
{
  __int64 v3; // rax
  unsigned int v4; // r8d
  char *v5; // rdx
  union _SLIST_HEADER *v6; // rbx
  union _SLIST_HEADER *v7; // rsi
  __int64 v8; // rdx
  PSLIST_ENTRY v9; // r14
  bool v10; // zf
  PSLIST_ENTRY v11; // rbp
  __int64 v12; // rbx
  PSLIST_ENTRY v13; // rbx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdx
  IRP *v17; // rcx

  if ( (*(_BYTE *)(a1 + 4724) & 1) != 0 )
  {
    v3 = *a2;
    if ( (unsigned int)v3 < g_RaidPerfRedirectGroupCount )
    {
      v4 = *((unsigned __int8 *)a2 + 2);
      if ( v4 < *((_DWORD *)g_RaidDPCRedirectionProcessors + v3) )
      {
        v5 = (char *)g_RaidPerProcessorState + 128 * (unsigned __int64)(v4 + ((_DWORD)v3 << 6));
        _InterlockedExchange((volatile __int32 *)v5 + 24, 1);
        v6 = (union _SLIST_HEADER *)(v5 + 64);
        v7 = (union _SLIST_HEADER *)(v5 + 80);
        if ( FirstEntrySList((PSLIST_HEADER)v5 + 4) )
        {
          v9 = ExpInterlockedFlushSList(v6);
          while ( v9 )
          {
            v10 = (BYTE1(v9[-1].Next) & 1) == 0;
            v11 = v9 - 2;
            v9 = v9->Next;
            if ( !v10 )
            {
              v12 = *((_QWORD *)&v11[13].Next + 1);
              PoFxIdleComponent(**(_QWORD **)(v12 + 5024), *((unsigned int *)&v11[46].Next + 3), 0LL);
              v8 = *(unsigned int *)(*(_QWORD *)(v12 + 5024) + 20LL);
              _InterlockedDecrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 5024) + 80LL));
              _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v12 + 5024) + 96LL));
              BYTE1(v11[1].Next) &= ~1u;
            }
            ((void (__fastcall *)(PSLIST_ENTRY, __int64))v11[41].Next)(v11, v8);
          }
        }
        if ( FirstEntrySList(v7) )
        {
          v13 = ExpInterlockedFlushSList(v7);
          while ( v13 )
          {
            v16 = *((_QWORD *)&v13[3].Next + 1);
            v17 = (IRP *)&v13[-8];
            v13 = v13->Next;
            RaidUnitCompleteIrpRequest(v17, *(_DWORD *)(v16 + 24), v14, v15);
          }
        }
        _InterlockedExchange(
          (volatile __int32 *)g_RaidPerProcessorState
        + 2048 * (unsigned __int64)*a2
        + 32 * *((unsigned __int8 *)a2 + 2)
        + 24,
          0);
      }
    }
  }
}
