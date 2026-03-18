/*
 * XREFs of DpiCleanUpGlobalState @ 0x14023E524
 * Callers:
 *     DxgkUnload @ 0x1401D5860 (DxgkUnload.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1DISPLAY_MUX_MGR@@QEAA@XZ @ 0x14008A034 (--1DISPLAY_MUX_MGR@@QEAA@XZ.c)
 *     DpiPdoPollingWorkItem @ 0x140256B00 (DpiPdoPollingWorkItem.c)
 */

void DpiCleanUpGlobalState()
{
  DISPLAY_MUX_MGR *v0; // rbx

  KeCancelTimer(&stru_140168FD0);
  DpiPdoPollingWorkItem(g_pDriverObject, (PVOID)1);
  KeFlushQueuedDpcs();
  if ( qword_140169050 )
    IoFreeWorkItem(qword_140169050);
  ExDeleteNPagedLookasideList(&stru_140168EC0);
  if ( qword_140169070 )
  {
    ExFreePoolWithTag(qword_140169070, 0);
    qword_140169070 = 0LL;
  }
  ExDeleteNPagedLookasideList(&Lookaside);
  if ( Mutex )
  {
    ExFreePoolWithTag(Mutex, 0);
    Mutex = 0LL;
  }
  if ( qword_140169270 )
  {
    IoUnregisterPlugPlayNotificationEx(qword_140169270);
    qword_140169270 = 0LL;
  }
  v0 = qword_140169448;
  if ( qword_140169448 )
  {
    DISPLAY_MUX_MGR::~DISPLAY_MUX_MGR(qword_140169448);
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v0);
    qword_140169448 = 0LL;
  }
}
