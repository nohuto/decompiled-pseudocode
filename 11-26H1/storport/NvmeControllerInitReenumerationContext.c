/*
 * XREFs of NvmeControllerInitReenumerationContext @ 0x1400C6298
 * Callers:
 *     NvmeControllerStartReenumeration @ 0x1400C6538 (NvmeControllerStartReenumeration.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     NvmeControllerDeleteReenumerationContext @ 0x1400C5BB4 (NvmeControllerDeleteReenumerationContext.c)
 */

__int64 __fastcall NvmeControllerInitReenumerationContext(__int64 a1)
{
  unsigned int v1; // edi
  __int64 Pool; // rax
  __int64 v5; // rbx

  v1 = 0;
  if ( *(_QWORD *)(a1 + 1656) )
    return 0LL;
  Pool = RaidAllocatePool(64LL, 56LL, 1950703954LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL));
  *(_QWORD *)(a1 + 1656) = Pool;
  if ( !Pool
    || (*(_QWORD *)(Pool + 48) = RaidAllocatePool(64LL, 4096LL, 1950703954LL, *(_QWORD *)(*(_QWORD *)(a1 + 128) + 8LL)),
        !*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 48LL))
    || (v5 = *(_QWORD *)(a1 + 1656),
        *(_QWORD *)(v5 + 40) = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 128) + 8LL)),
        !*(_QWORD *)(*(_QWORD *)(a1 + 1656) + 40LL)) )
  {
    v1 = -1073741670;
    NvmeControllerDeleteReenumerationContext(a1);
  }
  return v1;
}
