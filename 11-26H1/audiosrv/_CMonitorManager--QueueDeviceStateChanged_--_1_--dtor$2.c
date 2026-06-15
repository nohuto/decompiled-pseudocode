/*
 * XREFs of _CMonitorManager::QueueDeviceStateChanged_::_1_::dtor$2 @ 0x180164C0A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMonitorManager::QueueDeviceStateChanged_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CCritSecLock::~CCritSecLock((LPCRITICAL_SECTION *)(a2 + 64));
}
