/*
 * XREFs of HalpDmaLinkContiguousTranslations @ 0x140358E78
 * Callers:
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV2 @ 0x140359340 (HalpDmaAllocateContiguousPagesFromContiguousPoolV2.c)
 *     HalpDmaAllocateMapRegisters @ 0x14035C680 (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolV3 @ 0x140511E84 (HalpDmaAllocateContiguousPagesFromContiguousPoolV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3 @ 0x14057ADCC (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV3.c)
 *     HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2 @ 0x14058ECC4 (HalpDmaAllocateContiguousPagesFromContiguousPoolAtHighLevelV2.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpDmaLinkContiguousTranslations(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 *v3; // r9
  __int64 *v4; // r11
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r10
  __int64 v8; // r8
  unsigned int v9; // edi
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = *(__int64 **)(a1 + 48);
  v4 = 0LL;
  v5 = a3;
  while ( v3 )
  {
    v6 = *((_DWORD *)v3 + 2);
    if ( a2 < v6 )
    {
      v4 = v3;
      v7 = v3[2] + 72LL * a2;
      goto LABEL_5;
    }
    v3 = (__int64 *)*v3;
    a2 -= v6;
  }
  v7 = 0LL;
LABEL_5:
  v8 = v4[2];
  v9 = *((_DWORD *)v4 + 2);
  v10 = 0LL;
  v11 = (v7 - v8) / 72;
  v12 = v8 + 72LL * (unsigned int)v11;
  if ( (_DWORD)v5 )
  {
    v13 = v5;
    do
    {
      if ( (unsigned int)v11 >= v9 )
      {
        LODWORD(v11) = 0;
        v4 = (__int64 *)*v4;
        v12 = v4[2];
      }
      if ( v10 )
        *(_QWORD *)(v10 + 8) = v12;
      v10 = v12;
      LODWORD(v11) = v11 + 1;
      v12 += 72LL;
      --v13;
    }
    while ( v13 );
  }
  return v7;
}
