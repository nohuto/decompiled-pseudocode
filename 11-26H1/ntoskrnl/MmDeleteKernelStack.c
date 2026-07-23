/*
 * XREFs of MmDeleteKernelStack @ 0x14040A8BC
 * Callers:
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x140263870 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     KiEnableOptionalXStateFeatures @ 0x1403D5A0C (KiEnableOptionalXStateFeatures.c)
 *     PspDeleteKernelStack @ 0x14040A7F0 (PspDeleteKernelStack.c)
 *     KiFreeProcessorStacks @ 0x1405EDC50 (KiFreeProcessorStacks.c)
 *     KiDeleteXStateStack @ 0x1405EEF34 (KiDeleteXStateStack.c)
 *     KeEnableOptionalXStateFeaturesApc @ 0x1405EF310 (KeEnableOptionalXStateFeaturesApc.c)
 *     KiFreeTemporaryStacks @ 0x1405F3160 (KiFreeTemporaryStacks.c)
 *     KeUserModeCallback @ 0x140923D90 (KeUserModeCallback.c)
 *     KeUninitThread @ 0x140A7BCB0 (KeUninitThread.c)
 *     KiDeleteKernelShadowStack @ 0x140A7BD54 (KiDeleteKernelShadowStack.c)
 *     KeAllocateCalloutStackEx @ 0x140AB3C50 (KeAllocateCalloutStackEx.c)
 *     KeFreeCalloutStack @ 0x140B25070 (KeFreeCalloutStack.c)
 *     PspEnableProcessOptionalXStateFeatures @ 0x140B643BC (PspEnableProcessOptionalXStateFeatures.c)
 *     KeInitThread @ 0x140C0D634 (KeInitThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiPageToNode @ 0x140288C70 (MiPageToNode.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiSafeLockPage @ 0x1402D5780 (MiSafeLockPage.c)
 *     MiGetLeafPfnBuddy @ 0x14040AE80 (MiGetLeafPfnBuddy.c)
 *     MiAddKernelStackToPrcbCache @ 0x14040AF98 (MiAddKernelStackToPrcbCache.c)
 *     MiClearStackOwners @ 0x14040B0A0 (MiClearStackOwners.c)
 *     MiKernelShadowStackIdealForCaching @ 0x14040B330 (MiKernelShadowStackIdealForCaching.c)
 *     MiLogKernelStackEvent @ 0x1405000AC (MiLogKernelStackEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KasanMarkAddressValidNoInline @ 0x1405257D0 (KasanMarkAddressValidNoInline.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 *     VslResetKernelShadowStack @ 0x140AE23BC (VslResetKernelShadowStack.c)
 */

