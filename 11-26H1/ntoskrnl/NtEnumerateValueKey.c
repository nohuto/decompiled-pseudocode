/*
 * XREFs of NtEnumerateValueKey @ 0x1409412A0
 * Callers:
 *     DifNtEnumerateValueKeyWrapper @ 0x14067AE80 (DifNtEnumerateValueKeyWrapper.c)
 *     RtlInitFunctionalityCache @ 0x140805E18 (RtlInitFunctionalityCache.c)
 *     AdtpObjsInitialize @ 0x140896C50 (AdtpObjsInitialize.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140261E00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x140303720 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032F2E0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039FE30 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E50D0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14042F7B0 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x1404441C0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x1404468F0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x140451240 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140480350 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x1407822A0 (RtlWriteULongToUser.c)
 *     HvpGetCellFlat @ 0x140864DF0 (HvpGetCellFlat.c)
 *     CmpCallCallBacksEx @ 0x1408D03F0 (CmpCallCallBacksEx.c)
 *     HvpReleaseCellFlat @ 0x1408DB7A0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408DD970 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408DD9D0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408DF8E0 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408F30DC (CmpTransSearchAddTransFromKeyBody.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F8FB0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F9CF0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1409294E0 (ObReferenceObjectByHandle.c)
 *     CmpQueryKeyValueData @ 0x140941E50 (CmpQueryKeyValueData.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409426FC (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140B0144C (CmEnumerateValueKeyFromMergedView.c)
 *     CmpUnlockKcb @ 0x140C5E2B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C5E340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C5E3F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C5E7C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C5E850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C5E900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C5E930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C5E970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C5EA50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C5EAB0 (CmpAcquireShutdownRundown.c)
 */

