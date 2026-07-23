/*
 * XREFs of SmKmStoreDeleteWhenEmptyWorker @ 0x1404D9960
 * Callers:
 *     <none>
 * Callees:
 *     SmKmStoreRefFromStoreIndex @ 0x140204C10 (SmKmStoreRefFromStoreIndex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     SmKmStoreDelete @ 0x140B22710 (SmKmStoreDelete.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmptyWorker(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // ebx
  __int64 v3; // rax

  v1 = *(_QWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 64);
  KeSetEvent((PRKEVENT)(a1 + 32), 0, 0);
  v3 = SmKmStoreRefFromStoreIndex(v1, v2);
  SmKmStoreDelete(v1, *(unsigned int *)(*(_QWORD *)v3 + 2464LL), 0LL);
  return guard_dispatch_icall_no_overrides(v1, 0LL);
}
