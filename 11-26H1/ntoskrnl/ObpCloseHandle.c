/*
 * XREFs of ObpCloseHandle @ 0x1408F9C70
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C3270 (ObCloseHandleWithResult.c)
 *     ObCloseHandle @ 0x140A00740 (ObCloseHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     ExHandleLogBadReference @ 0x14046C9F0 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x140485264 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x140529EA0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1408FAEC4 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x1408FAF00 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x1408FAF70 (ObCloseHandleTableEntry2.c)
 *     ObReferenceProcessHandleTable @ 0x1409717D0 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObpCloseHandle(ULONG_PTR BugCheckParameter1, __int64 a2, signed __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v4; // r13
  char v5; // r12
  ULONG_PTR v6; // rbp
  _KPROCESS *Process; // r15
  PEPROCESS v8; // r14
  __int64 KernelTime; // rdi
  signed __int64 *v10; // rbx
  unsigned int v11; // ebx
  struct _KLOCK_ENTRIES *v13; // r9
  char v14; // [rsp+88h] [rbp+10h] BYREF
  signed __int64 v15; // [rsp+90h] [rbp+18h]
  char v16; // [rsp+98h] [rbp+20h] BYREF

  v15 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v14 = 0;
  v5 = a2;
  v6 = BugCheckParameter1;
  Process = CurrentThread->ApcState.Process;
  if ( !(_BYTE)a2
    && BugCheckParameter1 <= 0xFFFFFFFFFFFFFFFDuLL
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL )
  {
    KernelTime = ObpKernelHandleTable;
    v6 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    v8 = PsInitialSystemProcess;
    goto LABEL_4;
  }
  v8 = CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    KernelTime = ObReferenceProcessHandleTable(CurrentThread->ApcState.Process);
    if ( KernelTime )
    {
      v4 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  KernelTime = Process[1].KernelTime;
  if ( KernelTime == ObpKernelHandleTable )
    return (unsigned int)-1073741816;
LABEL_4:
  --CurrentThread->KernelApcDisable;
  if ( (v6 & 0x3FC) != 0 )
  {
    v10 = (signed __int64 *)ExpLookupHandleTableEntry(KernelTime, v6);
    if ( v10 )
    {
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v10);
          a3 = *v10;
          if ( (*v10 & 1) != 0 )
            break;
          if ( !a3 )
            goto LABEL_17;
          ExpBlockOnLockedHandleEntry(KernelTime, v10, a3);
        }
      }
      while ( a3 != _InterlockedCompareExchange64(v10, a3 - 1, a3) );
      v11 = ObCloseHandleTableEntry2(KernelTime, v10, v8, v6, v5, 0, v15);
      goto LABEL_9;
    }
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)CurrentThread, a2, a3);
  if ( v6 >= 0xFFFFFFFFFFFFFFFAuLL || v6 == 0 )
    goto LABEL_18;
  ExQueryHandleExceptionsPermanency(KernelTime, &v16, &v14, v13);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v14 )
    ExHandleLogBadReference(KernelTime, v6, v5);
  if ( !v5 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0
      && Process[1].ProcessListEntry.Blink
      && (_BYTE)KdDebuggerEnabled )
    {
      KeBugCheckEx(0x93u, v6, 1uLL, 0LL, 0LL);
    }
    goto LABEL_18;
  }
  if ( (NtGlobalFlag & 0x400000) == 0 && !Process[1].UserTime && !*(_QWORD *)(KernelTime + 96) )
  {
LABEL_18:
    v11 = -1073741816;
    if ( v6 + 6 <= 5 )
      v11 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v11 = -1073741816;
  else
    v11 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v11;
}
