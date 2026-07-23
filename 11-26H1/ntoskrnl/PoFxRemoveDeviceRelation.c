/*
 * XREFs of PoFxRemoveDeviceRelation @ 0x140607360
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxReferenceDevice @ 0x140396654 (PopFxReferenceDevice.c)
 *     PopFxIdleComponent @ 0x140396DA0 (PopFxIdleComponent.c)
 *     PopFxDereferenceDevice @ 0x1403C00F4 (PopFxDereferenceDevice.c)
 *     PopFxNextParentRelationSafe @ 0x14046A9F0 (PopFxNextParentRelationSafe.c)
 *     PopFxNextComponentChildRelationSafe @ 0x14046AAC0 (PopFxNextComponentChildRelationSafe.c)
 *     PoFxIdleDevice @ 0x1404ABB10 (PoFxIdleDevice.c)
 *     PopFxActivateDevice @ 0x1404CEB00 (PopFxActivateDevice.c)
 */

__int64 __fastcall PoFxRemoveDeviceRelation(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v3; // ebx
  __int64 v6; // rdi
  KIRQL v7; // al
  ULONG_PTR v8; // rsi
  KIRQL v9; // r14
  unsigned int v10; // r8d
  unsigned int v11; // edx
  __int64 v12; // rdi
  __int64 v13; // rcx
  KIRQL v14; // r13
  KSPIN_LOCK *v15; // rcx
  char v16; // bp
  _QWORD *v17; // rax
  KSPIN_LOCK v18; // r8
  KSPIN_LOCK *v19; // rdx
  KIRQL v20; // r14
  __int64 i; // rdx
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( !a1 )
    return (unsigned int)-1073741585;
  if ( !a2 )
    return (unsigned int)-1073741584;
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 312) + 40LL);
  if ( !v6 )
    return (unsigned int)-1073741584;
  v7 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88));
  v8 = *(_QWORD *)(v6 + 80);
  v9 = v7;
  if ( !v8 )
  {
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88), v7);
    return (unsigned int)-1073741584;
  }
  PopFxReferenceDevice(*(_QWORD *)(v6 + 80), 6);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v6 + 88), v9);
  v10 = *(_DWORD *)(v8 + 868);
  v11 = 0;
  if ( !v10 )
    goto LABEL_28;
  do
  {
    v12 = *(_QWORD *)(*(_QWORD *)(v8 + 872) + 8LL * v11);
    v13 = *a3 - *(_QWORD *)v12;
    if ( *a3 == *(_QWORD *)v12 )
      v13 = a3[1] - *(_QWORD *)(v12 + 8);
    if ( !v13 )
      break;
    ++v11;
    v12 = 0LL;
  }
  while ( v11 < v10 );
  if ( v12 )
  {
    PopFxActivateDevice(*(_QWORD *)(a1 + 96), 0, 0);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 1280));
    v23 = 0LL;
    v15 = 0LL;
    v16 = 0;
    while ( PopFxNextParentRelationSafe((_QWORD **)(a1 + 1304), (__int64)v15, &v23) )
    {
      v15 = (KSPIN_LOCK *)v23;
      if ( *(_QWORD *)(v23 + 24) == v12 )
      {
        *(_DWORD *)(v23 + 16) &= ~8u;
        v17 = v15 + 7;
        v15[6] = 0LL;
        v18 = v15[7];
        if ( *(KSPIN_LOCK **)(v18 + 8) != v15 + 7 || (v19 = (KSPIN_LOCK *)v15[8], (_QWORD *)*v19 != v17) )
          __fastfail(3u);
        *v19 = v18;
        *(_QWORD *)(v18 + 8) = v19;
        v16 = 1;
        v15[8] = (KSPIN_LOCK)(v15 + 7);
        *v17 = v17;
        KxReleaseSpinLock(v15 + 1);
        break;
      }
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 1280), v14);
    if ( v16 )
    {
      v20 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v12 + 128));
      v23 = 0LL;
      for ( i = 0LL; PopFxNextComponentChildRelationSafe(v12, i, &v23); i = v23 )
        ;
      KeReleaseSpinLock((PKSPIN_LOCK)(v12 + 128), v20);
      PopFxIdleComponent(v8, *(unsigned int *)(v12 + 16), 2);
    }
    else
    {
      v3 = -1073741811;
    }
    PoFxIdleDevice(*(_QWORD *)(a1 + 96));
  }
  else
  {
LABEL_28:
    v3 = -1073741583;
  }
  PopFxDereferenceDevice(v8, 6);
  return v3;
}
