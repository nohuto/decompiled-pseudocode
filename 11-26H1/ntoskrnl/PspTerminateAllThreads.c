/*
 * XREFs of PspTerminateAllThreads @ 0x14095705C
 * Callers:
 *     NtTerminateProcess @ 0x1409566C0 (NtTerminateProcess.c)
 *     PspTerminateProcess @ 0x140956EB0 (PspTerminateProcess.c)
 * Callees:
 *     KeFlushProcessWriteBuffers @ 0x14025167C (KeFlushProcessWriteBuffers.c)
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExAcquireRundownProtection_0 @ 0x1402F0590 (ExAcquireRundownProtection_0.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     PspCatchCriticalBreak @ 0x1407FA818 (PspCatchCriticalBreak.c)
 *     PspGetPreviousProcessThread @ 0x1409572D8 (PspGetPreviousProcessThread.c)
 *     PsGetNextProcessThread @ 0x1409573A0 (PsGetNextProcessThread.c)
 *     PspTerminateThreadByPointer @ 0x1409575E0 (PspTerminateThreadByPointer.c)
 *     DbgkClearProcessDebugObject @ 0x140957E88 (DbgkClearProcessDebugObject.c)
 *     PspRundownSingleProcess @ 0x14095918C (PspRundownSingleProcess.c)
 */

__int64 __fastcall PspTerminateAllThreads(PRKPROCESS PROCESS, __int64 a2, unsigned int a3, unsigned int a4)
{
  struct _KPROCESS *v8; // r13
  __int64 PreviousProcessThread; // rbp
  unsigned int v10; // ebx
  unsigned int v11; // esi
  int v12; // r12d
  __int64 i; // rax
  PVOID v14; // rbp
  void *v15; // rax
  ULONG v16; // edx
  __int64 ProcessServerSilo; // rax
  PVOID Object; // [rsp+70h] [rbp+8h]

  if ( (PROCESS[1].DirectoryTableBase & 0x200000000000LL) != 0 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)PROCESS);
    PspCatchCriticalBreak(0, PROCESS, (const char *)&PROCESS[1].SecureState, ProcessServerSilo, a3);
  }
  v8 = *(struct _KPROCESS **)(a2 + 184);
  PreviousProcessThread = PspGetPreviousProcessThread(PROCESS, 0LL);
  v10 = a4 & 4 | (2 * (a4 & 1)) | (a4 >> 1) & 1;
  v11 = 290;
  if ( PreviousProcessThread )
  {
    if ( (v10 & 1) != 0 )
    {
      v11 = -1073741558;
      v16 = 1850045264;
      v15 = (void *)PreviousProcessThread;
    }
    else
    {
      Object = (PVOID)PreviousProcessThread;
      v11 = 0;
      ObfReferenceObjectWithTag((PVOID)PreviousProcessThread, 0x65547350u);
      v12 = 0;
      do
      {
        if ( PreviousProcessThread != a2 )
        {
          if ( (v10 & 4) != 0 )
          {
            v10 = v10 & 0xFFFFFFF7 | (*(_DWORD *)(PreviousProcessThread + 1444) >> 3) & 8;
          }
          else if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(PreviousProcessThread + 1416)) )
          {
            v10 |= 8u;
          }
          else
          {
            v10 = (v10 & 0xFFFFFFEF ^ (16
                                     * (unsigned __int8)_interlockedbittestandset(
                                                          (volatile signed __int32 *)(PreviousProcessThread + 1440),
                                                          0xFu))) & 0xFFFFFFF7;
          }
          if ( (v10 & 8) != 0 )
          {
            ++v12;
            PspTerminateThreadByPointer(PreviousProcessThread, a3, 0LL);
          }
        }
        PreviousProcessThread = PspGetPreviousProcessThread(PROCESS, PreviousProcessThread);
      }
      while ( PreviousProcessThread );
      if ( v12 && PROCESS == v8 )
        KeFlushProcessWriteBuffers(0LL);
      for ( i = PsGetNextProcessThread(PROCESS, 0LL); ; i = PsGetNextProcessThread(PROCESS, v14) )
      {
        v14 = (PVOID)i;
        if ( i != a2 && (v10 & 4) == 0 && (*(_DWORD *)(i + 1440) & 0x8000) == 0 )
          ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(i + 1416));
        if ( v14 == Object )
          break;
      }
      ObfDereferenceObjectWithTag(v14, 0x6E457350u);
      v15 = Object;
      v16 = 1700033360;
    }
    ObfDereferenceObjectWithTag(v15, v16);
    if ( (v10 & 2) != 0 && *(PRKPROCESS *)(a2 + 544) == PROCESS )
      PspTerminateThreadByPointer(a2, a3, 0LL);
  }
  if ( PROCESS != v8 && a3 == 1073807364 )
    DbgkClearProcessDebugObject(PROCESS);
  if ( (v11 == 290 || PROCESS[1].UserTime && PROCESS != v8)
    && !(unsigned __int8)PspRundownSingleProcess(PROCESS)
    && v11 == 290 )
  {
    return (unsigned int)-1073741558;
  }
  return v11;
}
