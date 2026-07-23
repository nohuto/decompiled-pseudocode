/*
 * XREFs of IoWriteCrashDump @ 0x1405CA87C
 * Callers:
 *     IoRetryAsMiniDump @ 0x1405C9D24 (IoRetryAsMiniDump.c)
 *     KiBugCheckWriteCrashDump @ 0x1405EA280 (KiBugCheckWriteCrashDump.c)
 * Callees:
 *     RtlNumberOfSetBitsEx @ 0x140200820 (RtlNumberOfSetBitsEx.c)
 *     MmSnapTriageDumpInformation @ 0x140442788 (MmSnapTriageDumpInformation.c)
 *     KdCheckForDebugBreak @ 0x14048198C (KdCheckForDebugBreak.c)
 *     IoSetBugCheckProgressFlag @ 0x1405350D0 (IoSetBugCheckProgressFlag.c)
 *     DumpCtlCheckErrorLocation @ 0x1405C897C (DumpCtlCheckErrorLocation.c)
 *     DumpCtlCheckExitStatus @ 0x1405C89A0 (DumpCtlCheckExitStatus.c)
 *     IoEscalateBugCheck @ 0x1405C8F08 (IoEscalateBugCheck.c)
 *     IoSaveBugCheckProgress @ 0x1405C9E10 (IoSaveBugCheckProgress.c)
 *     IoSetBugCheckProgressAndFlag @ 0x1405CA25C (IoSetBugCheckProgressAndFlag.c)
 *     IopCollectTriageDumpData @ 0x1405CB244 (IopCollectTriageDumpData.c)
 *     IopDumpCallAddPagesCallbacks @ 0x1405CB4D8 (IopDumpCallAddPagesCallbacks.c)
 *     IopDumpCallRemovePagesCallbacks @ 0x1405CB638 (IopDumpCallRemovePagesCallbacks.c)
 *     IopWriteCapsuleTriageDumpToFirmware @ 0x1405CCAF4 (IopWriteCapsuleTriageDumpToFirmware.c)
 *     IopWriteTriageDumpToFirmware @ 0x1405CCCA8 (IopWriteTriageDumpToFirmware.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     MmGetDumpRange @ 0x1406FB5A4 (MmGetDumpRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

char __fastcall IoWriteCrashDump(
        unsigned int a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _OWORD *a6,
        __int64 a7,
        __int64 a8,
        char a9)
{
  char v10; // bl
  unsigned int v13; // esi
  unsigned int i; // edx
  __int64 v16; // rdx
  __int64 v17; // rcx
  char v18; // cl
  int v19; // eax
  char v20; // r15
  __int64 v21; // rdx
  int v22; // r11d
  int v23; // r10d
  int v24; // r8d
  __int64 v25; // r9
  _OWORD *v26; // rcx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  unsigned __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  void *v32; // rcx
  unsigned int v33; // eax
  int v34; // edi
  int v35; // edx
  unsigned int v36; // eax
  unsigned int v37; // edx
  __int64 v38; // r14
  unsigned int v39; // r15d
  int v40; // eax
  __int64 v41; // r8
  unsigned int v42; // eax
  unsigned int v43; // edx
  unsigned int v44; // eax
  unsigned int v45; // edx
  unsigned int v46; // eax
  int v47; // eax
  unsigned int v48; // edx
  int v49; // ecx
  unsigned int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // [rsp+58h] [rbp-59h]
  __int64 v55; // [rsp+60h] [rbp-51h] BYREF
  __int64 v56; // [rsp+68h] [rbp-49h]
  __int64 v57; // [rsp+70h] [rbp-41h]
  __int64 v58; // [rsp+78h] [rbp-39h]
  _QWORD v59[13]; // [rsp+80h] [rbp-31h] BYREF
  char v63; // [rsp+130h] [rbp+7Fh]
  char v64; // [rsp+140h] [rbp+8Fh]

  v10 = 0;
  v54 = 0;
  v63 = a8 == 0;
  v13 = 17039360;
  KdCheckForDebugBreak();
  if ( CapsuleTriageDumpBlockInitialized == 1 )
    return IopWriteCapsuleTriageDumpToFirmware(a1, a2, a3, a4, a5, (__int64)a6, a7);
  if ( DWORD1(xmmword_140E662A8) && !byte_140E662A4 )
  {
    IoSetBugCheckProgressFlag(0x400000);
    return 0;
  }
  v55 = a2;
  v56 = a3;
  v57 = a4;
  v58 = a5;
  MmSnapTriageDumpInformation((__int64)a6, &v55);
  if ( CrashdmpDumpBlock )
  {
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 1) != 0 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 )
    {
      for ( i = 0; i < 8; ++i )
      {
        if ( *(_DWORD *)(CrashdmpDumpBlock + 4LL * i + 1372) == a1 )
        {
          *(_DWORD *)(CrashdmpDumpBlock + 1336) = 5;
          break;
        }
      }
    }
    if ( !a8 )
      *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
    guard_dispatch_icall_no_overrides(1LL, 0LL);
    v17 = CrashdmpDumpBlock;
    if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 2) != 0 || (v18 = 1, *(_DWORD *)(CrashdmpDumpBlock + 1336) != 5) )
      v18 = 0;
    if ( VslVsmEnabled )
    {
      v19 = 2 * LODWORD(VslpReservedTransferLock.Queue);
      LODWORD(VslpReservedTransferLock.Queue) *= 2;
      if ( v18 )
        LODWORD(VslpReservedTransferLock.Queue) = v19 | 1;
    }
    LOBYTE(v17) = 1;
    ViVerifyDma = 0;
    v64 = guard_dispatch_icall_no_overrides(v17, v16);
    v20 = v64;
    IoSaveBugCheckProgress(32);
    v21 = 9LL;
    v22 = a2;
    v23 = a3;
    v24 = a4;
    v25 = a5;
    v26 = a6;
    *(_DWORD *)(CrashdmpDumpBlock + 24) = a1;
    *(_QWORD *)(CrashdmpDumpBlock + 32) = a2;
    *(_QWORD *)(CrashdmpDumpBlock + 40) = a3;
    *(_QWORD *)(CrashdmpDumpBlock + 48) = a4;
    *(_QWORD *)(CrashdmpDumpBlock + 56) = a5;
    v27 = (_OWORD *)(CrashdmpDumpBlock + 64);
    do
    {
      *v27 = *v26;
      v27[1] = v26[1];
      v27[2] = v26[2];
      v27[3] = v26[3];
      v27[4] = v26[4];
      v27[5] = v26[5];
      v27[6] = v26[6];
      v27 += 8;
      v28 = v26[7];
      v26 += 8;
      *(v27 - 1) = v28;
      --v21;
    }
    while ( v21 );
    *v27 = *v26;
    v27[1] = v26[1];
    v27[2] = v26[2];
    v27[3] = v26[3];
    v27[4] = v26[4];
    *(_QWORD *)(CrashdmpDumpBlock + 1296) = &KdDebuggerDataBlock;
    *(_QWORD *)(CrashdmpDumpBlock + 1304) = &PsAltSystemCallRegistrationLock.WaitBlock[2];
    *(_QWORD *)(CrashdmpDumpBlock + 1312) = &PsLoadedModuleList;
    *(_QWORD *)(CrashdmpDumpBlock + 1320) = MmPfnDatabase;
    *(_QWORD *)(CrashdmpDumpBlock + 16) = &KiSupervisorXStateFeaturesLock.QuantumTarget;
    *(_QWORD *)(CrashdmpDumpBlock + 1416) = &KiSupervisorXStateFeaturesLock.StackLimit;
    *(_BYTE *)(CrashdmpDumpBlock + 1432) = 4;
    if ( a8 )
      v29 = *(_QWORD *)(*(_QWORD *)(a7 + 184) + 40LL);
    else
      v29 = __readcr3();
    *(_QWORD *)(CrashdmpDumpBlock + 1344) = v29 & 0xFFFFFFFFFFFFF000uLL;
    v30 = *(_QWORD *)(CrashdmpDumpBlock + 1328);
    if ( !v30 )
    {
      if ( v64 != 1 )
      {
LABEL_31:
        v31 = *(_QWORD *)(CrashdmpDumpBlock + 1360);
        if ( v31 )
        {
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = v31 + 12316;
          *(_QWORD *)(CrashdmpDumpBlock + 8) = 0LL;
LABEL_36:
          v32 = *(void **)(CrashdmpDumpBlock + 1328);
          if ( !IoPreparedTriageDumpData )
          {
            v33 = IopCollectTriageDumpData(a1, a2, a3, a4, a5, (__int64)a6, a7, v63);
            v34 = DumpCtlCheckErrorLocation(v33, 17039361);
            v13 = ((v34 >> 31) & 1) + 17039360;
            if ( v34 < 0 )
            {
LABEL_38:
              DumpCtlCheckExitStatus(v13, (unsigned int)v34);
              return v10;
            }
            goto LABEL_42;
          }
          if ( IoPreparedTriageDumpData != v32 )
          {
            memmove(v32, IoPreparedTriageDumpData, *((unsigned int *)IoPreparedTriageDumpData + 1));
LABEL_42:
            v25 = a5;
            v22 = a2;
            v23 = a3;
            v24 = a4;
          }
LABEL_43:
          v35 = *(_DWORD *)(CrashdmpDumpBlock + 1368) & 2;
          if ( v35 && *(_DWORD *)(CrashdmpDumpBlock + 1336) == 6 && *(_QWORD *)(CrashdmpDumpBlock + 8) )
          {
            *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 4u;
            v36 = IoAddPagesForPartialKernelDump(a1, v22, v23, v24, v25, (__int64)a6, a7);
            v34 = DumpCtlCheckErrorLocation(v36, 17039362);
            if ( v34 < 0 )
            {
              v13 = v37;
              goto LABEL_58;
            }
LABEL_56:
            v42 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
            v34 = DumpCtlCheckErrorLocation(v42, 17039363);
            if ( v34 < 0 )
              v13 = v43;
LABEL_58:
            if ( v34 != -1073741267 )
              goto LABEL_69;
            if ( (*(_DWORD *)(CrashdmpDumpBlock + 1368) & 4) != 0 )
            {
              IoSaveBugCheckProgress(39);
              *(_DWORD *)(CrashdmpDumpBlock + 1368) |= 8u;
              v44 = IoAddPagesForPartialKernelDump(a1, a2, a3, a4, a5, (__int64)a6, a7);
              v34 = DumpCtlCheckErrorLocation(v44, 17039364);
              if ( v34 >= 0 )
              {
                v46 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
                v47 = DumpCtlCheckErrorLocation(v46, 17039365);
                v49 = 38;
LABEL_66:
                v34 = v47;
                if ( v47 < 0 )
                  v13 = v48;
                IoSaveBugCheckProgress(v49);
LABEL_69:
                if ( v34 >= 0 )
                  goto LABEL_71;
                goto LABEL_70;
              }
            }
            else
            {
              if ( !*(_QWORD *)(CrashdmpDumpBlock + 1328) )
              {
LABEL_70:
                IoEscalateBugCheck(1);
LABEL_71:
                if ( !v20 )
                  IoEscalateBugCheck(2);
                if ( v34 >= 0 )
                {
                  if ( v20 == 1 || !*(_QWORD *)(CrashdmpDumpBlock + 1360) )
                    return 1;
                  IoSetBugCheckProgressAndFlag();
                  v52 = IopWriteTriageDumpToFirmware(*(PVOID *)(CrashdmpDumpBlock + 1360));
                  v34 = DumpCtlCheckErrorLocation(v52, 17039368);
                  if ( v34 < 0 )
                    v13 = v53;
                  IoSetBugCheckProgressFlag(0x10000000);
                  if ( v34 >= 0 )
                    return 1;
                }
                goto LABEL_38;
              }
              IoSetBugCheckProgressFlag(1024);
              IoPreparedTriageDumpData = 0LL;
              v50 = IopCollectTriageDumpData(a1, a2, a3, a4, a5, (__int64)a6, a7, v63);
              v34 = DumpCtlCheckErrorLocation(v50, 17039366);
              if ( v34 >= 0 )
              {
                v51 = guard_dispatch_icall_no_overrides(CrashdmpDumpBlock, a8);
                v47 = DumpCtlCheckErrorLocation(v51, 17039367);
                v49 = 35;
                goto LABEL_66;
              }
            }
            v13 = v45;
            goto LABEL_70;
          }
          v38 = *(_QWORD *)(CrashdmpDumpBlock + 8);
          if ( !v38 )
            goto LABEL_56;
          v59[5] = 0LL;
          v39 = 1;
          v55 = *(_QWORD *)(v38 + 48);
          v56 = v38 + 56;
          v59[2] = &v55;
          v59[0] = IoSetDumpRange;
          v59[1] = IoFreeDumpRange;
          v59[3] = v38;
          v59[4] = 0LL;
          v40 = *(_DWORD *)(CrashdmpDumpBlock + 1336);
          if ( v40 == 6 )
          {
            v54 = a9 != 0;
          }
          else
          {
            if ( v40 != 5 || !v35 )
              goto LABEL_55;
            v54 = 2;
          }
          v39 = 0;
LABEL_55:
          IopDumpCallAddPagesCallbacks(a1);
          IoSaveBugCheckProgress(33);
          MmGetDumpRange(v59, v39, v41, v54);
          IoSaveBugCheckProgress(43);
          IopDumpCallRemovePagesCallbacks(a1);
          IoSaveBugCheckProgress(34);
          v20 = v64;
          *(_QWORD *)(v38 + 40) = RtlNumberOfSetBitsEx(&v55);
          goto LABEL_56;
        }
LABEL_33:
        if ( !v30 && !a8 )
          *(_QWORD *)(CrashdmpDumpBlock + 1328) = *(_QWORD *)(CrashdmpDumpBlock + 1360) + 0x2000LL;
        goto LABEL_36;
      }
      if ( a8 )
        goto LABEL_43;
    }
    if ( v64 == 1 )
      goto LABEL_33;
    goto LABEL_31;
  }
  return v10;
}
