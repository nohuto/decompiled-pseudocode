/*
 * XREFs of MmAccessFault @ 0x1403A2390
 * Callers:
 *     MmProtectPool @ 0x14024E084 (MmProtectPool.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402D05F0 (MmCopyToCachedPage.c)
 *     MiQueryPteAttributes @ 0x1402D2E80 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiProbeLeafPteAccess @ 0x1402EF490 (MiProbeLeafPteAccess.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiDuplicateCloneLeaf @ 0x14030D374 (MiDuplicateCloneLeaf.c)
 *     NtLockVirtualMemory @ 0x140318600 (NtLockVirtualMemory.c)
 *     MiWalkEntireSubsection @ 0x14031B370 (MiWalkEntireSubsection.c)
 *     MiCheckProtoPtePageState @ 0x14031BB00 (MiCheckProtoPtePageState.c)
 *     MiGetNextPageTablePte @ 0x140328700 (MiGetNextPageTablePte.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x14038A9E0 (MiMakeDriverPagesPrivate.c)
 *     MiFaultInProbeAddress @ 0x1403A04D0 (MiFaultInProbeAddress.c)
 *     MiReleaseOutSwapReservations @ 0x1403A062C (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     MiLockProtoPoolPageForce @ 0x1403A10E0 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A17C0 (MiAcquireCachedPageLocks.c)
 *     MiMakeProtoLeafValid @ 0x1404BFB08 (MiMakeProtoLeafValid.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x140514568 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiQueryPteFaultLargeVa @ 0x1405264C4 (MiQueryPteFaultLargeVa.c)
 *     ExpSvmServicePageFault @ 0x1406D23E0 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x1406E57E8 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x1406E5D50 (MiProtectDriverSectionPte.c)
 *     KiPageFault @ 0x140737080 (KiPageFault.c)
 *     MiInitializePrototypePtes @ 0x1409B8000 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x140AD6824 (MmVirtualAccessFault.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020607C (MiReplenishSlabAllocator.c)
 *     ExReleaseRundownProtection_0 @ 0x140266240 (ExReleaseRundownProtection_0.c)
 *     MiSufficientAvailablePages @ 0x14028EAB0 (MiSufficientAvailablePages.c)
 *     MiIssuePageHeatList @ 0x1402F383C (MiIssuePageHeatList.c)
 *     MiInitializePageFaultPacket @ 0x140339350 (MiInitializePageFaultPacket.c)
 *     MiIssueHardFault @ 0x14038D350 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14038DD90 (MiReleaseFaultState.c)
 *     MiRaisedIrqlFault @ 0x1403A2A28 (MiRaisedIrqlFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A2E0C (MiCopyOnWriteCheckConditions.c)
 *     MiConvertFaultStatus @ 0x1403A2F50 (MiConvertFaultStatus.c)
 *     MiUserFault @ 0x1403A3140 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A3E60 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     KeInvalidAccessAllowed @ 0x1403A6D10 (KeInvalidAccessAllowed.c)
 *     MiFaultTrimBehind @ 0x140441F5C (MiFaultTrimBehind.c)
 *     MiReleaseFaultCharges @ 0x1404AC0A0 (MiReleaseFaultCharges.c)
 *     MiDelayFaultingThread @ 0x1405053C4 (MiDelayFaultingThread.c)
 *     MiFaultGetFileExtents @ 0x14050CBDC (MiFaultGetFileExtents.c)
 *     MiFaultRedirectToProto @ 0x140511920 (MiFaultRedirectToProto.c)
 *     MiReplenishTransitionPageHeatList @ 0x1405124D0 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x140513450 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     MiHandleEnclaveFault @ 0x14077BFB4 (MiHandleEnclaveFault.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR BugCheckParameter4)
{
  ULONG_PTR v4; // r14
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rbx
  int v8; // r9d
  unsigned __int64 v9; // rdx
  _DWORD *v10; // r8
  __int64 v11; // rdx
  unsigned int i; // eax
  __int64 v13; // rcx
  int v14; // ecx
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdx
  int FileExtents; // edi
  __int64 v19; // r9
  char v20; // al
  unsigned __int64 v21; // rdx
  int v22; // eax
  char v23; // cl
  __int64 v24; // rcx
  __int64 v25; // rbx
  int v26; // eax
  __int64 v27; // rcx
  struct _SLIST_ENTRY *v28; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v30; // rcx
  char v31; // cl
  __int64 v32; // rcx
  __int64 v33; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v34; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v35; // [rsp+50h] [rbp-B0h]
  __int128 v36; // [rsp+60h] [rbp-A0h]
  _OWORD v37[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+90h] [rbp-70h]
  __int128 v39; // [rsp+A0h] [rbp-60h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+B0h] [rbp-50h]
  __int128 v41; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v42; // [rsp+D0h] [rbp-30h]
  _OWORD v43[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v44; // [rsp+100h] [rbp+0h]
  __int128 v45; // [rsp+110h] [rbp+10h]

  v42 = 0LL;
  *(_QWORD *)&v45 = 0LL;
  v4 = BugCheckParameter4;
  DWORD2(v45) = 0;
  v33 = 0LL;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(v37, 0, sizeof(v37));
  v38 = 0LL;
  v39 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v41 = 0LL;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v23 = *(_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v23 == 1 || v23 == 3 || v23 == 6 )
        return 3221225477LL;
    }
    else if ( (unsigned __int8)KeInvalidAccessAllowed(BugCheckParameter4, 0LL) )
    {
      return 3221225477LL;
    }
    KeBugCheckEx(0x50u, v6, v7, v4, 4uLL);
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 == 1 )
      return MiHandleEnclaveFault(BugCheckParameter1);
    else
      return 3221226658LL;
  }
  v8 = (unsigned __int16)KeNumberNodes;
  v9 = (unsigned __int64)v43 & 4;
  if ( ((unsigned __int64)v43 & 4) != 0 )
    LODWORD(v43[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v43;
  if ( (_DWORD)v9 )
    v10 = (_DWORD *)v43 + 1;
  memset64(v10, (unsigned __int16)KeNumberNodes | ((unsigned __int64)(unsigned __int16)KeNumberNodes << 32), 1uLL);
  if ( !(_DWORD)v9 )
    v10[2] = v8;
  v11 = 0LL;
  for ( i = 0; i < 3; ++i )
  {
    v13 = i;
    if ( MiPageSizes[v13] == 16 )
    {
      v11 = MiDemandLargePageCoalesceTimeBounds[v13];
      break;
    }
  }
  *((_QWORD *)&v44 + 1) = v11;
  v45 = 0LL;
  *((_QWORD *)&v35 + 1) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v36 = ((*((_QWORD *)&v35 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v36 + 1) = (((unsigned __int64)v36 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v38;
  *(_QWORD *)&v37[0] = ((*((_QWORD *)&v36 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v39 = v43;
  if ( (v7 & 0x40) != 0 )
  {
    v14 = v38 | 0x80;
    v7 &= ~2uLL;
  }
  *((_QWORD *)&v34 + 1) = v7;
  *(_QWORD *)&v34 = v6;
  *(_QWORD *)&v35 = v4;
  LODWORD(v38) = v14 & 0xFFFFFEFF | ((a3 & 1) << 8);
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(&v34);
  while ( 1 )
  {
    v16 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v22 = MiSystemFault(&v34), FileExtents = v22, v22 == 192) )
    {
      FileExtents = MiUserFault(&v34);
      if ( FileExtents != -1073741802 )
        goto LABEL_63;
    }
    else if ( v22 != -1073741802 )
    {
      goto LABEL_29;
    }
    FileExtents = MiDispatchFault(&v34, 0LL, &v33);
    if ( FileExtents == -1073741802 )
    {
      FileExtents = MiFaultRedirectToProto(&v34);
      if ( FileExtents < 0 )
      {
        MiReleaseFaultState((__int64)v37 + 8, 0x11u, 0LL);
        goto LABEL_29;
      }
    }
    else
    {
      if ( v33 )
      {
        v16 = *(_DWORD *)(v33 + 312);
        v24 = v33;
        if ( (*(_DWORD *)(v33 + 188) & 0x400000) == 0 && *(_QWORD *)(v33 + 208) )
        {
          v24 = v33;
          if ( (*(_DWORD *)(v33 + 188) & 0x400000) != 0 )
            v25 = 0LL;
          else
            v25 = *(_QWORD *)(v33 + 208);
          v16 = *(_DWORD *)(v25 + 40);
        }
        v26 = *(_DWORD *)(v24 + 188);
        if ( a3 == 1 )
        {
          v26 |= 0x80000u;
          *(_DWORD *)(v33 + 188) = v26;
        }
        if ( (v26 & 1) != 0 )
        {
          FileExtents = MiFaultGetFileExtents(&v34, v33);
          *((_QWORD *)&v39 + 1) = 0LL;
          goto LABEL_63;
        }
        FileExtents = MiIssueHardFault((__int64)&v34, v33);
      }
      *((_QWORD *)&v39 + 1) = 0LL;
    }
    MiReleaseFaultState((__int64)v37 + 8, 0x11u, 0LL);
LABEL_63:
    if ( (v38 & 0x20) != 0 )
      MiFaultTrimBehind(v34);
    if ( (*(_DWORD *)(*((_QWORD *)&v37[0] + 1) + 184LL) & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)&v37[0] + 1) + 4LL) & 0xFFF) != 0 )
        goto LABEL_29;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_29;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xE) != 0 )
        goto LABEL_29;
      v30 = *(_QWORD *)(*((_QWORD *)&v37[0] + 1) + 136LL);
      v17 = *(_QWORD *)(*((_QWORD *)&v37[0] + 1) + 120LL);
      if ( v30 <= v17 || v30 - v17 <= 0x64 )
        goto LABEL_29;
    }
    v27 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(*((_QWORD *)&v37[0] + 1) + 174LL));
    if ( v27 && !(unsigned int)MiSufficientAvailablePages(v27, 0x420uLL) )
      MiDelayFaultingThread(65546LL);
LABEL_29:
    if ( ListEntry[1] )
    {
      if ( ListEntry[1] == (PSLIST_ENTRY)-1LL )
      {
        MiReplenishTransitionPageHeatList();
      }
      else
      {
        MiIssuePageHeatList(ListEntry[1], v17);
        MiFreeTransitionPageHeatList(ListEntry[1]);
      }
      ListEntry[1] = 0LL;
    }
    if ( (_QWORD)v41 )
    {
      MiReplenishSlabAllocator(v41, v42, ((BYTE1(v38) & 1) == 0) << 17, v19);
      if ( *((_QWORD *)&v41 + 1) )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)&v41 + 1) + 22152LL));
      if ( FileExtents == -1073741801 )
        FileExtents = -1073740748;
    }
    if ( (v35 & 1) != 0
      && *(_BYTE *)(v35 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (v32 = *(_QWORD *)((v35 & 0xFFFFFFFFFFFFFFFEuLL) + 48)) != 0
      && (MiReplenishSlabAllocator(v32, 1uLL, 0, v19), FileExtents == -1073741801) )
    {
      FileExtents = -1073740748;
    }
    else if ( !FileExtents )
    {
      goto LABEL_35;
    }
    FileExtents = MiConvertFaultStatus(&v34, v16, (unsigned int)FileExtents);
LABEL_35:
    v20 = v38;
    if ( (v38 & 1) != 0 )
    {
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v37[0] + 1), 3221225495LL, 0LL);
      v20 = v38;
    }
    if ( (v20 & 2) != 0 )
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v37[0] + 1), 3221226548LL, 0LL);
    v21 = *((_QWORD *)&v39 + 1);
    if ( !*((_QWORD *)&v39 + 1) )
      break;
    if ( (v4 & 1) == 0 )
      goto LABEL_71;
    v31 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v31 == 1 || v31 == 2 )
    {
      *(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 1) = 1;
LABEL_71:
      v4 = 0LL;
      goto LABEL_72;
    }
    if ( v31 == 5 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_71;
LABEL_72:
    v28 = ListEntry[0];
    MiInitializePageFaultPacket(2uLL, v21, 0, v4, (__int64)v43, (__int64)&v34);
    LODWORD(v38) = v38 | 0x40;
    v6 = v34;
    ListEntry[0] = v28;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return (unsigned int)FileExtents;
}
