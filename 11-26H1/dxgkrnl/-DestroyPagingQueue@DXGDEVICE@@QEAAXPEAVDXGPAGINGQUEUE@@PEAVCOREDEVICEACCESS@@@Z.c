/*
 * XREFs of ?DestroyPagingQueue@DXGDEVICE@@QEAAXPEAVDXGPAGINGQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1403A39A4
 * Callers:
 *     ??1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ @ 0x14001628C (--1DXGPAGINGQUEUEBYHANDLE@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ @ 0x140016460 (-ReleaseReference@DXGPAGINGQUEUE@@QEAAXXZ.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A1DAC (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z @ 0x1403A2844 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXPEAVDXGDEVICEACCESSLOCKEXCLUSIVE@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ @ 0x140033490 (-IsCoreResourceSharedOwner@ADAPTER_RENDER@@QEBAEXZ.c)
 *     ??_GDXGPAGINGQUEUE@@IEAAPEAXI@Z @ 0x14003CBB0 (--_GDXGPAGINGQUEUE@@IEAAPEAXI@Z.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A3B88 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGDEVICE::DestroyPagingQueue(DXGDEVICE *this, struct DXGPAGINGQUEUE *a2, struct COREDEVICEACCESS *a3)
{
  struct COREDEVICEACCESS *v5; // rdx
  struct DXGPAGINGQUEUE *v6; // rcx
  struct DXGPAGINGQUEUE **v7; // rax

  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8547;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8547LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8548;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 8548LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( !ADAPTER_RENDER::IsCoreResourceSharedOwner(*((ADAPTER_RENDER **)this + 2)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8549;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      8549LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 8552;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"PagingQueue != NULL", 8552LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGPAGINGQUEUE::DestroyCoreState(a2, v5);
  v6 = *(struct DXGPAGINGQUEUE **)a2;
  if ( *(struct DXGPAGINGQUEUE **)(*(_QWORD *)a2 + 8LL) != a2
    || (v7 = (struct DXGPAGINGQUEUE **)*((_QWORD *)a2 + 1), *v7 != a2) )
  {
    __fastfail(3u);
  }
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  DXGPAGINGQUEUE::`scalar deleting destructor'(a2);
}
