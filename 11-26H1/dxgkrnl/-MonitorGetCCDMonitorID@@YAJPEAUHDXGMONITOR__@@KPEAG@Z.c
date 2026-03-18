/*
 * XREFs of ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C
 * Callers:
 *     _lambda_eeea5582e93711493668b9eafd12873f_::operator() @ 0x1401CC7CC (_lambda_eeea5582e93711493668b9eafd12873f_--operator().c)
 *     _lambda_ef85c4d3ba2b9aeb28478c22401d75d8_::operator() @ 0x1401CD050 (_lambda_ef85c4d3ba2b9aeb28478c22401d75d8_--operator().c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE44@Z @ 0x140345F38 (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x14034663C (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x140348140 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x140348B08 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x14005B090 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z @ 0x140346A10 (-GetCCDMonitorID@DXGMONITOR@@UEBAJ_NKPEAG@Z.c)
 */

__int64 __fastcall MonitorGetCCDMonitorID(struct HDXGMONITOR__ *a1, unsigned int a2, unsigned __int16 *a3)
{
  struct HDXGMONITOR__ *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int CCDMonitorID; // ebx
  void *v10; // [rsp+20h] [rbp-30h] BYREF
  struct HDXGMONITOR__ *v11; // [rsp+28h] [rbp-28h]
  struct HDXGMONITOR__ *v12; // [rsp+30h] [rbp-20h] BYREF
  void *v13; // [rsp+38h] [rbp-18h] BYREF
  struct HDXGMONITOR__ *v14; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+58h] [rbp+8h]

  v5 = a1;
  if ( !a1 || !a2 || !a3 )
    return 3221225485LL;
  v10 = retaddr;
  v11 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  v11 = v5;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v10);
  v12 = v5;
  MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v5 + 40));
  v6 = 2LL;
  v13 = retaddr;
  v7 = 2LL;
  do
  {
    v14 = v5;
    --v7;
  }
  while ( v7 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
  if ( *((_DWORD *)v5 + 70) != 1 && *((_QWORD *)v5 + 37) )
  {
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v10, (__int64)v5 + 288);
    v5 = v11;
  }
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v12);
  if ( !v5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3419;
  }
  v12 = v5;
  if ( v5 )
    MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v5 + 40));
  v13 = retaddr;
  do
  {
    v14 = v5;
    --v6;
  }
  while ( v6 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
  CCDMonitorID = DXGMONITOR::GetCCDMonitorID((struct HDXGMONITOR__ *)((char *)v5 + 16), 1, a2, a3);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v12);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v10);
  return CCDMonitorID;
}
