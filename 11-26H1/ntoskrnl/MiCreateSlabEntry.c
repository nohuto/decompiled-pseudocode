/*
 * XREFs of MiCreateSlabEntry @ 0x140206364
 * Callers:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiConvertActiveLargePageToSmall @ 0x140206C98 (MiConvertActiveLargePageToSmall.c)
 *     MiAllocateSlabEntry @ 0x140206FA0 (MiAllocateSlabEntry.c)
 *     MiSetSlabTypeIdentifiers @ 0x140207048 (MiSetSlabTypeIdentifiers.c)
 *     MiLogSlabEntryAllocateFailure @ 0x1402070A8 (MiLogSlabEntryAllocateFailure.c)
 *     MiGetSlabCurrentTime @ 0x140207480 (MiGetSlabCurrentTime.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     PsReferencePartitionSafe @ 0x14025A030 (PsReferencePartitionSafe.c)
 *     RtlpGetStackLimits @ 0x140263230 (RtlpGetStackLimits.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiMakeDemandZeroPte @ 0x14028A830 (MiMakeDemandZeroPte.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiSimpleUnlinkPageEx @ 0x14028D6D0 (MiSimpleUnlinkPageEx.c)
 *     MiAcquireNonPagedResources @ 0x1402D6AD0 (MiAcquireNonPagedResources.c)
 *     MiAbortCombineScan @ 0x14036AF70 (MiAbortCombineScan.c)
 *     MiUpdateSlabPagePlaceholderState @ 0x14036B030 (MiUpdateSlabPagePlaceholderState.c)
 *     MiSetPfnIdentity @ 0x14036B1E0 (MiSetPfnIdentity.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     MiFreeLargePageMemory @ 0x1403CF1F4 (MiFreeLargePageMemory.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     MiDemotePfnListChain @ 0x1407164C4 (MiDemotePfnListChain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiCreateSlabEntry(__int64 a1, __int64 a2, unsigned int a3, unsigned __int8 a4)
{
  unsigned int v5; // edi
  int v7; // r14d
  __int64 v8; // r15
  unsigned __int64 v9; // rax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v11; // rcx
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  int v17; // ebx
  char *v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v21; // edi
  ULONG_PTR *v22; // rbx
  ULONG_PTR v23; // r14
  __int64 SlabEntry; // rdi
  int v25; // r9d
  unsigned int v26; // edx
  int v27; // eax
  __int64 v28; // r12
  unsigned __int64 v29; // rdx
  unsigned int v30; // ecx
  int v31; // r14d
  int v32; // r8d
  unsigned __int64 v33; // rbx
  unsigned __int64 v34; // r15
  __int64 CurrentIrql; // rcx
  int v36; // r14d
  unsigned __int64 v37; // rbx
  volatile signed __int32 *v38; // r13
  unsigned __int64 v39; // r12
  __int64 v40; // rax
  unsigned __int64 DemandZeroPte; // rax
  int v42; // eax
  unsigned __int64 v43; // rbx
  int v45; // ebx
  struct _KTHREAD *v46; // rcx
  char StackLimits; // al
  char v48; // al
  __int64 Blink_high; // rdx
  signed __int32 v50[8]; // [rsp+0h] [rbp-100h] BYREF
  int v51; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v52; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v53; // [rsp+31h] [rbp-CFh]
  unsigned int v54; // [rsp+34h] [rbp-CCh]
  int v55; // [rsp+38h] [rbp-C8h]
  int v56; // [rsp+3Ch] [rbp-C4h]
  int v57; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v58; // [rsp+48h] [rbp-B8h]
  __int64 v59; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v60; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v61; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+68h] [rbp-98h]
  __int64 v63; // [rsp+70h] [rbp-90h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  int v65; // [rsp+80h] [rbp-80h]
  int v66; // [rsp+84h] [rbp-7Ch]
  __int64 v67; // [rsp+88h] [rbp-78h]
  int v68; // [rsp+94h] [rbp-6Ch]
  _OWORD *v69; // [rsp+A0h] [rbp-60h]
  __int64 v70; // [rsp+A8h] [rbp-58h]
  _BYTE *v71; // [rsp+B0h] [rbp-50h]
  _OWORD v72[3]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v73; // [rsp+F0h] [rbp-10h]
  int v74; // [rsp+F8h] [rbp-8h]
  _BYTE v75[8]; // [rsp+100h] [rbp+0h] BYREF
  char v76; // [rsp+108h] [rbp+8h] BYREF

  v54 = a3;
  v52 = a4;
  v5 = a3;
  memset_0(v75, 0, 0x60uLL);
  memset_0(&v61, 0, 0x58uLL);
  v53 = 1;
  v73 = 0LL;
  v74 = 0;
  v7 = 0;
  v8 = 0LL;
  v9 = ((unsigned __int64)*(unsigned __int16 *)(a1 + 136) >> 3) & 3;
  v55 = 0;
  CurrentThread = 0LL;
  memset(v72, 0, sizeof(v72));
  v11 = LODWORD(MiPageSizes[v9]);
  v12 = *(_QWORD *)(a1 + 176);
  v57 = v11;
  if ( v12 )
  {
    v45 = 10;
    goto LABEL_61;
  }
  v13 = *(_QWORD *)(a2 + 22464);
  v56 = 1;
  if ( v13 < 0x420 )
  {
    v45 = 20;
    goto LABEL_60;
  }
  v14 = (unsigned int)v11;
  v58 = v11;
  if ( (int)MiAcquireNonPagedResources(a2, (unsigned int)v11, 0LL, 2LL) < 0 )
  {
    v45 = 30;
LABEL_60:
    *(_QWORD *)(a1 + 176) = MiGetSlabCurrentTime();
    goto LABEL_61;
  }
  v15 = *(_DWORD *)(a1 + 132);
  v16 = v5;
  v63 = v14;
  v64 = v14;
  v17 = v61 | 8;
  v62 = a2;
  v65 = v15;
  v66 = 4;
  v67 = -1LL;
  v61 |= 8u;
  v68 = v5;
  if ( v52 == 2 )
  {
    v17 |= 0x10u;
    v61 = v17;
  }
  if ( (*(_BYTE *)(a1 + 136) & 2) == 0 )
  {
    v17 |= 4u;
    v61 = v17;
  }
  if ( (v17 & 4) != 0 )
    goto LABEL_9;
  if ( (v5 & 0x20000) != 0 )
    goto LABEL_79;
  v60 = 0LL;
  v59 = 0LL;
  StackLimits = RtlpGetStackLimits(&v59, &v60);
  if ( (unsigned __int64)&v60 - (v59 & -(__int64)(StackLimits != 0)) < (unsigned __int64)(unsigned int)KeKernelStackSize >> 2 )
  {
    v17 |= 4u;
    v61 = v17;
    goto LABEL_98;
  }
  if ( KeGetCurrentIrql() >= 2u )
  {
LABEL_98:
    v16 = v5;
    goto LABEL_74;
  }
  CurrentThread = KeGetCurrentThread();
  v16 = v5;
  v48 = BYTE2(CurrentThread[1].Queue);
  if ( (v48 & 1) != 0 )
  {
LABEL_79:
    v17 |= 4u;
    v61 = v17;
    goto LABEL_74;
  }
  v7 = 1;
  BYTE2(CurrentThread[1].Queue) = v48 | 1;
  v55 = 1;
LABEL_74:
  if ( (v17 & 4) == 0 && (ULONG *)a2 != &MiSystemPartition )
  {
    Blink_high = HIWORD(KeGetCurrentThread()->ApcState.Process[2].ProcessListEntry.Blink);
    if ( *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * Blink_high) != a2 )
    {
      v8 = *(_QWORD *)(a2 + 256);
      if ( !(unsigned __int8)PsReferencePartitionSafe(v8, Blink_high, v16) )
      {
        v8 = 0LL;
        v61 = v17 | 4;
      }
    }
  }
LABEL_9:
  v18 = &v76;
  v19 = 4LL;
  do
  {
    *((_QWORD *)v18 + 1) = 0LL;
    *((_QWORD *)v18 - 1) = 0x3FFFFFFFFFLL;
    *(_QWORD *)v18 = 0x3FFFFFFFFFLL;
    v18 += 24;
    --v19;
  }
  while ( v19 );
  v71 = v75;
  if ( KeGetCurrentThread() == *(struct _KTHREAD **)&KeSwapProcessOrStackThread )
  {
    v5 = v16 | 8;
    v68 = v16 | 8;
  }
  if ( (*(_BYTE *)(a1 + 136) & 0x18) != 0 )
  {
    if ( (v5 & 0x40) != 0 )
    {
      v20 = 1;
      v56 = 0;
    }
    else
    {
      v53 = 0;
      v68 = v5 | 0x40;
      v20 = 2;
    }
  }
  else
  {
    v20 = 1;
    v56 = 1;
  }
  MiInitializeDemandCoalesceContext(v72, v58, 1LL, v20 == 1);
  v21 = 0;
  v69 = v72;
  while ( 1 )
  {
    MiAllocateLargeZeroPages(&v61);
    if ( v70 )
      break;
    v68 &= ~0x40u;
    ++v21;
    v61 &= ~8u;
    if ( v21 >= v20 )
    {
      v45 = 50;
      goto LABEL_89;
    }
  }
  if ( v7 )
  {
    BYTE2(CurrentThread[1].Queue) &= ~1u;
    v55 = 0;
  }
  if ( v8 )
  {
    PsDereferencePartition(v8, 1632857421LL);
    v8 = 0LL;
  }
  v22 = (ULONG_PTR *)&v75[24 * ((*(unsigned __int16 *)(a1 + 136) >> 3) & 3)];
  v23 = *v22;
  if ( *v22 == 0x3FFFFFFFFFLL )
  {
    MiDemotePfnListChain(v75, (*(unsigned __int16 *)(a1 + 136) >> 3) & 3);
    v23 = *v22;
  }
  MiSimpleUnlinkPageEx(v22, v23);
  MiConvertActiveLargePageToSmall(48 * v23 - 0x220000000000LL, 1LL);
  SlabEntry = MiAllocateSlabEntry(a1);
  if ( SlabEntry )
  {
    *(_DWORD *)(SlabEntry + 84) = v57;
    if ( *(_DWORD *)(a1 + 128) == 8 )
    {
      v46 = KeGetCurrentThread();
      LOBYTE(v25) = v46[1].SavedApcStateFill[15];
      if ( (_BYTE)v25 == 0xFF || (BYTE2(v46[1].Queue) & 1) != 0 )
        LOBYTE(v25) = BYTE6(v46->ApcState.Process[3].PerProcessorCycleTimes);
      v26 = *(_DWORD *)(SlabEntry + 92) ^ ((unsigned __int16)*(_DWORD *)(SlabEntry + 92) ^ (unsigned __int16)(8 * (unsigned __int8)v25)) & 0x1F8 | 4;
      *(_DWORD *)(SlabEntry + 92) = v26;
    }
    else
    {
      v26 = *(_DWORD *)(SlabEntry + 92);
      LOBYTE(v25) = 0;
    }
    v27 = *(_DWORD *)(a2 + 21524);
    if ( _bittest(&v27, *(_DWORD *)(a1 + 128)) )
    {
      v26 |= 2u;
      *(_DWORD *)(SlabEntry + 92) = v26;
    }
    v28 = v58;
    *(_QWORD *)(SlabEntry + 40) = v23;
    v51 = (v26 >> 1) & 1;
    *(_QWORD *)(SlabEntry + 48) = v23 + v28 - 1;
    MiSetSlabTypeIdentifiers(v23, v28, *(_DWORD *)(a1 + 128), v25, v51);
    v30 = *(_DWORD *)(a1 + 128);
    if ( v30 <= 4 )
    {
      v31 = 1;
      LOBYTE(v32) = 2;
      if ( v30 == 2 )
        v31 = (v61 >> 2) & 1;
    }
    else
    {
      v31 = (v61 >> 2) & 1;
      LOBYTE(v32) = 2;
    }
    v33 = 48LL * *(_QWORD *)(SlabEntry + 40) - 0x220000000000LL;
    v34 = 48LL * *(_QWORD *)(SlabEntry + 48) - 0x220000000000LL;
    if ( v52 != 2 )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (_BYTE)CurrentIrql != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = 2;
        KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v29);
        LOBYTE(v32) = 2;
      }
    }
    if ( v33 <= v34 )
    {
      v36 = v31 << 16;
      v37 = v33 + 32;
      v38 = (volatile signed __int32 *)(v37 - 8);
      v39 = v37 - 16;
      do
      {
        v57 = 0;
        while ( _interlockedbittestandset64(v38, 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v57);
          while ( *(__int64 *)(v37 - 8) < 0 );
        }
        *(_DWORD *)v37 &= 0xFFFF0000;
        _InterlockedOr(v50, 0);
        v32 = 2;
        v29 = (unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 59;
        *(_QWORD *)(v37 - 8) = v29 ^ (v29 ^ *(_QWORD *)(v37 - 8)) & 0xC7FFFFFFFFFFFFFFuLL;
        *(_DWORD *)v37 = v36 ^ *(_DWORD *)v37 & 0xFFF8FFFF;
        if ( *(_DWORD *)(a1 + 128) == 2 )
          *(_QWORD *)(v39 - 8) = -2LL;
        else
          *(_QWORD *)(v37 - 24) = -1LL;
        *(_QWORD *)(v37 - 32) = 0LL;
        *(_QWORD *)(v37 - 8) &= 0xFFFFFF0000000000uLL;
        *(_QWORD *)(v37 - 16) = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (*(_BYTE *)(v37 + 2) & 7) == 1 )
        {
          v40 = *(_QWORD *)(v37 - 16);
          if ( v40 )
            DemandZeroPte = v40 & 0xFFFFFFFFFFFFFC1FuLL | 0x80;
          else
            DemandZeroPte = MiMakeDemandZeroPte(4LL);
          *(_QWORD *)(v37 - 16) = DemandZeroPte;
        }
        *(_DWORD *)v37 = *(_DWORD *)v37 & 0xFFF8FFFF | 0x50000;
        v42 = *(_DWORD *)(a1 + 128);
        if ( v42 >= 0 && v42 != v32 && v42 <= 4 )
        {
          MiSetPfnIdentity(v37 - 32, 3LL);
          MiAbortCombineScan(v37 - 32);
          LOBYTE(v32) = 2;
        }
        _InterlockedAnd64((volatile signed __int64 *)(v37 - 8), 0x7FFFFFFFFFFFFFFFuLL);
        v37 += 48LL;
        v38 += 12;
        v39 += 48LL;
      }
      while ( v37 - 32 <= v34 );
      v28 = v58;
    }
    v43 = v52;
    if ( v52 != (_BYTE)v32 )
    {
      if ( KiIrqlFlags )
      {
        LOBYTE(v29) = v52;
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v29);
      }
      __writecr8(v43);
    }
    MiUpdateSlabPagePlaceholderState(*(unsigned int *)(a1 + 128), *(_QWORD *)(SlabEntry + 40), v28, 1LL);
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 144));
    return SlabEntry;
  }
  v45 = 40;
  if ( v23 != -1LL )
    MiFreeLargePageMemory(v23);
LABEL_89:
  MiReleaseNonPagedResources(a2, v58);
  if ( v55 )
    BYTE2(CurrentThread[1].Queue) &= ~1u;
  if ( v8 )
    PsDereferencePartition(v8, 1632857421LL);
  v5 = v54;
  if ( v56 )
    goto LABEL_60;
LABEL_61:
  _InterlockedIncrement((volatile signed __int32 *)((-(__int64)(v53 != 0) & 0xFFFFFFFFFFFFFFFCuLL) + a1 + 156));
  MiLogSlabEntryAllocateFailure(a1, v45, v5, v68, v53);
  return 0LL;
}
