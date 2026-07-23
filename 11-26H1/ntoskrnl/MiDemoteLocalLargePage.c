/*
 * XREFs of MiDemoteLocalLargePage @ 0x140283A10
 * Callers:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiPreemptivePageDemote @ 0x14042B6E8 (MiPreemptivePageDemote.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiColorGetCache @ 0x140288F60 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028A7F0 (MiGetPfnPageSizeIndex.c)
 *     MiUpdatePageFileHighInPte @ 0x14028B570 (MiUpdatePageFileHighInPte.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiInsertDemotedPages @ 0x14042B7D0 (MiInsertDemotedPages.c)
 *     MiCacheAttributeHasValue @ 0x14046AEA0 (MiCacheAttributeHasValue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChangePageHeatImmediate @ 0x14052B92C (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  int v6; // r9d
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // r11
  unsigned int v10; // r8d
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned int v13; // r15d
  unsigned int v14; // edi
  unsigned int v15; // esi
  unsigned __int8 CurrentIrql; // r14
  __int64 *v17; // rcx
  int v18; // ebx
  char v19; // r10
  unsigned int Cache; // eax
  char v21; // r10
  __int64 Page; // r9
  int v24; // ebx
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rdi
  int v28; // edx
  unsigned int v29; // ebx
  __int64 v30; // r8
  volatile signed __int64 *v31; // r8
  signed __int64 v32; // rax
  unsigned __int64 v33; // rcx
  signed __int64 v34; // rtt
  unsigned int v35; // edx
  BOOL v36; // r8d
  BOOL v37; // r9d
  __int64 v38; // r8
  int v39; // [rsp+20h] [rbp-68h]
  unsigned int v40; // [rsp+24h] [rbp-64h]
  unsigned int v41; // [rsp+28h] [rbp-60h]
  unsigned __int8 v42; // [rsp+30h] [rbp-58h]
  __int64 v43; // [rsp+38h] [rbp-50h]
  __int64 v44; // [rsp+40h] [rbp-48h]
  int v46; // [rsp+A0h] [rbp+18h]
  BOOL v47; // [rsp+A0h] [rbp+18h]

  v4 = a2;
  v5 = a1;
  if ( (a3 & 0x4000) != 0 )
    return 0LL;
  v40 = HIWORD(a2);
  v6 = BYTE2(a2) & 3;
  v39 = v6;
  v7 = BYTE2(a2) & 3;
  if ( (a2 & 0x30000) == 0 )
    return 0LL;
  v41 = BYTE2(a2) & 3;
  v8 = (a2 >> 18) & 3;
  v9 = *(_QWORD *)(a1 + 16) + 56320LL * ((a2 >> 9) & 0x3F);
  v10 = (a2 >> 15) & 1;
  v46 = v8;
  v43 = v9;
  if ( (_DWORD)v7 == 3 )
  {
    v10 = 0;
    if ( v8 - 1 > 1 )
    {
      v12 = 16LL;
    }
    else
    {
      v11 = *(int *)(*(_QWORD *)(v9 + 13896) + 17368LL);
      if ( v11 >= 0x10 )
        v11 = 16LL;
      v12 = (unsigned int)(dword_140E2D90C - 1) * v11;
      if ( v12 < 0x10 )
        v12 = 16LL;
    }
  }
  else
  {
    v12 = 1LL;
    if ( v6 == 2 )
    {
      v12 = 16LL;
    }
    else if ( v6 == 1 )
    {
      v12 = 4LL;
    }
  }
  if ( *(_QWORD *)(v9 + 8 * (v8 + (v7 << 7) + 3 * (v10 + 1LL))) >= v12 )
    return 0LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v13 = 3;
  }
  else
  {
    v13 = 0;
    if ( (a3 & 0x800) != 0 )
      v13 = 2;
  }
  if ( v13 >= (unsigned int)v7 )
    return 0LL;
  v14 = a3 & 0xFFFC89DB | 0x37604;
  v15 = v4;
  if ( (v14 & 1) != 0 )
  {
    CurrentIrql = 17;
    v42 = 17;
  }
  else
  {
    v14 |= 1u;
    CurrentIrql = KeGetCurrentIrql();
    v42 = CurrentIrql;
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
      v5 = a1;
    }
  }
  if ( v8 - 1 <= 1 )
    goto LABEL_17;
  if ( (_DWORD)v7 == 3 )
  {
LABEL_18:
    v4 &= ~0x8000u;
LABEL_19:
    v44 = HIWORD(v15) & 3;
    v17 = &MiPageSizes[v44];
    while ( 1 )
    {
      do
      {
        v7 = (unsigned int)(v7 - 1);
        v18 = (v4 ^ ((_DWORD)v7 << 16)) & 0x30000 ^ v4;
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + ((unsigned __int64)(unsigned int)v7 << 10)), 1u);
        if ( *v17 << 8 > (unsigned __int64)MiPageSizes[v7] )
        {
          Cache = MiColorGetCache(v15);
          v19 = v21 & -LOBYTE(MiPageColorDivisors[v7]) | (Cache >> (LOBYTE(MiLargePageShifts[v7])
                                                                  - LOBYTE(MiLargePageShifts[v44])));
        }
        v14 &= ~8u;
        v4 = (unsigned __int8)(v18 ^ v19) ^ v18;
        if ( !(_DWORD)v7 || (_DWORD)v7 == 1 && (unsigned int)(v46 - 1) > 1 )
          v14 |= 8u;
        Page = MiGetPage(a1, v4, v14);
        if ( Page != -1 )
        {
          CurrentIrql = v42;
          v24 = 1;
          goto LABEL_43;
        }
        v17 = &MiPageSizes[v44];
      }
      while ( (_DWORD)v7 != v13 );
      if ( v39 != 3 || (v4 & 0x8000) != 0 )
        break;
      LODWORD(v7) = 3;
      v4 = (v4 ^ (v40 << 16)) & 0x30000 ^ v4 | 0x8000;
    }
    if ( v42 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v42);
      __writecr8(v42);
    }
    return 0LL;
  }
  v4 = v4 & 0xFFF3FFFF | 0x40000;
  v46 = 1;
  Page = MiGetPage(v5, v4, v14 | 8);
  if ( Page == -1 )
  {
LABEL_17:
    if ( (_DWORD)v7 != 3 )
      goto LABEL_19;
    goto LABEL_18;
  }
  v24 = 0;
LABEL_43:
  v25 = 48 * Page - 0x220000000000LL;
  v26 = *(_QWORD *)(v25 + 16);
  if ( qword_140E2D8C0 && (v26 & 0x10) == 0 )
    HIDWORD(v26) &= HIDWORD(qword_140E2D8C8);
  if ( HIDWORD(v26) == -3 && (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
  {
    MiChangePageHeatImmediate(Page, (unsigned int)v7, 1LL);
    *(_QWORD *)(v25 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v25 + 16), 0LL);
  }
  v27 = v25;
  if ( v24 )
  {
    v28 = (*(_DWORD *)(v25 + 32) >> 22) & 3;
    v47 = 0;
    v29 = v28;
    if ( (_DWORD)v7 || v28 != 1 )
    {
      if ( v28 != v8 )
        v29 = v8;
      v47 = v28 != v8;
      if ( (_DWORD)v7 == 1 )
      {
        v47 = v28 != v8;
        if ( !(unsigned int)MiCacheAttributeHasValue(v8) )
        {
          if ( (unsigned int)MiCacheAttributeHasValue(v35) )
          {
            v47 = v37;
          }
          else
          {
            v29 = 1;
            v47 = v36;
          }
        }
      }
    }
    v27 = v25
        + 48
        * (MiPageSizes[(unsigned int)(v7 + 1)] * (unsigned __int64)(unsigned int)MiColorGetCache(v15) % MiPageSizes[v7]);
    MiInsertDemotedPages(v43, v25, v27, v41);
    if ( v47 )
      MiChangePageAttribute(v27, v29, 16LL);
    MiGetPfnPageSizeIndex(v27);
  }
  v30 = 14112LL;
  if ( (unsigned int)v7 >= 2 )
    v30 = 14104LL;
  v31 = (volatile signed __int64 *)(v43 + v30);
  v32 = *v31;
  do
  {
    v33 = (v32 - 1) ^ (v32 ^ (v32 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v32 == 1 )
      v33 ^= (v33 ^ (v33 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v34 = v32;
    v32 = _InterlockedCompareExchange64(v31, v33, v32);
  }
  while ( v34 != v32 );
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( ((*(_DWORD *)(v27 + 32) >> 22) & 3) != v8 )
  {
    v38 = 0LL;
    if ( CurrentIrql >= 2u )
      v38 = 16LL;
    MiChangePageAttribute(v27, v8, v38);
  }
  return v27;
}
