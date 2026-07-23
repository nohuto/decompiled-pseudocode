/*
 * XREFs of MiPfPrepareReadList @ 0x140A5B120
 * Callers:
 *     MmPrefetchPagesEx @ 0x140A5AD88 (MmPrefetchPagesEx.c)
 * Callees:
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiUpdatePfnForPrefetchByPte @ 0x1402D5050 (MiUpdatePfnForPrefetchByPte.c)
 *     MiObtainFaultCharges @ 0x1402D83D0 (MiObtainFaultCharges.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     PsGetSessionIdEx @ 0x1402ED8A0 (PsGetSessionIdEx.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiInsertPageChainHead @ 0x14033C0E0 (MiInsertPageChainHead.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     MiPfConvertFileOffsetToProto @ 0x14036E9D0 (MiPfConvertFileOffsetToProto.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     MiUseSlabAllocator @ 0x140375BA4 (MiUseSlabAllocator.c)
 *     MiPrefetchNormally @ 0x140375C8C (MiPrefetchNormally.c)
 *     MiGetInPageSupportBlock @ 0x140398D70 (MiGetInPageSupportBlock.c)
 *     MiGetPteAddress @ 0x14043F3C0 (MiGetPteAddress.c)
 *     MiReverseSwizzleInvalidPte @ 0x140441B60 (MiReverseSwizzleInvalidPte.c)
 *     MiGetNextPageColor @ 0x140442ED0 (MiGetNextPageColor.c)
 *     MiGetControlAreaPartition @ 0x14044F7D0 (MiGetControlAreaPartition.c)
 *     MiColorBaseToNode @ 0x140468D00 (MiColorBaseToNode.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiInitializeInPageSupportForGetExtents @ 0x1405311BC (MiInitializeInPageSupportForGetExtents.c)
 *     MiAllocateReadList @ 0x140A5B7B0 (MiAllocateReadList.c)
 *     MiReleaseReadListResources @ 0x140A5B840 (MiReleaseReadListResources.c)
 *     MiPfAllocateMdls @ 0x140A5B9E0 (MiPfAllocateMdls.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiPfPrepareReadList(__int64 a1, __int64 **a2)
{
  _DWORD *v2; // r15
  volatile signed __int64 *v3; // rax
  unsigned int v4; // ebx
  unsigned int v5; // r12d
  __int64 *v6; // rcx
  __int64 v7; // r13
  unsigned int Mdls; // ebx
  __int64 v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rcx
  __int64 List; // rax
  __int64 *v14; // r14
  __int64 v15; // rdi
  _KPROCESS *Process; // rbp
  ULONG *ControlAreaPartition; // rax
  unsigned __int64 v18; // r9
  int v19; // ecx
  int v20; // esi
  unsigned int v21; // eax
  unsigned int v22; // ebp
  unsigned int v23; // r14d
  unsigned __int64 *v24; // rbx
  int v25; // eax
  __int64 v26; // rdi
  unsigned __int64 v27; // rbx
  __int64 v28; // r8
  __int64 *v29; // r9
  __int64 v30; // r13
  __int64 *v31; // rax
  __int64 PteAddress; // rax
  __int64 v33; // rdx
  __int64 v34; // r9
  unsigned int NextPageColor; // eax
  _DWORD *v36; // rdx
  unsigned int v37; // edi
  ULONG *v38; // r13
  int v39; // eax
  unsigned int v40; // ebx
  __int64 SlabPage; // rax
  __int64 *v42; // r8
  __int64 *v43; // rcx
  __int16 v44; // ax
  volatile signed __int64 *v45; // r9
  __int64 v46; // rdx
  unsigned int v47; // r9d
  PSLIST_ENTRY v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // [rsp+30h] [rbp-108h]
  __int64 *v51; // [rsp+38h] [rbp-100h]
  __int64 *P; // [rsp+40h] [rbp-F8h]
  unsigned __int64 *v53; // [rsp+48h] [rbp-F0h]
  unsigned int v54; // [rsp+50h] [rbp-E8h] BYREF
  __int64 v55; // [rsp+58h] [rbp-E0h]
  ULONG *v56; // [rsp+60h] [rbp-D8h]
  __int64 *v57; // [rsp+68h] [rbp-D0h]
  _DWORD *v58; // [rsp+70h] [rbp-C8h]
  unsigned __int64 v59; // [rsp+78h] [rbp-C0h]
  volatile signed __int64 *v60; // [rsp+80h] [rbp-B8h]
  _QWORD *v61; // [rsp+88h] [rbp-B0h]
  __int64 v62; // [rsp+90h] [rbp-A8h]
  __int128 v63; // [rsp+98h] [rbp-A0h] BYREF
  _QWORD v64[2]; // [rsp+B0h] [rbp-88h] BYREF
  unsigned int v65; // [rsp+C0h] [rbp-78h]
  int v66; // [rsp+C4h] [rbp-74h]
  __int64 v67; // [rsp+C8h] [rbp-70h]
  __int128 v68; // [rsp+D0h] [rbp-68h]
  unsigned __int64 *v69; // [rsp+E0h] [rbp-58h]
  __int64 v70; // [rsp+E8h] [rbp-50h]
  unsigned __int64 v71; // [rsp+140h] [rbp+8h] BYREF
  __int64 **v72; // [rsp+148h] [rbp+10h]
  unsigned int SessionId; // [rsp+150h] [rbp+18h]
  unsigned int v74; // [rsp+158h] [rbp+20h]

  v72 = a2;
  v2 = *(_DWORD **)a1;
  v71 = 0LL;
  v63 = 0LL;
  v66 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v70 = 0LL;
  v61 = *(_QWORD **)(a1 + 8);
  v58 = *(_DWORD **)(a1 + 16);
  v3 = *(volatile signed __int64 **)(a1 + 24);
  *a2 = 0LL;
  v4 = v2[4];
  v60 = v3;
  if ( (v4 & 0x180) != 0 )
    return 3221225711LL;
  v5 = v2[2];
  v6 = (__int64 *)(*(_QWORD *)(*(_QWORD *)v2 + 40LL) + 16LL);
  if ( !v2[3] )
    v6 = *(__int64 **)(*(_QWORD *)v2 + 40LL);
  v7 = *v6;
  v62 = v7;
  if ( (*(_DWORD *)(v7 + 56) & 0x400) != 0 || !*(_QWORD *)(v7 + 64) )
    return 3221225711LL;
  List = MiAllocateReadList(v5);
  P = (__int64 *)List;
  v14 = (__int64 *)List;
  if ( !List )
    return 3221225626LL;
  *(_QWORD *)(List + 8) = v7;
  v15 = v7 + 128;
  Process = KeGetCurrentThread()->ApcState.Process;
  ControlAreaPartition = (ULONG *)MiGetControlAreaPartition(v7);
  v19 = *(_DWORD *)(v7 + 56);
  v56 = ControlAreaPartition;
  if ( (v19 & 0x20) != 0 )
  {
    SessionId = PsGetSessionIdEx((__int64)Process);
  }
  else
  {
    if ( v18 > 0x40000000000000LL || (v15 = MiOffsetToProtos(v7, v18, &v71)) == 0 )
    {
      ExFreePoolWithTag(v14, 0);
      return 0LL;
    }
    SessionId = -1;
  }
  v59 = 0LL;
  v50 = 0LL;
  *((_DWORD *)v14 + 46) = v4 & 7;
  v57 = v14 + 30;
  v51 = 0LL;
  v55 = 0LL;
  v74 = v4 & 7;
  *((_DWORD *)v14 + 47) = (v4 & 0x40) != 0 ? 5 : 0;
  v54 = 0;
  LODWORD(v71) = 0;
  *((_DWORD *)v14 + 48) = (v4 >> 3) & 7;
  v20 = (*(_DWORD *)(v7 + 56) >> 20) & 0x7F;
  MiInitializePageColorBase((__int64)&Process[2].ReadyListHead.Blink, 3, v20, (__int64)&v63);
  v21 = MiColorBaseToNode((__int64)&v63);
  v64[0] = v14;
  v22 = v21;
  v64[1] = v7;
  v23 = 0;
  v65 = SessionId;
  v24 = 0LL;
  v67 = v15;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v23 >= v5 )
        {
          Mdls = v71;
LABEL_8:
          v10 = v50;
LABEL_9:
          v11 = P;
          goto LABEL_10;
        }
        v25 = MiPfConvertFileOffsetToProto((__int64)v64, *(_QWORD *)&v2[2 * v23 + 4] & 0xFFFFFFFFFFFFFF80uLL);
        if ( v25 == -1073741746 )
          goto LABEL_27;
        if ( v25 < 0 )
        {
          Mdls = v25;
          goto LABEL_8;
        }
        v26 = (__int64)v69;
        if ( v69 != v24 )
          break;
LABEL_27:
        ++v23;
      }
      v27 = *v69;
      v53 = v69;
      if ( (*v69 & 1) != 0 )
        goto LABEL_25;
      if ( (v27 & 0x400) == 0 )
        break;
      if ( (*(_DWORD *)(v7 + 56) & 0x30000000) != 0x10000000 )
        goto LABEL_30;
      v48 = MiGetInPageSupportBlock(0, v60);
      if ( !v48 )
      {
        v10 = v50;
        Mdls = -1073741670;
        if ( v50 )
          Mdls = 0;
        goto LABEL_9;
      }
      MiInitializeInPageSupportForGetExtents((__int64)v48, v67, v26, 0LL);
      MiFaultGetFileExtents(0LL, v49);
      ++v23;
      v24 = (unsigned __int64 *)v26;
    }
    if ( (v27 & 0x800) != 0 )
    {
LABEL_25:
      MiUpdatePfnForPrefetchByPte((__int64)v69, v74, v58);
LABEL_26:
      v24 = (unsigned __int64 *)v26;
      goto LABEL_27;
    }
    v44 = MiReverseSwizzleInvalidPte(v27);
    if ( (v44 & 0x400) == 0 && (v44 & 0x800) == 0 && (v44 & 8) == 0 )
      goto LABEL_26;
LABEL_30:
    v28 = v26;
    v29 = v57;
    v30 = v67;
    v31 = v57;
    if ( v51 )
      v31 = v51;
    v51 = v31;
    *v57 = v26;
    if ( v55 != v30 || (MiGetPteAddress(v26), PteAddress = MiGetPteAddress(v59), PteAddress != v33) )
    {
      v28 |= 2uLL;
      v55 = v30;
      *v29 = v28;
    }
    v59 = v26;
    if ( v26 == v70 )
      *v29 = v28 | 1;
    v11 = P;
    v57 = v29 + 1;
    if ( !MiPrefetchNormally(v56, 1uLL, *((_DWORD *)P + 48) + 1) )
    {
LABEL_56:
      v10 = v50;
      Mdls = v71;
      goto LABEL_10;
    }
    if ( v61 )
    {
      if ( !*v61 )
        goto LABEL_56;
      --*v61;
    }
    if ( !MiObtainFaultCharges(v56, 1uLL, 1, v34) )
      break;
    NextPageColor = MiGetNextPageColor((__int64)&v63);
    v36 = (_DWORD *)v30;
    v37 = NextPageColor;
    v38 = v56;
    v39 = MiUseSlabAllocator((__int64)v56, v36, v27, v22, &v54);
    v40 = v54;
    if ( v39 && v54 <= 4 )
    {
      v47 = 6;
      if ( v20 )
        v47 = 4;
      SlabPage = MiGetSlabPage((__int64)v38, v54, v37, v47, (__int64 *)0xFFFFFFFFFFFFFFFFLL, 0);
    }
    else
    {
      SlabPage = MiGetPage((__int64)v38, v37, 0);
    }
    if ( SlabPage == -1 )
    {
      MiReturnFaultCharges((__int64)v38, 1LL);
      v12 = v51;
      v11 = P;
      if ( !v50 )
      {
        Mdls = -1073741801;
        goto LABEL_11;
      }
      goto LABEL_60;
    }
    if ( (unsigned int)MiGetPfnSlabType(48 * SlabPage - 0x220000000000LL) == 9 )
    {
      v43 = P + 5;
    }
    else
    {
      if ( v40 > 4 )
        v40 -= 5;
      v43 = &P[3 * v40 + 8];
    }
    MiInsertPageChainHead(v43, v42);
    ++v50;
    v7 = v62;
    ++v23;
    v24 = v53;
  }
  v10 = v50;
  Mdls = -1073741670;
  if ( v50 )
    Mdls = 0;
LABEL_10:
  v12 = v51;
  if ( !v10 )
  {
LABEL_11:
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag(v11, 0);
    return Mdls;
  }
LABEL_60:
  v45 = v60;
  v46 = SessionId;
  v11[25] = (__int64)v12;
  *((_DWORD *)v11 + 49) = ((char *)v57 - (char *)v11 - 240) >> 3;
  Mdls = MiPfAllocateMdls(v11, v46, 0LL, v45);
  if ( (__int64 *)v11[28] == v11 + 28 )
  {
    MiReleaseReadListResources(v11);
    ExFreePoolWithTag(v11, 0);
    *v72 = 0LL;
  }
  else
  {
    Mdls = 0;
    *v72 = v11;
  }
  return Mdls;
}
