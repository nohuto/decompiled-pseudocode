/*
 * XREFs of TpAllocWait @ 0x18004F460
 * Callers:
 *     RtlRegisterWait @ 0x18004EEB0 (RtlRegisterWait.c)
 *     EtwpRegisterTpNotificationOnce @ 0x1800700DC (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180070714 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18003FC58 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x18004D8A0 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x18004EB90 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180067FF8 (TppRaiseInvalidParameter.c)
 *     NtClose @ 0x18015F120 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x180160970 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

__int64 __fastcall TpAllocWait(__int64 *a1, __int64 a2, int a3, __int64 a4)
{
  __int64 Heap_0; // rbx
  int WaitCompletionPacket; // esi
  int v10; // r9d
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r15
  _BYTE *v15; // r13
  unsigned __int8 Number; // cl
  int v17; // r12d
  unsigned __int16 Group; // r9
  int v19; // eax
  unsigned int i; // edx
  __int64 v21; // rax
  __int64 v22; // rax
  void *v24; // rcx
  __int64 v25; // rcx
  unsigned __int16 v26; // [rsp+30h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  int v28; // [rsp+70h] [rbp+8h] BYREF

  if ( !a1 || !a2 || a4 && (*(_DWORD *)(a4 + 56) & 0xFFFFFFFC) != 0 || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return 3221225485LL;
  }
  else
  {
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      *(_QWORD *)(Heap_0 + 176) = retaddr;
      WaitCompletionPacket = NtCreateWaitCompletionPacket(Heap_0 + 368, 1LL, 0LL);
      if ( WaitCompletionPacket < 0
        || (!a4 ? (v10 = 0) : (v10 = *(_DWORD *)(a4 + 56)),
            WaitCompletionPacket = TppWorkInitialize(
                                     Heap_0,
                                     a3,
                                     a4,
                                     v10,
                                     (__int64)TppWaitpCleanupGroupMemberVFuncs,
                                     (__int64)TppWaitpTaskVFuncs),
            WaitCompletionPacket < 0) )
      {
        v24 = *(void **)(Heap_0 + 368);
        if ( v24 )
          NtClose(v24);
        RtlFreeHeap_0();
      }
      else
      {
        v11 = *(_QWORD *)(Heap_0 + 144);
        v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v11 + 432), 1u);
        v13 = (unsigned int)(v12 + 1);
        if ( v12 <= 0 && (int)v13 > 0 )
        {
          v25 = *(_QWORD *)(v11 + 56);
          v28 = 1;
          NtSetInformationWorkerFactory(v25, 3LL, &v28, 4LL);
        }
        *(_QWORD *)(Heap_0 + 240) = 0LL;
        *(_BYTE *)(Heap_0 + 353) = 1;
        if ( a4 )
          *(_QWORD *)(Heap_0 + 32) = *(_QWORD *)(a4 + 48);
        if ( *(_QWORD *)(Heap_0 + 16) )
          TppCleanupGroupAddMember(Heap_0, v13);
        v14 = *(_QWORD *)(Heap_0 + 144);
        *(_QWORD *)(Heap_0 + 448) = TppWaitCompletion;
        WaitCompletionPacket = 0;
        v15 = (_BYTE *)(Heap_0 + 460);
        if ( v14 )
        {
          Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
          v17 = TppNumberNodes;
          LOBYTE(v28) = Number;
          Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
          v19 = *(_DWORD *)(v14 + 440);
          v26 = Group;
          if ( !v19 )
            v19 = MEMORY[0x7FFE03C0];
          if ( *(_DWORD *)(v14 + 424) != v19 )
          {
            RtlAcquireSRWLockExclusive((volatile signed __int64 *)(v14 + 72), v13);
            TppAdjustRunningThreadGoalWithLock(v14);
            RtlReleaseSRWLockExclusive((volatile signed __int64 *)(v14 + 72));
            Number = v28;
            Group = v26;
          }
          for ( i = 0; i < TppNumberNodes; ++i )
          {
            v21 = *(_QWORD *)(v14 + 48);
            if ( *(_WORD *)(v21 + 16LL * (Group + TppMaximumGroups * i) + 8) == Group )
            {
              v22 = *(_QWORD *)(v21 + 16LL * (Group + TppMaximumGroups * i));
              if ( _bittest64(&v22, Number) )
              {
                v17 = i;
                break;
              }
            }
          }
          *(_DWORD *)(Heap_0 + 456) = v17;
          if ( Heap_0 != -460 )
            *v15 = v28;
        }
        else
        {
          *(_DWORD *)(Heap_0 + 456) = 0;
          *v15 = 0;
        }
        *(_QWORD *)(Heap_0 + 424) = 0LL;
        *(_QWORD *)(Heap_0 + 440) = Heap_0 + 432;
        *(_QWORD *)(Heap_0 + 432) = Heap_0 + 432;
        *(_QWORD *)(Heap_0 + 392) = TppDirectTaskVFuncs;
        *(_DWORD *)(Heap_0 + 400) = *(_DWORD *)(Heap_0 + 456);
        *(_BYTE *)(Heap_0 + 404) = *(_BYTE *)(Heap_0 + 460);
        *(_QWORD *)(Heap_0 + 80) = a2;
        *a1 = Heap_0;
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
    return (unsigned int)WaitCompletionPacket;
  }
}
