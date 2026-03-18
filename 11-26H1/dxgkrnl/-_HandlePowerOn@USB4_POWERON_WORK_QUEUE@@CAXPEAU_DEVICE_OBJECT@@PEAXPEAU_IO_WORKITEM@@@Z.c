/*
 * XREFs of ?_HandlePowerOn@USB4_POWERON_WORK_QUEUE@@CAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x140278E10
 * Callers:
 *     <none>
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline @ 0x140086EE4 (Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline.c)
 *     ??_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z @ 0x140098B18 (--_GUSB4_POWERON_WORK_CONTEXT@@QEAAPEAXI@Z.c)
 *     ?_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z @ 0x140278EC8 (-_HandlePowerOnInternal@USB4_POWERON_WORK_QUEUE@@QEAAXPEAUUSB4_POWERON_WORK_CONTEXT@@@Z.c)
 */

void __fastcall USB4_POWERON_WORK_QUEUE::_HandlePowerOn(
        USB4_POWERON_WORK_QUEUE *IoObject,
        struct USB4_POWERON_WORK_CONTEXT *Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v3; // rbx
  struct _KEVENT *v6; // rcx
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v3 = *(_QWORD *)Context;
  USB4_POWERON_WORK_QUEUE::_HandlePowerOnInternal(IoObject, Context);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v7, (struct DXGFASTMUTEX *)(v3 + 8));
  if ( !*(_DWORD *)v3 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 236;
  }
  if ( !--*(_DWORD *)v3 )
  {
    if ( (unsigned int)Feature_Usb4PerAdapterPowerQueue__private_IsEnabledDeviceUsageNoInline() )
      v6 = *(struct _KEVENT **)(v3 + 88);
    else
      v6 = (struct _KEVENT *)(v3 + 56);
    KeSetEvent(v6, 0, 0);
  }
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v7);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  USB4_POWERON_WORK_CONTEXT::`scalar deleting destructor'(Context);
}
