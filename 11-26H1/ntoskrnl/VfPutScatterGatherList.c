/*
 * XREFs of VfPutScatterGatherList @ 0x140C2B990
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140C28BAC (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140C28D8C (SUBTRACT_MAP_REGISTERS.c)
 *     VF_ASSERT_IRQL @ 0x140C28EAC (VF_ASSERT_IRQL.c)
 *     VF_UNMARK_SCATTER_GATHER_LIST @ 0x140C290DC (VF_UNMARK_SCATTER_GATHER_LIST.c)
 *     ViFlushDoubleBuffer @ 0x140C2CAE4 (ViFlushDoubleBuffer.c)
 *     ViFreeMapRegisterFile @ 0x140C2CCA0 (ViFreeMapRegisterFile.c)
 *     ViGetAdapterInformationInternal @ 0x140C2CF90 (ViGetAdapterInformationInternal.c)
 *     ViGetRealDmaAdapter @ 0x140C2D1F4 (ViGetRealDmaAdapter.c)
 */

void __fastcall VfPutScatterGatherList(int a1, int *a2, char a3)
{
  __int64 RealDmaAdapter; // rbp
  __int64 AdapterInformationInternal; // rdi
  _QWORD *v8; // rbx
  KIRQL v9; // al
  _QWORD *v10; // rbx
  KIRQL v11; // r8
  _QWORD *v12; // rbx
  _QWORD *v13; // rcx
  _QWORD *v14; // rdx
  int v15; // r12d
  _QWORD *v16; // rax

  RealDmaAdapter = ViGetRealDmaAdapter(a1);
  AdapterInformationInternal = ViGetAdapterInformationInternal(a1);
  if ( !AdapterInformationInternal
    || (VF_ASSERT_IRQL(2u), v8 = (_QWORD *)(AdapterInformationInternal + 88), (_QWORD *)*v8 == v8) )
  {
LABEL_12:
    guard_dispatch_icall_no_overrides(RealDmaAdapter, (__int64)a2);
    if ( AdapterInformationInternal )
      DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
  }
  else
  {
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(AdapterInformationInternal + 104));
    v10 = (_QWORD *)*v8;
    v11 = v9;
    while ( 1 )
    {
      v12 = v10 - 9;
      if ( (_QWORD *)AdapterInformationInternal == v12 - 2 )
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v9);
        goto LABEL_12;
      }
      v13 = v12 + 9;
      if ( (int *)v12[8] == a2 )
        break;
      v10 = (_QWORD *)*v13;
    }
    v14 = (_QWORD *)*v13;
    v15 = *a2;
    if ( *(_QWORD **)(*v13 + 8LL) != v13 || (v16 = (_QWORD *)v12[10], (_QWORD *)*v16 != v13) )
      __fastfail(3u);
    *v16 = v14;
    v14[1] = v16;
    KeReleaseSpinLock((PKSPIN_LOCK)(AdapterInformationInternal + 104), v11);
    VF_UNMARK_SCATTER_GATHER_LIST((__int64)a2, v12[12]);
    guard_dispatch_icall_no_overrides(RealDmaAdapter, (__int64)a2);
    SUBTRACT_MAP_REGISTERS(AdapterInformationInternal, v15);
    DECREMENT_SCATTER_GATHER_LISTS(AdapterInformationInternal);
    ViFlushDoubleBuffer(v12[12], a3);
    ViFreeMapRegisterFile(AdapterInformationInternal);
    ExFreeToNPagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140E27C48.AffinityVersion, v12);
  }
}
