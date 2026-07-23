/*
 * XREFs of PspProcessUnbindVirtualizedTimers @ 0x140532704
 * Callers:
 *     PspExitProcess @ 0x1409FE380 (PspExitProcess.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExRemoveVirtualizedTimer @ 0x1404B9B9C (ExRemoveVirtualizedTimer.c)
 */

void __fastcall PspProcessUnbindVirtualizedTimers(__int64 a1)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v3; // si
  _QWORD **v4; // rbx
  _QWORD *v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rax

  if ( (*(_DWORD *)(a1 + 136) & 0x10) != 0 )
  {
    v2 = (KSPIN_LOCK *)(a1 + 1800);
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1800));
    v4 = (_QWORD **)(a1 + 1808);
    while ( 1 )
    {
      v5 = *v4;
      if ( *v4 == v4 )
        break;
      if ( (_QWORD **)v5[1] != v4 || (v6 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v4 = v6;
      v6[1] = v4;
      v7 = (void *)ExRemoveVirtualizedTimer((__int64)v5);
      ObfDereferenceObjectWithTag(v7, 0x54567350u);
    }
    KeReleaseSpinLock(v2, v3);
  }
}
