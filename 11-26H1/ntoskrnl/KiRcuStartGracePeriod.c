/*
 * XREFs of KiRcuStartGracePeriod @ 0x1405242A4
 * Callers:
 *     CcDecrementVolumeUseCountWithDelete @ 0x140384440 (CcDecrementVolumeUseCountWithDelete.c)
 *     KeRcuFreePool @ 0x1405F0010 (KeRcuFreePool.c)
 *     KeRcuSynchronize @ 0x1407BA200 (KeRcuSynchronize.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRcuForEachParticipatingCpu @ 0x1404F0A74 (KiRcuForEachParticipatingCpu.c)
 *     KiRcuFlushCompleted @ 0x140503B7C (KiRcuFlushCompleted.c)
 */

void __fastcall KiRcuStartGracePeriod(_QWORD *a1)
{
  KIRQL v2; // al
  __int64 v3; // rdx
  _QWORD *v4; // rcx
  int v5; // edi
  __int64 v6; // rcx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = KeAcquireSpinLockRaiseToDpc(&qword_140F24F18);
  v3 = qword_140F24F28 + 1;
  a1[2] = qword_140F24F28 + 1;
  v4 = (_QWORD *)qword_140F24F38;
  if ( *(__int64 **)qword_140F24F38 != &qword_140F24F30 )
    __fastfail(3u);
  a1[1] = qword_140F24F38;
  *a1 = &qword_140F24F30;
  *v4 = a1;
  qword_140F24F38 = (__int64)a1;
  qword_140F24F28 = v3;
  KeReleaseSpinLock(&qword_140F24F18, v2);
  v5 = 0;
  v7 = 0;
  KiRcuForEachParticipatingCpu(v6, (__int64)&v7);
  if ( v7 )
  {
    LOBYTE(v5) = (a1[3] & 0xFFFFFFFFFFFFFFFCuLL) < 8;
    KiRcuFlushCompleted(v5);
  }
}
