/*
 * XREFs of StorDeleteIoGateway @ 0x14004A3D0
 * Callers:
 *     RaidAdapterReleaseResources @ 0x140185C48 (RaidAdapterReleaseResources.c)
 * Callees:
 *     <none>
 */

void __fastcall StorDeleteIoGateway(__int64 a1)
{
  void *v2; // rcx

  v2 = *(void **)(a1 + 1024);
  if ( v2 )
  {
    *(_DWORD *)(a1 + 1036) = 0;
    ExFreePoolWithTag(v2, 0x41476152u);
    *(_QWORD *)(a1 + 1024) = 0LL;
  }
}
