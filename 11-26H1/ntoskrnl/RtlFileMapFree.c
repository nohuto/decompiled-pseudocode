/*
 * XREFs of RtlFileMapFree @ 0x140719740
 * Callers:
 *     AslpFileGetChecksumAttributes @ 0x140892980 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetVersionBlock @ 0x140893EF8 (AslpFileGetVersionBlock.c)
 *     AslFileMappingDelete @ 0x1409D772C (AslFileMappingDelete.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwUnmapViewOfSection @ 0x140728500 (ZwUnmapViewOfSection.c)
 *     MmUnsecureVirtualMemory @ 0x140992B70 (MmUnsecureVirtualMemory.c)
 */

__int64 __fastcall RtlFileMapFree(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rdx
  __int64 result; // rax

  if ( a1 )
  {
    v2 = *(void **)(a1 + 40);
    if ( v2 )
      MmUnsecureVirtualMemory(v2);
    if ( *(_BYTE *)(a1 + 48) && *(_QWORD *)a1 )
      ZwClose(*(HANDLE *)a1);
    if ( *(_BYTE *)(a1 + 49) )
    {
      v3 = *(void **)(a1 + 8);
      if ( v3 )
        ZwClose(v3);
    }
    if ( *(_BYTE *)(a1 + 50) )
    {
      v4 = *(void **)(a1 + 24);
      if ( v4 )
        ZwUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, v4);
    }
    result = 0LL;
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
    *(_QWORD *)(a1 + 48) = 0LL;
  }
  return result;
}
