/*
 * XREFs of MiDemoteLocalLargePage @ 0x1402844A0
 * Callers:
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiPreemptivePageDemote @ 0x140434608 (MiPreemptivePageDemote.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiGetPage @ 0x1402866A0 (MiGetPage.c)
 *     MiColorGetCache @ 0x140289A00 (MiColorGetCache.c)
 *     MiGetPfnPageSizeIndex @ 0x14028B290 (MiGetPfnPageSizeIndex.c)
 *     MiUpdatePageFileHighInPte @ 0x14028C010 (MiUpdatePageFileHighInPte.c)
 *     MiChangePageAttribute @ 0x1402D8660 (MiChangePageAttribute.c)
 *     MiInsertDemotedPages @ 0x1404346F0 (MiInsertDemotedPages.c)
 *     MiCacheAttributeHasValue @ 0x140471720 (MiCacheAttributeHasValue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiChangePageHeatImmediate @ 0x140529498 (MiChangePageHeatImmediate.c)
 */

__int64 __fastcall MiDemoteLocalLargePage(__int64 a1, unsigned int a2, int a3)
{
  unsigned int v4; // ebx
  __int64 v5; // r10
  int v6; // r9d
  __int64 v7; // rbp
  unsigned int v8; // r13d
  __int64 v9; // r11
  int v10; // r14d
  unsigned int v11; // r8d
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned int v14; // r15d
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned __int8 CurrentIrql; // r12
  __int64 *v18; // rcx
  int v19; // r11d
  unsigned int v20; // ebx
  __int64 Page; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  __int64 v25; // rdi
  int v26; // edx
  unsigned int v27; // r14d
  __int64 v28; // r8
  volatile signed __int64 *v29; // r8
  signed __int64 v30; // rax
  unsigned __int64 v31; // rcx
  signed __int64 v32; // rtt
  unsigned int v33; // edx
  BOOL v34; // r8d
  BOOL v35; // r9d
  __int64 v36; // r8
  unsigned int v37; // [rsp+20h] [rbp-58h]
  unsigned int v38; // [rsp+24h] [rbp-54h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+38h] [rbp-40h]
  int v42; // [rsp+90h] [rbp+18h]
  BOOL v43; // [rsp+90h] [rbp+18h]
  int v44; // [rsp+98h] [rbp+20h]

  v4 = a2;
  v5 = a1;
  if ( (a3 & 0x4000) != 0 )
    return 0LL;
  v37 = HIWORD(a2);
  v6 = BYTE2(a2) & 3;
  v44 = v6;
  v7 = BYTE2(a2) & 3;
  if ( (a2 & 0x30000) == 0 )
    return 0LL;
  v38 = BYTE2(a2) & 3;
  v8 = (a2 >> 18) & 3;
  v9 = *(_QWORD *)(a1 + 16) + 56320LL * ((a2 >> 9) & 0x3F);
  v10 = 0;
  v11 = (a2 >> 15) & 1;
  v42 = v8;
  v39 = v9;
  if ( (_DWORD)v7 == 3 )
  {
    v11 = 0;
    if ( v8 - 1 > 1 )
    {
      v13 = 16LL;
    }
    else
    {
      v12 = *(int *)(*(_QWORD *)(v9 + 13896) + 17368LL);
      if ( v12 >= 0x10 )
        v12 = 16LL;
      v13 = (unsigned int)(dword_140E2D78C - 1) * v12;
      if ( v13 < 0x10 )
        v13 = 16LL;
    }
  }
  else
  {
    v13 = 1LL;
    if ( v6 == 2 )
    {
      v13 = 16LL;
    }
    else if ( v6 == 1 )
    {
      v13 = 4LL;
    }
  }
  if ( *(_QWORD *)(v9 + 8 * (v8 + (v7 << 7) + 3 * (v11 + 1LL))) >= v13 )
    return 0LL;
  if ( (a3 & 0x8000) != 0 )
  {
    v14 = 3;
  }
  else
  {
    v14 = 0;
    if ( (a3 & 0x800) != 0 )
      v14 = 2;
  }
  if ( v14 >= (unsigned int)v7 )
    return 0LL;
  v15 = v4;
  v16 = a3 & 0xFFFC89DB | 0x37604;
  if ( (v16 & 1) != 0 )
  {
    CurrentIrql = 17;
  }
  else
  {
    v16 |= 1u;
    CurrentIrql = KeGetCurrentIrql();
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
    v40 = HIWORD(v15) & 3;
    v18 = &MiPageSizes[v40];
    while ( 1 )
    {
      do
      {
        v7 = (unsigned int)(v7 - 1);
        v19 = v4 ^ (v4 ^ ((_DWORD)v7 << 16)) & 0x30000;
        v20 = _InterlockedExchangeAdd((volatile signed __int32 *)(v39 + ((unsigned __int64)(unsigned int)v7 << 10)), 1u);
        if ( *v18 << 8 > (unsigned __int64)MiPageSizes[v7] )
          v20 = v20 & -MiPageColorDivisors[v7] | ((unsigned int)MiColorGetCache(v15) >> (LOBYTE(MiLargePageShifts[v7])
                                                                                       - LOBYTE(MiLargePageShifts[v40])));
        v16 &= ~8u;
        v4 = v19 ^ (unsigned __int8)(v20 ^ v19);
        if ( !(_DWORD)v7 || (_DWORD)v7 == 1 && (unsigned int)(v42 - 1) > 1 )
          v16 |= 8u;
        Page = MiGetPage(a1, v4, v16);
        if ( Page != -1 )
        {
          v10 = 1;
          goto LABEL_43;
        }
        v18 = &MiPageSizes[v40];
      }
      while ( (_DWORD)v7 != v14 );
      if ( v44 != 3 || (v4 & 0x8000) != 0 )
        break;
      LODWORD(v7) = 3;
      v4 = (v4 ^ (v37 << 16)) & 0x30000 ^ v4 | 0x8000;
    }
    if ( CurrentIrql < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
      __writecr8(CurrentIrql);
    }
    return 0LL;
  }
  v4 = v4 & 0xFFF3FFFF | 0x40000;
  v42 = 1;
  Page = MiGetPage(v5, v4, v16 | 8);
  if ( Page == -1 )
  {
LABEL_17:
    if ( (_DWORD)v7 != 3 )
      goto LABEL_19;
    goto LABEL_18;
  }
LABEL_43:
  v23 = 48 * Page - 0x220000000000LL;
  v24 = *(_QWORD *)(v23 + 16);
  if ( qword_140E2D740 && (v24 & 0x10) == 0 )
    HIDWORD(v24) &= HIDWORD(qword_140E2D748);
  if ( HIDWORD(v24) == -3 && (stru_140E36558.WaitRegister.Flags & 1) != 0 )
  {
    MiChangePageHeatImmediate(Page, (unsigned int)v7, 1LL);
    *(_QWORD *)(v23 + 16) = MiUpdatePageFileHighInPte(*(_QWORD *)(v23 + 16), 0LL);
  }
  v25 = v23;
  if ( v10 )
  {
    v26 = (*(_DWORD *)(v23 + 32) >> 22) & 3;
    v43 = 0;
    v27 = v26;
    if ( (_DWORD)v7 || v26 != 1 )
    {
      if ( v26 != v8 )
        v27 = v8;
      v43 = v26 != v8;
      if ( (_DWORD)v7 == 1 )
      {
        v43 = v26 != v8;
        if ( !(unsigned int)MiCacheAttributeHasValue(v8) )
        {
          if ( (unsigned int)MiCacheAttributeHasValue(v33) )
          {
            v43 = v35;
          }
          else
          {
            v27 = 1;
            v43 = v34;
          }
        }
      }
    }
    v25 = v23
        + 48
        * (MiPageSizes[(unsigned int)(v7 + 1)] * (unsigned __int64)(unsigned int)MiColorGetCache(v15) % MiPageSizes[v7]);
    MiInsertDemotedPages(v39, v23, v25, v38);
    if ( v43 )
      MiChangePageAttribute(v25, v27, 16LL);
    MiGetPfnPageSizeIndex(v25);
  }
  v28 = 14112LL;
  if ( (unsigned int)v7 >= 2 )
    v28 = 14104LL;
  v29 = (volatile signed __int64 *)(v39 + v28);
  v30 = *v29;
  do
  {
    v31 = (v30 - 1) ^ (v30 ^ (v30 - 1)) & 0xFFFFFFFFFFFF0000uLL;
    if ( (_WORD)v30 == 1 )
      v31 ^= (v31 ^ (v31 + 0x10000)) & 0xFFFFFFFFFFFF0000uLL;
    v32 = v30;
    v30 = _InterlockedCompareExchange64(v29, v31, v30);
  }
  while ( v32 != v30 );
  if ( CurrentIrql < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  if ( ((*(_DWORD *)(v25 + 32) >> 22) & 3) != v8 )
  {
    v36 = 0LL;
    if ( CurrentIrql >= 2u )
      v36 = 16LL;
    MiChangePageAttribute(v25, v8, v36);
  }
  return v25;
}
