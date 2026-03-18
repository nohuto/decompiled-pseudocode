/*
 * XREFs of ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x140348B08
 * Callers:
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x140348330 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z @ 0x140348870 (-GetMonitorHashsForPath@CCD_TOPOLOGY@@QEAAJU_LUID@@IPEAIPEAUD3DKMT_HASH@@@Z.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     RtlStringLengthWorkerW @ 0x14004D50C (RtlStringLengthWorkerW.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO @ 0x140192FF0 (_BTL_TOPOLOGY_CONSTRUCTOR--_AddSecondaryPathToTopology_--_2_--_AUTO--__AUTO.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1402C2560 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z @ 0x14034688C (-MonitorGetCCDMonitorID@@YAJPEAUHDXGMONITOR__@@KPEAG@Z.c)
 *     ?GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z @ 0x140348E64 (-GetConnectedMonitorHandle@VIDPN_MGR@@QEAAJIPEAPEAUHDXGMONITOR__@@@Z.c)
 *     ?MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z @ 0x140348F54 (-MonitorGetUsageClass@@YAJPEAUHDXGMONITOR__@@PEAW4_D3DKMT_DISPLAY_TARGET_USAGE@@PEA_N@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x14034901C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_QueryMonitorIdStr(
        const struct _LUID *a1,
        unsigned int a2,
        unsigned __int16 *a3,
        unsigned __int16 a4,
        unsigned __int16 *a5)
{
  __int64 v6; // r15
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v9; // rax
  unsigned int v10; // ebx
  DXGADAPTER *v11; // r14
  int v12; // eax
  int CCDMonitorID; // esi
  VIDPN_MGR *v14; // r12
  int ConnectedMonitorHandle; // eax
  struct HDXGMONITOR__ *v16; // r15
  int v17; // eax
  int v18; // r12d
  __int64 v19; // r11
  struct _KTHREAD **v21; // rcx
  bool v22; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int16 v23; // [rsp+32h] [rbp-CEh]
  int v24; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v25; // [rsp+38h] [rbp-C8h]
  size_t pcchLength; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int16 *v28; // [rsp+50h] [rbp-B0h]
  DXGADAPTER *v29; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v31[144]; // [rsp+70h] [rbp-90h] BYREF

  v6 = a2;
  v25 = a2;
  v28 = a5;
  v23 = a4;
  Global = DXGGLOBAL::GetGlobal();
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *a1, &v30);
  v10 = 0;
  v29 = v9;
  v11 = v9;
  if ( v9 )
  {
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, v9, 0LL);
    v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v31, 0LL);
    CCDMonitorID = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry4(2LL, v12, v11, a1->HighPart, a1->LowPart);
      WdLogGlobalForLineNumber = 3564;
      goto LABEL_12;
    }
    v14 = *(VIDPN_MGR **)(*((_QWORD *)v11 + 395) + 104LL);
    EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v27, (__int64)v14);
    pcchLength = 0LL;
    ConnectedMonitorHandle = VIDPN_MGR::GetConnectedMonitorHandle(v14, v6, (struct HDXGMONITOR__ **)&pcchLength);
    CCDMonitorID = ConnectedMonitorHandle;
    if ( ConnectedMonitorHandle < 0 )
    {
      WdLogSingleEntry5(2LL, ConnectedMonitorHandle, v6, v11, a1->HighPart, a1->LowPart);
      WdLogGlobalForLineNumber = 3583;
      goto LABEL_11;
    }
    v16 = (struct HDXGMONITOR__ *)pcchLength;
    v24 = 0;
    v22 = 0;
    MonitorGetUsageClass((struct HDXGMONITOR__ *)pcchLength, (enum _D3DKMT_DISPLAY_TARGET_USAGE *)&v24, &v22);
    if ( !v24 )
    {
      CCDMonitorID = MonitorGetCCDMonitorID(v16, v23, a3);
      if ( CCDMonitorID == -2147483643 )
        CCDMonitorID = -1073741789;
    }
    v17 = VIDPN_MGR::ReleaseMonitorHandle(v14, v16);
    v18 = v17;
    if ( v17 < 0 )
    {
      WdLogSingleEntry5(1LL, v17, v25, v16, a1->HighPart, a1->LowPart);
      WdLogGlobalForLineNumber = 3615;
      CCDMonitorID = v18;
      goto LABEL_11;
    }
    if ( v24 )
    {
      v21 = (struct _KTHREAD **)(v27 + 40);
      *v28 = 0;
      DXGFASTMUTEX::Release(v21);
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    }
    else
    {
      if ( CCDMonitorID < 0 )
      {
        WdLogSingleEntry5(2LL, CCDMonitorID, v25, v16, a1->HighPart, a1->LowPart);
        WdLogGlobalForLineNumber = 3633;
      }
      else
      {
        v19 = v23;
        pcchLength = 0LL;
        if ( a3 )
        {
          CCDMonitorID = RtlStringLengthWorkerW(a3, v23, &pcchLength);
          if ( CCDMonitorID >= 0 )
          {
            *v28 = pcchLength;
LABEL_11:
            DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
LABEL_12:
            COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
            DXGADAPTER::ReleaseReference(v11);
            return (unsigned int)CCDMonitorID;
          }
        }
        else
        {
          CCDMonitorID = -1073741811;
        }
        WdLogSingleEntry5(1LL, CCDMonitorID, a3, v19, a1->HighPart, a1->LowPart);
        WdLogGlobalForLineNumber = 3648;
      }
      DXGFASTMUTEX::Release((struct _KTHREAD **)(v27 + 40));
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      v10 = CCDMonitorID;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, a1->HighPart, a1->LowPart);
    WdLogGlobalForLineNumber = 3551;
    v10 = -1073741810;
  }
  BTL_TOPOLOGY_CONSTRUCTOR::_AddSecondaryPathToTopology_::_2_::_AUTO::__AUTO(&v29);
  return v10;
}
