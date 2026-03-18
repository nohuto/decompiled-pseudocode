/*
 * XREFs of ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x140135820
 * Callers:
 *     PowerIsDisplayRequired @ 0x1401357B0 (PowerIsDisplayRequired.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputGlobals::GetGlobalTickCountWithSequence(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v6; // rbx

  v4 = a2;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  *a3 = *(_QWORD *)(a1 + 8 * v4 + 80);
  v6 = *(_QWORD *)(a1 + 8 * v4 + 16);
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v6;
}