unsigned __int64 __fastcall MmDeleteKernelStack(int *a1)
{
  unsigned __int64 v1; // rbx
  int v2; // edi
  int v3; // r9d
  unsigned int v4; // r8d
  __int64 v5; // r13
  __int64 v6; // rdx
  __int64 v7; // r12
  int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int8 CurrentIrql; // r12
  __int64 v11; // rbx
  __int64 v12; // r8
  __int64 v13; // rax
  unsigned __int8 v14; // r13
  int *v15; // rbx
  char v16; // si
  int v17; // ebp
  __int64 v18; // r13
  __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 result; // rax
  int v22; // esi
  __int64 v23; // rax
  unsigned __int64 *v24; // rbx
  void *v25; // rcx
  unsigned __int64 v26; // r12
  __int64 v27; // r8
  int v28; // eax
  __int64 v29; // r9
  __int64 v30; // rdx
  int i; // eax
  __int64 v32; // r8
  unsigned __int16 *v33; // rsi
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rbx
  unsigned __int8 v39; // bp
  PSLIST_ENTRY v40; // r15
  ULONG_PTR v41; // rdx
  int v42; // eax
  ULONG_PTR v43; // rcx
  int v44; // ebx
  unsigned int v45; // [rsp+30h] [rbp-98h]
  __int64 v46; // [rsp+38h] [rbp-90h]
  __int64 v47; // [rsp+40h] [rbp-88h]
  __int64 v48; // [rsp+48h] [rbp-80h]
  __int64 LeafPfnBuddy; // [rsp+50h] [rbp-78h] BYREF
  unsigned int v50; // [rsp+58h] [rbp-70h]
  ULONG *v51; // [rsp+60h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-60h]
  ULONG_PTR v53; // [rsp+70h] [rbp-58h]
  ULONG_PTR BugCheckParameter4; // [rsp+D8h] [rbp+10h] BYREF
  __int64 v56; // [rsp+E0h] [rbp+18h]
  int v57; // [rsp+E8h] [rbp+20h]

  v1 = *((_QWORD *)a1 + 3);
  v2 = 0;
  v3 = *a1;
  v4 = a1[1];
  v5 = *((_QWORD *)a1 + 2);
  v6 = (v1 >> 9) & 0x7FFFFFFFF8LL;
  v50 = *a1;
  v45 = v4;
  LODWORD(BugCheckParameter4) = 0;
  v46 = v6 - 0x98000000008LL;
  if ( v4 != 5 )
  {
    LODWORD(v56) = 3;
    v46 = v6 - 0x98000000010LL;
    v8 = 3;
    v22 = 2;
    v57 = v4 + 3;
    if ( (int)(v4 + 3) > 5 )
      v22 = 0;
    v48 = 1LL;
    LODWORD(BugCheckParameter4) = v22;
    v7 = 1LL;
    if ( (v3 & 4) != 0 )
    {
      if ( v4 == 2 )
        v22 |= 1u;
      LODWORD(BugCheckParameter4) = v22;
    }
    goto LABEL_7;
  }
  if ( (v3 & 8) != 0 )
  {
    v26 = (unsigned int)KeXStateStackSize;
    LODWORD(BugCheckParameter4) = 2;
    v57 = 2;
  }
  else
  {
    v57 = 0;
    if ( (v3 & 1) == 0 )
    {
      v7 = (unsigned __int8)byte_140E34CE4;
      v48 = (unsigned __int8)byte_140E34CE4;
      LODWORD(BugCheckParameter4) = 2;
      if ( (v3 & 4) != 0 )
      {
        v57 = 1;
        LODWORD(BugCheckParameter4) = 3;
      }
      goto LABEL_6;
    }
    v26 = (unsigned int)KeKernelLargeStackSize;
  }
  v7 = v26 >> 12;
  v48 = v7;
LABEL_6:
  v8 = v7 + 1;
  LODWORD(v56) = v7 + 1;
LABEL_7:
  v9 = v1 - (unsigned int)(v8 << 12);
  BugCheckParameter2 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 == 5 )
  {
    if ( (v3 & 2) != 0 && (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogKernelStackEvent(v9 + 4096, v7, 0LL);
    if ( byte_140FC8BD8 )
      KasanMarkAddressValidNoInline(v9 + 4096, v7 << 12);
  }
  if ( v5 )
  {
    v6 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*(_QWORD *)(v5 + 544) + 1198LL));
    v51 = (ULONG *)v6;
  }
  else
  {
    v51 = &MiSystemPartition;
  }
  CurrentIrql = KeGetCurrentIrql();
  while ( 1 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)v46;
      v12 = (*(_QWORD *)v46 >> 12) & 0xFFFFFFFFFFLL;
      v53 = v12;
      v13 = 48 * v12 - 0x220000000000LL;
      v47 = v13;
      if ( CurrentIrql == 2 )
        break;
      v14 = MiSafeLockPage(v12, v6, v12);
      if ( v14 != 17 )
      {
        v13 = v47;
        goto LABEL_17;
      }
    }
    v14 = 17;
    LODWORD(LeafPfnBuddy) = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&LeafPfnBuddy);
      while ( *(__int64 *)(v47 + 24) < 0 );
      v13 = v47;
    }
