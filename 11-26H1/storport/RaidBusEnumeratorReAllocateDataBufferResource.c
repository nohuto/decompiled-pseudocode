/*
 * XREFs of RaidBusEnumeratorReAllocateDataBufferResource @ 0x140070244
 * Callers:
 *     RaidBusEnumeratorGetLunList @ 0x14000A2D0 (RaidBusEnumeratorGetLunList.c)
 *     RaidAdapterEnumerateBus @ 0x14000B1B0 (RaidAdapterEnumerateBus.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x14000D870 (RaidBusEnumeratorGenericInquiry.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     RaidBusEnumeratorReleaseDataBufferResource @ 0x1400702E8 (RaidBusEnumeratorReleaseDataBufferResource.c)
 */

__int64 __fastcall RaidBusEnumeratorReAllocateDataBufferResource(__int64 *a1, __int64 a2, ULONG a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  void *Pool; // rax
  PMDL Mdl; // rax

  v3 = *a1;
  v7 = 0;
  RaidBusEnumeratorReleaseDataBufferResource(a1);
  Pool = (void *)RaidAllocatePool(64LL, a3, 842096978LL, *(_QWORD *)(v3 + 8));
  *(_QWORD *)(a2 + 32) = Pool;
  if ( !Pool )
    return (unsigned int)-1073741801;
  *(_DWORD *)(a2 + 40) = a3;
  Mdl = IoAllocateMdl(Pool, a3, 0, 0, 0LL);
  *(_QWORD *)(a2 + 8) = Mdl;
  if ( !Mdl )
  {
    RaidBusEnumeratorReleaseDataBufferResource(a1);
    return (unsigned int)-1073741801;
  }
  return v7;
}
