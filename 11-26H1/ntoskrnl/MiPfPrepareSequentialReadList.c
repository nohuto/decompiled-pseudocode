/*
 * XREFs of MiPfPrepareSequentialReadList @ 0x140A5A190
 * Callers:
 *     MiPrefetchControlArea @ 0x140A58548 (MiPrefetchControlArea.c)
 *     MmPrefetchForCacheManager @ 0x140A59FA0 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiGetPageChain @ 0x140285330 (MiGetPageChain.c)
 *     MiAddViewsForSection @ 0x1402C51E0 (MiAddViewsForSection.c)
 *     MiGetControlAreaPtes @ 0x1402C57D0 (MiGetControlAreaPtes.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiStartingOffset @ 0x14036EC40 (MiStartingOffset.c)
 *     MiEndingOffsetWithLock @ 0x14036EDA0 (MiEndingOffsetWithLock.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiProtectionToCacheAttribute @ 0x140374020 (MiProtectionToCacheAttribute.c)
 *     MiGetSharedProtos @ 0x140374988 (MiGetSharedProtos.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiInitializePageChainPacket @ 0x140412300 (MiInitializePageChainPacket.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReverseSwizzleInvalidPte @ 0x140441B60 (MiReverseSwizzleInvalidPte.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 *     MmGetCurrentProcessorColor @ 0x140442EF0 (MmGetCurrentProcessorColor.c)
 *     MiAppendPageChain @ 0x14044F110 (MiAppendPageChain.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiRemoveViewsFromSectionWithPfn @ 0x140458404 (MiRemoveViewsFromSectionWithPfn.c)
 *     MiInitializePageHeatList @ 0x1404655D0 (MiInitializePageHeatList.c)
 *     MiColorBaseToNode @ 0x140468D00 (MiColorBaseToNode.c)
 *     MiGetAvailablePagesExcludeSlists @ 0x140486A18 (MiGetAvailablePagesExcludeSlists.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x1405311BC (MiInitializeInPageSupportForGetExtents.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     MiAllocateReadList @ 0x140A5B7B0 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareSequentialReadList(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        volatile signed __int64 *a8,
        __int64 *a9)
{
  bool v12; // zf
  __int64 result; // rax
  _QWORD *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rsi
  int v17; // ebx
  int v18; // eax
  ULONG *v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // rbx
  volatile signed __int64 *v22; // r9
  __int64 v23; // r8
  unsigned __int64 v24; // rdx
  PVOID v25; // rdi
  unsigned __int64 ControlAreaPtes; // rcx
  unsigned __int64 v27; // rax
  unsigned int v28; // edx
  unsigned __int64 v29; // rsi
  __int64 List; // rax
  __int64 v31; // r15
  int v32; // eax
  __int64 AvailablePagesExcludeSlists; // rax
  unsigned __int64 v34; // r9
  unsigned __int64 *v35; // r14
  unsigned __int64 v36; // rsi
  __int64 v37; // r8
  _QWORD *v38; // r12
  unsigned int v39; // eax
  struct _KLOCK_ENTRIES *v40; // r9
  unsigned int v41; // edi
  unsigned int v42; // eax
  unsigned __int64 v43; // rbx
  _QWORD *v44; // rcx
  _QWORD *v45; // r15
  unsigned __int64 v46; // r8
  struct _KLOCK_ENTRIES *v47; // r13
  __int64 PteAddress; // rax
  __int64 v49; // rdx
  struct _KLOCK_ENTRIES *v50; // rdx
  ULONG *v51; // r13
  __int16 v52; // ax
  unsigned __int64 v53; // r14
  __int64 v54; // rcx
  _QWORD *v55; // rbx
  unsigned __int64 v56; // r9
  int v57; // eax
  __int64 *v58; // rax
  __int64 v59; // rbx
  unsigned int NextPageColor; // eax
  __int64 SlabPage; // rax
  unsigned __int64 v62; // rbx
  __int64 v63; // rdx
  __int64 v64; // r8
  unsigned __int64 v65; // rax
  __int64 v66; // r14
  int CurrentProcessorColor; // eax
  void *PoolMm; // rax
  int v69; // ecx
  PSLIST_ENTRY v70; // rcx
  __int64 v71; // rcx
  __int64 SharedProtos; // rax
  unsigned int Mdls; // [rsp+70h] [rbp-90h]
  __int64 v74; // [rsp+78h] [rbp-88h]
  unsigned __int64 v75; // [rsp+88h] [rbp-78h]
  __int64 v76; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v77; // [rsp+98h] [rbp-68h] BYREF
  unsigned int v78; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v79; // [rsp+A4h] [rbp-5Ch]
  unsigned __int64 v80; // [rsp+A8h] [rbp-58h]
  struct _KLOCK_ENTRIES *v81; // [rsp+B0h] [rbp-50h]
  _QWORD *v82; // [rsp+B8h] [rbp-48h]
  struct _KLOCK_ENTRIES *v83; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v84; // [rsp+C8h] [rbp-38h]
  ULONG *ControlAreaPartition; // [rsp+D0h] [rbp-30h]
  PVOID P; // [rsp+D8h] [rbp-28h]
  unsigned int v87; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v88; // [rsp+E8h] [rbp-18h]
  unsigned __int64 v89; // [rsp+F0h] [rbp-10h]
  __int64 v90; // [rsp+F8h] [rbp-8h]
  unsigned __int64 v91; // [rsp+100h] [rbp+0h]
  __int64 v92; // [rsp+108h] [rbp+8h]
  __int64 v93; // [rsp+110h] [rbp+10h]
  unsigned __int64 *v94; // [rsp+118h] [rbp+18h]
  volatile signed __int64 *v95; // [rsp+120h] [rbp+20h]
  __int64 v96; // [rsp+128h] [rbp+28h]
  unsigned int *p_Blink; // [rsp+130h] [rbp+30h]
  __int64 v98; // [rsp+138h] [rbp+38h]
  __int64 *v99; // [rsp+140h] [rbp+40h]
  __int128 v100; // [rsp+148h] [rbp+48h] BYREF
  _QWORD v101[11]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v102; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v103; // [rsp+1C8h] [rbp+C8h]
  _OWORD v104[3]; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v105; // [rsp+200h] [rbp+100h]
  int v106; // [rsp+208h] [rbp+108h]

  v95 = a8;
  v92 = a1;
  v98 = a4;
  v90 = a2;
  *a9 = 0LL;
  v12 = (*(_DWORD *)(a2 + 56) & 0x400) == 0;
  v99 = a9;
  v100 = 0LL;
  v105 = 0LL;
  memset(v104, 0, sizeof(v104));
  v106 = 0;
  P = 0LL;
  if ( !v12 || !*(_QWORD *)(a2 + 64) )
    return 3221225711LL;
  ControlAreaPtes = MiGetControlAreaPtes(a2);
  if ( a5 )
  {
    v27 = a5 >> 12;
    if ( a5 >> 12 > 0xFFFFFFFF )
      return 3221225713LL;
    v28 = a5 >> 12;
    v93 = (unsigned int)v27;
    if ( (unsigned int)v27 > ControlAreaPtes )
      return 3221225713LL;
  }
  else
  {
    if ( ControlAreaPtes >= 0x100000000LL )
      return 3221225713LL;
    v28 = ControlAreaPtes;
    v93 = (unsigned int)ControlAreaPtes;
  }
  v29 = v28;
  if ( a4 && v28 + ((a3 >> 12) & 0x3FuLL) > 0x40 )
    return 3221225713LL;
  List = MiAllocateReadList(v28);
  v74 = List;
  if ( !List )
    return 3221225626LL;
  *(_QWORD *)(List + 8) = a2;
  if ( (stru_140E366D8.WaitRegister.Flags & 1) != 0 )
  {
    v66 = 511LL;
    if ( v29 <= 0x1FF )
      v66 = v29;
    CurrentProcessorColor = MmGetCurrentProcessorColor();
    PoolMm = (void *)ExAllocatePoolMm(66LL, 8 * v66 + 16, 1818782029, CurrentProcessorColor | 0x80000000);
    P = PoolMm;
    if ( !PoolMm )
    {
      v21 = (_QWORD *)v74;
      Mdls = -1073741670;
      goto LABEL_18;
    }
    MiInitializePageHeatList((__int64)PoolMm, 1, 1, v66);
  }
  v31 = a2 + 128;
  v14 = 0LL;
  v32 = (*(_DWORD *)(a2 + 160) >> 1) & 0x1F;
  v88 = 0LL;
  v77 = 0LL;
  v76 = 0LL;
  v84 = 0LL;
  v94 = 0LL;
  v83 = (struct _KLOCK_ENTRIES *)(a2 + 128);
  v87 = v32;
  if ( a5 )
  {
    v31 = MiOffsetToProtos(a2, a3, (unsigned __int64 *)&v77);
    v83 = (struct _KLOCK_ENTRIES *)v31;
    v88 = (unsigned __int64)v77;
  }
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(a2);
  AvailablePagesExcludeSlists = MiGetAvailablePagesExcludeSlists((__int64)ControlAreaPartition);
  v35 = (unsigned __int64 *)v34;
  v96 = AvailablePagesExcludeSlists;
  v89 = v34;
  v77 = (unsigned __int64 *)v34;
  v75 = v34;
  v91 = v34;
  if ( v92 )
  {
    v69 = *(_DWORD *)(v92 + 12) & 0x1FF | 0x200;
    v82 = *(_QWORD **)(v92 + 32);
    v80 = __PAIR64__(HIDWORD(v34), v69);
    v36 = __PAIR64__(HIDWORD(v34), v69);
  }
  else
  {
    v82 = (_QWORD *)v34;
    v36 = v34;
  }
  v21 = (_QWORD *)v74;
  v37 = v90;
  v78 = v34;
  *(_DWORD *)(v74 + 184) = a6;
  v38 = (_QWORD *)(v74 + 240);
  *(_DWORD *)(v74 + 188) = 5;
  *(_DWORD *)(v74 + 192) = 7;
  LODWORD(v37) = (*(_DWORD *)(v37 + 56) >> 20) & 0x7F;
  p_Blink = (unsigned int *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink;
  MiInitializePageColorBase((__int64)p_Blink, 3, v37, (__int64)&v100);
  v39 = MiColorBaseToNode((__int64)&v100);
  v40 = 0LL;
  Mdls = 0;
  v41 = v39;
  v81 = 0LL;
  v42 = 0;
  while ( 1 )
  {
    v79 = v42;
    if ( v42 >= (unsigned int)v93 )
    {
LABEL_102:
      v15 = v76;
      goto LABEL_7;
    }
    v24 = v89;
    if ( (unsigned __int64)v35 >= v89 )
      break;
LABEL_33:
    v43 = *v35;
    if ( (*v35 & 1) != 0 )
      goto LABEL_75;
    if ( (v43 & 0x400) != 0 )
    {
      if ( (*(_DWORD *)(v90 + 56) & 0x30000000) == 0x10000000 )
      {
        if ( v75 == *(_QWORD *)(v31 + 8) )
        {
          v70 = MiGetInPageSupportBlock(0, v95);
          if ( !v70 )
            goto LABEL_5;
          MiInitializeInPageSupportForGetExtents((__int64)v70, v31, (__int64)v35, 0LL);
          MiFaultGetFileExtents(0LL, v71);
        }
        goto LABEL_50;
      }
      v44 = v82;
      if ( v82 )
      {
        v36 += (__int64)((__int64)v35 - v91) >> 3 << 12;
        v91 = (unsigned __int64)v35;
        *v82 = v36;
        v82 = v44 + 1;
      }
LABEL_38:
      *v38 = v35;
      v45 = v38;
      v46 = (unsigned __int64)v35;
      if ( v14 )
        v45 = v14;
      v47 = v83;
      if ( v40 != v83
        || (MiGetPteAddress((unsigned __int64)v94),
            PteAddress = MiGetPteAddress((unsigned __int64)v35),
            v49 != PteAddress) )
      {
        v46 |= 2uLL;
        v81 = v47;
        *v38 = v46;
      }
      v94 = v35;
      if ( v35 == v77 )
        *v38 = v46 | 1;
      ++v38;
      if ( !MiObtainFaultCharges(ControlAreaPartition, 1uLL, 1, (__int64)v40) )
      {
        v14 = v45;
LABEL_5:
        v15 = v76;
        if ( !v76 )
          Mdls = -1073741670;
LABEL_7:
        if ( v92 )
          *(_QWORD *)(v92 + 24) = v82;
        if ( v15 )
        {
          v16 = v84;
          if ( v84 )
          {
            memset_0(v101, 0, 0x70uLL);
            v17 = v41 + 1;
            MiInitializeDemandCoalesceContext(v104, 16LL, 1uLL, 1);
            v18 = MiProtectionToCacheAttribute(v87);
            v19 = ControlAreaPartition;
            MiInitializePageChainPacket(
              (__int64)ControlAreaPartition,
              p_Blink,
              2,
              0LL,
              v17,
              v18,
              0,
              -1LL,
              (__int64)v104,
              9u,
              0LL,
              v16,
              (__int64)v101);
            MiGetPageChain(v101);
            v20 = v103;
            if ( v103 )
              MiAppendPageChain(v74 + 40, &v102);
            if ( v20 != v16 )
            {
              MiReturnFaultCharges((__int64)v19, v16 - v20);
              if ( !(v15 + v20 - v16) )
              {
                v21 = (_QWORD *)v74;
                result = 3221225495LL;
                Mdls = -1073741801;
                goto LABEL_16;
              }
            }
          }
          v21 = (_QWORD *)v74;
          v22 = v95;
          v23 = v98;
          *(_DWORD *)(v74 + 196) = ((__int64)v38 - v74 - 240) >> 3;
          *(_QWORD *)(v74 + 200) = v14;
          Mdls = MiPfAllocateMdls(v74, a7, v23, v22);
          if ( (_QWORD *)v21[28] != v21 + 28 )
          {
            *v99 = v74;
            v21 = 0LL;
            result = 0LL;
            Mdls = 0;
            goto LABEL_16;
          }
LABEL_69:
          result = Mdls;
          goto LABEL_16;
        }
LABEL_68:
        v21 = (_QWORD *)v74;
        goto LABEL_69;
      }
      v50 = v47;
      v51 = ControlAreaPartition;
      if ( (unsigned int)MiUseSlabAllocator((__int64)ControlAreaPartition, v50, v43, v41, &v78) && (v59 = v78, v78 <= 4) )
      {
        NextPageColor = MiGetNextPageColor((__int64)&v100);
        SlabPage = MiGetSlabPage((__int64)v51, v59, NextPageColor, 4u, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0x20000u);
        if ( SlabPage == -1 )
        {
LABEL_96:
          MiReturnFaultCharges((__int64)v51, 1LL);
          v15 = v76;
          v14 = v45;
          if ( !v76 )
            Mdls = -1073741801;
          goto LABEL_7;
        }
        MiInsertPageChainHead(
          (__int64 *)(v74 + 8 * (v59 + 2 * (v59 + 4))),
          (__int64 *)(48 * SlabPage - 0x220000000000LL));
      }
      else
      {
        if ( v84 > v96 + 50 )
          goto LABEL_96;
        ++v84;
      }
      ++v76;
      v14 = v45;
      v31 = (__int64)v83;
      goto LABEL_50;
    }
    if ( (v43 & 0x800) != 0 )
    {
LABEL_75:
      MiUpdatePfnForPrefetchByPte((__int64)v35, a6, P);
      goto LABEL_50;
    }
    v52 = MiReverseSwizzleInvalidPte(*v35);
    if ( (v52 & 0x400) != 0 || (v52 & 0x800) != 0 || (v52 & 8) != 0 )
      goto LABEL_38;
LABEL_50:
    v21 = (_QWORD *)v74;
    v42 = v79 + 1;
    v40 = v81;
    ++v35;
  }
  if ( v35 )
  {
    v83 = *(struct _KLOCK_ENTRIES **)(v31 + 16);
    v31 = (__int64)v83;
    if ( !v83 )
      goto LABEL_102;
    v53 = 0LL;
    v88 = 0LL;
  }
  else
  {
    v53 = v88;
  }
  if ( (*(_DWORD *)(v90 + 56) & 0x20) != 0 )
  {
    v56 = *(_QWORD *)(v31 + 8);
    v75 = v56;
    if ( (*(_DWORD *)(v31 + 32) & 0x20000) != 0
      && (*(_DWORD *)(v90 + 56) & 8) != 0
      && (*(_DWORD *)(v90 + 56) & 0x20) != 0 )
    {
      if ( !*(_QWORD *)(v31 + 24) )
      {
        v35 = (unsigned __int64 *)(v89 - 8);
        goto LABEL_50;
      }
      SharedProtos = MiGetSharedProtos(v90, a7, v31);
      if ( !SharedProtos )
      {
        v35 = (unsigned __int64 *)(v89 - 8);
        goto LABEL_50;
      }
      v56 = *(_QWORD *)(SharedProtos + 72);
      v75 = v56;
    }
    goto LABEL_87;
  }
  result = MiAddViewsForSection((volatile LONG **)v31, *(unsigned int *)(v31 + 44), 2, v40);
  Mdls = result;
  if ( (int)result >= 0 )
  {
    v54 = v21[4];
    v55 = v21 + 3;
    v56 = *(_QWORD *)(v31 + 8);
    v75 = v56;
    if ( (_QWORD *)*v55 == v55 || *(_DWORD *)(v54 + 16) == 5 )
    {
      v57 = MmGetCurrentProcessorColor();
      v54 = ExAllocatePoolMm(256LL, 0x40uLL, 1817406797, v57 | 0x80000000);
      if ( !v54 )
      {
        MiRemoveViewsFromSectionWithPfn((__int64 *)v31, *(unsigned int *)(v31 + 44), 2);
        Mdls = -1073741670;
        goto LABEL_68;
      }
      v58 = (__int64 *)v55[1];
      if ( (_QWORD *)*v58 != v55 )
        __fastfail(3u);
      v56 = v75;
      *(_QWORD *)v54 = v55;
      *(_QWORD *)(v54 + 8) = v58;
      *v58 = v54;
      v55[1] = v54;
    }
    if ( !*(_QWORD *)(v74 + 16) )
      *(_QWORD *)(v74 + 16) = v31;
    *(_QWORD *)(v54 + 8LL * (unsigned int)(*(_DWORD *)(v54 + 16))++ + 24) = v31;
LABEL_87:
    v35 = (unsigned __int64 *)(v56 + 8 * v53);
    v89 = v56 + 8LL * *(unsigned int *)(v31 + 44);
    v62 = MiStartingOffset((__int64 *)v31, v56, a7);
    v65 = MiEndingOffsetWithLock((_DWORD *)v31, v63, v64);
    if ( (((_WORD)v65 - (_WORD)v62) & 0xFFF) != 0 )
      v77 = (unsigned __int64 *)(v75 + 8 * (((v65 - v62 + 4095) >> 12) - 1));
    else
      v77 = 0LL;
    v40 = v81;
    if ( v82 )
    {
      v80 = v62;
      v91 = v75;
      LODWORD(v80) = v62 ^ (*(_DWORD *)(v92 + 12) ^ v62) & 0x1FF | 0x200;
      v36 = v80;
    }
    goto LABEL_33;
  }
  if ( v84 )
  {
    MiReturnFaultCharges((__int64)ControlAreaPartition, v84);
    result = Mdls;
  }
LABEL_16:
  v25 = P;
  if ( P )
  {
    if ( *((_DWORD *)P + 1) )
      MiIssuePageHeatList(P, v24);
    ExFreePoolWithTag(v25, 0);
    result = Mdls;
  }
  if ( v21 )
  {
LABEL_18:
    MiReleaseReadListResources(v21);
    ExFreePoolWithTag(v21, 0);
    return Mdls;
  }
  return result;
}