LABEL_17:
    if ( v11 == *(_QWORD *)v46 )
      break;
    _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v14 < 2u )
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
      __writecr8(v14);
    }
  }
  LeafPfnBuddy = MiGetLeafPfnBuddy(v13, 1LL);
  v15 = a1;
  a1[2] = MiPageToNode(v53);
  _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v16 = BugCheckParameter4;
  v17 = v57;
  if ( v14 < 2u )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v14);
    __writecr8(v14);
  }
  if ( LeafPfnBuddy != -32 && v17 == 1 )
  {
    v16 &= ~1u;
    v17 = 0;
  }
  v18 = (__int64)v51;
  if ( (v16 & 1) != 0 && v51 == &MiSystemPartition && (unsigned int)MiAddKernelStackToPrcbCache(a1, v46, v48) )
  {
    v19 = *(_QWORD *)(v18 + 16);
    v20 = (v17 + 880LL * (unsigned int)a1[2]) << 6;
    result = (unsigned int)(*(_DWORD *)(v20 + v19 + 14276) - 1);
    if ( (result & 0x80000000) == 0LL )
      v2 = *(_DWORD *)(v20 + v19 + 14276) - 1;
    *(_DWORD *)(v20 + v19 + 14276) = v2;
    return result;
  }
  if ( *(_DWORD *)(v18 + 17296) || (v16 & 2) == 0 )
    goto LABEL_42;
  v27 = v17;
  v28 = 0;
  v29 = *(_QWORD *)(v18 + 16) + 56320LL * (unsigned int)a1[2];
  v30 = (__int64)v17 << 6;
  if ( *(_DWORD *)(v30 + v29 + 14276) - 1 >= 0 )
    v28 = *(_DWORD *)(v30 + v29 + 14276) - 1;
  *(_DWORD *)(v30 + v29 + 14276) = v28;
  for ( i = 0; ; i = 1 )
  {
    v32 = v27 << 6;
    v33 = (unsigned __int16 *)(v29 + v32 + 14240);
    if ( !i )
    {
      v34 = 0;
      if ( *((_DWORD *)v33 + 9) - 1 >= 0 )
        v34 = *((_DWORD *)v33 + 9) - 1;
      *((_DWORD *)v33 + 9) = v34;
    }
    v35 = *((unsigned int *)v33 + 10);
    v36 = 0LL;
    v37 = *(_DWORD *)&v33[2 * *((unsigned int *)v33 + 8) + 8];
    if ( v37 >= 0 )
      v36 = (unsigned int)v37;
    if ( (unsigned int)v35 < (unsigned int)v36 )
      v35 = (unsigned int)v36;
    if ( *v33 < (unsigned int)v35 )
      break;
    if ( v17 != 1 )
      goto LABEL_42;
    v17 = 0;
    v27 = 0LL;
  }
  if ( v45 == 5 )
  {
    v38 = v46 << 25 >> 16;
    *(_QWORD *)(v38 + 4064) = qword_140E34D20 ^ v38;
    *(_DWORD *)(v38 + 4088) = v17;
    if ( v17 == 1 )
      return (unsigned __int64)RtlpInterlockedPushEntrySList(
                                 (PSLIST_HEADER)(v29 + v32 + 14240),
                                 (PSLIST_ENTRY)(v38 + 4080));
    v39 = KeGetCurrentIrql();
    if ( v39 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v35) = 2;
      LOBYTE(v36) = v39;
      KiRaiseIrqlProcessIrqlFlags(v36, v35);
    }
    if ( (unsigned int)MiClearStackOwners(v46, v50) )
    {
      RtlpInterlockedPushEntrySList((PSLIST_HEADER)v33, (PSLIST_ENTRY)(v38 + 4080));
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
      result = v39;
      __writecr8(v39);
      return result;
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v39);
    __writecr8(v39);
    v15 = a1;
LABEL_42:
    v23 = *((_QWORD *)v15 + 5);
    v24 = (unsigned __int64 *)BugCheckParameter2;
    MiDeleteKernelStackPages(v18, BugCheckParameter2, v48, v45, v23);
    v25 = &unk_140E34C20;
    if ( v45 != 5 )
      v25 = &unk_140E34C80;
    return MiReleasePtes((__int64)v25, v24, v56);
  }
  else
  {
    v40 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v18 + 512));
    if ( !v40 )
      goto LABEL_42;
    v41 = *((_QWORD *)a1 + 5);
    BugCheckParameter4 = v41;
    v56 = 0LL;
    if ( v17 != 5 )
    {
      v42 = VslResetKernelShadowStack(v45, &BugCheckParameter4);
      if ( v42 < 0 )
        KeBugCheckEx(0x1Au, 0x51542uLL, BugCheckParameter2, v42, BugCheckParameter4);
      v41 = BugCheckParameter4;
    }
    v43 = BugCheckParameter2;
    v40[1].Next = (_SLIST_ENTRY *)v41;
    v44 = MiKernelShadowStackIdealForCaching(v43 + 8);
    result = (unsigned __int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v33, v40);
    if ( v44 )
      *((_BYTE *)v33 + 48) = 1;
  }
  return result;
}