NTSTATUS __cdecl NtEnumerateValueKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v9; // r8
  _QWORD *v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r8d
  char v15; // r14
  unsigned __int8 PreviousMode; // r14
  NTSTATUS v17; // ebx
  ULONG v18; // ebx
  size_t v19; // r15
  int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v22; // eax
  __int64 v23; // r8
  char *TransientPoolWithQuota; // rax
  int v25; // ebx
  __int64 v26; // r13
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  ULONG_PTR v31; // r15
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  ULONG_PTR v35; // rcx
  __int64 CellFlat; // rax
  unsigned int v37; // ebx
  ULONG_PTR v38; // rcx
  __int64 CellPaged; // rax
  NTSTATUS KeyValueData; // eax
  __int64 v41; // rcx
  __int64 v42; // rcx
  ULONG v43; // r15d
  PVOID v44; // rcx
  PVOID v46; // rax
  unsigned __int64 v47; // rbx
  unsigned int v48; // edx
  unsigned int v49; // eax
  char v50; // cl
  char v51; // [rsp+50h] [rbp-2A8h]
  char v53; // [rsp+58h] [rbp-2A0h]
  char v54; // [rsp+59h] [rbp-29Fh]
  char v55; // [rsp+5Ah] [rbp-29Eh]
  char v56; // [rsp+5Bh] [rbp-29Dh]
  _BYTE v57[4]; // [rsp+5Ch] [rbp-29Ch] BYREF
  __int64 v58; // [rsp+60h] [rbp-298h] BYREF
  PVOID v59; // [rsp+68h] [rbp-290h] BYREF
  int v60; // [rsp+70h] [rbp-288h]
  void *v61; // [rsp+78h] [rbp-280h]
  PVOID v62; // [rsp+80h] [rbp-278h] BYREF
  ULONG v63; // [rsp+88h] [rbp-270h]
  __int64 v64; // [rsp+90h] [rbp-268h] BYREF
  __int64 v65; // [rsp+98h] [rbp-260h] BYREF
  unsigned int *v66; // [rsp+A0h] [rbp-258h]
  PVOID Object; // [rsp+A8h] [rbp-250h] BYREF
  __int64 v68; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v69; // [rsp+B8h] [rbp-240h]
  _QWORD v70[2]; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v71; // [rsp+D8h] [rbp-220h] BYREF
  __int64 v72; // [rsp+E0h] [rbp-218h] BYREF
  size_t Size; // [rsp+E8h] [rbp-210h]
  _QWORD *v74; // [rsp+F0h] [rbp-208h] BYREF
  NTSTATUS v75; // [rsp+F8h] [rbp-200h]
  int v76; // [rsp+FCh] [rbp-1FCh]
  unsigned __int64 *v77; // [rsp+100h] [rbp-1F8h]
  NTSTATUS v78; // [rsp+108h] [rbp-1F0h]
  __int128 v79; // [rsp+10Ch] [rbp-1ECh]
  __int64 v80; // [rsp+11Ch] [rbp-1DCh]
  int v81; // [rsp+124h] [rbp-1D4h]
  _KAFFINITY_EX v82; // [rsp+128h] [rbp-1D0h] BYREF
  struct _KAPC_STATE v83; // [rsp+230h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v84; // [rsp+260h] [rbp-98h] BYREF
  __int64 *v85; // [rsp+280h] [rbp-78h]
  __int64 v86; // [rsp+288h] [rbp-70h]
  _BYTE *v87; // [rsp+290h] [rbp-68h]
  __int64 v88; // [rsp+298h] [rbp-60h]
  __int64 *v89; // [rsp+2A0h] [rbp-58h]
  __int64 v90; // [rsp+2A8h] [rbp-50h]

  v60 = KeyValueInformationClass;
  v63 = Index;
  v66 = ResultLength;
  memset(&v82, 0, 24);
  memset(&v83, 0, sizeof(v83));
  memset_0((char *)&v82.StaticBitmap[12] + 1, 0, 0x47uLL);
  memset(&v82.StaticBitmap[22], 0, 32);
  v61 = 0LL;
  v62 = 0LL;
  v56 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v82.StaticBitmap[22], 0x20000uLL, v9);
    v56 = 1;
  }
  v54 = 0;
  v55 = 0;
  memset_0(&v82.StaticBitmap[2], 0, 0x40uLL);
  v10 = 0LL;
  v59 = 0LL;
  v11 = 0;
  LODWORD(v58) = 0;
  memset(&v82.StaticBitmap[10], 0, 17);
  v70[1] = v70;
  v70[0] = v70;
  CmpInitializeThreadInfo(&v82);
  Object = 0LL;
  v15 = CmpAcquireShutdownRundown(v13, v12);
  v51 = v15;
  if ( !v15 )
  {
    v17 = -1073741431;
    goto LABEL_61;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        v62 = 0LL;
        if ( ObReferenceObjectByHandle(
               KeyHandle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v62,
               0LL) >= 0 )
          ObfDereferenceObject(v62);
      }
    }
    v17 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v57[1] = PreviousMode;
    v17 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v14, PreviousMode, (__int64)&v59, 0LL);
    v10 = v59;
    if ( v17 < 0 )
      goto LABEL_86;
    if ( CmpTraceRoutine && v59 )
    {
      v61 = (void *)*((_QWORD *)v59 + 1);
      v62 = v61;
    }
    if ( PreviousMode )
    {
      v18 = Length;
      v19 = Length;
      if ( Length && ((unsigned __int8)KeyValueInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULongFromUser = RtlReadULongFromUser(v66);
      RtlWriteULongToUser(v66, ULongFromUser);
    }
    else
    {
      v18 = Length;
      v19 = Length;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v55 = 1;
    if ( !HIDWORD(WheapPfaLock.StateSaveArea) || (unsigned int)CmpIsRegistryLockAcquired() )
    {
LABEL_16:
      v17 = CmKeyBodyRemapToVirtualForEnum(&v59, PreviousMode, 1, &Object);
      if ( v17 < 0 )
        goto LABEL_85;
      LOBYTE(v82.StaticBitmap[12]) = v82.StaticBitmap[12] & 0xFD | (2 * (PreviousMode & 1));
      v82.StaticBitmap[10] = (unsigned __int64)KeyValueInformation;
      if ( !v19 )
      {
        v82.StaticBitmap[11] = 0LL;
        goto LABEL_24;
      }
      if ( !CmpFreezeListLock.CycleTime || !PreviousMode && !MmIsUserAddress((unsigned __int64)KeyValueInformation) )
      {
        v82.StaticBitmap[11] = (unsigned __int64)KeyValueInformation;
        goto LABEL_24;
      }
      if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
      {
        v71 = 1LL;
        v85 = &v71;
        v86 = 8LL;
        v57[0] = 1;
        v87 = v57;
        v88 = 1LL;
        v48 = v19;
        if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
        {
          v49 = v19;
          v50 = -1;
          do
          {
            ++v50;
            v49 >>= 1;
          }
          while ( v49 );
          v48 = 1 << (v50 + 1);
        }
        v72 = v48;
        v89 = &v72;
        v90 = 8LL;
        tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&word_140056E56, v23, 5u, &v84);
      }
      if ( v19 > 0x40 )
      {
        if ( v19 <= 0x1000 )
        {
          v46 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
          v47 = (unsigned __int64)v46;
          if ( v46 )
          {
            memset_0(v46, 0, v19);
            LOBYTE(v82.StaticBitmap[12]) |= 1u;
            v82.StaticBitmap[11] = v47;
            goto LABEL_24;
          }
        }
        TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
        if ( !TransientPoolWithQuota )
        {
          v17 = -1073741670;
LABEL_25:
          if ( v17 >= 0 )
          {
            if ( Object )
            {
              CmpAttachToRegistryProcess(&v83);
              v43 = Length;
              v10 = v59;
              v17 = CmEnumerateValueKeyFromMergedView(
                      (int)v59,
                      (int)Object,
                      0,
                      Index,
                      v60,
                      v82.StaticBitmap[11],
                      Length,
                      (__int64)&v58,
                      0LL);
              CmpDetachFromRegistryProcess(&v83);
              v11 = v58;
              goto LABEL_49;
            }
            v25 = v82.StaticBitmap[11];
            Size = v82.StaticBitmap[11];
            v65 = 0LL;
            memset(&v82.StaticBitmap[26], 0, 48);
            v64 = 0LL;
            v68 = 0LL;
            v69 = 0LL;
            HvpGetCellContextInitialize(&v65);
            v26 = 0LL;
            HvpGetCellContextInitialize(&v64);
            v53 = 0;
            CmpAttachToRegistryProcess((PRKAPC_STATE)&v82.StaticBitmap[26]);
            CmpLockRegistry(v28, v27, v29, v30);
            v10 = v59;
            v31 = *((_QWORD *)v59 + 1);
            if ( *(_WORD *)(v31 + 66) )
            {
              KeyValueData = CmEnumerateValueFromLayeredKey((_DWORD)v59, Index, v60, v25, Length, (__int64)&v58);
            }
            else
            {
              CmpLockKcbShared(*((_QWORD *)v59 + 1));
              v53 = 1;
              v17 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
              if ( v17 < 0 )
                goto LABEL_40;
              if ( v10[7] || v10[8] )
              {
                v17 = CmpTransSearchAddTransFromKeyBody(v10, &v68);
                if ( v17 < 0 )
                  goto LABEL_40;
                v17 = CmpPerformKeyBodyDeletionCheck(v10, v68);
                if ( v17 < 0 )
                  goto LABEL_40;
              }
              if ( v68 && v68 == *(_QWORD *)(v31 + 288) )
                v33 = 280LL;
              else
                v33 = 96LL;
              if ( Index >= *(_DWORD *)(v31 + v33) )
              {
                v17 = -2147483622;
                goto LABEL_40;
              }
              v34 = *(unsigned int *)(v31 + v33 + 4);
              v35 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v35, v34, (unsigned int *)&v65);
              else
                CellFlat = HvpGetCellPaged(v35, v34);
              v69 = CellFlat;
              v37 = *(_DWORD *)(CellFlat + 4LL * Index);
              v38 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v38, *(_DWORD *)(CellFlat + 4LL * Index), (unsigned int *)&v64);
              else
                CellPaged = HvpGetCellPaged(v38, v37);
              v26 = CellPaged;
              KeyValueData = CmpQueryKeyValueData(v31, v37, CellPaged, v60, Size, Length, (__int64)&v58);
            }
            v11 = v58;
            v17 = KeyValueData;
LABEL_40:
            if ( v26 )
            {
              v41 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v41 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v41, (__int64)&v64);
              else
                HvpReleaseCellPaged(v41, (unsigned int *)&v64);
            }
            if ( v69 )
            {
              v42 = *(_QWORD *)(v31 + 32);
              if ( (*(_BYTE *)(v42 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v42, (__int64)&v65);
              else
                HvpReleaseCellPaged(v42, (unsigned int *)&v65);
            }
            if ( v53 )
              CmpUnlockKcb(v31);
            CmpUnlockRegistry(v32);
            CmpDetachFromRegistryProcess(&v82.StaticBitmap[26]);
            v43 = Length;
LABEL_49:
            if ( v17 >= 0 || v17 == -2147483643 || v17 == -1073741789 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(v66, v11);
              else
                *v66 = v11;
              if ( v17 != -1073741789 )
              {
                if ( v43 < v11 )
                  v11 = v43;
                if ( v82.StaticBitmap[10] != v82.StaticBitmap[11] )
                {
                  if ( (v82.StaticBitmap[12] & 2) != 0 )
                    RtlCopyToUser((void *)v82.StaticBitmap[10], (void *)v82.StaticBitmap[11], v11);
                  else
                    RtlCopyVolatileMemory((void *)v82.StaticBitmap[10], (const void *)v82.StaticBitmap[11], v11);
                }
              }
              v15 = v51;
              goto LABEL_61;
            }
LABEL_86:
            v15 = v51;
            goto LABEL_61;
          }
LABEL_85:
          v10 = v59;
          goto LABEL_86;
        }
      }
      else
      {
        memset_0((char *)&v82.StaticBitmap[12] + 1, 0, v19);
        TransientPoolWithQuota = (char *)&v82.StaticBitmap[12] + 1;
      }
      v82.StaticBitmap[11] = (unsigned __int64)TransientPoolWithQuota;
LABEL_24:
      v17 = 0;
      goto LABEL_25;
    }
    v82.StaticBitmap[2] = (unsigned __int64)v10;
    v82.StaticBitmap[3] = __PAIR64__(v60, Index);
    v82.StaticBitmap[4] = (unsigned __int64)KeyValueInformation;
    LODWORD(v82.StaticBitmap[5]) = v18;
    v82.StaticBitmap[6] = (unsigned __int64)v66;
    v22 = CmpCallCallBacksEx(6u, (__int64)&v82.StaticBitmap[2], 0LL, 1, 0x15u, (__int64)v10, (__int64)v70);
    if ( v22 >= 0 )
    {
      v54 = 1;
      goto LABEL_16;
    }
    v17 = 0;
    if ( v22 != -1073740541 )
      v17 = v22;
    v15 = v51;
  }
