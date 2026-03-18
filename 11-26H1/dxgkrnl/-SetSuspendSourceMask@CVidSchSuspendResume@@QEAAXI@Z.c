/*
 * XREFs of ?SetSuspendSourceMask@CVidSchSuspendResume@@QEAAXI@Z @ 0x14005C6DC
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1402CFF04 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1402D4EF8 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall CVidSchSuspendResume::SetSuspendSourceMask(CVidSchSuspendResume *this, int a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
  {
    if ( (a2 & *(_DWORD *)(v2 + 756)) != a2 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 8519;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"(m_pAdapter->GetSchedulerSuspendSourceMask() & SourceMask) == SourceMask",
        8519LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    *(_DWORD *)this = a2;
  }
}
