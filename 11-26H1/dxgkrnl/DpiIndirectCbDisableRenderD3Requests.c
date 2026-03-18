/*
 * XREFs of DpiIndirectCbDisableRenderD3Requests @ 0x1402503F0
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z @ 0x140064BD8 (--0AUTO_MUTEX_LOCK@@QEAA@PEAU_KMUTANT@@_N@Z.c)
 */

__int64 __fastcall DpiIndirectCbDisableRenderD3Requests(PDEVICE_OBJECT DeviceObject, int a2, __int64 a3)
{
  _DWORD *DeviceExtension; // rax
  _OWORD *v7; // rax
  _QWORD *v8; // rdi
  struct _IO_WORKITEM *WorkItem; // rax
  _QWORD *v10; // rax
  bool v11; // zf
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  PRKMUTEX Mutex; // [rsp+28h] [rbp-10h]

  if ( !DeviceObject )
    return 3221225485LL;
  DeviceExtension = DeviceObject->DeviceExtension;
  if ( !DeviceExtension
    || DeviceExtension[4] != 1953656900
    || DeviceExtension[5] != 2
    || !*((_BYTE *)DeviceExtension + 1158) )
  {
    return 3221225485LL;
  }
  v7 = (_OWORD *)operator new(0x20uLL, 0x74727044u, 256LL);
  v8 = v7;
  if ( !v7 )
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 1046;
    return 3221225626LL;
  }
  *v7 = 0LL;
  v7[1] = 0LL;
  AUTO_MUTEX_LOCK::AUTO_MUTEX_LOCK((AUTO_MUTEX_LOCK *)v13, &stru_1401693A0);
  if ( !byte_140169398 )
  {
    WorkItem = IoAllocateWorkItem(DeviceObject);
    if ( !WorkItem )
    {
      WdLogSingleEntry1(6LL);
      WdLogGlobalForLineNumber = 1060;
      if ( v13[0] )
        KeReleaseMutex(Mutex, 0);
      ExFreePoolWithTag(v8, 0);
      return 3221225626LL;
    }
    byte_140169398 = 1;
    IoQueueWorkItemEx(
      WorkItem,
      (PIO_WORKITEM_ROUTINE_EX)DpiIndirectCbDisableRenderD3RequestsWorker,
      DelayedWorkQueue,
      0LL);
  }
  *((_DWORD *)v8 + 4) = a2;
  *(_QWORD *)((char *)v8 + 20) = a3;
  v10 = (_QWORD *)qword_1401693E0;
  if ( *(void ***)qword_1401693E0 != &qword_1401693D8 )
    __fastfail(3u);
  v11 = v13[0] == 0;
  *v8 = &qword_1401693D8;
  v8[1] = v10;
  *v10 = v8;
  qword_1401693E0 = (__int64)v8;
  if ( !v11 )
    KeReleaseMutex(Mutex, 0);
  return 0LL;
}
