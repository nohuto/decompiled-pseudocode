/*
 * XREFs of NtEnumerateValueKey @ 0x14097F290
 * Callers:
 *     DifNtEnumerateValueKeyWrapper @ 0x1406772A0 (DifNtEnumerateValueKeyWrapper.c)
 *     RtlInitFunctionalityCache @ 0x140800378 (RtlInitFunctionalityCache.c)
 *     AdtpObjsInitialize @ 0x140890854 (AdtpObjsInitialize.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140262890 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1402B8A60 (KeLeaveCriticalRegionThread.c)
 *     EtwGetKernelTraceTimestamp @ 0x14032D2B0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x14039E0D0 (ExFreeToLookasideListEx.c)
 *     ExAllocateFromLookasideListEx @ 0x1403E1EE0 (ExAllocateFromLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x14043CF00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x14044C0A0 (CmCleanupThreadInfo.c)
 *     MmIsUserAddress @ 0x14044E7C0 (MmIsUserAddress.c)
 *     _tlgWriteAgg @ 0x1404599C0 (_tlgWriteAgg.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404869D8 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140495010 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     RtlReadULongFromUser @ 0x14077F590 (RtlReadULongFromUser.c)
 *     RtlWriteULongToUser @ 0x14077F7A0 (RtlWriteULongToUser.c)
 *     HvpGetCellFlat @ 0x14085EB00 (HvpGetCellFlat.c)
 *     CmpCallCallBacksEx @ 0x1408C9E40 (CmpCallCallBacksEx.c)
 *     HvpReleaseCellFlat @ 0x1408D51E0 (HvpReleaseCellFlat.c)
 *     HvpReleaseCellPaged @ 0x1408D73B0 (HvpReleaseCellPaged.c)
 *     HvpGetCellPaged @ 0x1408D7410 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x1408D9320 (HvpGetCellContextInitialize.c)
 *     CmpTransSearchAddTransFromKeyBody @ 0x1408ECB1C (CmpTransSearchAddTransFromKeyBody.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408F29F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408F3730 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ObReferenceObjectByHandle @ 0x1408F9550 (ObReferenceObjectByHandle.c)
 *     CmpQueryKeyValueData @ 0x14097FE40 (CmpQueryKeyValueData.c)
 *     CmEnumerateValueFromLayeredKey @ 0x1409806EC (CmEnumerateValueFromLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140AFF7BC (CmEnumerateValueKeyFromMergedView.c)
 *     CmpUnlockKcb @ 0x140C582B0 (CmpUnlockKcb.c)
 *     CmObReferenceObjectByHandle @ 0x140C58340 (CmObReferenceObjectByHandle.c)
 *     CmpLockKcbShared @ 0x140C583F0 (CmpLockKcbShared.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140C587C0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpLockRegistry @ 0x140C58850 (CmpLockRegistry.c)
 *     CmpReleaseShutdownRundown @ 0x140C58900 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140C58930 (CmpAttachToRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140C58970 (CmpUnlockRegistry.c)
 *     CmpDetachFromRegistryProcess @ 0x140C58A50 (CmpDetachFromRegistryProcess.c)
 *     CmpAcquireShutdownRundown @ 0x140C58AB0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        unsigned int *a6)
{
  __int64 v9; // r8
  _QWORD *v10; // rdi
  unsigned int v11; // r12d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16; // r14
  unsigned __int8 PreviousMode; // r14
  int v18; // ebx
  int v19; // ebx
  size_t v20; // r15
  int ULongFromUser; // eax
  struct _KTHREAD *CurrentThread; // rax
  int v23; // eax
  char *TransientPoolWithQuota; // rax
  int v25; // ebx
  __int64 v26; // r13
  __int64 v27; // rcx
  ULONG_PTR v28; // r15
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  ULONG_PTR v32; // rcx
  __int64 CellFlat; // rax
  unsigned int v34; // ebx
  ULONG_PTR v35; // rcx
  __int64 CellPaged; // rax
  int KeyValueData; // eax
  __int64 v38; // rcx
  __int64 v39; // rcx
  unsigned int v40; // r15d
  PVOID v41; // rcx
  PVOID v43; // rax
  unsigned __int64 v44; // rbx
  unsigned int v45; // edx
  unsigned int v46; // eax
  char v47; // cl
  char v48; // [rsp+50h] [rbp-2A8h]
  char v50; // [rsp+58h] [rbp-2A0h]
  char v51; // [rsp+59h] [rbp-29Fh]
  char v52; // [rsp+5Ah] [rbp-29Eh]
  char v53; // [rsp+5Bh] [rbp-29Dh]
  _BYTE v54[4]; // [rsp+5Ch] [rbp-29Ch] BYREF
  __int64 v55; // [rsp+60h] [rbp-298h] BYREF
  PVOID v56; // [rsp+68h] [rbp-290h] BYREF
  int v57; // [rsp+70h] [rbp-288h]
  void *v58; // [rsp+78h] [rbp-280h]
  PVOID v59; // [rsp+80h] [rbp-278h] BYREF
  unsigned int v60; // [rsp+88h] [rbp-270h]
  __int64 v61; // [rsp+90h] [rbp-268h] BYREF
  __int64 v62; // [rsp+98h] [rbp-260h] BYREF
  unsigned int *v63; // [rsp+A0h] [rbp-258h]
  PVOID Object; // [rsp+A8h] [rbp-250h] BYREF
  __int64 v65; // [rsp+B0h] [rbp-248h] BYREF
  __int64 v66; // [rsp+B8h] [rbp-240h]
  _QWORD v67[2]; // [rsp+C8h] [rbp-230h] BYREF
  __int64 v68; // [rsp+D8h] [rbp-220h] BYREF
  __int64 v69; // [rsp+E0h] [rbp-218h] BYREF
  size_t v70; // [rsp+E8h] [rbp-210h]
  _QWORD *v71; // [rsp+F0h] [rbp-208h] BYREF
  int v72; // [rsp+F8h] [rbp-200h]
  int v73; // [rsp+FCh] [rbp-1FCh]
  unsigned __int64 *v74; // [rsp+100h] [rbp-1F8h]
  int v75; // [rsp+108h] [rbp-1F0h]
  __int128 v76; // [rsp+10Ch] [rbp-1ECh]
  __int64 v77; // [rsp+11Ch] [rbp-1DCh]
  int v78; // [rsp+124h] [rbp-1D4h]
  _KAFFINITY_EX v79; // [rsp+128h] [rbp-1D0h] BYREF
  struct _KAPC_STATE v80; // [rsp+230h] [rbp-C8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v81; // [rsp+260h] [rbp-98h] BYREF
  __int64 *v82; // [rsp+280h] [rbp-78h]
  __int64 v83; // [rsp+288h] [rbp-70h]
  _BYTE *v84; // [rsp+290h] [rbp-68h]
  __int64 v85; // [rsp+298h] [rbp-60h]
  __int64 *v86; // [rsp+2A0h] [rbp-58h]
  __int64 v87; // [rsp+2A8h] [rbp-50h]

  v57 = a3;
  v60 = a2;
  v63 = a6;
  memset(&v79, 0, 24);
  memset(&v80, 0, sizeof(v80));
  memset_0((char *)&v79.StaticBitmap[12] + 1, 0, 0x47uLL);
  memset(&v79.StaticBitmap[22], 0, 32);
  v58 = 0LL;
  v59 = 0LL;
  v53 = 0;
  if ( CmpTraceRoutine )
  {
    EtwGetKernelTraceTimestamp((unsigned __int64)&v79.StaticBitmap[22], 0x20000uLL, v9);
    v53 = 1;
  }
  v51 = 0;
  v52 = 0;
  memset_0(&v79.StaticBitmap[2], 0, 0x40uLL);
  v10 = 0LL;
  v56 = 0LL;
  v11 = 0;
  LODWORD(v55) = 0;
  memset(&v79.StaticBitmap[10], 0, 17);
  v67[1] = v67;
  v67[0] = v67;
  CmpInitializeThreadInfo(&v79);
  Object = 0LL;
  v16 = CmpAcquireShutdownRundown(v13, v12);
  v48 = v16;
  if ( !v16 )
  {
    v18 = -1073741431;
    goto LABEL_61;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        v59 = 0LL;
        if ( ObReferenceObjectByHandle(
               Handle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &v59,
               0LL) >= 0 )
          ObfDereferenceObject(v59);
      }
    }
    v18 = -1073741811;
  }
  else
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v54[1] = PreviousMode;
    v18 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v15, PreviousMode, (__int64)&v56, 0LL);
    v10 = v56;
    if ( v18 < 0 )
      goto LABEL_86;
    if ( CmpTraceRoutine && v56 )
    {
      v58 = (void *)*((_QWORD *)v56 + 1);
      v59 = v58;
    }
    if ( PreviousMode )
    {
      v19 = Size;
      v20 = (unsigned int)Size;
      if ( (_DWORD)Size && (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      ULongFromUser = RtlReadULongFromUser(v63);
      RtlWriteULongToUser(v63, ULongFromUser);
    }
    else
    {
      v19 = Size;
      v20 = (unsigned int)Size;
    }
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v52 = 1;
    if ( !WheapPfaLock.ExpectedRunTime || (unsigned int)CmpIsRegistryLockAcquired() )
    {
LABEL_16:
      v18 = CmKeyBodyRemapToVirtualForEnum(&v56, PreviousMode, 1, &Object);
      if ( v18 < 0 )
        goto LABEL_85;
      LOBYTE(v79.StaticBitmap[12]) = v79.StaticBitmap[12] & 0xFD | (2 * (PreviousMode & 1));
      v79.StaticBitmap[10] = a4;
      if ( !v20 )
      {
        v79.StaticBitmap[11] = 0LL;
        goto LABEL_24;
      }
      if ( !CmpFreezeListLock.RelativeTimerBias || !PreviousMode && !MmIsUserAddress(a4) )
      {
        v79.StaticBitmap[11] = a4;
        goto LABEL_24;
      }
      if ( (unsigned int)dword_140E09EE8 > 5 && (qword_140E09EF8 & 4) != 0 && (qword_140E09F00 & 4) == qword_140E09F00 )
      {
        v68 = 1LL;
        v82 = &v68;
        v83 = 8LL;
        v54[0] = 1;
        v84 = v54;
        v85 = 1LL;
        v45 = v20;
        if ( (((_DWORD)v20 - 1) & (unsigned int)v20) != 0 )
        {
          v46 = v20;
          v47 = -1;
          do
          {
            ++v47;
            v46 >>= 1;
          }
          while ( v46 );
          v45 = 1 << (v47 + 1);
        }
        v69 = v45;
        v86 = &v69;
        v87 = 8LL;
        tlgWriteAgg((__int64)&dword_140E09EE8, (unsigned __int8 *)&byte_140055E63, v15, 5u, &v81);
      }
      if ( v20 > 0x40 )
      {
        if ( v20 <= 0x1000 )
        {
          v43 = ExAllocateFromLookasideListEx(&CmpBounceBufferLookaside);
          v44 = (unsigned __int64)v43;
          if ( v43 )
          {
            memset_0(v43, 0, v20);
            LOBYTE(v79.StaticBitmap[12]) |= 1u;
            v79.StaticBitmap[11] = v44;
            goto LABEL_24;
          }
        }
        TransientPoolWithQuota = (char *)CmpAllocateTransientPoolWithQuota();
        if ( !TransientPoolWithQuota )
        {
          v18 = -1073741670;
LABEL_25:
          if ( v18 >= 0 )
          {
            if ( Object )
            {
              CmpAttachToRegistryProcess(&v80);
              v40 = Size;
              v10 = v56;
              v18 = CmEnumerateValueKeyFromMergedView(
                      (int)v56,
                      (int)Object,
                      0,
                      a2,
                      v57,
                      v79.StaticBitmap[11],
                      Size,
                      (__int64)&v55,
                      0LL);
              CmpDetachFromRegistryProcess(&v80);
              v11 = v55;
              goto LABEL_49;
            }
            v25 = v79.StaticBitmap[11];
            v70 = v79.StaticBitmap[11];
            v62 = 0LL;
            memset(&v79.StaticBitmap[26], 0, 48);
            v61 = 0LL;
            v65 = 0LL;
            v66 = 0LL;
            HvpGetCellContextInitialize(&v62);
            v26 = 0LL;
            HvpGetCellContextInitialize(&v61);
            v50 = 0;
            CmpAttachToRegistryProcess((PRKAPC_STATE)&v79.StaticBitmap[26]);
            CmpLockRegistry(v27);
            v10 = v56;
            v28 = *((_QWORD *)v56 + 1);
            if ( *(_WORD *)(v28 + 66) )
            {
              KeyValueData = CmEnumerateValueFromLayeredKey((_DWORD)v56, a2, v57, v25, Size, (__int64)&v55);
            }
            else
            {
              CmpLockKcbShared(*((_QWORD *)v56 + 1));
              v50 = 1;
              v18 = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
              if ( v18 < 0 )
                goto LABEL_40;
              if ( v10[7] || v10[8] )
              {
                v18 = CmpTransSearchAddTransFromKeyBody(v10, &v65);
                if ( v18 < 0 )
                  goto LABEL_40;
                v18 = CmpPerformKeyBodyDeletionCheck(v10, v65);
                if ( v18 < 0 )
                  goto LABEL_40;
              }
              if ( v65 && v65 == *(_QWORD *)(v28 + 288) )
                v30 = 280LL;
              else
                v30 = 96LL;
              if ( a2 >= *(_DWORD *)(v28 + v30) )
              {
                v18 = -2147483622;
                goto LABEL_40;
              }
              v31 = *(unsigned int *)(v28 + v30 + 4);
              v32 = *(_QWORD *)(v28 + 32);
              if ( (*(_BYTE *)(v32 + 140) & 1) != 0 )
                CellFlat = HvpGetCellFlat(v32, v31, (unsigned int *)&v62);
              else
                CellFlat = HvpGetCellPaged(v32, v31);
              v66 = CellFlat;
              v34 = *(_DWORD *)(CellFlat + 4LL * a2);
              v35 = *(_QWORD *)(v28 + 32);
              if ( (*(_BYTE *)(v35 + 140) & 1) != 0 )
                CellPaged = HvpGetCellFlat(v35, *(_DWORD *)(CellFlat + 4LL * a2), (unsigned int *)&v61);
              else
                CellPaged = HvpGetCellPaged(v35, v34);
              v26 = CellPaged;
              KeyValueData = CmpQueryKeyValueData(v28, v34, CellPaged, v57, v70, Size, (__int64)&v55);
            }
            v11 = v55;
            v18 = KeyValueData;
LABEL_40:
            if ( v26 )
            {
              v38 = *(_QWORD *)(v28 + 32);
              if ( (*(_BYTE *)(v38 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v38, (__int64)&v61);
              else
                HvpReleaseCellPaged(v38, (unsigned int *)&v61);
            }
            if ( v66 )
            {
              v39 = *(_QWORD *)(v28 + 32);
              if ( (*(_BYTE *)(v39 + 140) & 1) != 0 )
                HvpReleaseCellFlat(v39, (__int64)&v62);
              else
                HvpReleaseCellPaged(v39, (unsigned int *)&v62);
            }
            if ( v50 )
              CmpUnlockKcb(v28);
            CmpUnlockRegistry(v29);
            CmpDetachFromRegistryProcess(&v79.StaticBitmap[26]);
            v40 = Size;
LABEL_49:
            if ( v18 >= 0 || v18 == -2147483643 || v18 == -1073741789 )
            {
              if ( PreviousMode )
                RtlWriteULongToUser(v63, v11);
              else
                *v63 = v11;
              if ( v18 != -1073741789 )
              {
                if ( v40 < v11 )
                  v11 = v40;
                v14 = v79.StaticBitmap[11];
                if ( v79.StaticBitmap[10] != v79.StaticBitmap[11] )
                {
                  if ( (v79.StaticBitmap[12] & 2) != 0 )
                    RtlCopyToUser((void *)v79.StaticBitmap[10], (void *)v79.StaticBitmap[11], v11);
                  else
                    RtlCopyVolatileMemory((void *)v79.StaticBitmap[10], (const void *)v79.StaticBitmap[11], v11);
                }
              }
              v16 = v48;
              goto LABEL_61;
            }
LABEL_86:
            v16 = v48;
            goto LABEL_61;
          }
LABEL_85:
          v10 = v56;
          goto LABEL_86;
        }
      }
      else
      {
        memset_0((char *)&v79.StaticBitmap[12] + 1, 0, v20);
        TransientPoolWithQuota = (char *)&v79.StaticBitmap[12] + 1;
      }
      v79.StaticBitmap[11] = (unsigned __int64)TransientPoolWithQuota;
LABEL_24:
      v18 = 0;
      goto LABEL_25;
    }
    v79.StaticBitmap[2] = (unsigned __int64)v10;
    v79.StaticBitmap[3] = __PAIR64__(v57, a2);
    v79.StaticBitmap[4] = a4;
    LODWORD(v79.StaticBitmap[5]) = v19;
    v79.StaticBitmap[6] = (unsigned __int64)v63;
    v23 = CmpCallCallBacksEx(6u, (__int64)&v79.StaticBitmap[2], 0LL, 1, 0x15u, (__int64)v10, (__int64)v67);
    if ( v23 >= 0 )
    {
      v51 = 1;
      goto LABEL_16;
    }
    v18 = 0;
    if ( v23 != -1073740541 )
      v18 = v23;
    v16 = v48;
  }
LABEL_61:
  v41 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v51 && WheapPfaLock.ExpectedRunTime && !(unsigned int)CmpIsRegistryLockAcquired() && (_QWORD *)v67[0] != v67 )
  {
    v73 = 0;
    v76 = 0LL;
    v77 = 0LL;
    v78 = 0;
    v71 = v10;
    v72 = v18;
    v75 = v18;
    v74 = &v79.StaticBitmap[2];
    CmpCallCallBacksEx(0x15u, (__int64)&v71, 0LL, 0, 0x15u, (__int64)v10, (__int64)v67);
    v18 = v75;
  }
  if ( v52 )
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v14, v15);
  if ( v10 )
    ObfDereferenceObject(v10);
  if ( v79.StaticBitmap[11]
    && v79.StaticBitmap[11] != v79.StaticBitmap[10]
    && (_KAFFINITY_EX *)v79.StaticBitmap[11] != (_KAFFINITY_EX *)((char *)&v79.StaticBitmap[12] + 1) )
  {
    if ( (v79.StaticBitmap[12] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v79.StaticBitmap[11]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v79.StaticBitmap[11]);
  }
  if ( v53 && CmpTraceRoutine )
  {
    LOBYTE(v41) = 18;
    guard_dispatch_icall_no_overrides((__int64)v41, (__int64)&v79.StaticBitmap[22]);
  }
  if ( v16 )
    CmpReleaseShutdownRundown(v41);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v79);
  return (unsigned int)v18;
}
