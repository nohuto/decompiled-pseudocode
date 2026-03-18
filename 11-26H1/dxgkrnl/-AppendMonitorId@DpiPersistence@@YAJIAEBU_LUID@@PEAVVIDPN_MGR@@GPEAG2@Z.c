/*
 * XREFs of ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x140347FD8
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x140338A90 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     RtlStringLengthWorkerW @ 0x14004D50C (RtlStringLengthWorkerW.c)
 *     ?GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z @ 0x140348140 (-GetMonitorIdFromTargetId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG@Z.c)
 */

__int64 __fastcall DpiPersistence::AppendMonitorId(
        DpiPersistence *this,
        unsigned int *a2,
        const struct _LUID *a3,
        struct VIDPN_MGR *a4,
        _WORD *a5,
        STRSAFE_PCNZWCH psz)
{
  unsigned int v7; // ebx
  NTSTATUS MonitorIdFromTargetId; // edi
  unsigned __int16 *v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  size_t pcchLength[2]; // [rsp+50h] [rbp-18h] BYREF

  v7 = (unsigned __int16)a4;
  MonitorIdFromTargetId = DpiPersistence::GetMonitorIdFromTargetId(
                            this,
                            (unsigned int)a2,
                            a3,
                            (struct VIDPN_MGR *)(unsigned __int16)a4,
                            (unsigned __int16)psz,
                            v10);
  if ( MonitorIdFromTargetId < 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 158;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Unable to get Monitor ID from Target ID",
      158LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return (unsigned int)MonitorIdFromTargetId;
  }
  pcchLength[0] = 0LL;
  if ( !psz )
  {
    MonitorIdFromTargetId = -1073741811;
    goto LABEL_9;
  }
  MonitorIdFromTargetId = RtlStringLengthWorkerW(psz, v7, pcchLength);
  if ( MonitorIdFromTargetId < 0 )
  {
LABEL_9:
    WdLogSingleEntry5(1LL, MonitorIdFromTargetId, psz, v7, (int)a2[1], *a2);
    v12 = *a2;
    v11 = (int)a2[1];
    WdLogGlobalForLineNumber = 173;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Invalid monitor Id. (Status = 0x%I64x, o_szMonitorId = 0x%I64x, i_MonitorIdMaxLen, pDxgAdapter->GetLuid()"
                " = 0x%I64x%08I64x)",
      MonitorIdFromTargetId,
      (__int64)psz,
      v7,
      v11,
      v12);
    return (unsigned int)MonitorIdFromTargetId;
  }
  *a5 = pcchLength[0];
  return (unsigned int)MonitorIdFromTargetId;
}
