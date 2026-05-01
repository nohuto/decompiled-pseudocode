/*
 * XREFs of RtlFileMapFree @ 0x18009AA74
 * Callers:
 *     AslFileMappingDelete @ 0x18009A30C (AslFileMappingDelete.c)
 *     AslpFileGetChecksumAttributes @ 0x18009B668 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x18009CB34 (AslpFileGetVersionBlock.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlFileMapFree(__int64 a1)
{
  void *v2; // rcx
  NTSTATUS result; // eax
  void *v4; // rcx
  void *v5; // rdx

  if ( a1 )
  {
    if ( *(_BYTE *)(a1 + 40) )
    {
      v2 = *(void **)a1;
      if ( v2 )
        result = ZwClose(v2);
    }
    if ( *(_BYTE *)(a1 + 41) )
    {
      v4 = *(void **)(a1 + 8);
      if ( v4 )
        result = ZwClose(v4);
    }
    if ( *(_BYTE *)(a1 + 42) )
    {
      v5 = *(void **)(a1 + 24);
      if ( v5 )
        result = ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v5);
    }
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
  return result;
}
