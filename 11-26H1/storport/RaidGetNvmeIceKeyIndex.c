/*
 * XREFs of RaidGetNvmeIceKeyIndex @ 0x1400717A8
 * Callers:
 *     RaidAcquireNvmeIceKeyResources @ 0x140058BB4 (RaidAcquireNvmeIceKeyResources.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidGetNvmeIceKeyIndex(__int64 a1, const void *a2)
{
  __int64 i; // rbx
  __int64 v5; // rdx

  for ( i = 0LL; (unsigned int)i < *(_DWORD *)a1; i = (unsigned int)(i + 1) )
  {
    v5 = *(_QWORD *)(a1 + 16);
    if ( (*(_BYTE *)(v5 + 72 * i + 68) & 1) != 0 && RtlCompareMemory((const void *)(v5 + 72 * i + 4), a2, 0x20uLL) == 32 )
      break;
  }
  return (unsigned int)i;
}
