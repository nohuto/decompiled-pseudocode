/*
 * XREFs of NtLockVirtualMemory @ 0x140318600
 * Callers:
 *     DifNtLockVirtualMemoryWrapper @ 0x14067B020 (DifNtLockVirtualMemoryWrapper.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x1402D13E0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402EB6C0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402EDD60 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403028C0 (MiMakeSystemAddressValid.c)
 *     MiLockVirtualMemoryGoodCitizen @ 0x140306B00 (MiLockVirtualMemoryGoodCitizen.c)
 *     MiLockVirtualMemoryRevert @ 0x140306D38 (MiLockVirtualMemoryRevert.c)
 *     MiLockVirtualMemoryCheckPrivilege @ 0x140317300 (MiLockVirtualMemoryCheckPrivilege.c)
 *     MiVadPureReserve @ 0x1403173B0 (MiVadPureReserve.c)
 *     MiGetNextPageTable @ 0x140318050 (MiGetNextPageTable.c)
 *     MiLockVirtualMemoryVa @ 0x140318C10 (MiLockVirtualMemoryVa.c)
 *     MiGetNextVad @ 0x140326018 (MiGetNextVad.c)
 *     MiFreeWsleList @ 0x140328E50 (MiFreeWsleList.c)
 *     MiReleaseProcessorFlushList @ 0x1403613C0 (MiReleaseProcessorFlushList.c)
 *     MmAccessFault @ 0x1403A2390 (MmAccessFault.c)
 *     MiModeCopyExceptionFilterEx @ 0x1404E5578 (MiModeCopyExceptionFilterEx.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     RtlWriteULong64ToUser @ 0x14077F758 (RtlWriteULong64ToUser.c)
 *     MiLockUnlockVmCleanup @ 0x140960AFC (MiLockUnlockVmCleanup.c)
 *     MiLockUnlockVmPrepare @ 0x140960C00 (MiLockUnlockVmPrepare.c)
 *     MiLockUnlockCommon @ 0x140961048 (MiLockUnlockCommon.c)
 */

