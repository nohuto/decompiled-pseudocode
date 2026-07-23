/*
 * XREFs of KiUnparkCurrentProcessor @ 0x140420BA0
 * Callers:
 *     KeTransitionProcessorParkState @ 0x1404208A0 (KeTransitionProcessorParkState.c)
 * Callees:
 *     KiSendHeteroRescheduleIntRequest @ 0x14021FDA0 (KiSendHeteroRescheduleIntRequest.c)
 *     KiAdjustReadyQueueScanOwnerOnParkingChange @ 0x14022C528 (KiAdjustReadyQueueScanOwnerOnParkingChange.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402393E0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiUpdateThreadPriority @ 0x140380850 (KiUpdateThreadPriority.c)
 *     EtwTraceParkTransition @ 0x1406C88AC (EtwTraceParkTransition.c)
 */

char __fastcall KiUnparkCurrentProcessor(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4, unsigned int a5)
{
  bool v9; // bp
  unsigned __int64 v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  char v13; // bl
  char v14; // bl
  char v15; // bl
  char result; // al

  v9 = a4 == 3 && a5;
  v10 = *(_QWORD *)(a1 + 200);
  if ( !v9 )
    _InterlockedXor64((volatile signed __int64 *)(a2 + 80), v10);
  KiAdjustReadyQueueScanOwnerOnParkingChange(a1, a2, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v11 + 120));
  v13 = *(_BYTE *)(a1 + 35) & 0xDF;
  if ( !v9 )
  {
    v13 = *(_BYTE *)(a1 + 35) & 0xCF;
    if ( (*(_BYTE *)(a1 + 35) & 1) == 0 )
      _InterlockedOr64((volatile signed __int64 *)(a2 + 8), v10);
  }
  *(_BYTE *)(a1 + 35) = v13;
  v14 = v13 & 1;
  if ( !v14 )
    *(_BYTE *)(a1 + 14523) = 1;
  v15 = v14 ^ 1;
  if ( !v9 )
  {
    KiUpdateThreadPriority(a1, v12, *(_QWORD *)(a1 + 24), 0, v15);
    _InterlockedIncrement16((volatile signed __int16 *)(MmWriteableSharedUserData + 874));
  }
  result = KiReleasePrcbLocksForIsolationUnit(a3);
  if ( v15 && !KeHeteroSystemVirtual && KeHeteroSystem )
    result = KiSendHeteroRescheduleIntRequest((_QWORD *)a1);
  if ( (WORD2(xmmword_140FC0C10) & 0x2000) != 0 )
    return EtwTraceParkTransition(a1, a5, a4);
  return result;
}
