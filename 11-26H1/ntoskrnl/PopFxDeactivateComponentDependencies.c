/*
 * XREFs of PopFxDeactivateComponentDependencies @ 0x140397B9C
 * Callers:
 *     PopFxIdleWorkerTail @ 0x140397384 (PopFxIdleWorkerTail.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PopFxDeactivateComponentDependencies(__int64 a1)
{
  KSPIN_LOCK *v1; // r12
  KIRQL v3; // al
  ULONG_PTR v4; // rsi
  __int64 v5; // rbx
  unsigned __int64 i; // r14
  _QWORD *v7; // rbx
  _QWORD **v8; // rbp
  _QWORD **v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rax

  v1 = (KSPIN_LOCK *)(a1 + 128);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v4 = *(_QWORD *)(a1 + 80);
  v5 = 0LL;
  for ( i = v3; (unsigned int)v5 < *(_DWORD *)(a1 + 172); v5 = (unsigned int)(v5 + 1) )
    PopFxIdleComponent(v4, *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v5), 2);
  v7 = 0LL;
  v8 = (_QWORD **)(a1 + 456);
LABEL_3:
  if ( v7 )
  {
    KxReleaseSpinLock(v7 + 1);
    v9 = (_QWORD **)(v7 + 7);
  }
  else
  {
    v9 = v8;
  }
  while ( 1 )
  {
    v10 = *v9;
    if ( *v9 == v8 )
      break;
    v7 = v10 - 7;
    KxAcquireSpinLock(v10 - 6);
    if ( (*(_DWORD *)(v10 - 5) & 4) != 0 )
    {
      PopFxIdleComponent(*(_QWORD *)(v7[3] + 80LL), *(unsigned int *)(v7[3] + 16LL), 2);
      *((_DWORD *)v7 + 4) &= ~2u;
      goto LABEL_3;
    }
    KxReleaseSpinLock(v7 + 1);
    *((_DWORD *)v7 + 4) &= ~8u;
    v7[6] = 0LL;
    v11 = *v10;
    if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v12 = (_QWORD *)v10[1], (_QWORD *)*v12 != v10) )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    ExFreePoolWithTag(v10 - 7, 0x4D584650u);
  }
  KxReleaseSpinLock(v1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), i);
  __writecr8(i);
}
