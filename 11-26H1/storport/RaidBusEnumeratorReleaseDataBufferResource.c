/*
 * XREFs of RaidBusEnumeratorReleaseDataBufferResource @ 0x1400702E8
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorReAllocateDataBufferResource @ 0x140070244 (RaidBusEnumeratorReAllocateDataBufferResource.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidBusEnumeratorReleaseDataBufferResource(__int64 a1)
{
  void *v2; // rcx
  struct _MDL *v3; // rcx

  v2 = *(void **)(a1 + 40);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x32316152u);
    *(_QWORD *)(a1 + 40) = 0LL;
    *(_DWORD *)(a1 + 48) = 0;
  }
  v3 = *(struct _MDL **)(a1 + 16);
  if ( v3 )
  {
    IoFreeMdl(v3);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
}
