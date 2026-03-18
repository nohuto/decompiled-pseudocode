/*
 * XREFs of DispatchCtxtQueue @ 0x140039F20
 * Callers:
 *     <none>
 * Callees:
 *     RunContext @ 0x140009490 (RunContext.c)
 */

void DispatchCtxtQueue()
{
  KIRQL v0; // al
  char v1; // cl
  _QWORD *v2; // rcx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  v0 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
  v1 = gReadyQueue & 0xFD;
  byte_14008EB70 = v0;
  gReadyQueue &= ~2u;
  if ( (__int64 *)qword_14008EB58 != &qword_14008EB58
    && ((__int64 *)RunningContextListHead == &RunningContextListHead || (gdwfAMLI & 4) != 0)
    && (v1 & 8) == 0 )
  {
    while ( 1 )
    {
      v2 = (_QWORD *)qword_14008EB58;
      if ( (__int64 *)qword_14008EB58 == &qword_14008EB58 )
        break;
      if ( *(__int64 **)(qword_14008EB58 + 8) != &qword_14008EB58
        || (v3 = *(_QWORD *)qword_14008EB58, *(_QWORD *)(*(_QWORD *)qword_14008EB58 + 8LL) != qword_14008EB58) )
      {
        __fastfail(3u);
      }
      qword_14008EB58 = *(_QWORD *)qword_14008EB58;
      *(_QWORD *)(v3 + 8) = &qword_14008EB58;
      v2[1] = v2;
      *v2 = v2;
      v4 = v2 - 4;
      *((_DWORD *)v4 + 16) &= ~0x40u;
      RunContext(v4);
    }
  }
  KeReleaseSpinLock(&SpinLock, byte_14008EB70);
}
