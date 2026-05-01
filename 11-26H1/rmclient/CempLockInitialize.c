/*
 * XREFs of CempLockInitialize @ 0x180003900
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     ??0ModernResourceManagerProxy@@QEAA@XZ @ 0x18000363C (--0ModernResourceManagerProxy@@QEAA@XZ.c)
 *     HamConnectForServicing @ 0x1800036A0 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180003790 (HamConnectForExtendedExecution.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CempLockInitialize(__int64 a1)
{
  __int64 result; // rax

  *(_OWORD *)a1 = 0LL;
  result = RtlInitializeSRWLock(a1);
  *(_DWORD *)(a1 + 8) = 0;
  return result;
}
