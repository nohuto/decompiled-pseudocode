/*
 * XREFs of StorFreeGatewayLockHandleArray @ 0x14005C8D0
 * Callers:
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorFreeGatewayLockHandleArray(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 6136);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 6136) = 0LL;
  }
}
