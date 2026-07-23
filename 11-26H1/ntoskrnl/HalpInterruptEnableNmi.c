/*
 * XREFs of HalpInterruptEnableNmi @ 0x140435DF0
 * Callers:
 *     HalpInterruptInitSystem @ 0x140BF1450 (HalpInterruptInitSystem.c)
 *     HalpPostSleepMP @ 0x140BF2EF0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140BF40F0 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x14030FAAC (HalpReleaseHighLevelLock.c)
 *     HalpInterruptGsiToLine @ 0x14043349C (HalpInterruptGsiToLine.c)
 *     HalpInterruptFindLines @ 0x1404336FC (HalpInterruptFindLines.c)
 *     HalpInterruptLookupController @ 0x140433DA8 (HalpInterruptLookupController.c)
 *     HalpAcquireHighLevelLock @ 0x140433FFC (HalpAcquireHighLevelLock.c)
 *     HalpInterruptDestinationToTarget @ 0x140434F10 (HalpInterruptDestinationToTarget.c)
 *     HalpIommuUpdateRemappingTableEntry @ 0x140435084 (HalpIommuUpdateRemappingTableEntry.c)
 *     HalpInterruptSetLineState @ 0x140435168 (HalpInterruptSetLineState.c)
 *     HalpInterruptSetProblemEx @ 0x140436244 (HalpInterruptSetProblemEx.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     HalpInterruptSetRemappedLineStateInternal @ 0x14057E6CC (HalpInterruptSetRemappedLineStateInternal.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     HalpHvMapIoApicDeviceInterrupt @ 0x140BF0BC4 (HalpHvMapIoApicDeviceInterrupt.c)
 */

