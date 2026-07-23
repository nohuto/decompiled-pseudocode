/*
 * XREFs of HalpDmaGetReservedRegionsForTranslateDomain @ 0x14058D2D4
 * Callers:
 *     HalpDmaAllocateDomain @ 0x14058CB90 (HalpDmaAllocateDomain.c)
 * Callees:
 *     HalpMmAllocCtxAlloc @ 0x140359D9C (HalpMmAllocCtxAlloc.c)
 *     HalpIommuGetReservedRanges @ 0x140590208 (HalpIommuGetReservedRanges.c)
 */

__int64 __fastcall HalpDmaGetReservedRegionsForTranslateDomain(__int64 a1, char a2, char *a3)
{
  __int64 v3; // rbx
  unsigned int v4; // edi
  char v7; // al
  unsigned int v8; // esi
  __int64 v9; // rdx
  unsigned int v10; // r10d
  __int64 v11; // r8
  bool v12; // zf
  __int64 v13; // r9
  __int64 v14; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  unsigned int v19; // [rsp+40h] [rbp+8h] BYREF
  __int64 v20; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  v4 = 0;
  v20 = 0LL;
  v19 = 0;
  if ( !a1 )
    goto LABEL_5;
  if ( (int)HalpIommuGetReservedRanges(a1, &v19, &v20) < 0 )
    return v3;
  v4 = v19;
  if ( v19 )
    v7 = 1;
  else
LABEL_5:
    v7 = 0;
  *a3 = v7;
  v8 = v4 + HalpDmaReservedLaRegionsCount;
  if ( v4 + HalpDmaReservedLaRegionsCount )
  {
    v3 = HalpMmAllocCtxAlloc(a1, 32 * v8);
    if ( v3 )
    {
      v9 = HalpDmaReservedLaRegions;
      v10 = 0;
      while ( v9 )
      {
        v11 = 32LL * v10;
        *(_QWORD *)(v11 + v3 + 8) = *(_QWORD *)(v9 + 8);
        *(_QWORD *)(v11 + v3 + 16) = *(_QWORD *)(v9 + 16);
        *(_BYTE *)(v11 + v3 + 24) = *(_BYTE *)(v9 + 24);
        ++v10;
        v12 = HalpHvIommu == 0;
        *(_QWORD *)(v11 + v3) = v3 + 32LL * v10;
        if ( !v12 && !a2 )
          *(_BYTE *)(v11 + v3 + 24) = 0;
        v9 = *(_QWORD *)v9;
      }
      if ( v4 )
      {
        v13 = v4;
        v14 = v20 + 8;
        do
        {
          if ( *(_BYTE *)(v14 + 8) )
          {
            --v8;
          }
          else
          {
            v15 = *(_QWORD *)(v14 - 8) & 0xFFFFFFFFFFFFF000uLL;
            v16 = 32LL * v10;
            v17 = ((*(_QWORD *)v14 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) - v15;
            *(_QWORD *)(v16 + v3 + 8) = v15;
            *(_BYTE *)(v16 + v3 + 24) = 1;
            *(_QWORD *)(v16 + v3 + 16) = (v17 >> 12) + ((v17 & 0xFFF) != 0);
            *(_QWORD *)(v16 + v3) = v3 + 32LL * ++v10;
          }
          v14 += 24LL;
          --v13;
        }
        while ( v13 );
      }
      *(_QWORD *)(32LL * (v8 - 1) + v3) = 0LL;
    }
  }
  return v3;
}
