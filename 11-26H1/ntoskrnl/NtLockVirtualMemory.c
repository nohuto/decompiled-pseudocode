/*
 * XREFs of NtLockVirtualMemory @ 0x14031A630
 * Callers:
 *     DifNtLockVirtualMemoryWrapper @ 0x14067EC00 (DifNtLockVirtualMemoryWrapper.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1402E4940 (MiMakeSystemAddressValid.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x1402E8B80 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiLockVirtualMemoryRevert @ 0x1402E8DB8 (MiLockVirtualMemoryRevert.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140319330 (MiLockVirtualMemoryCheckPrivilege.c)
 *     MiVadPureReserve @ 0x1403193E0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x14031A080 (MiGetNextPageTable.c)
 *     MiLockVirtualMemoryVa @ 0x14031AC40 (MiLockVirtualMemoryVa.c)
 *     MiGetNextVad @ 0x140328048 (MiGetNextVad.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404DEB18 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x140782258 (RtlWriteULong64ToUser.c)
 *     MiLockUnlockVmCleanup @ 0x140A063BC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140A064C0 (MiLockUnlockVmPrepare.c)
 *     MiLockUnlockCommon @ 0x140A068FC (MiLockUnlockCommon.c)
 */

NTSTATUS __cdecl NtLockVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG MapType)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  NTSTATUS result; // eax
  unsigned __int64 v8; // rbx
  NTSTATUS v9; // edi
  __int64 v10; // r15
  __int64 v11; // rdx
  ULONG_PTR v12; // r14
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rsi
  __int64 NextVad; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int64 NextPageTable; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  unsigned __int64 v25; // rsi
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned __int64 v32; // rbx
  __int64 v33; // rsi
  unsigned __int64 v34; // r14
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // [rsp+48h] [rbp-120h] BYREF
  __int64 v39; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v40; // [rsp+58h] [rbp-110h]
  PSIZE_T v41; // [rsp+60h] [rbp-108h]
  PVOID *v42; // [rsp+68h] [rbp-100h]
  struct _KTHREAD *v43; // [rsp+70h] [rbp-F8h]
  int v44; // [rsp+80h] [rbp-E8h] BYREF
  int v45; // [rsp+84h] [rbp-E4h]
  __int64 v46[7]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v47; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v48; // [rsp+C8h] [rbp-A0h]
  __int64 v49; // [rsp+D0h] [rbp-98h]
  __int64 v50; // [rsp+D8h] [rbp-90h]
  __int64 v51; // [rsp+E8h] [rbp-80h]
  char v52; // [rsp+F0h] [rbp-78h]
  __int64 v53; // [rsp+F8h] [rbp-70h]
  __int64 v54; // [rsp+110h] [rbp-58h]
  __int64 v55; // [rsp+118h] [rbp-50h]

  v41 = RegionSize;
  v42 = BaseAddress;
  v39 = 0LL;
  v38 = 0LL;
  memset_0(&v44, 0, 0xA0uLL);
  CurrentThread = KeGetCurrentThread();
  v43 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  result = MiLockUnlockCommon((ULONG_PTR)ProcessHandle, PreviousMode, (__int64)&v39, (__int64)&v38, (__int64)v46);
  if ( result < 0 )
    return result;
  v44 = 1;
  v8 = v39;
  v47 = v39;
  v48 = v39 + v38 - 1;
  v9 = MiLockUnlockVmPrepare(&v44);
  if ( v9 < 0 )
  {
LABEL_35:
    MiLockUnlockVmCleanup(&v44);
    return v9;
  }
  v10 = v51;
  v11 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * *(unsigned __int16 *)(v51 + 174));
  v12 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v38 = v47 & 0xFFFFFFFFFFFFF000uLL;
  v13 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = v14;
  if ( !PreviousMode || (*(_DWORD *)(v11 + 4) & 0x40) != 0 )
  {
    v45 |= 0x20u;
  }
  else if ( *(_QWORD *)(v51 + 120) < (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(v51 + 16) + 32LL) + v49) )
  {
    MiLockVirtualMemoryCheckPrivilege((__int64)&v44, PreviousMode, CurrentThread);
  }
  NextVad = v50;
  if ( MiVadPureReserve(v50) )
    v45 |= 4u;
  v52 = MiLockWorkingSetShared(v10, v16, v17);
  while ( v13 <= v14 )
  {
    if ( v12 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      if ( MiVadPureReserve(NextVad) )
        v45 |= 4u;
      else
        v45 &= ~4u;
    }
    v18 = 0xFFFFF6FB40000000uLL;
    v19 = v53;
    if ( v53 != ((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v53 )
      {
        MiUnlockPageTableInternal(v10, v53);
        v53 = 0LL;
      }
      if ( (v45 & 4) != 0 )
      {
        NextPageTable = MiGetNextPageTable(v13, v14, v52, 0, &v39);
        if ( NextPageTable )
        {
          v18 = 0xFFFFF68000000000uLL;
          v19 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v53 = v19;
        }
        if ( NextPageTable != v13 )
        {
          v9 = -1073741819;
LABEL_34:
          MiLockVirtualMemoryRevert((__int64)&v44);
          goto LABEL_35;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v13, (*(_DWORD *)(NextVad + 48) >> 10) & 0x7F, v52, 0);
        v18 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v53 = v18;
      }
    }
    if ( (*(_QWORD *)v13 & 1) != 0 )
    {
      v21 = MiLockVirtualMemoryVa(&v44, v13);
      v9 = v21;
      v23 = ++v54;
      if ( v21 == -1073741663 )
      {
        v33 = v51;
        v34 = v53;
        v35 = v55;
        if ( v55 )
        {
          if ( *(_DWORD *)(v55 + 28) )
            MiFreeWsleList(v51, v22, v55, 0LL);
          MiReleaseProcessorFlushList(v23, v22, v35);
          v55 = 0LL;
        }
        if ( v34 )
        {
          MiUnlockPageTableInternal(v33, v34);
          v53 = 0LL;
        }
        LOBYTE(v22) = v52;
        MiUnlockWorkingSetShared(v33, v22);
        MiLockVirtualMemoryCheckPrivilege((__int64)&v44, PreviousMode, v43);
        MiLockWorkingSetShared(v10, v36, v37);
        if ( (v45 & 0x20) == 0 )
          goto LABEL_34;
        v45 |= 0x20u;
        --v54;
        v12 = v38;
        goto LABEL_30;
      }
      if ( v21 < 0 )
        goto LABEL_34;
      if ( v21 == 1073741849 )
        v45 |= 1u;
      v13 += 8LL;
      v12 += 4096LL;
      v38 = v12;
      if ( v13 <= v14 && (v23 & 0xF) == 0 )
      {
        if ( (unsigned int)MiLockVirtualMemoryGoodCitizen((__int64)&v44, 0LL) )
          MiLockWorkingSetShared(v10, v29, v30);
      }
    }
    else
    {
      v24 = v51;
      v25 = v53;
      v26 = v55;
      if ( v55 )
      {
        if ( *(_DWORD *)(v55 + 28) )
          MiFreeWsleList(v51, v19, v55, 0LL);
        MiReleaseProcessorFlushList(v18, v19, v26);
        v55 = 0LL;
      }
      if ( v25 )
      {
        MiUnlockPageTableInternal(v24, v25);
        v53 = 0LL;
      }
      LOBYTE(v19) = v52;
      MiUnlockWorkingSetShared(v24, v19);
      v9 = MmAccessFault(0LL, v12);
      MiLockWorkingSetShared(v10, v27, v28);
      if ( v9 < 0 )
        goto LABEL_34;
LABEL_30:
      v14 = v40;
    }
  }
  v31 = v53;
  if ( v53 )
    MiUnlockPageTableInternal(v10, v53);
  LOBYTE(v31) = v52;
  MiUnlockWorkingSetShared(v10, v31);
  MiLockUnlockVmCleanup(&v44);
  v32 = v47 & 0xFFFFFFFFFFFFF000uLL;
  if ( PreviousMode )
    RtlWriteULong64ToUser(v41, v49 << 12);
  else
    *v41 = v49 << 12;
  if ( PreviousMode )
    RtlWriteULong64ToUser(v42, v32);
  else
    *v42 = (PVOID)v32;
  return (v45 & 1) != 0 ? 0x40000019 : 0;
}
