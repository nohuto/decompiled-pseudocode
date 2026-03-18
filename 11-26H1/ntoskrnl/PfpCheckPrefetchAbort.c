/*
 * XREFs of PfpCheckPrefetchAbort @ 0x1404BEB30
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x1409AE070 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x1409AE4F8 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchRequestPerform @ 0x1409AF298 (PfpPrefetchRequestPerform.c)
 *     PfpOpenHandleCreate @ 0x1409BAE10 (PfpOpenHandleCreate.c)
 *     PfpPrefetchPrivatePages @ 0x140A4EC04 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x140A4EEAC (PfpPrefetchFiles.c)
 *     PfpPrefetchFilesTrickle @ 0x140A507FC (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  if ( v1 && *(_DWORD *)(v1 + 4) )
    return 1LL;
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
  {
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) )
      return (*(_DWORD *)(v2 + 68) >> 2) & 1;
    return 1LL;
  }
  return 0LL;
}
