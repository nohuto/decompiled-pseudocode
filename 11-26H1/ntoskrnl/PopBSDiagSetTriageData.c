/*
 * XREFs of PopBSDiagSetTriageData @ 0x1407E0B90
 * Callers:
 *     PopDirectedDripsInitializePhase3 @ 0x140CD6CF8 (PopDirectedDripsInitializePhase3.c)
 *     PopInitializeBlameStack @ 0x140CD7764 (PopInitializeBlameStack.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 *     PopBSDiagInitialize @ 0x140CDC274 (PopBSDiagInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x140424A28 (PopAcquireRwLockShared.c)
 */

__int64 __fastcall PopBSDiagSetTriageData(int a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  __int64 v4; // rbx
  int v5; // esi
  __int64 v7; // rax

  v4 = a1;
  v5 = a3;
  PopAcquireRwLockShared((volatile signed __int64 *)&xmmword_140F0C2F8, a2, a3, a4);
  v7 = 2 * v4;
  *((_QWORD *)&unk_140F0C310 + v7) = a2;
  *((_DWORD *)&unk_140F0C310 + 2 * v7 + 2) = v5;
  return PopReleaseRwLock((struct _KTHREAD *)&xmmword_140F0C2F8);
}
