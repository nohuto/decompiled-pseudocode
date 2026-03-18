/*
 * XREFs of PopInitSystemSleeperThread @ 0x140A03F00
 * Callers:
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     PsCreateSystemThreadEx @ 0x140A03170 (PsCreateSystemThreadEx.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopPushPowerStateTransitionRecord @ 0x140C09EE4 (PopPushPowerStateTransitionRecord.c)
 */

__int64 __fastcall PopInitSystemSleeperThread(LONG a1, struct _KEVENT *a2, _OWORD *a3)
{
  __int64 result; // rax
  int v6; // ebx
  HANDLE Handle; // [rsp+50h] [rbp-9h] BYREF
  HANDLE ProcessId[2]; // [rsp+58h] [rbp-1h] BYREF
  __int128 v9; // [rsp+68h] [rbp+Fh] BYREF
  __int64 v10; // [rsp+78h] [rbp+1Fh]
  __int64 v11; // [rsp+80h] [rbp+27h]
  __int128 v12; // [rsp+88h] [rbp+2Fh]
  PEPROCESS Process; // [rsp+C8h] [rbp+6Fh] BYREF
  PETHREAD Thread; // [rsp+D8h] [rbp+7Fh] BYREF

  a2[3].Header.LockNV = a1;
  *(_QWORD *)&v9 = 48LL;
  v11 = 512LL;
  Handle = 0LL;
  Process = 0LL;
  Thread = 0LL;
  *(_OWORD *)ProcessId = 0LL;
  KeInitializeEvent(a2, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 1, SynchronizationEvent, 0);
  KeInitializeEvent(a2 + 2, SynchronizationEvent, 0);
  *((_QWORD *)&v9 + 1) = 0LL;
  v10 = 0LL;
  v12 = 0LL;
  result = PsCreateSystemThreadEx(
             (__int64)&Handle,
             0,
             &v9,
             0LL,
             ProcessId,
             (__int64)PopTransitionToSleep,
             (__int64)a2,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    ZwClose(Handle);
    PsLookupProcessByProcessId(ProcessId[0], &Process);
    PsLookupThreadByThreadId(ProcessId[1], &Thread);
    v6 = PopPushPowerStateTransitionRecord(Process, Thread);
    KeWaitForSingleObject(a2, Executive, 0, 0, 0LL);
    if ( v6 >= 0 )
      PoDelistPowerStateTransitionBlocker();
    if ( Process )
      ObfDereferenceObject(Process);
    if ( Thread )
      ObfDereferenceObject(Thread);
    result = 0LL;
    *a3 = *(_OWORD *)ProcessId;
  }
  return result;
}
