/*
 * XREFs of ?QueueSerializedWorkItem@CSERIALIZEDWORKQUEUE@@QEAAJP6AXPEAX@Z0@Z @ 0x14037C1C0
 * Callers:
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1401ECD40 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z @ 0x14037BC78 (-DestroyTtmDevice@DXGSESSIONMGR@@QEAAXPEAX@Z.c)
 *     ?CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPEBGPEAPEAX@Z @ 0x14037BDC8 (-CreateTtmDevice@DXGSESSIONMGR@@QEAAJW4TTM_DEVICE_TYPE@@PEAU_DEVICE_OBJECT@@PEAVDXGADAPTER@@IKPE.c)
 *     ?DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z @ 0x14037C198 (-DestroyAdapter@DXGGLOBAL@@QEAAXPEAVDXGADAPTER@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall CSERIALIZEDWORKQUEUE::QueueSerializedWorkItem(
        CSERIALIZEDWORKQUEUE ***this,
        void (*a2)(void *),
        void *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  CSERIALIZEDWORKQUEUE *v8; // rbx
  CSERIALIZEDWORKQUEUE **v10; // rcx
  struct _IO_WORKITEM *WorkItem; // rax

  v6 = 0;
  v7 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v8 = (CSERIALIZEDWORKQUEUE *)v7;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 16) = a2;
    *(_QWORD *)(v7 + 24) = a3;
    DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)this);
    v10 = this[7];
    if ( *v10 != (CSERIALIZEDWORKQUEUE *)(this + 6) )
      __fastfail(3u);
    *(_QWORD *)v8 = this + 6;
    *((_QWORD *)v8 + 1) = v10;
    *v10 = v8;
    this[7] = (CSERIALIZEDWORKQUEUE **)v8;
    if ( !*((_BYTE *)this + 64) )
    {
      WorkItem = IoAllocateWorkItem(g_pDriverObject);
      if ( WorkItem )
      {
        IoQueueWorkItemEx(WorkItem, CSERIALIZEDWORKQUEUE::SerializedQueueWorker, DelayedWorkQueue, this);
      }
      else
      {
        v6 = -1073741801;
        WdLogSingleEntry1(6LL);
        WdLogGlobalForLineNumber = 1911;
        DxgkLogInternalTriageEvent(
          0LL,
          262145,
          -1,
          (__int64)L"Failed to allocate work item for serialized work queue, returning 0x%I64x.",
          -1073741801LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    DXGFASTMUTEX::Release((struct _KTHREAD **)this);
  }
  else
  {
    v6 = -1073741801;
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1879;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate serialized work item entry, returning 0x%I64x.",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return v6;
}
