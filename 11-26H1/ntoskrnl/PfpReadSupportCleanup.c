/*
 * XREFs of PfpReadSupportCleanup @ 0x140A4FB00
 * Callers:
 *     PfpPrefetchFiles @ 0x140A4EEAC (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140A507FC (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     NtClose @ 0x1408F9F30 (NtClose.c)
 *     PfpOpenHandleClose @ 0x1409BA288 (PfpOpenHandleClose.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PfpReadSupportCleanup(__int64 a1, __int64 a2)
{
  void *v4; // rcx

  v4 = *(void **)(a2 + 40);
  if ( v4 )
    NtClose(v4);
  if ( *(_QWORD *)a2 )
    ExFreePoolWithTag(*(PVOID *)a2, 0);
  if ( _bittest64((const signed __int64 *)(a2 + 32), 0x22u) )
    PfpOpenHandleClose(a2 + 8, a1);
}
