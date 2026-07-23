/*
 * XREFs of KiComputeNumaCosts @ 0x140CCF47C
 * Callers:
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x140201320 (KeQueryNodeActiveAffinity.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     MiFreePagesFromMdl @ 0x140347540 (MiFreePagesFromMdl.c)
 *     MmAllocatePartitionNodePagesForMdlEx @ 0x14034A2E0 (MmAllocatePartitionNodePagesForMdlEx.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14037E240 (KeRevertToUserGroupAffinityThread.c)
 *     KeIsEmptyGroupMask @ 0x140404550 (KeIsEmptyGroupMask.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     HvlQueryNumaDistance @ 0x1405BBE00 (HvlQueryNumaDistance.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     KiGetHalNumaConversionFactor @ 0x140CCFC5C (KiGetHalNumaConversionFactor.c)
 */

char KiComputeNumaCosts()
{
  __int64 v0; // rax
  __int64 v1; // rdi
  char *Pool2; // rax
  unsigned __int16 v3; // cx
  int v4; // r12d
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v7; // edi
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // r14d
  USHORT i; // r15
  int v12; // eax
  _GROUP_AFFINITY *p_PreviousAffinity_8; // rdx
  unsigned int v14; // r15d
  struct _MDL *PartitionNodePagesForMdl; // rax
  struct _MDL *v16; // r13
  int v17; // edx
  char *v18; // rdi
  unsigned __int8 CurrentIrql; // r12
  char *v20; // rdx
  unsigned __int64 v21; // rdi
  unsigned __int16 v22; // dx
  int v23; // r8d
  unsigned int v24; // edi
  unsigned __int16 *v25; // rcx
  int v26; // eax
  unsigned int v27; // r15d
  int v28; // r13d
  unsigned __int16 *v29; // rdi
  unsigned __int16 *v30; // rcx
  int v31; // esi
  _QWORD *v32; // r12
  __int64 v33; // rax
  int v34; // r14d
  __int64 v35; // r11
  __int64 v36; // r10
  unsigned int v37; // r14d
  __int64 HalNumaConversionFactor; // rax
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // rcx
  unsigned int v41; // edi
  unsigned int v42; // r9d
  unsigned int v43; // r10d
  int v44; // esi
  _QWORD *v45; // r8
  __int64 *v46; // r11
  unsigned __int16 *v47; // rax
  __int64 v48; // rdx
  size_t v49; // rdx
  unsigned __int16 v50; // dx
  unsigned int v51; // r8d
  int k; // eax
  __int16 v53; // cx
  __int64 v54; // rdx
  int v56; // [rsp+48h] [rbp-C0h]
  unsigned int j; // [rsp+48h] [rbp-C0h]
  __int64 v58; // [rsp+50h] [rbp-B8h] BYREF
  int v59[2]; // [rsp+58h] [rbp-B0h]
  unsigned __int64 Affinity; // [rsp+60h] [rbp-A8h]
  _GROUP_AFFINITY Affinity_8; // [rsp+68h] [rbp-A0h] BYREF
  _GROUP_AFFINITY PreviousAffinity_8; // [rsp+78h] [rbp-90h] BYREF
  _WORD Base[4]; // [rsp+88h] [rbp-80h] BYREF
  _QWORD v64[127]; // [rsp+90h] [rbp-78h] BYREF

  PreviousAffinity_8 = 0LL;
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
LABEL_80:
    LOBYTE(Pool2) = 1;
    return (char)Pool2;
  }
  v0 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int16)KeNumberNodes;
  v1 = (unsigned int)v0;
  Pool2 = (char *)ExAllocatePool2(64LL, 10 * v0, 0x634E654Bu);
  KiActualNodeCost = Pool2;
  if ( Pool2 )
  {
    KiNodeGraph = &Pool2[8 * v1];
    if ( (_DWORD)v1 )
      memset_0(Pool2, -1, 8 * v1);
    v3 = KeNumberNodes;
    v56 = 0;
    *(_QWORD *)v59 = -1LL;
    v4 = 0;
    LODWORD(v58) = 0;
    v5 = 0;
    Affinity_8 = 0LL;
    if ( KeNumberNodes )
    {
      while ( 1 )
      {
        v6 = KeNodeBlock[v5];
        if ( (HvlEnlightenments & 0x800) != 0 )
        {
          v7 = 0;
          if ( v3 )
          {
            do
            {
              v58 = 0LL;
              HvlQueryNumaDistance(v5, v7, &v58);
              v8 = v5 * (unsigned __int16)KeNumberNodes;
              if ( v58 == -1 )
                *((_QWORD *)KiActualNodeCost + v7 + v8) = -1LL;
              else
                *((_QWORD *)KiActualNodeCost + v7 + v8) = (unsigned __int64)(v58 << 9) >> 10;
              v3 = KeNumberNodes;
              ++v7;
            }
            while ( v7 < (unsigned __int16)KeNumberNodes );
          }
          goto LABEL_43;
        }
        if ( *(_WORD *)v6 != *(_WORD *)(v6 + 2) )
          goto LABEL_43;
        LOBYTE(v9) = KeIsEmptyGroupMask((unsigned __int64 *)(v6 + 16));
        if ( !v9 )
          break;
        v10 = 0;
        for ( i = *(_WORD *)v6; v10 < (unsigned __int16)KeNumberNodes; ++v10 )
        {
          v6 = KeNodeBlock[v10];
          if ( *(_WORD *)(v6 + 2) == i )
          {
            LOBYTE(v12) = KeIsEmptyGroupMask((unsigned __int64 *)(v6 + 16));
            if ( !v12 )
              break;
          }
        }
        v3 = KeNumberNodes;
        if ( v10 != (unsigned __int16)KeNumberNodes )
          goto LABEL_24;
LABEL_43:
        LODWORD(v58) = ++v5;
        if ( v5 >= v3 )
        {
          if ( v56 == 1 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity_8);
          goto LABEL_46;
        }
        v4 = v56;
      }
      v10 = v5;
LABEL_24:
      KeQueryNodeActiveAffinity(*(_WORD *)v6, &Affinity_8, 0LL);
      Affinity_8.Mask &= Affinity_8.Mask ^ (Affinity_8.Mask - 1);
      if ( v4 )
      {
        p_PreviousAffinity_8 = 0LL;
      }
      else
      {
        v56 = 1;
        p_PreviousAffinity_8 = &PreviousAffinity_8;
      }
      KeSetSystemGroupAffinityThread(&Affinity_8, p_PreviousAffinity_8);
      v3 = KeNumberNodes;
      v14 = 0;
      if ( KeNumberNodes )
      {
        do
        {
          PartitionNodePagesForMdl = (struct _MDL *)MmAllocatePartitionNodePagesForMdlEx(
                                                      0,
                                                      v59[0],
                                                      0LL,
                                                      0x1000uLL,
                                                      0,
                                                      v14,
                                                      7u,
                                                      0LL);
          v16 = PartitionNodePagesForMdl;
          if ( PartitionNodePagesForMdl )
          {
            v18 = (char *)MmMapLockedPagesSpecifyCache(PartitionNodePagesForMdl, 0, MmNonCached, 0LL, 0, 0x40000020u);
            if ( v18 )
            {
              CurrentIrql = KeGetCurrentIrql();
              if ( CurrentIrql != 2 )
                __writecr8(2uLL);
              if ( KiIrqlFlags )
              {
                LOBYTE(v17) = 2;
                KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v17);
              }
              v20 = v18 + 4096;
              Affinity = __rdtsc();
              while ( v18 < v20 )
                v18 += 8;
              v21 = __rdtsc();
              if ( KiIrqlFlags )
                KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
              __writecr8(CurrentIrql);
              *((_QWORD *)KiActualNodeCost + v14 + v10 * (unsigned __int16)KeNumberNodes) = v21 - Affinity;
            }
            MiFreePagesFromMdl((ULONG_PTR)v16, 0, 0, 0);
            ExFreePoolWithTag(v16, 0);
          }
          v3 = KeNumberNodes;
          ++v14;
        }
        while ( v14 < (unsigned __int16)KeNumberNodes );
        v5 = v58;
      }
      goto LABEL_43;
    }
