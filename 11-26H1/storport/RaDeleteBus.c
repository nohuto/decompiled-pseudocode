/*
 * XREFs of RaDeleteBus @ 0x140183F6C
 * Callers:
 *     RaidAdapterHack @ 0x1400476EC (RaidAdapterHack.c)
 *     RaidDeleteAdapter @ 0x1400478CC (RaidDeleteAdapter.c)
 *     DeleteNvmeAdapter @ 0x1400D1764 (DeleteNvmeAdapter.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

void *__fastcall RaDeleteBus(__int64 a1)
{
  void *result; // rax

  if ( *(_BYTE *)a1 )
  {
    (*(void (__fastcall **)(_QWORD))(a1 + 32))(*(_QWORD *)(a1 + 16));
    *(_BYTE *)a1 = 0;
    return memset_0((void *)(a1 + 8), 0, 0x40uLL);
  }
  return result;
}
