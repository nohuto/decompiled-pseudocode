/*
 * XREFs of HalpDmaReturnEmergencyLogicalAddressResources @ 0x14057B58C
 * Callers:
 *     HalPutScatterGatherListDmarThin @ 0x14049BD20 (HalPutScatterGatherListDmarThin.c)
 *     HalpDmaFreeLa @ 0x14057B268 (HalpDmaFreeLa.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpAllocateDmaResourcesInternal @ 0x14043721C (HalpAllocateDmaResourcesInternal.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x14048AB24 (HalpConstructScatterGatherListDmarThin.c)
 */

void __fastcall HalpDmaReturnEmergencyLogicalAddressResources(__int64 a1)
{
  KSPIN_LOCK *v1; // rbp
  __int64 v3; // rdi
  KIRQL v4; // al
  _QWORD *v5; // rdx
  KIRQL v6; // r8
  _QWORD *v7; // rcx
  char v8; // si
  __int64 v9; // rax
  __int64 v10; // r9
  int v11; // ecx

  v1 = (KSPIN_LOCK *)(a1 + 568);
  v3 = 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 568));
  v5 = (_QWORD *)(a1 + 576);
  v6 = v4;
  v7 = *(_QWORD **)(a1 + 576);
  if ( v7 == (_QWORD *)(a1 + 576) )
  {
    v8 = 1;
    *(_BYTE *)(a1 + 592) = 0;
  }
  else
  {
    v8 = 0;
    if ( (_QWORD *)v7[1] != v5 || (v9 = *v7, *(_QWORD **)(*v7 + 8LL) != v7) )
      __fastfail(3u);
    *v5 = v9;
    v3 = (__int64)v7;
    *(_QWORD *)(v9 + 8) = v5;
  }
  KeReleaseSpinLock(v1, v6);
  if ( !v8 )
  {
    v11 = *(_DWORD *)(v3 + 16);
    if ( v11 )
    {
      if ( v11 != 1 )
        return;
    }
    else if ( *(_DWORD *)(a1 + 624) == 3 )
    {
      *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) = *(_QWORD *)(a1 + 560);
      ++*(_DWORD *)(a1 + 624);
      HalpAllocateDmaResourcesInternal(a1, 1, 0LL, v10);
      return;
    }
    HalpConstructScatterGatherListDmarThin(v3);
  }
}