__int64 __fastcall NtLockVirtualMemory(ULONG_PTR BugCheckParameter1, unsigned __int64 *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r12
  __int64 result; // rax
  unsigned __int64 v7; // rbx
  int v8; // edi
  __int64 v9; // r15
  __int64 v10; // rdx
  ULONG_PTR v11; // r14
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  __int64 NextVad; // r13
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 NextPageTable; // rax
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  unsigned __int64 v31; // rbx
  __int64 v32; // rsi
  unsigned __int64 v33; // r14
  __int64 v34; // r8
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // [rsp+48h] [rbp-120h] BYREF
  __int64 v38; // [rsp+50h] [rbp-118h] BYREF
  unsigned __int64 v39; // [rsp+58h] [rbp-110h]
  _QWORD *v40; // [rsp+60h] [rbp-108h]
  unsigned __int64 *v41; // [rsp+68h] [rbp-100h]
  struct _KTHREAD *v42; // [rsp+70h] [rbp-F8h]
  int v43; // [rsp+80h] [rbp-E8h] BYREF
  int v44; // [rsp+84h] [rbp-E4h]
  __int64 v45[7]; // [rsp+88h] [rbp-E0h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-A8h]
  unsigned __int64 v47; // [rsp+C8h] [rbp-A0h]
  __int64 v48; // [rsp+D0h] [rbp-98h]
  __int64 v49; // [rsp+D8h] [rbp-90h]
  __int64 v50; // [rsp+E8h] [rbp-80h]
  char v51; // [rsp+F0h] [rbp-78h]
  __int64 v52; // [rsp+F8h] [rbp-70h]
  __int64 v53; // [rsp+110h] [rbp-58h]
  __int64 v54; // [rsp+118h] [rbp-50h]

  v40 = a3;
  v41 = a2;
  v38 = 0LL;
  v37 = 0LL;
  memset_0(&v43, 0, 0xA0uLL);
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  result = MiLockUnlockCommon(BugCheckParameter1, PreviousMode, (__int64)&v38, (__int64)&v37, (__int64)v45);
  if ( (int)result < 0 )
    return result;
  v43 = 1;
  v7 = v38;
  v46 = v38;
  v47 = v38 + v37 - 1;
  v8 = MiLockUnlockVmPrepare(&v43);
  if ( v8 < 0 )
  {
LABEL_35:
    MiLockUnlockVmCleanup(&v43);
    return (unsigned int)v8;
  }
  v9 = v50;
  v10 = *(_QWORD *)(stru_140E2EB88.ThreadLock + 8LL * *(unsigned __int16 *)(v50 + 174));
  v11 = v46 & 0xFFFFFFFFFFFFF000uLL;
  v37 = v46 & 0xFFFFFFFFFFFFF000uLL;
  v12 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v13 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v39 = v13;
  if ( !PreviousMode || (*(_DWORD *)(v10 + 4) & 0x40) != 0 )
  {
    v44 |= 0x20u;
  }
  else if ( *(_QWORD *)(v50 + 120) < (unsigned __int64)(*(_QWORD *)(*(_QWORD *)(v50 + 16) + 32LL) + v48) )
  {
    MiLockVirtualMemoryCheckPrivilege((__int64)&v43, PreviousMode, CurrentThread);
  }
  NextVad = v49;
  if ( MiVadPureReserve(v49) )
    v44 |= 4u;
  v51 = MiLockWorkingSetShared(v9, v15, v16);
  while ( v12 <= v13 )
  {
    if ( v11 >> 12 > (*(unsigned int *)(NextVad + 28) | ((unsigned __int64)*(unsigned __int8 *)(NextVad + 33) << 32)) )
    {
      NextVad = MiGetNextVad(NextVad);
      if ( MiVadPureReserve(NextVad) )
        v44 |= 4u;
      else
        v44 &= ~4u;
    }
    v17 = 0xFFFFF6FB40000000uLL;
    v18 = v52;
    if ( v52 != ((v11 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL )
    {
      if ( v52 )
      {
        MiUnlockPageTableInternal(v9, v52);
        v52 = 0LL;
      }
      if ( (v44 & 4) != 0 )
      {
        NextPageTable = MiGetNextPageTable(v12, v13, v51, 0, &v38);
        if ( NextPageTable )
        {
          v17 = 0xFFFFF68000000000uLL;
          v18 = ((NextPageTable >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          v52 = v18;
        }
        if ( NextPageTable != v12 )
        {
          v8 = -1073741819;
LABEL_34:
          MiLockVirtualMemoryRevert((__int64)&v43);
          goto LABEL_35;
        }
      }
      else
      {
        MiMakeSystemAddressValid(v12, (*(_DWORD *)(NextVad + 48) >> 10) & 0x7F, v51, 0);
        v17 = ((v12 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v52 = v17;
      }
    }
    if ( (*(_QWORD *)v12 & 1) != 0 )
    {
      v20 = MiLockVirtualMemoryVa(&v43, v12);
      v8 = v20;
      v22 = ++v53;
      if ( v20 == -1073741663 )
      {
        v32 = v50;
        v33 = v52;
        v34 = v54;
        if ( v54 )
        {
          if ( *(_DWORD *)(v54 + 28) )
            MiFreeWsleList(v50, v21, v54, 0LL);
          MiReleaseProcessorFlushList(v22, v21, v34);
          v54 = 0LL;
        }
        if ( v33 )
        {
          MiUnlockPageTableInternal(v32, v33);
          v52 = 0LL;
        }
        LOBYTE(v21) = v51;
        MiUnlockWorkingSetShared(v32, v21);
        MiLockVirtualMemoryCheckPrivilege((__int64)&v43, PreviousMode, v42);
        MiLockWorkingSetShared(v9, v35, v36);
        if ( (v44 & 0x20) == 0 )
          goto LABEL_34;
        v44 |= 0x20u;
        --v53;
        v11 = v37;
        goto LABEL_30;
      }
      if ( v20 < 0 )
        goto LABEL_34;
      if ( v20 == 1073741849 )
        v44 |= 1u;
      v12 += 8LL;
      v11 += 4096LL;
      v37 = v11;
      if ( v12 <= v13 && (v22 & 0xF) == 0 )
      {
        if ( (unsigned int)MiLockVirtualMemoryGoodCitizen((__int64)&v43, 0LL) )
          MiLockWorkingSetShared(v9, v28, v29);
      }
    }
    else
    {
      v23 = v50;
      v24 = v52;
      v25 = v54;
      if ( v54 )
      {
        if ( *(_DWORD *)(v54 + 28) )
          MiFreeWsleList(v50, v18, v54, 0LL);
        MiReleaseProcessorFlushList(v17, v18, v25);
        v54 = 0LL;
      }
      if ( v24 )
      {
        MiUnlockPageTableInternal(v23, v24);
        v52 = 0LL;
      }
      LOBYTE(v18) = v51;
      MiUnlockWorkingSetShared(v23, v18);
      v8 = MmAccessFault(0LL, v11);
      MiLockWorkingSetShared(v9, v26, v27);
      if ( v8 < 0 )
        goto LABEL_34;
LABEL_30:
      v13 = v39;
    }
  }
  v30 = v52;
  if ( v52 )
    MiUnlockPageTableInternal(v9, v52);
  LOBYTE(v30) = v51;
  MiUnlockWorkingSetShared(v9, v30);
  MiLockUnlockVmCleanup(&v43);
  v31 = v46 & 0xFFFFFFFFFFFFF000uLL;
  if ( PreviousMode )
    RtlWriteULong64ToUser(v40, v48 << 12);
  else
    *v40 = v48 << 12;
  if ( PreviousMode )
    RtlWriteULong64ToUser(v41, v31);
  else
    *v41 = v31;
  return (v44 & 1) != 0 ? 0x40000019 : 0;
}
