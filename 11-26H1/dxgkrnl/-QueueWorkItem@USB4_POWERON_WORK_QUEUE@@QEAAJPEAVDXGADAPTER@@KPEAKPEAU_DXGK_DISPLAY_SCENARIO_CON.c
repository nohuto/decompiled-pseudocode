/*
 * XREFs of ?QueueWorkItem@USB4_POWERON_WORK_QUEUE@@QEAAJPEAVDXGADAPTER@@KPEAKPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027848C
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___ @ 0x14006E5C8 (DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e___.c)
 *     ??4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400737F4 (--4CDisplayScenarioContextCarrier@@QEAAAEAV0@QEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     _DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT @ 0x140098A90 (_DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____--_2_--DXGKCALLONEXIT--_DXGKCALLONEX.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x140098B18 (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 */

__int64 __fastcall USB4_POWERON_WORK_QUEUE::QueueWorkItem(
        USB4_POWERON_WORK_QUEUE *this,
        struct DXGADAPTER *a2,
        unsigned int a3,
        unsigned int *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rax
  void *v10; // rcx
  void *v11; // rcx
  __int64 v12; // rax
  const wchar_t *v13; // r9
  struct _IO_WORKITEM *WorkItem; // rsi
  unsigned int v15; // ebx
  int v17; // [rsp+58h] [rbp-31h] BYREF
  _BYTE v18[8]; // [rsp+60h] [rbp-29h] BYREF
  __int128 v19; // [rsp+68h] [rbp-21h] BYREF
  struct DXGADAPTER **v20; // [rsp+78h] [rbp-11h]
  unsigned int *v21; // [rsp+80h] [rbp-9h]
  _BYTE v22[80]; // [rsp+88h] [rbp-1h] BYREF
  struct DXGADAPTER *v23; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v24; // [rsp+F8h] [rbp+6Fh] BYREF
  void *Src; // [rsp+100h] [rbp+77h] BYREF

  Src = a4;
  v24 = a3;
  v23 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 152;
  }
  v17 = 0;
  *(_QWORD *)&v19 = &Src;
  *((_QWORD *)&v19 + 1) = &v17;
  v20 = &v23;
  v21 = &v24;
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e_((__int64)v22, &v19);
  if ( v24 && Src )
  {
    v6 = operator new(0x30uLL, 0x4D677844u, 256LL);
    v7 = v6;
    if ( !v6 )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 180;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for Usb4 power on context",
        180LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v17 = -1073741801;
      goto LABEL_17;
    }
    *(_BYTE *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0LL;
    *(_QWORD *)(v6 + 40) = 0LL;
    v8 = 4LL * v24;
    if ( !is_mul_ok(v24, 4uLL) )
      v8 = -1LL;
    v9 = operator new[](v8, 0x4D677844u, 256LL);
    v10 = *(void **)(v7 + 40);
    *(_QWORD *)(v7 + 40) = v9;
    if ( v10 )
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v10);
    v11 = *(void **)(v7 + 40);
    if ( !v11 )
    {
      WdLogSingleEntry0(6LL);
      v12 = 189LL;
      v13 = L"Failed to allocate memory for Usb4 power on target list";
LABEL_12:
      WdLogGlobalForLineNumber = v12;
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v13, v12, 0LL, 0LL, 0LL, 0LL);
      v17 = -1073741801;
      USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'((USB4_POWERON_WORK_CONTEXT *)v7);
LABEL_17:
      DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v22);
      return 3221225495LL;
    }
    *(_QWORD *)v7 = this;
    *(_QWORD *)(v7 + 24) = *(_QWORD *)((char *)v23 + 412);
    *(_DWORD *)(v7 + 32) = v24;
    memmove(v11, Src, 4LL * v24);
    CDisplayScenarioContextCarrier::operator=(v7 + 8, (const struct _GUID *)a5);
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)v23 + 27));
    if ( !WorkItem )
    {
      WdLogSingleEntry0(6LL);
      v12 = 205LL;
      v13 = L"Can't allocate memory to hold IO work item.";
      goto LABEL_12;
    }
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)v18, (USB4_POWERON_WORK_QUEUE *)((char *)this + 8));
    ++*(_DWORD *)this;
    KeClearEvent((PRKEVENT)((char *)this + 56));
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)v18);
    IoQueueWorkItemEx(WorkItem, USB4_POWERON_WORK_QUEUE::_HandlePowerOn, DelayedWorkQueue, (PVOID)v7);
    v15 = v17;
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v15 = -1073741811;
    WdLogGlobalForLineNumber = 171;
    v17 = -1073741811;
  }
  DXGKCALLONEXIT__lambda_c7448c75b3dac8478dfa1698e822be3e____::_2_::DXGKCALLONEXIT::_DXGKCALLONEXIT((__int64)v22);
  return v15;
}
