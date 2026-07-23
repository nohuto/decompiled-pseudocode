/*
 * XREFs of HalpDmaAllocateMapRegistersAtHighLevel @ 0x14058B44C
 * Callers:
 *     HalAllocateCrashDumpRegisters @ 0x14057C1C0 (HalAllocateCrashDumpRegisters.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x14057C2D0 (HalDmaAllocateCrashDumpRegistersEx.c)
 * Callees:
 *     HalpDmaPrependTranslations @ 0x140356778 (HalpDmaPrependTranslations.c)
 *     HalpDmaGetAdapterVersion @ 0x14035E758 (HalpDmaGetAdapterVersion.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3 @ 0x14057AF9C (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel @ 0x14057C050 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel.c)
 *     HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel @ 0x14057C07C (HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel.c)
 *     HalpDmaForceAllocation @ 0x14058BAA0 (HalpDmaForceAllocation.c)
 *     HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2 @ 0x14058ED50 (HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2.c)
 */

__int64 __fastcall HalpDmaAllocateMapRegistersAtHighLevel(__int64 a1, int *a2)
{
  char v2; // al
  char v3; // r12
  int v4; // r14d
  __int64 v6; // r15
  int v8; // esi
  __int64 v9; // rdi
  bool v10; // zf
  __int64 result; // rax
  __int64 ScatterPagesFromScatterPoolAtHighLevel; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 ScatterPagesFromContiguousPoolAtHighLevelV3; // rax
  __int64 v17; // rax
  int v18; // r8d
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  int v23; // [rsp+70h] [rbp+40h] BYREF
  int v24; // [rsp+78h] [rbp+48h] BYREF

  v2 = *(_BYTE *)(a1 + 442);
  v3 = 0;
  v4 = *a2;
  v6 = *(_QWORD *)(a1 + 160);
  v23 = 0;
  v8 = 0;
  v24 = 0;
  v9 = 0LL;
  if ( v2 )
  {
    if ( *(_QWORD *)(a1 + 112) )
      goto LABEL_31;
    v10 = *(_DWORD *)(a1 + 120) == 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 96) )
      goto LABEL_31;
    v10 = *(_DWORD *)(a1 + 104) == 0;
  }
  if ( v10 )
  {
    if ( !*(_BYTE *)(a1 + 345) )
    {
      if ( v2 )
      {
        result = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
        v8 = v24;
        v9 = result;
        if ( v24 == v4 )
          return result;
      }
      else
      {
        result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
        v9 = result;
        if ( result )
          return result;
      }
    }
    if ( *(_BYTE *)(a1 + 442) )
    {
      ScatterPagesFromScatterPoolAtHighLevel = HalpDmaAllocateScatterPagesFromScatterPoolAtHighLevel(a1);
      if ( ScatterPagesFromScatterPoolAtHighLevel )
      {
        v13 = HalpDmaPrependTranslations(ScatterPagesFromScatterPoolAtHighLevel, v23, v9);
        v8 += v23;
        v9 = v13;
        v24 = v8;
      }
      if ( v8 == v4 )
        return v9;
      if ( (unsigned int)HalpDmaGetAdapterVersion(a1) == 2 )
        ScatterPagesFromContiguousPoolAtHighLevelV3 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV2(
                                                        v14,
                                                        v6,
                                                        v15,
                                                        &v23);
      else
        ScatterPagesFromContiguousPoolAtHighLevelV3 = HalpDmaAllocateScatterPagesFromContiguousPoolAtHighLevelV3(
                                                        v14,
                                                        v6,
                                                        v15,
                                                        (unsigned int *)&v23);
      if ( ScatterPagesFromContiguousPoolAtHighLevelV3 )
      {
        v17 = HalpDmaPrependTranslations(ScatterPagesFromContiguousPoolAtHighLevelV3, v23, v9);
        v8 += v23;
        v9 = v17;
        v24 = v8;
      }
      if ( v8 == v4 )
        return v9;
    }
    else
    {
      result = HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevel(a1);
      v9 = result;
      if ( result )
        return result;
    }
    if ( HalpHiberInProgress )
    {
      if ( *(_BYTE *)(a1 + 442) )
      {
        *a2 = v8;
      }
      else if ( !v9 )
      {
        *a2 = 0;
      }
      return v9;
    }
  }
LABEL_31:
  if ( *(_BYTE *)(a1 + 442) )
  {
    v18 = a1 + 112;
    while ( 1 )
    {
      if ( *(_BYTE *)(a1 + 345) )
      {
        v9 = 0LL;
      }
      else
      {
        result = HalpDmaForceAllocation(0, *(_QWORD *)(a1 + 56), v18, v4, 0, (__int64)&v24);
        v8 = v24;
        v9 = result;
        if ( v24 == v4 )
          return result;
      }
      v19 = HalpDmaForceAllocation(0, *(_QWORD *)(v6 + 56), (int)v6 + 112, v4 - v8, 0, (__int64)&v23);
      if ( v19 )
      {
        v20 = HalpDmaPrependTranslations(v19, v23, v9);
        v8 += v23;
        v9 = v20;
        v24 = v8;
      }
      if ( v8 == v4 )
        return v9;
      v21 = HalpDmaForceAllocation((unsigned int)&v23, *(_QWORD *)(v6 + 48), (int)v6 + 96, v4 - v8, 0, (__int64)&v23);
      if ( v21 )
      {
        v22 = HalpDmaPrependTranslations(v21, v23, v9);
        v8 += v23;
        v9 = v22;
        v24 = v8;
      }
      if ( v8 == v4 )
        return v9;
      if ( v3 )
        goto LABEL_49;
      *(_DWORD *)(a1 + 120) = 0;
      v18 = a1 + 112;
      *(_QWORD *)(a1 + 112) = 0LL;
      v3 = 1;
      *(_QWORD *)(v6 + 112) = 0LL;
      *(_DWORD *)(v6 + 120) = 0;
      *(_QWORD *)(v6 + 96) = 0LL;
      *(_DWORD *)(v6 + 104) = 0;
    }
  }
  if ( *(_BYTE *)(a1 + 345)
    || (result = HalpDmaForceAllocation(a1, *(_QWORD *)(a1 + 48), (int)a1 + 96, v4, 1, 0LL)) == 0 )
  {
    result = HalpDmaForceAllocation(a1, *(_QWORD *)(v6 + 48), (int)v6 + 96, v4, 1, 0LL);
    if ( !result )
    {
LABEL_49:
      *a2 = 0;
      return 0LL;
    }
  }
  return result;
}
