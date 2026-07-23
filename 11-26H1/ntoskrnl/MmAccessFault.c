/*
 * XREFs of MmAccessFault @ 0x1403A40F0
 * Callers:
 *     MmProtectPool @ 0x14024F9E4 (MmProtectPool.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 *     MmCopyToCachedPage @ 0x1402B23B0 (MmCopyToCachedPage.c)
 *     MiQueryPteAttributes @ 0x1402B4C40 (MiQueryPteAttributes.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiProbeLeafPteAccess @ 0x1402D1510 (MiProbeLeafPteAccess.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiDuplicateCloneLeaf @ 0x1402EF3F4 (MiDuplicateCloneLeaf.c)
 *     NtLockVirtualMemory @ 0x14031A630 (NtLockVirtualMemory.c)
 *     MiWalkEntireSubsection @ 0x14031D3A0 (MiWalkEntireSubsection.c)
 *     MiCheckProtoPtePageState @ 0x14031DB30 (MiCheckProtoPtePageState.c)
 *     MiGetNextPageTablePte @ 0x14032A730 (MiGetNextPageTablePte.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiMakeDriverPagesPrivate @ 0x14038C790 (MiMakeDriverPagesPrivate.c)
 *     MiFaultInProbeAddress @ 0x1403A2230 (MiFaultInProbeAddress.c)
 *     MiReleaseOutSwapReservations @ 0x1403A238C (MiReleaseOutSwapReservations.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiLockProtoPoolPageForce @ 0x1403A2E40 (MiLockProtoPoolPageForce.c)
 *     MiAcquireCachedPageLocks @ 0x1403A3520 (MiAcquireCachedPageLocks.c)
 *     MiMakeProtoLeafValid @ 0x1404B9358 (MiMakeProtoLeafValid.c)
 *     MiUpdateImportRelocationsOnDriverPrivatePages @ 0x14050DFD8 (MiUpdateImportRelocationsOnDriverPrivatePages.c)
 *     MiQueryPteFaultLargeVa @ 0x140528B34 (MiQueryPteFaultLargeVa.c)
 *     ExpSvmServicePageFault @ 0x1406D6410 (ExpSvmServicePageFault.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MiProtectDriverSectionPte @ 0x1406EAA00 (MiProtectDriverSectionPte.c)
 *     KiPageFault @ 0x14073BC80 (KiPageFault.c)
 *     MiInitializePrototypePtes @ 0x140988FE0 (MiInitializePrototypePtes.c)
 *     MmVirtualAccessFault @ 0x140AD3530 (MmVirtualAccessFault.c)
 * Callees:
 *     MiReplenishSlabAllocator @ 0x14020615C (MiReplenishSlabAllocator.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     MiSufficientAvailablePages @ 0x14028E010 (MiSufficientAvailablePages.c)
 *     MiIssuePageHeatList @ 0x1402D58BC (MiIssuePageHeatList.c)
 *     MiInitializePageFaultPacket @ 0x14033B3D0 (MiInitializePageFaultPacket.c)
 *     MiIssueHardFault @ 0x14038F100 (MiIssueHardFault.c)
 *     MiReleaseFaultState @ 0x14038FB40 (MiReleaseFaultState.c)
 *     MiRaisedIrqlFault @ 0x1403A4788 (MiRaisedIrqlFault.c)
 *     MiCopyOnWriteCheckConditions @ 0x1403A4B6C (MiCopyOnWriteCheckConditions.c)
 *     MiConvertFaultStatus @ 0x1403A4CB0 (MiConvertFaultStatus.c)
 *     MiUserFault @ 0x1403A4EA0 (MiUserFault.c)
 *     MiDispatchFault @ 0x1403A5BC0 (MiDispatchFault.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     KeInvalidAccessAllowed @ 0x1403A8A70 (KeInvalidAccessAllowed.c)
 *     MiFaultTrimBehind @ 0x14043AA6C (MiFaultTrimBehind.c)
 *     MiReleaseFaultCharges @ 0x1404A5730 (MiReleaseFaultCharges.c)
 *     MiDelayFaultingThread @ 0x1404FED04 (MiDelayFaultingThread.c)
 *     MiFaultGetFileExtents @ 0x14050664C (MiFaultGetFileExtents.c)
 *     MiFaultRedirectToProto @ 0x14050B390 (MiFaultRedirectToProto.c)
 *     MiReplenishTransitionPageHeatList @ 0x14050BF40 (MiReplenishTransitionPageHeatList.c)
 *     MiFreeTransitionPageHeatList @ 0x14050CEC0 (MiFreeTransitionPageHeatList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     MiHandleEnclaveFault @ 0x14077EB34 (MiHandleEnclaveFault.c)
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
  __int64 v20; // r9
  char v21; // al
  unsigned __int64 v22; // rdx
  int v23; // eax
  char v24; // cl
  __int64 v25; // rcx
  __int64 v26; // rbx
  int v27; // eax
  __int64 v28; // rcx
  _SLIST_ENTRY *v29; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v31; // rcx
  char v32; // cl
  __int64 v33; // rcx
  __int64 v34; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v35; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v36; // [rsp+50h] [rbp-B0h]
  __int128 v37; // [rsp+60h] [rbp-A0h]
  _OWORD v38[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v39; // [rsp+90h] [rbp-70h]
  __int128 v40; // [rsp+A0h] [rbp-60h]
  PSLIST_ENTRY ListEntry[2]; // [rsp+B0h] [rbp-50h]
  __int128 v42; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v43; // [rsp+D0h] [rbp-30h]
  _OWORD v44[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int128 v45; // [rsp+100h] [rbp+0h]
  __int128 v46; // [rsp+110h] [rbp+10h]

  v43 = 0LL;
  *(_QWORD *)&v46 = 0LL;
  v4 = BugCheckParameter4;
  DWORD2(v46) = 0;
  v34 = 0LL;
  v6 = BugCheckParameter1;
  v7 = BugCheckParameter2;
  v35 = 0LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v38, 0, sizeof(v38));
  v39 = 0LL;
  v40 = 0LL;
  *(_OWORD *)ListEntry = 0LL;
  v42 = 0LL;
  memset(v44, 0, sizeof(v44));
  v45 = 0LL;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, BugCheckParameter4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( (BugCheckParameter4 & 1) != 0 )
    {
      v24 = *(_BYTE *)(BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL);
      if ( v24 == 1 || v24 == 3 || v24 == 6 )
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
  v9 = (unsigned __int64)v44 & 4;
  if ( ((unsigned __int64)v44 & 4) != 0 )
    LODWORD(v44[0]) = (unsigned __int16)KeNumberNodes;
  v10 = v44;
  if ( (_DWORD)v9 )
    v10 = (_DWORD *)v44 + 1;
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
  *((_QWORD *)&v45 + 1) = v11;
  v46 = 0LL;
  *((_QWORD *)&v36 + 1) = ((v6 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v37 = ((*((_QWORD *)&v36 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *((_QWORD *)&v37 + 1) = (((unsigned __int64)v37 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = v39;
  *(_QWORD *)&v38[0] = ((*((_QWORD *)&v37 + 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)&v40 = v44;
  if ( (v7 & 0x40) != 0 )
  {
    v14 = v39 | 0x80;
    v7 &= ~2uLL;
  }
  *((_QWORD *)&v35 + 1) = v7;
  *(_QWORD *)&v35 = v6;
  *(_QWORD *)&v36 = v4;
  LODWORD(v39) = v14 & 0xFFFFFEFF | ((a3 & 1) << 8);
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(&v35);
  while ( 1 )
  {
    v16 = 4096;
    if ( v6 < 0xFFFF800000000000uLL || (v23 = MiSystemFault(&v35), FileExtents = v23, v23 == 192) )
    {
      FileExtents = MiUserFault(&v35);
      if ( FileExtents != -1073741802 )
        goto LABEL_63;
    }
    else if ( v23 != -1073741802 )
    {
      goto LABEL_29;
    }
    FileExtents = MiDispatchFault(&v35, 0LL, &v34);
    if ( FileExtents == -1073741802 )
    {
      FileExtents = MiFaultRedirectToProto(&v35);
      if ( FileExtents < 0 )
      {
        MiReleaseFaultState((__int64)v38 + 8, 0x11u, 0LL, v20);
        goto LABEL_29;
      }
    }
    else
    {
      if ( v34 )
      {
        v16 = *(_DWORD *)(v34 + 312);
        v25 = v34;
        if ( (*(_DWORD *)(v34 + 188) & 0x400000) == 0 && *(_QWORD *)(v34 + 208) )
        {
          v25 = v34;
          if ( (*(_DWORD *)(v34 + 188) & 0x400000) != 0 )
            v26 = 0LL;
          else
            v26 = *(_QWORD *)(v34 + 208);
          v16 = *(_DWORD *)(v26 + 40);
        }
        v27 = *(_DWORD *)(v25 + 188);
        if ( a3 == 1 )
        {
          v27 |= 0x80000u;
          *(_DWORD *)(v34 + 188) = v27;
        }
        if ( (v27 & 1) != 0 )
        {
          FileExtents = MiFaultGetFileExtents(&v35, v34);
          *((_QWORD *)&v40 + 1) = 0LL;
          goto LABEL_63;
        }
        FileExtents = MiIssueHardFault((__int64)&v35, v34);
      }
      *((_QWORD *)&v40 + 1) = 0LL;
    }
    MiReleaseFaultState((__int64)v38 + 8, 0x11u, 0LL, v20);
LABEL_63:
    if ( (v39 & 0x20) != 0 )
      MiFaultTrimBehind(v35);
    if ( (*(_DWORD *)(*((_QWORD *)&v38[0] + 1) + 184LL) & 0xF) != 0 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)&v38[0] + 1) + 4LL) & 0xFFF) != 0 )
        goto LABEL_29;
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( CurrentThread->Priority < 16 )
        goto LABEL_29;
      if ( (*((_DWORD *)&CurrentThread[1].SwapListEntry + 3) & 0xE) != 0 )
        goto LABEL_29;
      v31 = *(_QWORD *)(*((_QWORD *)&v38[0] + 1) + 136LL);
      v17 = *(_QWORD *)(*((_QWORD *)&v38[0] + 1) + 120LL);
      if ( v31 <= v17 || v31 - v17 <= 0x64 )
        goto LABEL_29;
    }
    v28 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(*((_QWORD *)&v38[0] + 1) + 174LL));
    if ( v28 && !(unsigned int)MiSufficientAvailablePages(v28, 0x420uLL) )
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
    if ( (_QWORD)v42 )
    {
      MiReplenishSlabAllocator(v42, v43, ((BYTE1(v39) & 1) == 0) << 17, v19);
      if ( *((_QWORD *)&v42 + 1) )
        ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*((_QWORD *)&v42 + 1) + 22152LL));
      if ( FileExtents == -1073741801 )
        FileExtents = -1073740748;
    }
    if ( (v36 & 1) != 0
      && *(_BYTE *)(v36 & 0xFFFFFFFFFFFFFFFEuLL) == 5
      && (v33 = *(_QWORD *)((v36 & 0xFFFFFFFFFFFFFFFEuLL) + 48)) != 0
      && (MiReplenishSlabAllocator(v33, 1uLL, 0, v19), FileExtents == -1073741801) )
    {
      FileExtents = -1073740748;
    }
    else if ( !FileExtents )
    {
      goto LABEL_35;
    }
    FileExtents = MiConvertFaultStatus(&v35, v16, (unsigned int)FileExtents);
LABEL_35:
    v21 = v39;
    if ( (v39 & 1) != 0 )
    {
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v38[0] + 1), 3221225495LL, 0LL);
      v21 = v39;
    }
    if ( (v21 & 2) != 0 )
      MiCopyOnWriteCheckConditions(*((_QWORD *)&v38[0] + 1), 3221226548LL, 0LL);
    v22 = *((_QWORD *)&v40 + 1);
    if ( !*((_QWORD *)&v40 + 1) )
      break;
    if ( (v4 & 1) == 0 )
      goto LABEL_71;
    v32 = *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( v32 == 1 || v32 == 2 )
    {
      *(_BYTE *)((v4 & 0xFFFFFFFFFFFFFFFEuLL) + 1) = 1;
LABEL_71:
      v4 = 0LL;
      goto LABEL_72;
    }
    if ( v32 == 5 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 6 )
      goto LABEL_71;
LABEL_72:
    v29 = ListEntry[0];
    MiInitializePageFaultPacket(2uLL, v22, 0, v4, (__int64)v44, (__int64)&v35);
    LODWORD(v39) = v39 | 0x40;
    v6 = v35;
    ListEntry[0] = v29;
  }
  if ( ListEntry[0] )
    MiReleaseFaultCharges((ULONG_PTR)ListEntry[0]);
  return (unsigned int)FileExtents;
}
