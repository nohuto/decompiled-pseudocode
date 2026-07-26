/*
 * XREFs of NdisMReadDmaCounter @ 0x140095B70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

ULONG __stdcall NdisMReadDmaCounter(NDIS_HANDLE MiniportDmaHandle)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(*((_QWORD *)MiniportDmaHandle + 4) + 8LL) + 80LL))();
}
