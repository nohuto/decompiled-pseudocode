/*
 * XREFs of ?ReportDevicePowerState@DXGGLOBAL@@QEAAXPEAU_DEVICE_OBJECT@@W4_DEVICE_POWER_STATE@@@Z @ 0x14037EF84
 * Callers:
 *     DpiReportDevicePowerStateWorkItemCallback @ 0x14037EF40 (DpiReportDevicePowerStateWorkItemCallback.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x1400330A0 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     ?AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ @ 0x14037EFF0 (-AddD0LagTimeToLastActiveEntry@DripsBlockerTrackingHelper@@IEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReportDevicePowerState(
        DXGGLOBAL *this,
        struct _DEVICE_OBJECT *a2,
        enum _DEVICE_POWER_STATE a3)
{
  __int64 v5; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  if ( DXGGLOBAL::CSAccountingInProgress(this) )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (struct DXGFASTMUTEX *const)(v5 + 2112), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
    if ( a3 == PowerDeviceD3 )
    {
      DripsBlockerTrackingHelper::AddD0LagTimeToLastActiveEntry((DXGGLOBAL *)((char *)this + 2280));
      *((_BYTE *)this + 304409) = 1;
    }
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v6);
  }
}
