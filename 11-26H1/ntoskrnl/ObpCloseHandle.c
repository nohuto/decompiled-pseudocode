/*
 * XREFs of ObpCloseHandle @ 0x140929C00
 * Callers:
 *     ObCloseHandleWithResult @ 0x1407C62D0 (ObCloseHandleWithResult.c)
 *     ObCloseHandle @ 0x14091D2C0 (ObCloseHandle.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     ExHandleLogBadReference @ 0x140466170 (ExHandleLogBadReference.c)
 *     ExQueryHandleExceptionsPermanency @ 0x14047EBD4 (ExQueryHandleExceptionsPermanency.c)
 *     KeRaiseUserException @ 0x14052C3C0 (KeRaiseUserException.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14092AE54 (ExpBlockOnLockedHandleEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14092AE90 (ExpLookupHandleTableEntry.c)
 *     ObCloseHandleTableEntry2 @ 0x14092AF00 (ObCloseHandleTableEntry2.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

__int64 __fastcall ObpCloseHandle(ULONG_PTR BugCheckParameter1, char a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  char v4; // r13
  ULONG_PTR v6; // rbp
  _KPROCESS *Process; // r15
  PEPROCESS v8; // r14
  __int64 KernelTime; // rdi
  signed __int64 *v10; // rbx
  signed __int64 v11; // r8
  unsigned int v12; // ebx
  struct _KLOCK_ENTRIES *v14; // r9
  char v15; // [rsp+88h] [rbp+10h] BYREF
  __int64 v16; // [rsp+90h] [rbp+18h]
  char v17; // [rsp+98h] [rbp+20h] BYREF

  v16 = a3;
  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  v15 = 0;
  v6 = BugCheckParameter1;
  Process = CurrentThread->ApcState.Process;
  if ( !a2
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
          v11 = *v10;
          if ( (*v10 & 1) != 0 )
            break;
          if ( !v11 )
            goto LABEL_17;
          ExpBlockOnLockedHandleEntry(KernelTime, v10, v11);
        }
      }
      while ( v11 != _InterlockedCompareExchange64(v10, v11 - 1, v11) );
      v12 = ObCloseHandleTableEntry2(KernelTime, v10, v8, v6, a2, 0, v16);
      goto LABEL_9;
    }
  }
LABEL_17:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v6 >= 0xFFFFFFFFFFFFFFFAuLL || v6 == 0 )
    goto LABEL_18;
  ExQueryHandleExceptionsPermanency(KernelTime, &v17, &v15, v14);
  if ( (*(_BYTE *)(KernelTime + 44) & 0x10) != 0 && v15 )
    ExHandleLogBadReference(KernelTime, v6, a2);
  if ( !a2 )
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
    v12 = -1073741816;
    if ( v6 + 6 <= 5 )
      v12 = 0;
    goto LABEL_9;
  }
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    v12 = -1073741816;
  else
    v12 = KeRaiseUserException(0xC0000008);
LABEL_9:
  if ( v4 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v8[1].ProfileListHead.Blink);
  return v12;
}
