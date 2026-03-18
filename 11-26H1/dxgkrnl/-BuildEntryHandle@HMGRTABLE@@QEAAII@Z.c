/*
 * XREFs of ?BuildEntryHandle@HMGRTABLE@@QEAAII@Z @ 0x1402E6FB8
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x140211DC4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x140212D40 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1402E7F14 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::BuildEntryHandle(HMGRTABLE *this, unsigned int a2)
{
  __int64 v3; // rbx

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 4) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 212;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"Index < m_TableSize", 212LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (*(_DWORD *)(*(_QWORD *)this + 16 * v3 + 8) >> 7) & 0x3F | ((v3 & 0xFFFFFF | ((*(_DWORD *)(*(_QWORD *)this
                                                                                                  + 16 * v3
                                                                                                  + 8) & 0xFFFFFFE0) << 19)) << 6);
}
