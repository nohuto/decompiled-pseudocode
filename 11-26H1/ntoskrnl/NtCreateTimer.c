/*
 * XREFs of NtCreateTimer @ 0x140B574F0
 * Callers:
 *     DifNtCreateTimerWrapper @ 0x1406743A0 (DifNtCreateTimerWrapper.c)
 * Callees:
 *     KeInitializeDpc @ 0x140481A50 (KeInitializeDpc.c)
 *     KeInitializeTimerEx @ 0x1404A5F90 (KeInitializeTimerEx.c)
 *     PsInsertVirtualizedTimer @ 0x1404B8CC4 (PsInsertVirtualizedTimer.c)
 *     RtlReadULong64FromUser @ 0x14077F554 (RtlReadULong64FromUser.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     ObCreateObjectEx @ 0x1408FD7D0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14092B470 (ObInsertObjectEx.c)
 */

__int64 __fastcall NtCreateTimer(_QWORD *a1, unsigned int a2, __int64 a3, TIMER_TYPE a4)
{
  char PreviousMode; // di
  __int64 ULong64FromUser; // rax
  int inserted; // ebx
  PVOID v12; // rbx
  _KPROCESS *Process; // rcx
  __int64 v14; // [rsp+20h] [rbp-68h]
  PVOID DeferredContext; // [rsp+58h] [rbp-30h] BYREF
  __int64 v16; // [rsp+60h] [rbp-28h] BYREF

  DeferredContext = 0LL;
  v16 = 0LL;
  if ( (unsigned int)a4 > SynchronizationTimer )
    return 3221225714LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ULong64FromUser = RtlReadULong64FromUser(a1);
    RtlWriteULong64ToUser(a1, ULong64FromUser);
  }
  inserted = ObCreateObjectEx(
               PreviousMode,
               (_DWORD *)ExTimerObjectType,
               a3,
               PreviousMode,
               v14,
               336,
               0,
               0,
               &DeferredContext,
               0LL);
  if ( inserted >= 0 )
  {
    v12 = DeferredContext;
    KeInitializeDpc((PRKDPC)((char *)DeferredContext + 160), (PKDEFERRED_ROUTINE)ExpTimerDpcRoutine, DeferredContext);
    KeInitializeTimerEx((PKTIMER)v12, a4);
    *((_QWORD *)v12 + 8) = 0LL;
    *((_BYTE *)v12 + 304) = 0;
    *((_QWORD *)v12 + 32) = 0LL;
    *((_QWORD *)v12 + 33) = 0LL;
    *((_QWORD *)v12 + 35) = 0LL;
    if ( PreviousMode )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( (*(_DWORD *)&Process->0 & 0x10) != 0 )
        PsInsertVirtualizedTimer(
          (KSPIN_LOCK *)Process,
          (_QWORD *)v12 + 36,
          (KSPIN_LOCK *)v12 + 8,
          (KSPIN_LOCK **)v12 + 35);
    }
    inserted = ObInsertObjectEx((char *)v12, 0LL, a2, 0, 0, 0LL, &v16);
    LODWORD(DeferredContext) = inserted;
    if ( inserted >= 0 )
    {
      if ( PreviousMode )
        RtlWriteULong64ToUser(a1, v16);
      else
        *a1 = v16;
    }
  }
  return (unsigned int)inserted;
}
