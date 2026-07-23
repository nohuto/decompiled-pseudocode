/*
 * XREFs of MiWaitForPageWriteCompletion @ 0x1403CC510
 * Callers:
 *     MiFlushSubsection @ 0x1403CB290 (MiFlushSubsection.c)
 *     MiPurgeCandidate @ 0x1403CBEE0 (MiPurgeCandidate.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402B5C00 (MiUnlockProtoPoolPage.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeWaitForGate @ 0x1403CC5D0 (KeWaitForGate.c)
 */

__int64 __fastcall MiWaitForPageWriteCompletion(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-30h] BYREF
  int v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+2Ch] [rbp-24h]
  int v14; // [rsp+34h] [rbp-1Ch]
  __int64 v15; // [rsp+38h] [rbp-18h] BYREF
  _QWORD v16[2]; // [rsp+40h] [rbp-10h] BYREF

  v15 = 393479LL;
  v11 = 0LL;
  v13 = 0LL;
  v14 = 0;
  v12 = 8;
  v16[1] = v16;
  v16[0] = v16;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  v11 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 80) = &v11;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a2 + 72));
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  LOBYTE(v8) = a4;
  MiUnlockProtoPoolPage(a3, v8, v9);
  return KeWaitForGate(&v15, 18LL, 0LL);
}
