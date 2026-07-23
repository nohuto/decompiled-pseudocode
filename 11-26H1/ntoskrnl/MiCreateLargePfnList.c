/*
 * XREFs of MiCreateLargePfnList @ 0x1402F23FC
 * Callers:
 *     MiMapUserLargePages @ 0x1402F1DE0 (MiMapUserLargePages.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 * Callees:
 *     MiInitializeDemandCoalesceContext @ 0x140206BB0 (MiInitializeDemandCoalesceContext.c)
 *     MiFreeLargeZeroPages @ 0x1402A4B50 (MiFreeLargeZeroPages.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiComputePreferredNode @ 0x1402F0B60 (MiComputePreferredNode.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 *     MiReturnCrossPartitionCharges @ 0x14036FF88 (MiReturnCrossPartitionCharges.c)
 *     MiReturnResident @ 0x140370060 (MiReturnResident.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetCrossPartitionCharges @ 0x1404AFEC8 (MiGetCrossPartitionCharges.c)
 *     MiComputeIdealLargePage @ 0x1404F1BFC (MiComputeIdealLargePage.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall MiCreateLargePfnList(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        int a5,
        char a6,
        ULONG **a7,
        char a8,
        __int64 a9)
{
  int v10; // r10d
  struct _KTHREAD *CurrentThread; // r11
  unsigned int v12; // eax
  unsigned int v13; // ebx
  int v14; // edx
  ULONG *v15; // r12
  __int64 v16; // r14
  unsigned int CrossPartitionCharges; // edi
  __int64 v18; // r15
  int LargeProcessPagesFromCache; // eax
  int v21; // r11d
  int v22; // eax
  __int64 *v23; // r10
  unsigned int v24; // r9d
  int *v25; // rdi
  int *v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  int v30; // [rsp+30h] [rbp-D0h]
  int v31; // [rsp+34h] [rbp-CCh]
  _DWORD v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h]
  unsigned __int64 v37; // [rsp+70h] [rbp-90h]
  unsigned __int64 v38; // [rsp+78h] [rbp-88h]
  int v39; // [rsp+80h] [rbp-80h]
  int v40; // [rsp+84h] [rbp-7Ch]
  __int64 v41; // [rsp+88h] [rbp-78h]
  __int64 v42; // [rsp+90h] [rbp-70h]
  __int64 v43; // [rsp+98h] [rbp-68h]
  _OWORD *v44; // [rsp+A0h] [rbp-60h]
  __int64 v45; // [rsp+A8h] [rbp-58h]
  __int64 v46; // [rsp+B0h] [rbp-50h]
  _KPROCESS *Process; // [rsp+C0h] [rbp-40h]
  _OWORD v48[3]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v49; // [rsp+100h] [rbp+0h]
  int v50; // [rsp+108h] [rbp+8h]

  v49 = 0LL;
  v10 = (int)a1;
  v50 = 0;
  memset(v48, 0, sizeof(v48));
  v35[1] = 0;
  v42 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( *a1 )
  {
    v12 = *(_DWORD *)(*a1 + 48);
    *((_DWORD *)a1 + 4) = (v12 >> 5) & 0x1F;
    a1[1] = MiVadPageSizes[(v12 >> 17) & 3];
  }
  v13 = 0;
  v14 = *((_DWORD *)a1 + 2);
  v15 = 0LL;
  v31 = *((_DWORD *)a1 + 4);
  Process = CurrentThread->ApcState.Process;
  v30 = v14;
  v16 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * HIWORD(Process[2].ProcessListEntry.Blink));
  if ( !*a1 )
    goto LABEL_11;
  if ( !a7 )
  {
LABEL_9:
    if ( !(unsigned int)MiChargeResident(v16, a3, 0LL) )
      goto LABEL_32;
    v10 = (int)a1;
    v13 |= 4u;
    v14 = v30;
LABEL_11:
    v18 = 0LL;
    if ( !v15 && v14 == 16 && a3 < 0x200 && (*(_DWORD *)(v16 + 4) & 0x10) == 0 )
    {
      LargeProcessPagesFromCache = MiAllocateLargeProcessPagesFromCache(v10, a2, a3, a5, a6, a9);
      v18 = 16LL * *(_QWORD *)(a9 + 64);
      if ( LargeProcessPagesFromCache >= 0 )
        return 0LL;
    }
    v21 = MmMakeProtectNotWriteCopy[v31];
    if ( a5 )
    {
      v22 = a5 - 1;
      if ( a5 - 1 >= (unsigned int)(unsigned __int16)KeNumberNodes )
      {
        CrossPartitionCharges = -1073741811;
        goto LABEL_33;
      }
      v23 = a1;
    }
    else
    {
      v22 = MiComputePreferredNode((__int64)&Process[2].ReadyListHead.Blink, *a1);
    }
    v39 = v22;
    v40 = v21;
    v24 = 0;
    v36 = v16;
    if ( (a8 & 8) != 0 )
      v24 = 8;
    v45 = v18;
    v25 = (int *)(qword_140E2D810 + 4LL * v22 * (unsigned int)(unsigned __int16)KeNumberNodes);
    v37 = a3;
    v26 = &v25[(unsigned __int16)KeNumberNodes];
    v38 = a4;
    v27 = *v23;
    v43 = a2;
    v41 = -1LL;
    v35[0] = v24;
    v46 = a9;
    if ( v27 )
    {
      MiComputeIdealLargePage(v27, a2 + (v18 << 12), a3 - v18, v35);
      v24 = v35[0];
    }
    MiInitializeDemandCoalesceContext(v48, a4, (a3 - v18) / a4, (v24 >> 3) & 1);
    v44 = v48;
    MiAllocateLargeZeroPages(v35);
    v28 = v45;
    v29 = v37;
    if ( v45 == v37 )
      return 0;
    if ( !a6 )
    {
      do
      {
        if ( ++v25 == v26 )
          break;
        v39 = *v25;
        MiAllocateLargeZeroPages(v35);
        v28 = v45;
        v29 = v37;
      }
      while ( v45 != v37 );
    }
    if ( v28 == v29 )
      return 0;
    MiFreeLargeZeroPages(v16, a9, (v35[0] >> 2) & 1);
LABEL_32:
    CrossPartitionCharges = -1073741670;
LABEL_33:
    if ( v13 >= 4 )
      MiReturnResident(v16, a3);
    if ( (v13 & 2) != 0 )
      MiReturnCommit(v16, a3, 0LL);
    if ( (v13 & 1) == 0 )
      return CrossPartitionCharges;
    goto LABEL_38;
  }
  v15 = *a7;
  v16 = (__int64)*a7;
  CrossPartitionCharges = MiGetCrossPartitionCharges(*a7, 2LL, 1LL, a3);
  if ( (CrossPartitionCharges & 0x80000000) == 0 )
  {
    if ( !(unsigned int)MiChargeCommit(v15, a3, 0) )
    {
      CrossPartitionCharges = -1073741523;
LABEL_38:
      MiReturnCrossPartitionCharges(v16, 2LL, 1LL, a3);
      return CrossPartitionCharges;
    }
    v13 = 3;
    goto LABEL_9;
  }
  return CrossPartitionCharges;
}
