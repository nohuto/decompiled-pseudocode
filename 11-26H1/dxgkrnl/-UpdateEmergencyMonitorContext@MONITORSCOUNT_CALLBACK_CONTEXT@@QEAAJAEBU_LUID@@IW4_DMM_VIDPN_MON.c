/*
 * XREFs of ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403ADF70
 * Callers:
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403ABFD4 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1403DABBC (-UpdateEmergencyMonitorContext@MONITORSCOUNT_CALLBACK_CONTEXT@@QEAAJPEAVDXGADAPTER@@IW4_DMM_VIDP.c)
 */

__int64 __fastcall MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(
        __int64 a1,
        struct _LUID *a2,
        unsigned int a3)
{
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rdi
  _QWORD *v11; // rax
  __int64 result; // rax
  int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  unsigned __int64 v17; // [rsp+20h] [rbp-C8h] BYREF
  _BYTE v18[144]; // [rsp+30h] [rbp-B8h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v7 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a2, &v17);
  v10 = v7;
  if ( !v7 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v9, v8);
    v11[3] = 0LL;
    v11[4] = a2->HighPart;
    v11[5] = a2->LowPart;
    result = 3223191554LL;
    WdLogGlobalForLineNumber = 2351;
    return result;
  }
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v18, v7, 0LL);
  v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v18, 0LL);
  DXGADAPTER::ReleaseReference(v10);
  if ( v13 >= 0 )
  {
    MONITORSCOUNT_CALLBACK_CONTEXT::UpdateEmergencyMonitorContext(a1, v10, a3);
    goto LABEL_7;
  }
  if ( v13 == -1073741130 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
    v16[3] = v10;
    v16[4] = *((int *)v10 + 104);
    v16[5] = *((unsigned int *)v10 + 103);
    WdLogGlobalForLineNumber = 2367;
LABEL_7:
    v13 = 0;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v18);
  return (unsigned int)v13;
}
