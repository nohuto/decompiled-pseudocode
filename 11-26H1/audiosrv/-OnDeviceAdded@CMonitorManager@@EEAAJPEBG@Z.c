/*
 * XREFs of ?OnDeviceAdded@CMonitorManager@@EEAAJPEBG@Z @ 0x18011F1A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_S @ 0x180082A54 (WPP_SF_S.c)
 */

__int64 __fastcall CMonitorManager::OnDeviceAdded(struct _RTL_CRITICAL_SECTION *pv, wchar_t *a2)
{
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x800000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x19u, (__int64)&WPP_72c9fd82aa603dc17c55ee7407a1fef9_Traceguids, a2);
  }
  return CMonitorManager::QueueDeviceStateChanged(pv, 1, a2);
}