LABEL_46:
    v22 = KeNumberNodes;
    v23 = 0;
    *(_QWORD *)v59 = 0LL;
    v24 = 0;
    LODWORD(v58) = 0;
    for ( j = 0; v24 < v22; j = ++v24 )
    {
      v25 = (unsigned __int16 *)KeNodeBlock[v24];
      v26 = *v25;
      if ( (_WORD)v26 == v25[1] )
      {
        v27 = 0;
        v28 = v22 * v26;
        if ( v22 )
        {
          v29 = (unsigned __int16 *)KeNodeBlock[v24];
          do
          {
            v30 = (unsigned __int16 *)KeNodeBlock[v27];
            v31 = *v30;
            if ( (_WORD)v31 == v30[1] )
            {
              v32 = KiActualNodeCost;
              v33 = (unsigned int)(v31 + v28);
              if ( *((_QWORD *)KiActualNodeCost + v33) == -1LL )
              {
                v34 = *v29;
                v35 = v34 + v31 * (unsigned int)v22;
                v36 = *((_QWORD *)KiActualNodeCost + v35);
                if ( v36 == -1 )
                {
                  v37 = *((_DWORD *)KeNodeDistance + v31 + v34 * v22);
                  if ( v37 != 1 || (v37 = *((_DWORD *)KeNodeDistance + (int)v35), v37 != 1) )
                  {
                    if ( v23 )
                    {
                      v39 = *(_QWORD *)v59;
                    }
                    else
                    {
                      HalNumaConversionFactor = KiGetHalNumaConversionFactor(&v58);
                      v23 = v58;
                      v39 = HalNumaConversionFactor;
                      *(_QWORD *)v59 = HalNumaConversionFactor;
                    }
                    if ( v23 == 2 )
                    {
                      v40 = v39 * v37 / 0x64;
                    }
                    else if ( v23 == 3 )
                    {
                      v40 = 100 * (unsigned __int64)v37 / v39;
                    }
                    else
                    {
                      v40 = -1LL;
                    }
                    v32[v31 + v28] = v40;
                  }
                }
                else
                {
                  *((_QWORD *)KiActualNodeCost + v33) = v36;
                }
              }
            }
            v22 = KeNumberNodes;
            ++v27;
          }
          while ( v27 < (unsigned __int16)KeNumberNodes );
          v24 = j;
        }
      }
    }
    v41 = 0;
    if ( v22 )
    {
      v42 = v22;
      do
      {
        v43 = 0;
        v44 = v42 * *(unsigned __int16 *)(KeNodeBlock[v41] + 2);
        if ( v42 )
        {
          v45 = v64;
          v46 = KeNodeBlock;
          do
          {
            v47 = (unsigned __int16 *)*v46;
            *((_DWORD *)v45 - 2) = v43;
            if ( v47 )
            {
              v48 = *((_QWORD *)KiActualNodeCost + v44 + (unsigned int)*v47);
              *v45 = v48;
              if ( !v48 )
                *v45 = 1LL;
            }
            else
            {
              *v45 = -1LL;
            }
            ++v43;
            ++v46;
            v45 += 2;
          }
          while ( v43 < v42 );
        }
        v49 = (unsigned __int16)KeNumberNodes;
        v64[2 * v41] = 0LL;
        qsort(Base, v49, 0x10uLL, MiNodeCostSort);
        v50 = KeNumberNodes;
        v51 = 0;
        for ( k = (unsigned __int16)KeNumberNodes;
              v51 < (unsigned __int16)KeNumberNodes;
              k = (unsigned __int16)KeNumberNodes )
        {
          v53 = Base[8 * v51];
          v54 = v51 + v41 * k;
          ++v51;
          *((_WORD *)KiNodeGraph + v54) = v53;
          v50 = KeNumberNodes;
        }
        ++v41;
        v42 = v50;
      }
      while ( v41 < v50 );
    }
    goto LABEL_80;
  }
  return (char)Pool2;
}
