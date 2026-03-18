/*
 * XREFs of ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410
 * Callers:
 *     ?GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z @ 0x1400379A4 (-GetRenderAdapterInfo@DXGPROCESS@@QEBAPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@I@Z.c)
 *     DXGGLOBAL_GetMaximumGlobalAdapterCount @ 0x14003E5D0 (DXGGLOBAL_GetMaximumGlobalAdapterCount.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140058DF8 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??1DXGGLOBAL@@EEAA@XZ @ 0x1401DBF5C (--1DXGGLOBAL@@EEAA@XZ.c)
 *     ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1401DF9E8 (-ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z.c)
 *     ?Initialize@DXGDEVICE@@QEAAJEE@Z @ 0x1403704B0 (-Initialize@DXGDEVICE@@QEAAJEE@Z.c)
 *     ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1403AF9DC (-Initialize@DXGPROCESS@@QEAAJPEAX@Z.c)
 *     ?AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z @ 0x140426CE4 (-AcquireAdapterOrdinal@DXGGLOBAL@@QEAAKE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGGLOBAL::GetMaximumGlobalAdapterCount(DXGGLOBAL *this)
{
  if ( *((_DWORD *)this + 345) )
    return *((unsigned int *)this + 345);
  WdLogSingleEntry0(1LL);
  WdLogGlobalForLineNumber = 2951;
  DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_MaximumGlobalAdapterCount > 0", 2951LL, 0LL, 0LL, 0LL, 0LL);
  return *((unsigned int *)this + 345);
}
