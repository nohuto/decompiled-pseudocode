/*
 * XREFs of ?_FillTargetInfoAdaptersCallback@CCD_TOPOLOGY@@CAJPEAVDXGADAPTER@@PEAX@Z @ 0x14033E820
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z @ 0x14033F4C8 (-GetPathDescriptor@CCD_TOPOLOGY@@QEBAPEBUD3DKMT_PATHMODALITY_DESCRIPTOR@@I@Z.c)
 *     ?MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x14033F7DC (-MonitorGetMonitorInformationForTargets@@YAJPEAXP6AJ00IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::_FillTargetInfoAdaptersCallback(struct DXGADAPTER *a1, CCD_TOPOLOGY *a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax
  unsigned __int16 v6; // cx
  __int64 v7; // rax
  unsigned __int16 v8; // cx
  int v9; // eax
  int (__high *v10)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8); // rdx
  unsigned int v11; // r9d
  int v12; // ebx
  int MonitorInformationForTargets; // eax
  _BYTE v15[144]; // [rsp+30h] [rbp-A8h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = *((_QWORD *)a2 + 8);
    v6 = v5 ? *(_WORD *)(v5 + 20) : 0;
    if ( i >= v6
      || *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 4) == *((_DWORD *)a1 + 103)
      && *((_DWORD *)CCD_TOPOLOGY::GetPathDescriptor(a2, i) + 5) == *((_DWORD *)a1 + 104) )
    {
      break;
    }
  }
  v7 = *((_QWORD *)a2 + 8);
  if ( v7 )
    v8 = *(_WORD *)(v7 + 20);
  else
    v8 = 0;
  if ( i >= v8 )
    return 0LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v15, a1, 0LL);
  v9 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v15, 0LL);
  v12 = v9;
  if ( v9 < 0 )
  {
    WdLogSingleEntry5(2LL, v9, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), *((_QWORD *)a2 + 8));
    WdLogGlobalForLineNumber = 5611;
  }
  else
  {
    MonitorInformationForTargets = MonitorGetMonitorInformationForTargets(a1, v10, a2, v11);
    v12 = 0;
    if ( MonitorInformationForTargets != -1073741275 )
      v12 = MonitorInformationForTargets;
    if ( v12 < 0 )
    {
      WdLogSingleEntry5(2LL, v12, a1, *((int *)a1 + 104), *((unsigned int *)a1 + 103), *((_QWORD *)a2 + 8));
      WdLogGlobalForLineNumber = 5635;
    }
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v15);
  return (unsigned int)v12;
}
