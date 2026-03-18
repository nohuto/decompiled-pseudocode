/*
 * XREFs of ?GetUsedEntryCount@HMGRTABLE@@QEAAIXZ @ 0x140083780
 * Callers:
 *     ??1DXGCHANNELENDPOINTPROXY@@UEAA@XZ @ 0x140211DC4 (--1DXGCHANNELENDPOINTPROXY@@UEAA@XZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x140212D40 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall HMGRTABLE::GetUsedEntryCount(HMGRTABLE *this)
{
  if ( *((_DWORD *)this + 4) < *((_DWORD *)this + 5) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 159;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_TableSize >= m_FreeCount", 159LL, 0LL, 0LL, 0LL, 0LL);
  }
  return (unsigned int)(*((_DWORD *)this + 4) - *((_DWORD *)this + 5));
}
