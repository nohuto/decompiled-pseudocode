/*
 * XREFs of ??0CMonitorPDO@OPM@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x140009EF0
 * Callers:
 *     ??0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z @ 0x140009E0C (--0COPMProtectedOutput@@QEAA@W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@OPM@@UEAAJXZ @ 0x140009B40 (-Destroy@CMonitorPDO@OPM@@UEAAJXZ.c)
 *     ?Lock@CMutex@OPM@@QEAAXXZ @ 0x140009CA0 (-Lock@CMutex@OPM@@QEAAXXZ.c)
 *     ?Unlock@CMutex@OPM@@QEAAXXZ @ 0x140009D10 (-Unlock@CMutex@OPM@@QEAAXXZ.c)
 *     ??0CMutex@OPM@@QEAA@PEAJ@Z @ 0x14000A160 (--0CMutex@OPM@@QEAA@PEAJ@Z.c)
 *     ??_GCMutex@OPM@@QEAAPEAXI@Z @ 0x14000A3C4 (--_GCMutex@OPM@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

OPM::CMonitorPDO *__fastcall OPM::CMonitorPDO::CMonitorPDO(
        OPM::CMonitorPDO *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  PVOID *v4; // r15
  PVOID *NotificationEntry; // r13
  OPM::CMutex *Pool2; // rax
  unsigned int v9; // edx
  void **v10; // rax
  struct _KMUTANT **v11; // rsi
  OPM::CMutex *v12; // r14
  NTSTATUS DeviceInterfaces; // ebx
  __int64 DxgkWin32kInterface; // rax
  PZZWSTR SymbolicLinkList; // [rsp+40h] [rbp-10h] BYREF
  PVOID EventCategoryData; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v18; // [rsp+A0h] [rbp+50h]
  int *v19; // [rsp+A8h] [rbp+58h]

  v19 = a4;
  v18 = a3;
  v4 = (PVOID *)((char *)this + 16);
  *(_QWORD *)this = &OPM::CMonitorPDO::`vftable';
  NotificationEntry = (PVOID *)((char *)this + 40);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( *a4 < 0 )
    return this;
  *((struct _LUID *)this + 8) = *a2;
  SymbolicLinkList = 0LL;
  LODWORD(EventCategoryData) = 0;
  Pool2 = (OPM::CMutex *)ExAllocatePool2(258LL, 8LL, 1297108807LL);
  if ( !Pool2 )
  {
    v12 = 0LL;
    goto LABEL_21;
  }
  v10 = (void **)OPM::CMutex::CMutex(Pool2, (int *)&EventCategoryData);
  v11 = (struct _KMUTANT **)v10;
  v12 = (OPM::CMutex *)v10;
  if ( !v10 )
  {
LABEL_21:
    DeviceInterfaces = -1073741801;
    goto LABEL_13;
  }
  DeviceInterfaces = (int)EventCategoryData;
  if ( (int)EventCategoryData < 0 )
    goto LABEL_13;
  *((_QWORD *)this + 1) = v10;
  v12 = 0LL;
  OPM::CMutex::Lock(v10);
  EventCategoryData = 0LL;
  DxgkWin32kInterface = DxDdGetDxgkWin32kInterface();
  DeviceInterfaces = (*(__int64 (__fastcall **)(struct _LUID *, _QWORD, PVOID *, PVOID *))(DxgkWin32kInterface + 456))(
                       a2,
                       v18,
                       &EventCategoryData,
                       v4);
  if ( DeviceInterfaces >= 0 )
  {
    ObfReferenceObject(*v4);
    DeviceInterfaces = IoRegisterPlugPlayNotification(
                         EventCategoryTargetDeviceChange,
                         0,
                         EventCategoryData,
                         gpWin32kDriverObject,
                         OPM::CMonitorPDO::MonitorPDORemovalCallback,
                         this,
                         NotificationEntry);
    ObfDereferenceObject(EventCategoryData);
    EventCategoryData = 0LL;
    if ( DeviceInterfaces >= 0 )
    {
      DeviceInterfaces = IoRegisterPlugPlayNotification(
                           EventCategoryDeviceInterfaceChange,
                           0,
                           &GUID_DEVINTERFACE_MONITOR,
                           gpWin32kDriverObject,
                           (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)OPM::CMonitorPDO::MonitorInterfaceCallback,
                           this,
                           (PVOID *)this + 6);
      if ( DeviceInterfaces >= 0 )
      {
        DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, (PDEVICE_OBJECT)*v4, 0, &SymbolicLinkList);
        if ( DeviceInterfaces >= 0 )
        {
          if ( !*SymbolicLinkList )
          {
            DeviceInterfaces = -1073741823;
            goto LABEL_12;
          }
          RtlInitUnicodeString((PUNICODE_STRING)((char *)this + 24), SymbolicLinkList);
        }
        SymbolicLinkList = 0LL;
      }
    }
  }
LABEL_12:
  OPM::CMutex::Unlock(v11);
LABEL_13:
  if ( SymbolicLinkList )
  {
    ExFreePoolWithTag(SymbolicLinkList, 0);
    SymbolicLinkList = 0LL;
  }
  if ( v12 )
    OPM::CMutex::`scalar deleting destructor'(v12, v9);
  if ( DeviceInterfaces < 0 )
  {
    if ( *((_QWORD *)this + 1) )
      OPM::CMonitorPDO::Destroy(this);
    *v19 = DeviceInterfaces;
  }
  else
  {
    *((_QWORD *)this + 7) = PsGetCurrentProcessId();
  }
  return this;
}
