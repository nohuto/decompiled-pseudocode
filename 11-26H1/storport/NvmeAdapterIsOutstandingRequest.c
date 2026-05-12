/*
 * XREFs of NvmeAdapterIsOutstandingRequest @ 0x1400D9360
 * Callers:
 *     NvmeAdapterWaitForOutstandingIoComplete @ 0x1400E0D70 (NvmeAdapterWaitForOutstandingIoComplete.c)
 *     NvmeAdapterPowerDownDevice @ 0x140124260 (NvmeAdapterPowerDownDevice.c)
 * Callees:
 *     NvmeControllerIsOutstandingRequest @ 0x1400E1624 (NvmeControllerIsOutstandingRequest.c)
 */

char __fastcall NvmeAdapterIsOutstandingRequest(__int64 a1)
{
  char IsOutstandingRequest; // di
  struct _ERESOURCE *v4; // rbp
  _QWORD *v5; // rsi
  _QWORD *i; // rbx

  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 400) + 184LL) & 0x40000000) != 0 )
    return NvmeControllerIsOutstandingRequest(*(_QWORD *)(a1 + 1152));
  if ( (*(_DWORD *)(a1 + 416) & 0x40) == 0 )
    return 0;
  IsOutstandingRequest = 0;
  KeEnterCriticalRegion();
  v4 = (struct _ERESOURCE *)(a1 + 1192);
  ExAcquireResourceSharedLite((PERESOURCE)(a1 + 1192), 1u);
  v5 = (_QWORD *)(a1 + 1304);
  for ( i = *(_QWORD **)(a1 + 1304); i != v5; i = (_QWORD *)*i )
  {
    IsOutstandingRequest = NvmeControllerIsOutstandingRequest(i - 14);
    if ( IsOutstandingRequest )
      break;
  }
  ExReleaseResourceLite(v4);
  KeLeaveCriticalRegion();
  return IsOutstandingRequest;
}
