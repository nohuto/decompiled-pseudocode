/*
 * XREFs of ObQueryObjectAuditingByHandle @ 0x1409BA6D0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfUnblockPushLock @ 0x1404C83A0 (ExfUnblockPushLock.c)
 *     ExMapHandleToPointer @ 0x14092A190 (ExMapHandleToPointer.c)
 *     ObReferenceProcessHandleTable @ 0x1409BB940 (ObReferenceProcessHandleTable.c)
 */

NTSTATUS __stdcall ObQueryObjectAuditingByHandle(HANDLE Handle, PBOOLEAN GenerateOnClose)
{
  char v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rbx
  struct _EX_RUNDOWN_REF *Process; // rsi
  __int64 Count; // rdi
  signed __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rbx
  NTSTATUS v11; // ebx
  signed __int32 v13[14]; // [rsp+0h] [rbp-38h] BYREF

  v2 = 0;
  CurrentThread = KeGetCurrentThread();
  v5 = (__int64)Handle;
  Process = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( CurrentThread->PreviousMode
    || (unsigned __int64)Handle > 0xFFFFFFFFFFFFFFFDuLL
    || ((unsigned __int64)Handle & 0xFFFFFFFF80000000uLL) != 0xFFFFFFFF80000000uLL )
  {
    if ( KeGetCurrentThread()->ApcStateIndex == 1 )
    {
      Count = ObReferenceProcessHandleTable(Process);
      if ( !Count )
        return -1073741816;
      v2 = 1;
    }
    else
    {
      Count = Process[96].Count;
    }
  }
  else
  {
    Count = ObpKernelHandleTable;
    v5 = (unsigned __int64)Handle ^ 0xFFFFFFFF80000000uLL;
  }
  --CurrentThread->KernelApcDisable;
  v8 = ExMapHandleToPointer(Count, v5);
  if ( v8 )
  {
    v10 = *v8 >> 17;
    _InterlockedIncrement64(v8);
    _InterlockedOr(v13, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    *GenerateOnClose = (v10 & 4) != 0;
    v11 = 0;
  }
  else
  {
    v11 = -1073741816;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v9);
  if ( v2 )
    ExReleaseRundownProtection_0(Process + 61);
  return v11;
}
