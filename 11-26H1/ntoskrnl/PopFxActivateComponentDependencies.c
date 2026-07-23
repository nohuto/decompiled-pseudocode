/*
 * XREFs of PopFxActivateComponentDependencies @ 0x140463720
 * Callers:
 *     PopFxActivateComponentWorker @ 0x14037CC20 (PopFxActivateComponentWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall PopFxActivateComponentDependencies(__int64 a1, char a2)
{
  __int64 v2; // r15
  volatile signed __int64 *v3; // rsi
  KIRQL v6; // al
  int v7; // ecx
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  _QWORD *v10; // r15
  _QWORD **v11; // r12
  _QWORD *v12; // rdi
  bool v13; // bl
  __int64 v15; // rdi
  __int64 v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  int v19; // ecx
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 80);
  v3 = (volatile signed __int64 *)(a1 + 128);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 128));
  v7 = *(_DWORD *)(a1 + 172);
  v8 = 0LL;
  v9 = v6;
  *(_DWORD *)(a1 + 184) = v7;
  if ( v7 )
  {
    do
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v2 + 872) + 8LL * *(unsigned int *)(*(_QWORD *)(a1 + 176) + 8 * v8));
      PopFxActivateComponent(v2, v15, 10, a2);
      *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v8 + 4) = 1;
      if ( *(int *)(v15 + 88) < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(a1 + 176) + 8 * v8 + 4) = 0;
        --*(_DWORD *)(a1 + 184);
      }
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < *(_DWORD *)(a1 + 172) );
  }
  v10 = 0LL;
LABEL_3:
  if ( v10 )
  {
    KxReleaseSpinLock(v10 + 1);
    v11 = (_QWORD **)(v10 + 7);
  }
  else
  {
    v11 = (_QWORD **)(a1 + 456);
  }
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == (_QWORD *)(a1 + 456) )
      break;
    v10 = v12 - 7;
    KxAcquireSpinLock(v12 - 6);
    if ( (*(_DWORD *)(v12 - 5) & 4) != 0 )
    {
      v18 = v10[3];
      PopFxActivateComponent(*(_QWORD *)(v18 + 80), v18, 10, 0);
      v19 = *((_DWORD *)v10 + 4);
      if ( *(int *)(v18 + 88) < 0 )
      {
        *((_DWORD *)v10 + 4) = v19 | 2;
      }
      else
      {
        *((_DWORD *)v10 + 4) = v19 | 1;
        ++*(_DWORD *)(a1 + 184);
      }
      goto LABEL_3;
    }
    KxReleaseSpinLock(v10 + 1);
    *((_DWORD *)v10 + 4) &= ~8u;
    v10[6] = 0LL;
    v16 = *v12;
    if ( *(_QWORD **)(*v12 + 8LL) != v12 || (v17 = (_QWORD *)v12[1], (_QWORD *)*v17 != v12) )
      __fastfail(3u);
    *v17 = v16;
    *(_QWORD *)(v16 + 8) = v17;
    ExFreePoolWithTag(v12 - 7, 0x4D584650u);
  }
  v13 = *(_DWORD *)(a1 + 184) == 0;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64(v3, 0LL);
  else
    KiReleaseSpinLockInstrumented(v3, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
  __writecr8(v9);
  return v13;
}
