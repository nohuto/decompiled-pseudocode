/*
 * XREFs of ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x140066988
 * Callers:
 *     ?Dispose@FxWorkItem@@UEAAEXZ @ 0x1400667A0 (-Dispose@FxWorkItem@@UEAAEXZ.c)
 *     ?FlushAndWait@FxWorkItem@@QEAAXXZ @ 0x140066910 (-FlushAndWait@FxWorkItem@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWorkItem::WaitForSignal(FxWorkItem *this)
{
  FxCREvent *p_m_WorkItemCompleted; // rsi
  NTSTATUS v3; // ebx
  unsigned __int16 *p_m_ObjectSize; // rbp
  unsigned __int64 v5; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  unsigned __int64 v7; // r8
  NTSTATUS v8; // ebx
  _LARGE_INTEGER timeOut; // [rsp+50h] [rbp+8h] BYREF

  timeOut.QuadPart = -600000000LL;
  KeEnterCriticalRegion();
  p_m_WorkItemCompleted = &this->m_WorkItemCompleted;
  v3 = KeWaitForSingleObject(&this->m_WorkItemCompleted, Executive, 0, 0, &timeOut);
  KeLeaveCriticalRegion();
  if ( v3 == 258 )
  {
    p_m_ObjectSize = &this->m_ObjectSize;
    v5 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    do
    {
      CurrentThread = KeGetCurrentThread();
      v7 = v5;
      if ( !*p_m_ObjectSize )
        v7 = 0LL;
      DbgPrint("Thread 0x%p is waiting on WDFWORKITEM 0x%p\n", CurrentThread, v7);
      KeEnterCriticalRegion();
      v8 = KeWaitForSingleObject(p_m_WorkItemCompleted, Executive, 0, 0, &timeOut);
      KeLeaveCriticalRegion();
    }
    while ( v8 == 258 );
  }
}
