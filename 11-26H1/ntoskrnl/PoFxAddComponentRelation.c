/*
 * XREFs of PoFxAddComponentRelation @ 0x140606A90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PoFxAddComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r15
  __int64 v8; // rdi
  volatile LONG *v9; // rsi
  KIRQL v10; // al
  ULONG_PTR v11; // rdi
  KIRQL v12; // r14
  unsigned int v13; // r8d
  unsigned int v14; // edx
  _QWORD *v15; // rsi
  __int64 v16; // rcx
  __int64 Pool2; // rax
  _QWORD *v18; // r12
  _QWORD *v19; // r14
  KIRQL v20; // al
  _QWORD *v21; // r8
  KSPIN_LOCK *v22; // r12
  KIRQL v23; // al
  _QWORD *v24; // rsi
  _QWORD *v25; // rdx

  v4 = 0;
  if ( !BugCheckParameter2 )
    return (unsigned int)-1073741585;
  if ( a2 >= *(_DWORD *)(BugCheckParameter2 + 868) )
    return (unsigned int)-1073741584;
  _mm_lfence();
  v7 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 872) + 8LL * a2);
  if ( !a3 )
    return (unsigned int)-1073741583;
  v8 = *(_QWORD *)(*(_QWORD *)(a3 + 312) + 40LL);
  if ( !v8 )
    return (unsigned int)-1073741583;
  v9 = (volatile LONG *)(v8 + 88);
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v11 = *(_QWORD *)(v8 + 80);
  v12 = v10;
  if ( !v11 )
  {
    ExReleaseSpinLockExclusive(v9, v10);
    return (unsigned int)-1073741583;
  }
  PopFxReferenceDevice(v11, 6);
  ExReleaseSpinLockExclusive(v9, v12);
  v13 = *(_DWORD *)(v11 + 868);
  v14 = 0;
  if ( !v13 )
    goto LABEL_26;
  do
  {
    v15 = *(_QWORD **)(*(_QWORD *)(v11 + 872) + 8LL * v14);
    v16 = *a4 - *v15;
    if ( *a4 == *v15 )
      v16 = a4[1] - v15[1];
    if ( !v16 )
      break;
    ++v14;
    v15 = 0LL;
  }
  while ( v14 < v13 );
  if ( v15 )
  {
    if ( (_QWORD *)v7 == v15
      || (_InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter2 + 864), 0, 0) & 1) != 0
      || (_InterlockedCompareExchange((volatile signed __int32 *)(v11 + 864), 0, 0) & 1) != 0 )
    {
      v4 = -1073741811;
    }
    else
    {
      Pool2 = ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        *(_DWORD *)Pool2 = 1;
        v18 = (_QWORD *)(Pool2 + 56);
        *(_QWORD *)(Pool2 + 8) = 0LL;
        v19 = (_QWORD *)(Pool2 + 32);
        *(_QWORD *)(Pool2 + 40) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 32) = Pool2 + 32;
        *(_QWORD *)(Pool2 + 64) = Pool2 + 56;
        *(_QWORD *)(Pool2 + 56) = Pool2 + 56;
        *(_DWORD *)(Pool2 + 16) |= 0xEu;
        *(_QWORD *)(Pool2 + 24) = v15;
        *(_QWORD *)(Pool2 + 48) = v7 + 128;
        PopFxActivateComponent(v11, (__int64)v15, 1, 0);
        PopFxActivateComponent(BugCheckParameter2, v7, 1, 0);
        v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 128));
        v21 = *(_QWORD **)(v7 + 464);
        if ( *v21 != v7 + 456 )
          goto LABEL_25;
        *v18 = v7 + 456;
        v18[1] = v21;
        *v21 = v18;
        *(_QWORD *)(v7 + 464) = v18;
        KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 128), v20);
        v22 = v15 + 16;
        v23 = KeAcquireSpinLockRaiseToDpc(v15 + 16);
        v24 = v15 + 55;
        v25 = (_QWORD *)v24[1];
        if ( (_QWORD *)*v25 != v24 )
LABEL_25:
          __fastfail(3u);
        v19[1] = v25;
        *v19 = v24;
        *v25 = v19;
        v24[1] = v19;
        KeReleaseSpinLock(v22, v23);
        PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(v7 + 16), 2);
      }
      else
      {
        v4 = -1073741670;
      }
    }
  }
  else
  {
LABEL_26:
    v4 = -1073741582;
  }
  PopFxDereferenceDevice(v11, 6);
  return v4;
}