LABEL_61:
  v44 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v54
    && HIDWORD(WheapPfaLock.StateSaveArea)
    && !(unsigned int)CmpIsRegistryLockAcquired()
    && (_QWORD *)v70[0] != v70 )
  {
    v76 = 0;
    v79 = 0LL;
    v80 = 0LL;
    v81 = 0;
    v74 = v10;
    v75 = v17;
    v78 = v17;
    v77 = &v82.StaticBitmap[2];
    CmpCallCallBacksEx(0x15u, (__int64)&v74, 0LL, 0, 0x15u, (__int64)v10, (__int64)v70);
    v17 = v78;
  }
  if ( v55 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v82.StaticBitmap[11]
    && v82.StaticBitmap[11] != v82.StaticBitmap[10]
    && (_KAFFINITY_EX *)v82.StaticBitmap[11] != (_KAFFINITY_EX *)((char *)&v82.StaticBitmap[12] + 1) )
  {
    if ( (v82.StaticBitmap[12] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v82.StaticBitmap[11]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v82.StaticBitmap[11]);
  }
  if ( v56 && CmpTraceRoutine )
  {
    LOBYTE(v44) = 18;
    guard_dispatch_icall_no_overrides((__int64)v44, (__int64)&v82.StaticBitmap[22]);
  }
  if ( v15 )
    CmpReleaseShutdownRundown(v44);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v82);
  return v17;
}
