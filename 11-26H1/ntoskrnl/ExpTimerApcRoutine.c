/*
 * XREFs of ExpTimerApcRoutine @ 0x1404790D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ObDereferenceObjectExWithTag2 @ 0x1404791B8 (ObDereferenceObjectExWithTag2.c)
 */

__int64 __fastcall ExpTimerApcRoutine(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v3; // rbx
  KIRQL v5; // r14
  __int64 v6; // r8
  _QWORD *v7; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = a1 - 72;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 - 72 + 64));
  if ( (*(_BYTE *)(v3 + 304) & 1) != 0 && CurrentThread == *(struct _KTHREAD **)(v3 + 80) )
  {
    if ( !*(_DWORD *)(v3 + 240) )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      v6 = *(_QWORD *)(v3 + 224);
      if ( *(_QWORD *)(v6 + 8) != v3 + 224 || (v7 = *(_QWORD **)(v3 + 232), *v7 != v3 + 224) )
        __fastfail(3u);
      *v7 = v6;
      *(_QWORD *)(v6 + 8) = v7;
      KxReleaseSpinLock((PKSPIN_LOCK)&CurrentThread[1].StackLimit);
      *(_BYTE *)(v3 + 304) &= ~1u;
    }
  }
  else
  {
    *a2 = 0LL;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 64), v5);
  return ObDereferenceObjectExWithTag2(v3);
}
