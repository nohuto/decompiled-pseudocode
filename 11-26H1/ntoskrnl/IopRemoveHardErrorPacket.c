/*
 * XREFs of IopRemoveHardErrorPacket @ 0x1405CAB18
 * Callers:
 *     IopHardErrorThread @ 0x140794C00 (IopHardErrorThread.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1402BE860 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14032F300 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 IopRemoveHardErrorPacket()
{
  KIRQL v0; // al
  __int64 v1; // rbx
  __int64 v2; // rdx

  v0 = KeAcquireSpinLockRaiseToDpc(&qword_140F853B0);
  v1 = qword_140F853A0;
  if ( *(__int64 **)(qword_140F853A0 + 8) != &qword_140F853A0
    || (v2 = *(_QWORD *)qword_140F853A0, *(_QWORD *)(*(_QWORD *)qword_140F853A0 + 8LL) != qword_140F853A0) )
  {
    __fastfail(3u);
  }
  qword_140F853A0 = *(_QWORD *)qword_140F853A0;
  *(_QWORD *)(v2 + 8) = &qword_140F853A0;
  IopCurrentHardError = v1;
  KeReleaseSpinLock(&qword_140F853B0, v0);
  return v1;
}
