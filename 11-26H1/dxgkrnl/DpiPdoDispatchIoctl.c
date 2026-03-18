/*
 * XREFs of DpiPdoDispatchIoctl @ 0x1402560E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x14030CE44 (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x14030E12C (DpiReleaseCoreSyncAccessSafe.c)
 *     ?DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z @ 0x14031C304 (-DpiBrightnessHandleIoctls@@YAJPEAU_DEVICE_OBJECT@@KKKPEAXK1PEA_K@Z.c)
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x1403EA898 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 */

__int64 __fastcall DpiPdoDispatchIoctl(__int64 a1, IRP *a2)
{
  IRP *v2; // r15
  unsigned int *p_MajorFunction; // rax
  __int64 v5; // r14
  struct _IRP *MasterIrp; // r12
  unsigned int v7; // edi
  struct _DEVICE_OBJECT *v8; // rcx
  PVOID DeviceExtension; // rsi
  bool v10; // zf
  int MonitorInstance; // ebx
  __int64 v12; // rbx
  ULONG v13; // r15d
  __int64 v14; // r14
  MONITOR_MGR *v15; // rsi
  __int64 v17; // rbx
  unsigned __int64 v18; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v19[8]; // [rsp+48h] [rbp-30h] BYREF
  DXGMONITOR *v20; // [rsp+50h] [rbp-28h]
  DXGMONITOR *v21[4]; // [rsp+58h] [rbp-20h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+48h]
  unsigned int v24; // [rsp+D0h] [rbp+58h]
  ULONG pSessionId; // [rsp+D8h] [rbp+60h] BYREF

  v2 = a2;
  v18 = 0LL;
  pSessionId = 0;
  IoGetRequestorSessionId(a2, &pSessionId);
  p_MajorFunction = (unsigned int *)&v2->Tail.Overlay.CurrentStackLocation->MajorFunction;
  v5 = *(_QWORD *)(a1 + 64);
  MasterIrp = v2->AssociatedIrp.MasterIrp;
  v7 = p_MajorFunction[6];
  v8 = *(struct _DEVICE_OBJECT **)(v5 + 32);
  v22 = p_MajorFunction[2];
  v24 = p_MajorFunction[4];
  DeviceExtension = v8->DeviceExtension;
  if ( v7 > 0x231004 )
  {
    switch ( v7 )
    {
      case 0x231008u:
        goto LABEL_37;
      case 0x23100Cu:
      case 0x231010u:
        if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
          goto LABEL_20;
        MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
        if ( MonitorInstance < 0 )
          goto LABEL_33;
        v12 = *((_QWORD *)DeviceExtension + 504);
        v13 = pSessionId;
        if ( !v12 )
          goto LABEL_31;
        v14 = *(unsigned int *)(v5 + 504);
        if ( (_DWORD)v14 == -1 )
          goto LABEL_31;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 504)) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2939;
        }
        if ( !*(_QWORD *)(v12 + 3160) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2940;
        }
        v15 = *(MONITOR_MGR **)(*(_QWORD *)(v12 + 3160) + 112LL);
        if ( !v15 )
          goto LABEL_30;
        goto LABEL_34;
      case 0x231400u:
      case 0x231404u:
      case 0x231408u:
LABEL_37:
        MonitorInstance = DpiAcquireCoreSyncAccessSafe(a1, 0LL);
        if ( MonitorInstance < 0 )
          goto LABEL_33;
        v17 = *((_QWORD *)DeviceExtension + 504);
        v13 = pSessionId;
        if ( !v17 )
          goto LABEL_31;
        v14 = *(unsigned int *)(v5 + 504);
        if ( (_DWORD)v14 == -1 )
          goto LABEL_31;
        if ( !DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)DeviceExtension + 504)) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2939;
        }
        if ( !*(_QWORD *)(v17 + 3160) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 2940;
        }
        v15 = *(MONITOR_MGR **)(*(_QWORD *)(v17 + 3160) + 112LL);
        if ( !v15 )
        {
LABEL_30:
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 2950;
LABEL_31:
          MonitorInstance = -1073741811;
LABEL_32:
          DpiReleaseCoreSyncAccessSafe(a1, 0LL);
          v2 = a2;
          goto LABEL_33;
        }
LABEL_34:
        MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v19, 0LL);
        MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v15, v14, 1u, (struct MONITOR_REF_ACCESSOR *)v19);
        if ( MonitorInstance < 0 )
        {
          WdLogSingleEntry2(7LL, v14, v15);
          WdLogGlobalForLineNumber = 2968;
        }
        else if ( v7 == 2310164 )
        {
          MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
            (MONITOR_REF_LOCK_ACCESSOR *)v21,
            (const struct MONITOR_REF_ACCESSOR *)v19);
          MonitorInstance = DXGMONITOR::_DispatchIoctrls(v21[0], 0x234014u, v24, MasterIrp, v22, MasterIrp, &v18, v13);
          MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)v21);
        }
        else
        {
          MonitorInstance = DXGMONITOR::_DispatchIoctrls(v20, v7, v24, MasterIrp, v22, MasterIrp, &v18, v13);
        }
        MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v19);
        goto LABEL_32;
    }
    v10 = v7 == 2310164;
LABEL_19:
    if ( !v10 )
    {
LABEL_20:
      MonitorInstance = -1073741637;
      goto LABEL_33;
    }
    goto LABEL_37;
  }
  if ( v7 == 2297860 )
    goto LABEL_37;
  if ( v7 != 2296832
    && v7 != 2296836
    && v7 != 2296840
    && v7 != 2296844
    && v7 != 2296848
    && v7 != 2296852
    && v7 != 2296856 )
  {
    v10 = v7 == 2297856;
    goto LABEL_19;
  }
  MonitorInstance = DpiBrightnessHandleIoctls(
                      v8,
                      *(_DWORD *)(v5 + 504),
                      v7,
                      p_MajorFunction[4],
                      MasterIrp,
                      p_MajorFunction[2],
                      MasterIrp,
                      &v18);
LABEL_33:
  v2->IoStatus.Information = v18;
  v2->IoStatus.Status = MonitorInstance;
  IofCompleteRequest(v2, 1);
  return (unsigned int)MonitorInstance;
}
