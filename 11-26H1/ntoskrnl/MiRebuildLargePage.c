/*
 * XREFs of MiRebuildLargePage @ 0x14028F484
 * Callers:
 *     MiRebuildLargePages @ 0x1402AA1C0 (MiRebuildLargePages.c)
 *     MmManagePartitionCreateLargePages @ 0x1407809E4 (MmManagePartitionCreateLargePages.c)
 *     MmBuildLargePages @ 0x140B22ED8 (MmBuildLargePages.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiReferencePageRuns @ 0x14028E44C (MiReferencePageRuns.c)
 *     MiNodeFreeZeroPages @ 0x14028E530 (MiNodeFreeZeroPages.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 *     MiGetNodeStandbyPageCount @ 0x1402AAAA8 (MiGetNodeStandbyPageCount.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1402BEB90 (MiInsertPageInFreeOrZeroedList.c)
 *     MiUpdateLargePageBitMap @ 0x1403CF324 (MiUpdateLargePageBitMap.c)
 *     MiConvertSmallPageRangeToLarge @ 0x1403CF990 (MiConvertSmallPageRangeToLarge.c)
 *     MiInsertPossiblyBadPage @ 0x1403D04D4 (MiInsertPossiblyBadPage.c)
 *     MiDereferencePageRuns @ 0x1403D34E4 (MiDereferencePageRuns.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 __fastcall MiRebuildLargePage(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        int a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r13
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 v11; // rax
  int v12; // r10d
  unsigned int *v13; // rdx
  unsigned __int64 v14; // r15
  char v15; // r9
  unsigned __int64 v16; // r8
  char *v17; // rax
  char *v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r13
  int v21; // eax
  unsigned int *v22; // r12
  int v23; // r8d
  unsigned __int64 v24; // r14
  unsigned __int64 i; // rdi
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  __int64 v30; // rdx
  int v31; // ecx
  __int64 v32; // r14
  int v33; // eax
  int ContiguousPages; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned __int64 v37; // rdi
  __int64 v38; // r12
  unsigned __int8 j; // si
  __int64 v40; // rcx
  __int64 v41; // r11
  __int64 *v42; // r9
  __int64 *v43; // r10
  __int64 v44; // r14
  __int64 v45; // rdx
  __int64 *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rax
  unsigned __int8 v49; // r12
  __int64 v50; // rcx
  __int64 v51; // rdi
  unsigned __int8 CurrentIrql; // si
  unsigned __int8 v54; // [rsp+78h] [rbp-51h]
  __int64 v55; // [rsp+80h] [rbp-49h] BYREF
  unsigned int *v56; // [rsp+88h] [rbp-41h]
  int v57; // [rsp+90h] [rbp-39h] BYREF
  unsigned __int64 v58; // [rsp+98h] [rbp-31h]
  int v59; // [rsp+A0h] [rbp-29h]
  __int64 v60; // [rsp+A8h] [rbp-21h]
  __int64 v61; // [rsp+B0h] [rbp-19h]
  struct _KTHREAD *v62; // [rsp+B8h] [rbp-11h]
  __int64 v63; // [rsp+C0h] [rbp-9h]
  char *v64; // [rsp+C8h] [rbp-1h]
  char *v65; // [rsp+D0h] [rbp+7h]
  char v67; // [rsp+130h] [rbp+67h]

  v5 = a2;
  v55 = 0LL;
  v6 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v58 = 0LL;
  v9 = (unsigned __int8)byte_140E2D898;
  v10 = a3;
  v62 = CurrentThread;
  v54 = byte_140E2D898;
  v11 = MiReferencePageRuns(a1, 1u);
  v12 = 0;
  v56 = (unsigned int *)v11;
  v67 = 0;
  v13 = (unsigned int *)v11;
  v14 = MiPageSizes[v10];
  v15 = 0;
  v16 = *(_QWORD *)(a1 + 22280);
  v63 = *(_QWORD *)(a1 + 16) + 56320 * v5;
  v61 = v16;
  v17 = (char *)(v63 + 14145);
  if ( (unsigned __int8)v9 <= 1u )
  {
    v17 = 0LL;
  }
  else
  {
    v15 = *v17;
    v67 = *v17;
  }
  v64 = v17;
  v18 = &v17[v9];
  v65 = &v17[v9];
LABEL_5:
  if ( v17 != v18 )
  {
LABEL_6:
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 )
    {
      v19 = *v13;
      v20 = v16;
      v57 = v12;
      v21 = 0x800000;
      v22 = &v13[4 * v19 + 4];
      if ( v14 == 512 )
      {
        v21 = 41943040;
      }
      else if ( v14 == 16 )
      {
        v21 = 25165824;
      }
      v23 = v21 | 0x8000000;
      if ( a5 == v12 )
        v23 = v21;
      v59 = v23;
LABEL_13:
      while ( (_DWORD)v19 )
      {
        v19 = (unsigned int)(v19 - 1);
        v60 = v19;
        if ( v22[2 * v19] == (_DWORD)v5 && LOBYTE(v22[2 * v19 + 1]) == v15 )
        {
          v24 = *(_QWORD *)&v13[4 * (unsigned int)v19 + 4];
          for ( i = v24 + *(_QWORD *)&v13[4 * (unsigned int)v19 + 6]; ; i -= v29 )
          {
            if ( i - 1 > v20 )
              i = v20 + 1;
            while ( 1 )
            {
              LODWORD(v19) = v60;
              v13 = v56;
              v15 = v67;
              if ( v24 >= i || v14 > i - v24 )
                goto LABEL_13;
              if ( !v14 )
                break;
              v30 = ~(v14 - 1);
              if ( (((i - 1) ^ (i - v14)) & v30) == 0 )
                break;
              if ( (i & v30) != i )
                i &= v30;
              if ( (v24 & v30) != v24 )
              {
                LODWORD(v19) = v60;
                v24 = v30 & (v14 + v24 - 1);
                v13 = v56;
                if ( !v24 )
                  goto LABEL_13;
              }
            }
            v26 = i - v14;
            v27 = MiPfnsWorthTrying(a1, 48 * ((int)i - (int)v14), v14, v23, (__int64)&v57);
            v12 = 0;
            v28 = v27;
            if ( !v27 )
              break;
            v23 = v59;
            if ( v27 > v26 - v24 )
            {
              v13 = v56;
              v15 = v67;
              LODWORD(v19) = v60;
              v20 = i - v27 - 1;
              goto LABEL_13;
            }
            v29 = v14;
            if ( v28 > v14 )
              v29 = v28;
          }
          v55 = i - v14;
          if ( v26 != -1LL )
          {
            v31 = 1082130432;
            if ( v14 == 512 )
            {
              v31 = 1115684864;
            }
            else if ( v14 == 16 )
            {
              v31 = 1098907648;
            }
            v32 = a1;
            v33 = v31 | 0x8000000;
            if ( !a5 )
              v33 = v31;
            ContiguousPages = MiFindContiguousPagesEx(
                                a1,
                                i - v14,
                                i - 1,
                                v14,
                                0,
                                v14,
                                1,
                                v5,
                                v67,
                                v33,
                                0,
                                0LL,
                                0LL,
                                &v55);
            v12 = 0;
            if ( ContiguousPages < 0 )
            {
              v6 = v58;
              goto LABEL_41;
            }
            if ( v14 >= 0x200 )
              MiUpdateLargePageBitMap(a1, v55, v14, 2LL);
            MiConvertSmallPageRangeToLarge(v55, a3);
            v51 = 48 * v55 - 0x220000000000LL;
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql != 2 )
              __writecr8(2uLL);
            if ( KiIrqlFlags )
            {
              LOBYTE(v50) = CurrentIrql;
              KiRaiseIrqlProcessIrqlFlags(v50, 2LL);
            }
            v57 = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx(&v57);
              while ( *(__int64 *)(v51 + 24) < 0 );
            }
            *(_QWORD *)(v51 + 24) &= 0xC000000000000000uLL;
            *(_DWORD *)(v51 + 32) &= 0xFFFF0000;
            if ( (*(_QWORD *)(v51 + 40) & 0x20000000000LL) != 0 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiInsertPossiblyBadPage(v55, 2LL);
            }
            else
            {
              MiInsertPageInFreeOrZeroedList(v55, 2LL);
              _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
            __writecr8(CurrentIrql);
            MiReleaseNonPagedResources(a1, v14);
            v6 = v14 + v58;
            v58 = v6;
            if ( v6 >= a4 )
              goto LABEL_74;
            v12 = 0;
LABEL_41:
            v37 = 0LL;
            v38 = v63;
            for ( j = 0; j < (unsigned __int8)byte_140E2D898; v12 = 0 )
            {
              LOBYTE(v35) = j;
              v37 += MiNodeFreeZeroPages(v38, v35, 0);
              ++j;
            }
            if ( v14 > 0x10 )
            {
              v40 = a3 + 1;
              v41 = 0LL;
              if ( (unsigned int)v40 <= 2 )
              {
                v42 = &MiPageSizes[v40];
                v43 = (__int64 *)(v38 + ((unsigned __int64)(unsigned int)v40 << 10) + 8);
                v44 = (unsigned int)(3 - v40);
                do
                {
                  v45 = 0LL;
                  v46 = v43;
                  v47 = 2LL;
                  do
                  {
                    v48 = *v46++;
                    v45 += v48;
                    --v47;
                  }
                  while ( v47 );
                  v36 = v45 * *v42++;
                  v43 += 128;
                  v41 += v36;
                  --v44;
                }
                while ( v44 );
                v32 = a1;
                v12 = 0;
                v6 = v58;
              }
              v37 += v41;
            }
            v49 = v54;
            if ( v37 < 0x1000 )
            {
              LOBYTE(v36) = 0;
              if ( v54 )
              {
                do
                {
                  v37 += MiGetNodeStandbyPageCount(v32, (unsigned int)v5, v36);
                  LOBYTE(v36) = v36 + 1;
                }
                while ( (unsigned __int8)v36 < v54 );
              }
              if ( v37 < a4 - v6 + 0x8000 )
              {
LABEL_74:
                v13 = v56;
                goto LABEL_75;
              }
            }
            v13 = v56;
            if ( !v55 )
              goto LABEL_79;
            v15 = v67;
            v16 = v55 - 1;
            CurrentThread = v62;
            v61 = v55 - 1;
            goto LABEL_6;
          }
          v13 = v56;
LABEL_78:
          v49 = v54;
LABEL_79:
          v6 = v58;
          v17 = v64 + 1;
          v15 = v67;
          v18 = v65;
          v16 = v61;
          CurrentThread = v62;
          ++v64;
          if ( v49 > 1u )
          {
            v15 = *v17;
            v67 = *v17;
          }
          goto LABEL_5;
        }
      }
      v55 = -1LL;
      goto LABEL_78;
    }
  }
LABEL_75:
  MiDereferencePageRuns(v13);
  return v6;
}
