/*
 * XREFs of ?HandleMuxPnPNotification@DISPLAY_MUX_MGR@@CAJPEAX0@Z @ 0x14008C620
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E808 (-ProcessMuxDeviceArrival@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 *     ?ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z @ 0x14008E940 (-ProcessMuxDeviceDeparture@DISPLAY_MUX_MGR@@AEAAJPEAU_UNICODE_STRING@@@Z.c)
 */

__int64 __fastcall DISPLAY_MUX_MGR::HandleMuxPnPNotification(char *NotificationStructure, char *Context)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned int v6; // eax
  __int64 v7; // rax
  unsigned int v8; // ebx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  WdLogSingleEntry0(4LL);
  WdLogGlobalForLineNumber = 2641;
  if ( !NotificationStructure || !Context )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 2646;
    return 3221225485LL;
  }
  v4 = *(_QWORD *)(NotificationStructure + 20) - *(_QWORD *)&GUID_DEVINTERFACE_DISPLAYMUX.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(NotificationStructure + 28) - *(_QWORD *)GUID_DEVINTERFACE_DISPLAYMUX.Data4;
  if ( !v4 )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)(Context + 16), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
    v5 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
    if ( !v5 )
      v5 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)(NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_REMOVAL.Data1;
      if ( !v7 )
        v7 = *(_QWORD *)(NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_REMOVAL.Data4;
      if ( v7 )
      {
        v8 = -1073741811;
        goto LABEL_17;
      }
      v6 = DISPLAY_MUX_MGR::ProcessMuxDeviceDeparture(
             (DISPLAY_MUX_MGR *)Context,
             *((struct _UNICODE_STRING **)NotificationStructure + 5));
    }
    else
    {
      v6 = DISPLAY_MUX_MGR::ProcessMuxDeviceArrival(
             (DISPLAY_MUX_MGR *)Context,
             *((struct _UNICODE_STRING **)NotificationStructure + 5));
    }
    v8 = v6;
LABEL_17:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v10);
    return v8;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 2654;
  return 3221225485LL;
}
