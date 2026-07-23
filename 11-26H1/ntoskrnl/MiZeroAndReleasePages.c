/*
 * XREFs of MiZeroAndReleasePages @ 0x1403CDB20
 * Callers:
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiPfnBestZeroAttribute @ 0x1402A0DFC (MiPfnBestZeroAttribute.c)
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiChangePageAttribute @ 0x1402BA420 (MiChangePageAttribute.c)
 *     MiZeroPhysicalPage @ 0x1402BA8E0 (MiZeroPhysicalPage.c)
 *     MiClearPfnReuseFields @ 0x14031C280 (MiClearPfnReuseFields.c)
 *     MiCreatePageChains @ 0x1403CD4B8 (MiCreatePageChains.c)
 *     MiProcessPageGroupInfo @ 0x1403CDA40 (MiProcessPageGroupInfo.c)
 *     MiSetPfnShareCount @ 0x1403CDFF0 (MiSetPfnShareCount.c)
 *     MiFreeSmallPageFromMdl @ 0x1403CE304 (MiFreeSmallPageFromMdl.c)
 *     MiInsertMdlPageNeedsZero @ 0x1403CE638 (MiInsertMdlPageNeedsZero.c)
 *     MiSimpleInsertPage @ 0x1403CF00C (MiSimpleInsertPage.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiZeroAndReleasePages(ULONG_PTR *a1, int a2, char a3)
{
  __int64 PageChains; // rbx
  int v5; // r13d
  char *v6; // rax
  __int64 v7; // rcx
  char v8; // r15
  __int64 *v9; // r12
  unsigned int i; // ebp
  ULONG_PTR j; // rdi
  __int64 v12; // rsi
  int v13; // eax
  __int64 *v14; // r14
  __int64 *v15; // r13
  unsigned __int64 v16; // rbx
  unsigned int v17; // ebp
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r12
  unsigned __int8 v23; // si
  __int64 v24; // r8
  __int64 result; // rax
  __int64 v26; // rdi
  unsigned int v27; // r9d
  __int64 v28; // rbx
  unsigned int v29; // eax
  __int64 v30; // rax
  unsigned __int64 DemandZeroPte; // rax
  unsigned int v32; // eax
  __int64 v34; // [rsp+38h] [rbp-C0h] BYREF
  __int64 *v35; // [rsp+40h] [rbp-B8h]
  int v36; // [rsp+48h] [rbp-B0h]
  __int64 CurrentIrql; // [rsp+50h] [rbp-A8h]
  _BYTE v38[8]; // [rsp+60h] [rbp-98h] BYREF
  char v39; // [rsp+68h] [rbp-90h] BYREF

  v36 = a2;
  memset_0(v38, 0, 0x60uLL);
  PageChains = 0LL;
  v5 = 1;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql == 2 || (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    v5 = 0;
  v6 = &v39;
  v7 = 4LL;
  do
  {
    *((_QWORD *)v6 + 1) = 0LL;
    *((_QWORD *)v6 - 1) = 0x3FFFFFFFFFLL;
    *(_QWORD *)v6 = 0x3FFFFFFFFFLL;
    v6 += 24;
    --v7;
  }
  while ( v7 );
  v8 = CurrentIrql;
  v9 = MiPageSizes;
  v35 = MiPageSizes;
  for ( i = 0; i < 4; ++i )
  {
    for ( j = *a1; *a1 != 0x3FFFFFFFFFLL; j = *a1 )
    {
      MiSimpleUnlinkPageEx((__int64)a1, j);
      v12 = 48 * j - 0x220000000000LL;
      v34 = *v9;
      if ( (*(_DWORD *)(v12 + 32) & 0xC00000) == 0xC00000 )
      {
        v30 = *(_QWORD *)(v12 + 16);
        if ( v30 )
          DemandZeroPte = v30 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
        else
          DemandZeroPte = MiMakeDemandZeroPte(4);
        *(_QWORD *)(v12 + 16) = DemandZeroPte;
        v32 = MiPfnBestZeroAttribute(v12, 1);
        MiChangePageAttribute(v12, v32);
        v9 = v35;
      }
      v13 = 0;
      if ( !PageChains )
      {
        if ( !v5 )
          goto LABEL_41;
        v28 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v12 + 40) >> 43) & 0x3FFLL));
        v29 = MiPageToNode(j);
        PageChains = MiCreatePageChains(v28, v29, 3, 0LL, 1);
        v13 = 0;
        if ( !PageChains )
        {
          v5 = 0;
LABEL_41:
          v27 = *(_DWORD *)(v12 + 32);
          if ( i == 3 )
          {
            MiZeroPhysicalPage(0LL, j, 0, (v27 >> 22) & 3);
          }
          else
          {
            LOBYTE(v13) = v8 == 2;
            MiZeroLargePage(0LL, v12, i, (v27 >> 22) & 3, v13);
          }
          MiSimpleInsertPage(&v38[24 * i], j, 2LL);
          continue;
        }
        *(_DWORD *)(PageChains + 16) = 17;
      }
      MiInsertMdlPageNeedsZero(PageChains, v12, v34);
    }
    ++v9;
    a1 += 3;
    v35 = v9;
  }
  if ( PageChains )
    MiProcessPageGroupInfo(PageChains, (__int64)v38);
  v14 = (__int64 *)v38;
  v15 = MiPageSizes;
  v16 = 0LL;
  v17 = 0;
  LODWORD(v35) = 16 * (a3 & 1) + 2;
LABEL_28:
  result = 0x3FFFFFFFFFLL;
  do
  {
    v26 = *v14;
    if ( *v14 != 0x3FFFFFFFFFLL )
    {
      MiSimpleUnlinkPageEx((__int64)v14, *v14);
      v18 = 48 * v26;
      v19 = 48 * v26 - 0x220000000000LL;
      MiSetPfnShareCount(v19, 1LL);
      if ( v17 == 3 )
      {
        v22 = 1LL;
        if ( (_BYTE)CurrentIrql == 2 )
        {
          v23 = 17;
          LODWORD(v34) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
        }
        else
        {
          v23 = KeGetCurrentIrql();
          if ( v23 != 2 )
            __writecr8(2uLL);
          if ( KiIrqlFlags )
          {
            LOBYTE(v20) = 2;
            LOBYTE(v21) = v23;
            KiRaiseIrqlProcessIrqlFlags(v21, v20);
          }
          LODWORD(v34) = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
          {
            do
              KeYieldProcessorEx(&v34);
            while ( *(__int64 *)(v19 + 24) < 0 );
          }
        }
        MiClearPfnReuseFields(v19);
        v24 = (unsigned int)v35;
        *(_DWORD *)(v19 + 32) = *(_DWORD *)(v19 + 32) & 0xFFF8FFFF | 0x60000;
        MiFreeSmallPageFromMdl(v18 / 48, 1LL, v24);
        _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v23 < 2u )
        {
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
          __writecr8(v23);
        }
      }
      else
      {
        v22 = *v15;
        MiFreeLargePageMemory(v18 / 48);
      }
      v16 += v22;
      goto LABEL_28;
    }
    ++v17;
    v14 += 3;
    ++v15;
  }
  while ( v17 < 4 );
  if ( v16 && (v36 & 1) == 0 )
  {
    _InterlockedAdd64(&qword_140E3C130, v16);
    if ( v16 > 0x40 )
    {
      if ( v16 > 0x80 )
      {
        result = (__int64)&unk_140E3C140;
        if ( v16 > 0x200 )
          result = (__int64)&unk_140E3C144;
      }
      else
      {
        result = (__int64)&unk_140E3C13C;
      }
    }
    else
    {
      result = (__int64)&unk_140E3C138;
    }
    _InterlockedIncrement((volatile signed __int32 *)result);
  }
  return result;
}