__int64 HalpInterruptEnableNmi()
{
  unsigned __int8 v0; // al
  struct _KPRCB *CurrentPrcb; // r15
  unsigned __int8 v2; // r12
  unsigned int v3; // r8d
  ULONG_PTR v4; // r14
  unsigned int i; // ecx
  __int64 j; // rdi
  int v7; // ebx
  char v9; // dl
  int v10; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ebx
  int v15; // ecx
  int v16; // eax
  __int64 Number; // rcx
  __int64 v18; // rax
  _QWORD *Lines; // rax
  __int64 v20; // rcx
  ULONG_PTR *v21; // rsi
  int v22; // eax
  int v23; // eax
  int v24; // edx
  int BugCheckParameter4; // [rsp+28h] [rbp-79h]
  __int64 v26; // [rsp+48h] [rbp-59h] BYREF
  unsigned int v27; // [rsp+50h] [rbp-51h]
  __int128 v28; // [rsp+58h] [rbp-49h] BYREF
  __int128 *v29; // [rsp+68h] [rbp-39h]
  __int128 v30; // [rsp+70h] [rbp-31h] BYREF
  __int128 v31; // [rsp+80h] [rbp-21h] BYREF
  __int128 v32; // [rsp+90h] [rbp-11h]
  __int64 v33; // [rsp+A0h] [rbp-1h]
  __int128 v34; // [rsp+A8h] [rbp+7h] BYREF
  __int128 v35; // [rsp+B8h] [rbp+17h] BYREF

  v28 = 0LL;
  LODWORD(v29) = 0;
  v35 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v33 = 0LL;
  v31 = 0LL;
  v27 = 0;
  v32 = 0LL;
  v34 = 0LL;
  v0 = HalpAcquireHighLevelLock((PKSPIN_LOCK)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink);
  CurrentPrcb = KeGetCurrentPrcb();
  v2 = v0;
  v3 = HalpInterruptProcessorCount;
  v4 = 0LL;
  for ( i = 0; i < (unsigned int)HalpInterruptProcessorCount; ++i )
  {
    v4 = HalpInterruptProcessorState + ((unsigned __int64)i << 6);
    if ( *(_WORD *)(v4 + 16) == CurrentPrcb->Group && *(_BYTE *)(v4 + 18) == CurrentPrcb->GroupIndex )
    {
      v3 = i;
      break;
    }
  }
  if ( v3 == (_DWORD)HalpInterruptProcessorCount )
    KeBugCheckEx(
      0x5Cu,
      0x104uLL,
      ((unsigned __int64)CurrentPrcb->Group << 8) | CurrentPrcb->GroupIndex,
      (unsigned int)HalpInterruptProcessorCount,
      0LL);
  for ( j = HalpInterruptNmiSources; ; j = *(_QWORD *)j )
  {
    if ( !j )
    {
      v7 = 0;
      goto LABEL_7;
    }
    v9 = 0;
    if ( *(_BYTE *)(j + 8) )
    {
      if ( !*(_BYTE *)(v4 + 13) )
        continue;
      v10 = *(_DWORD *)(j + 12);
      if ( v10 != -1 && v10 != *(_DWORD *)(v4 + 4) )
        continue;
      v9 = 1;
    }
    else if ( CurrentPrcb->Number )
    {
      continue;
    }
    v30 = 0LL;
    v33 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v34 = 0LL;
    v11 = *(_DWORD *)(j + 16);
    v12 = v11 & 0xC;
    if ( *(_BYTE *)(j + 8) )
    {
      v13 = DWORD2(v30);
      if ( v12 != 12 )
        v13 = 1;
      DWORD2(v30) = v13;
      if ( (*(_BYTE *)(j + 16) & 3) == 3 )
      {
        v14 = 2;
        goto LABEL_17;
      }
LABEL_24:
      v14 = 1;
      goto LABEL_17;
    }
    if ( v12 == 4 || (v11 & 0xC) == 0 )
      DWORD2(v30) = 1;
    if ( (*(_DWORD *)(j + 16) & 3) == 0 )
      goto LABEL_24;
    v14 = 2;
    if ( (*(_DWORD *)(j + 16) & 3) == 1 )
      goto LABEL_24;
LABEL_17:
    LODWORD(v30) = v14;
    v28 = 0uLL;
    LODWORD(v34) = v34 & 0x80000000 | 0x40000002;
    v29 = &v34;
    HIDWORD(v30) = 16;
    *(_QWORD *)&v31 = 0x2FFFFFFFFLL;
    if ( !v9 )
      break;
    LODWORD(v28) = 5;
    v15 = *(_DWORD *)(HalpInterruptController + 256);
    HIDWORD(v26) = *(_DWORD *)(j + 20);
    LODWORD(v26) = v15;
LABEL_19:
    v7 = HalpInterruptSetLineState(&v26, 0, 15, SDWORD2(v30), v14, (__int64)&v28, (__int64)&v31);
    if ( v7 < 0 )
      goto LABEL_7;
LABEL_26:
    ;
  }
  v16 = HalpInterruptGsiToLine(*(unsigned int *)(j + 20), &v26);
  if ( v16 < 0 )
  {
    HalpInterruptSetProblemEx(0, 18, v16, (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c", 1534);
    goto LABEL_26;
  }
  if ( HalpInterruptPhysicalModeOnly )
  {
    LODWORD(v28) = 3;
  }
  else
  {
    v35 = 0LL;
    Number = CurrentPrcb->Number;
    LODWORD(v28) = 1;
    v18 = 0LL;
    _bittestandset64(&v18, *(&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.LockNV + Number) & 0x3F);
    *(_QWORD *)&v35 = v18;
    *((_QWORD *)&v28 + 1) = &v35;
  }
  Lines = HalpInterruptFindLines((unsigned int *)&v26);
  if ( Lines )
  {
    if ( !*(_BYTE *)(Lines[6] + 16LL * v27 + 12) )
    {
      v21 = HalpInterruptLookupController(v26);
      if ( !v21 )
      {
        BugCheckParameter4 = 1573;
        v24 = 17;
        goto LABEL_58;
      }
      v22 = HalpInterruptDestinationToTarget(v20, (__int64)&v28, (_DWORD *)&v31 + 2);
      if ( v22 < 0 )
      {
        HalpInterruptSetProblemEx(
          (_DWORD)v21,
          19,
          v22,
          (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
          1594);
        goto LABEL_59;
      }
      if ( (*(_DWORD *)(HalpInterruptController + 244) & 0x100) != 0 && KeGetCurrentPrcb()->CpuVendor != 1 )
      {
        HalpIommuUpdateRemappingTableEntry(0, v34 & 0x3FFFFFFF);
        DWORD2(v31) = 7;
        LODWORD(v32) = v34 & 0x3FFFFFFF;
      }
      if ( qword_140FBB408 )
      {
        v23 = HalpHvMapIoApicDeviceInterrupt(*((unsigned int *)v21 + 64), &v30, 0LL);
        v7 = v23;
        if ( v23 < 0 )
        {
          HalpInterruptSetProblemEx(
            (_DWORD)v21,
            31,
            v23,
            (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
            1645);
          goto LABEL_7;
        }
      }
      HIDWORD(v30) &= ~0x10u;
      v7 = HalpInterruptSetRemappedLineStateInternal(v21, &v26, &v30);
      if ( v7 < 0 )
        goto LABEL_7;
      v14 = v30;
    }
    goto LABEL_19;
  }
  BugCheckParameter4 = 1557;
  v24 = 18;
LABEL_58:
  HalpInterruptSetProblemEx(
    0,
    v24,
    0,
    (unsigned int)"minkernel\\hals\\lib\\interrupts\\common\\intrupt.c",
    BugCheckParameter4);
LABEL_59:
  v7 = -1073741275;
LABEL_7:
  HalpReleaseHighLevelLock((KSPIN_LOCK *)&HalpDeviceBlockUnblockPushLock.Timer.Header.WaitListHead.Blink, v2);
  return (unsigned int)v7;
}
