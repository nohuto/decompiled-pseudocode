/*
 * XREFs of ?MonitorFillMonitorDeviceInfo@@YAJPEAUHDXGMONITOR__@@PEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1402CC758
 * Callers:
 *     ?DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFERENCE@@@Z @ 0x1403B26F4 (-DisplayConfigFillTargetDeviceInfo@@YAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@AEBVDXGADAPTER_REFE.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z @ 0x1403B0FA8 (-_FillMonitorDeviceInfo@DXGMONITOR@@QEBAJPEAUDISPLAYCONFIG_TARGET_DEVICE_NAME@@@Z.c)
 */

__int64 __fastcall MonitorFillMonitorDeviceInfo(
        struct HDXGMONITOR__ *this,
        struct DISPLAYCONFIG_TARGET_DEVICE_NAME *a2)
{
  __int64 v4; // rax
  char *v5; // r14
  __int64 v6; // rax
  struct _DEVICE_OBJECT *v7; // rdx
  NTSTATUS DeviceInterfaces; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  signed int v11; // edi
  __int64 v12; // rdi
  char *v13; // rcx
  __int16 v14; // ax
  PZZWSTR v15; // rcx
  char *v16; // rax
  signed int v17; // eax
  int v18; // ecx
  void *v20; // [rsp+20h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v21; // [rsp+28h] [rbp-28h]
  struct HDXGMONITOR__ *v22; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-18h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  PZZWSTR SymbolicLinkList; // [rsp+70h] [rbp+20h] BYREF

  if ( this && a2 )
  {
    v20 = retaddr;
    v21 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v20);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
    v21 = this;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v20);
    v22 = this;
    MonitorResourceLock::AcquireShared((PERESOURCE)((char *)this + 40));
    v23[0] = retaddr;
    v4 = 2LL;
    do
    {
      v23[1] = this;
      --v4;
    }
    while ( v4 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v23);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v20);
    v5 = (char *)a2 + 164;
    memset((char *)a2 + 164, 0, 0x100uLL);
    v6 = *((_QWORD *)this + 25);
    v7 = *(struct _DEVICE_OBJECT **)(v6 + 8);
    if ( !v7 || !*(_QWORD *)(v6 + 56) )
      goto LABEL_16;
    SymbolicLinkList = 0LL;
    DeviceInterfaces = IoGetDeviceInterfaces(&GUID_DEVINTERFACE_MONITOR, v7, 0, &SymbolicLinkList);
    v11 = DeviceInterfaces;
    if ( DeviceInterfaces < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v10, v9) + 24) = DeviceInterfaces;
      WdLogGlobalForLineNumber = 4210;
    }
    else
    {
      v12 = 128LL;
      v13 = (char *)((char *)SymbolicLinkList - v5);
      do
      {
        if ( v12 == -2147483518 )
          break;
        v14 = *(_WORD *)&v13[(_QWORD)v5];
        if ( !v14 )
          break;
        *(_WORD *)v5 = v14;
        v5 += 2;
        --v12;
      }
      while ( v12 );
      v15 = SymbolicLinkList;
      v16 = v5 - 2;
      if ( v12 )
        v16 = v5;
      *(_WORD *)v16 = 0;
      ExFreePoolWithTag(v15, 0);
      if ( v12 )
      {
        *((_WORD *)a2 + 83) = 92;
LABEL_16:
        v17 = DXGMONITOR::_FillMonitorDeviceInfo(this, a2);
        v11 = 0;
        if ( v17 != -1071841279 )
          v11 = v17;
        if ( v11 >= 0 )
        {
          v18 = *((_DWORD *)a2 + 5);
          if ( (v18 & 1) == 0 && !*((_WORD *)a2 + 18) )
            *((_DWORD *)a2 + 5) = v18 | 2;
        }
        goto LABEL_22;
      }
      v11 = v12 == 0 ? 0x80000005 : 0;
    }
LABEL_22:
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v22);
    return (unsigned int)v11;
  }
  return 3221225485LL;
}
