/*
 * XREFs of ?MonitorGetLidStateFromMonitor@@YAJPEAUHDXGMONITOR__@@PEA_N@Z @ 0x14026F19C
 * Callers:
 *     ?Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z @ 0x1401CB42C (-Initialize@VIDPNTARGETINFO@@QEAAJPEAVDXGADAPTER@@PEBVDMMVIDEOPRESENTTARGET@@@Z.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 */

__int64 __fastcall MonitorGetLidStateFromMonitor(struct HDXGMONITOR__ *a1, bool *a2)
{
  unsigned int v3; // ebx
  char v4; // al
  _QWORD v6[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( a1 )
  {
    MONITOR_MGR::AcquireMonitorShared(v6, (__int64)a1);
    if ( v6[0] )
    {
      v4 = *(_BYTE *)(v6[0] + 176LL);
      if ( (v4 & 2) != 0 )
      {
        *a2 = (v4 & 4) != 0;
        v3 = 0;
      }
      else
      {
        v3 = -1073741811;
      }
    }
    else
    {
      v3 = -1073741275;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6770;
    }
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v6);
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6767;
  }
  return v3;
}
