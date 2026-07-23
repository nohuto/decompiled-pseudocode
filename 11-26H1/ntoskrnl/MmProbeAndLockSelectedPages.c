/*
 * XREFs of MmProbeAndLockSelectedPages @ 0x1403A1040
 * Callers:
 *     IopWriteFileGather @ 0x140B03A10 (IopWriteFileGather.c)
 *     IopReadFileScatter @ 0x140B0EB28 (IopReadFileScatter.c)
 * Callees:
 *     MiProbeAndLockPrepare @ 0x1402C74B0 (MiProbeAndLockPrepare.c)
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiProbeLockFrame @ 0x1402D0680 (MiProbeLockFrame.c)
 *     MiLockPageLeafPageTable @ 0x1402D0C10 (MiLockPageLeafPageTable.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiSetProbePagesAhead @ 0x1402D1B90 (MiSetProbePagesAhead.c)
 *     MiProbePacketContended @ 0x1402E87F0 (MiProbePacketContended.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 *     MiLockWorkingSetSharedAtDpc @ 0x140367284 (MiLockWorkingSetSharedAtDpc.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiProbeAndLockComplete @ 0x1403A1DB0 (MiProbeAndLockComplete.c)
 *     MiUnlockProbePacketWorkingSet @ 0x1403A20A0 (MiUnlockProbePacketWorkingSet.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __stdcall MmProbeAndLockSelectedPages(
        PMDL MemoryDescriptorList,
        PFILE_SEGMENT_ELEMENT SegmentArray,
        KPROCESSOR_MODE AccessMode,
        LOCK_OPERATION Operation)
{
  _QWORD *PoolMm; // rdi
  ULONG ByteCount; // ecx
  unsigned __int64 v10; // rax
  ULONG_PTR v11; // rbx
  unsigned __int64 *v12; // r12
  unsigned int v13; // r15d
  NTSTATUS v14; // ebx
  __int64 v15; // r8
  unsigned __int64 *i; // rsi
  __int64 v17; // rax
  unsigned int v18; // r14d
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned __int64 PteShadow; // rax
  int v23[4]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v24; // [rsp+40h] [rbp-C0h] BYREF
  char v25[8]; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int64 v26; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v27; // [rsp+60h] [rbp-A0h]
  __int64 *v28; // [rsp+68h] [rbp-98h]
  __int64 *v29; // [rsp+70h] [rbp-90h]
  unsigned __int64 v30; // [rsp+80h] [rbp-80h]
  __int64 *v31; // [rsp+88h] [rbp-78h]
  char v32; // [rsp+98h] [rbp-68h]
  int v33; // [rsp+B8h] [rbp-48h]
  __int64 v34; // [rsp+C0h] [rbp-40h]
  __int64 v35; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v36; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v37; // [rsp+F8h] [rbp-8h]
  __int64 v38; // [rsp+100h] [rbp+0h]
  _BYTE P[4096]; // [rsp+110h] [rbp+10h] BYREF

  memset_0(v25, 0, 0xB8uLL);
  PoolMm = P;
  v24 = 0LL;
  ByteCount = MemoryDescriptorList->ByteCount;
  *(_QWORD *)&v24 = (AccessMode != 0) | (2 * ((Operation != IoReadAccess) | 0x80000000000000LL));
  v10 = (ByteCount >> 12) + ((ByteCount & 0xFFF) != 0);
  v11 = 8 * v10;
  if ( v10 > 0x200 )
  {
    PoolMm = (_QWORD *)ExAllocatePoolMm(
                         64LL,
                         v11,
                         1917873485,
                         KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
    if ( !PoolMm )
      RtlRaiseStatus(-1073741670);
  }
  v12 = &PoolMm[v11 / 8];
  v13 = 0;
  memmove(PoolMm, SegmentArray, v11);
  v14 = MiProbeAndLockPrepare((__int64)v25, (__int64)MemoryDescriptorList, *PoolMm, 1uLL, (__int64)&v24);
  if ( v14 >= 0 )
  {
    for ( i = PoolMm; i < v12; ++i )
    {
      v26 = *i;
      v27 = v26 + 1;
      v28 = (__int64 *)(((v26 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v29 = v28;
      *v31 = -1LL;
      if ( v26 >= 0x7FFFFFFF0000LL && AccessMode )
      {
        ++LODWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
        v14 = -1073741819;
        break;
      }
      if ( (v33 & 1) == 0 || v26 < v36 || v26 > v37 )
      {
        v23[0] = 0;
        while ( 1 )
        {
          v19 = MiLockPageLeafPageTable((__int64)v25);
          v14 = v19;
          if ( !v30 )
          {
            if ( v19 < 0 )
              goto LABEL_24;
            goto LABEL_22;
          }
          v14 = MiProbeLeafPteAccess((__int64)v25, (unsigned __int64)v23);
          if ( v14 < 0 )
            goto LABEL_24;
          if ( !v23[0] )
          {
            v35 = (v30 >> 12) & 0xFFFFFFFFFFLL;
            MiSetProbePagesAhead((__int64)v25);
LABEL_22:
            v18 = 16;
            goto LABEL_13;
          }
          if ( v23[0] != 1 )
          {
            v14 = MiFaultInProbeAddress(v25);
            if ( v14 < 0 )
              break;
          }
        }
        ++HIDWORD(stru_140E2ED08.LastXStateSaveDebugInfo);
        break;
      }
      if ( v38 == -1 )
      {
        PteShadow = *v28;
        if ( (unsigned __int64)v28 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v28 <= 0xFFFFF6FB7DBED7F8uLL )
          PteShadow = MiReadPteShadow((unsigned __int64)v28, *v28);
        v17 = (PteShadow >> 12) & 0xFFFFFFFFFFLL;
      }
      else
      {
        v17 = v38 + ((v26 - v36) >> 12);
      }
      v35 = v17;
      v18 = 64;
LABEL_13:
      v14 = MiProbeLockFrame((__int64)v25, 1, v15);
      if ( v14 < 0 )
        break;
      ++v13;
      *v31++ = v35;
      if ( !(v13 % v18) && (unsigned int)MiProbePacketContended((__int64)v25, 0LL, v15) )
      {
        MiUnlockProbePacketWorkingSet(v25);
        v33 &= ~1u;
        if ( KeGetCurrentIrql() == 2 )
        {
          v32 = 17;
          MiLockWorkingSetSharedAtDpc(v34);
        }
        else
        {
          v32 = MiLockWorkingSetShared(v34, v20, v21);
        }
      }
    }
LABEL_24:
    MiProbeAndLockComplete(v25, (unsigned int)v14, 7LL);
  }
  if ( PoolMm != (_QWORD *)P )
    ExFreePoolWithTag(PoolMm, 0);
  if ( v14 < 0 )
    RtlRaiseStatus(v14);
}
