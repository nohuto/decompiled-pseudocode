/*
 * XREFs of PsSetProcessWin32Process @ 0x140AD9850
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PspLockProcessExclusive @ 0x140481AF8 (PspLockProcessExclusive.c)
 *     PspUnlockProcessExclusive @ 0x1404898F4 (PspUnlockProcessExclusive.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PsSetProcessWin32Process(
        struct _LIST_ENTRY *Object,
        struct _LIST_ENTRY *a2,
        __int64 a3,
        struct _KLOCK_ENTRIES *a4)
{
  struct _KTHREAD *CurrentThread; // r14
  unsigned int v8; // edi
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v11; // rsi

  CurrentThread = KeGetCurrentThread();
  v8 = 0;
  PspLockProcessExclusive((__int64)Object, (__int64)CurrentThread, a3, a4);
  if ( a2 )
  {
    if ( (HIDWORD(Object[31].Flink) & 8) != 0 || Object[41].Blink )
    {
      v8 = -1073741558;
    }
    else
    {
      Object[41].Blink = a2;
      if ( (((__int64)Object[111].Flink | ((unsigned __int64)Object[111].Flink >> 30)) & 0x3FFFFFFF) != 0 )
      {
        Pool2 = ExAllocatePool2(0x100uLL);
        v11 = (struct _WORK_QUEUE_ITEM *)Pool2;
        if ( Pool2 )
        {
          ObfReferenceObjectWithTag(Object, 0x624A7350u);
          v11[1].List.Flink = Object;
          v11->WorkerRoutine = (void (__fastcall *)(void *))PspTimerDelayWorkerRoutine;
          v11->Parameter = v11;
          v11->List.Flink = 0LL;
          ExQueueWorkItem(v11, NormalWorkQueue);
        }
      }
    }
  }
  else if ( Object[41].Blink == (struct _LIST_ENTRY *)a3 )
  {
    Object[41].Blink = 0LL;
  }
  else
  {
    v8 = -1073741823;
  }
  PspUnlockProcessExclusive((__int64)Object, (__int64)CurrentThread);
  return v8;
}
