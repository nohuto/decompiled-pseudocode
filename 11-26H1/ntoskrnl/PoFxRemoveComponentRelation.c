/*
 * XREFs of PoFxRemoveComponentRelation @ 0x140607110
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxActivateComponent @ 0x14037C8F0 (PopFxActivateComponent.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxNextParentRelationSafe @ 0x14046A9F0 (PopFxNextParentRelationSafe.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14046AAC0 (PopFxNextComponentChildRelationSafe.c)
 */

__int64 __fastcall PoFxRemoveComponentRelation(ULONG_PTR BugCheckParameter2, unsigned int a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v7; // r13
  __int64 v8; // rdi
  KIRQL v9; // al
  ULONG_PTR v10; // rbp
  KIRQL v11; // r15
  unsigned int v12; // r8d
  unsigned int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rcx
  KSPIN_LOCK *v16; // rcx
  char v17; // si
  _QWORD *v18; // rax
  KSPIN_LOCK v19; // r8
  KSPIN_LOCK *v20; // rdx
  KIRQL v21; // r15
  __int64 i; // rdx
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF
  KIRQL NewIrql; // [rsp+60h] [rbp+8h]

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
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88));
  v10 = *(_QWORD *)(v8 + 80);
  v11 = v9;
  if ( !v10 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88), v9);
    return (unsigned int)-1073741583;
  }
  PopFxReferenceDevice(*(_QWORD *)(v8 + 80), 6);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v8 + 88), v11);
  v12 = *(_DWORD *)(v10 + 868);
  v13 = 0;
  if ( !v12 )
    goto LABEL_30;
  do
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v10 + 872) + 8LL * v13);
    v15 = *a4 - *(_QWORD *)v14;
    if ( *a4 == *(_QWORD *)v14 )
      v15 = a4[1] - *(_QWORD *)(v14 + 8);
    if ( !v15 )
      break;
    ++v13;
    v14 = 0LL;
  }
  while ( v13 < v12 );
  if ( v14 )
  {
    PopFxActivateComponent(BugCheckParameter2, v7, 1, 0);
    NewIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v7 + 128));
    v16 = 0LL;
    v24[0] = 0LL;
    v17 = 0;
    while ( PopFxNextParentRelationSafe((_QWORD **)(v7 + 456), (__int64)v16, v24) )
    {
      v16 = (KSPIN_LOCK *)v24[0];
      if ( *(_QWORD *)(v24[0] + 24LL) == v14 )
      {
        *(_DWORD *)(v24[0] + 16LL) &= ~8u;
        v18 = v16 + 7;
        v16[6] = 0LL;
        v19 = v16[7];
        if ( *(KSPIN_LOCK **)(v19 + 8) != v16 + 7 || (v20 = (KSPIN_LOCK *)v16[8], (_QWORD *)*v20 != v18) )
          __fastfail(3u);
        *v20 = v19;
        *(_QWORD *)(v19 + 8) = v20;
        v17 = 1;
        v16[8] = (KSPIN_LOCK)(v16 + 7);
        *v18 = v18;
        KxReleaseSpinLock(v16 + 1);
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v7 + 128), NewIrql);
    if ( v17 )
    {
      v21 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v14 + 128));
      v24[0] = 0LL;
      for ( i = 0LL; PopFxNextComponentChildRelationSafe(v14, i, v24); i = v24[0] )
        ;
      KeReleaseSpinLock((PKSPIN_LOCK)(v14 + 128), v21);
      PopFxIdleComponent(v10, *(unsigned int *)(v14 + 16), 2);
    }
    else
    {
      v4 = -1073741811;
    }
    PopFxIdleComponent(BugCheckParameter2, *(unsigned int *)(v7 + 16), 2);
  }
  else
  {
LABEL_30:
    v4 = -1073741582;
  }
  PopFxDereferenceDevice(v10, 6);
  return v4;
}
