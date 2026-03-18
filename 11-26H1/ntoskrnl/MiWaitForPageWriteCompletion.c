/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x1403C2610
 * Callers:
 *     MiFlushSubsection @ 0x1403C1390 (MiFlushSubsection.c)
 *     MiPurgeCandidate @ 0x1403C1FE0 (MiPurgeCandidate.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402D3E40 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x1403C26D0 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  __int64 v9; // [rsp+20h] [rbp-30h] BYREF
  int v10; // [rsp+28h] [rbp-28h]
  __int64 v11; // [rsp+2Ch] [rbp-24h]
  int v12; // [rsp+34h] [rbp-1Ch]
  __int64 v13; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-10h] BYREF

  v13 = 393479LL;
  v9 = 0LL;
  v11 = 0LL;
  v12 = 0;
  v10 = 8;
  v14[1] = v14;
  v14[0] = v14;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v9 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = &v9;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  MiUnlockProtoPoolPage(a3, a4);
  return KeWaitForGate(&v13, 18LL, 0LL);
}
