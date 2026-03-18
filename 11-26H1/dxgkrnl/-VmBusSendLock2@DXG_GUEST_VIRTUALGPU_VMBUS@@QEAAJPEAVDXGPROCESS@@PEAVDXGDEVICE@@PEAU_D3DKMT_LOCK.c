/*
 * XREFs of ?VmBusSendLock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_LOCK2@@EII@Z @ 0x1402B9EF8
 * Callers:
 *     DxgkLock2Internal @ 0x14028ED50 (DxgkLock2Internal.c)
 *     ?Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z @ 0x1402B9970 (-Lock@DXGDEVICE@@QEAAJPEAU_D3DKMT_LOCK@@PEAVCOREDEVICEACCESS@@_N@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 *     ?PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z @ 0x140423030 (-PrepareStagingBuffer@BLTQUEUE@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x14003DA90 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401BA9AC (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1402321C8 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_LOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  volatile signed __int32 *v6; // rdi
  unsigned int v11; // eax
  int v12; // r8d
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rdx
  unsigned int *v15; // rbx
  int v17; // edi
  PVOID v18; // rax
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // r12
  __int64 v23; // rdi
  int HostProcess; // eax
  int v25; // eax
  struct _D3DKMT_LOCK2 *v26; // r13
  struct _MDL *v27; // r14
  __int16 v28; // di
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  int v30; // eax
  __int64 v31; // rbx
  const wchar_t *v32; // r9
  PMDL Mdl; // rax
  struct _MDL *v34; // rdx
  struct _MDL *v35; // rcx
  __int64 v36; // r8
  struct _MDL *v37; // rax
  NTSTATUS v38; // eax
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v39; // rax
  PVOID VirtualAddress; // [rsp+50h] [rbp-B0h] BYREF
  ULONG Length[2]; // [rsp+58h] [rbp-A8h] BYREF
  struct _EX_RUNDOWN_REF *v42; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v43[24]; // [rsp+68h] [rbp-98h] BYREF
  __int128 v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+90h] [rbp-70h]
  __int128 v46; // [rsp+1A0h] [rbp+A0h] BYREF
  int v47; // [rsp+1B0h] [rbp+B0h]
  int v48; // [rsp+2C0h] [rbp+1C0h] BYREF
  unsigned __int64 v49; // [rsp+2C8h] [rbp+1C8h]
  struct _D3DKMT_LOCK2 *v50; // [rsp+2D0h] [rbp+1D0h] BYREF

  hAllocation = a4->hAllocation;
  v6 = (volatile signed __int32 *)((char *)a2 + 248);
  v50 = a4;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)a2 + 248));
  v11 = (hAllocation >> 6) & 0xFFFFFF;
  if ( v11 >= *((_DWORD *)a2 + 74) )
    goto LABEL_7;
  v12 = *(_DWORD *)(*((_QWORD *)a2 + 35) + 16LL * v11 + 8);
  if ( ((hAllocation >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)a2 + 35) + 16LL * v11 + 8) & 0x60)
    || (v12 & 0x2000) != 0
    || (v12 & 0x1F) == 0 )
  {
    goto LABEL_7;
  }
  v13 = *((_QWORD *)a2 + 35);
  if ( (*(_BYTE *)(v13 + 16LL * v11 + 8) & 0x1F) != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_7:
    v14 = 0LL;
    goto LABEL_8;
  }
  v14 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * v11);
LABEL_8:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&VirtualAddress, v14);
  _InterlockedDecrement(v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v15 = (unsigned int *)VirtualAddress;
  v42 = (struct _EX_RUNDOWN_REF *)VirtualAddress;
  VirtualAddress = 0LL;
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&VirtualAddress);
  if ( !v15 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 11311;
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
    return -1073741811LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v15 + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
  {
    v17 = -1073741811;
    WdLogSingleEntry3(2LL, a3, v15, -1073741811LL);
    WdLogGlobalForLineNumber = 11319;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)a3,
      (__int64)v15,
      -1073741811LL,
      0LL,
      0LL);
    goto LABEL_61;
  }
  *(_QWORD *)Length = v15[30];
  if ( !*((_QWORD *)v15 + 13) )
  {
    v22 = *((_QWORD *)v15 + 6);
    v47 = 0;
    v46 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v46, this, 0x40u, 0LL, 0LL, 0LL);
    v23 = v46;
    if ( !(_QWORD)v46 )
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v46);
      v17 = -1073741801;
      goto LABEL_61;
    }
    HostProcess = DXGPROCESS::GetHostProcess(a2);
    *(_BYTE *)(v23 + 12) = 0;
    *(_DWORD *)(v23 + 12) &= 0x1FFu;
    *(_QWORD *)v23 = 0LL;
    *(_DWORD *)(v23 + 8) = HostProcess;
    *(_QWORD *)(v23 + 16) = 23LL;
    *(_BYTE *)(v23 + 48) = 0;
    *(_QWORD *)(v23 + 52) = 0LL;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, (struct _KTHREAD **)a2);
    *(_DWORD *)(v23 + 28) = v15[5];
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
    v25 = *((_DWORD *)a3 + 118);
    v26 = v50;
    v27 = 0LL;
    *(_DWORD *)(v23 + 24) = v25;
    *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v23 + 32) = v26->Flags.0;
    if ( a5 )
    {
      *(_BYTE *)(v23 + 48) = 1;
      *(_QWORD *)(v23 + 52) = 0LL;
    }
    LODWORD(VirtualAddress) = 16;
    v17 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
            this,
            (struct DXGVMBUSMESSAGE *)&v46,
            &v48,
            (unsigned int *)&VirtualAddress);
    if ( v17 < 0 )
      goto LABEL_59;
    v17 = -1073741823;
    if ( (unsigned int)VirtualAddress < 0x10 )
      goto LABEL_59;
    v17 = v48;
    if ( v48 < 0 )
      goto LABEL_59;
    v28 = ~(unsigned __int16)(*(_DWORD *)(v22 + 4) >> 9);
    VirtualAddress = 0LL;
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    v30 = (*(__int64 (__fastcall **)(__int64, PVOID *, _QWORD, ULONG *, int, unsigned int))VirtualMemoryInterface)(
            -1LL,
            &VirtualAddress,
            0LL,
            Length,
            8392704,
            v28 & 0x400 | 4u);
    v17 = v30;
    if ( v30 >= 0 )
    {
      Mdl = IoAllocateMdl(0LL, Length[0], 0, 0, 0LL);
      v27 = Mdl;
      if ( Mdl )
      {
        v34 = Mdl + 1;
        v35 = (struct _MDL *)(v49 >> 12);
        if ( (unsigned int)(*(_QWORD *)Length >> 12) )
        {
          v36 = (unsigned int)(*(_QWORD *)Length >> 12);
          do
          {
            v37 = v35;
            v35 = (struct _MDL *)((char *)v35 + 1);
            v34->Next = v37;
            v34 = (struct _MDL *)((char *)v34 + 8);
            --v36;
          }
          while ( v36 );
        }
        v38 = MmRotatePhysicalView(VirtualAddress, (PSIZE_T)Length, v27, MmToFrameBufferNoCopy, 0LL, 0LL);
        v17 = v38;
        if ( v38 >= 0 )
        {
          v15[18] |= 0x80000u;
          *((_QWORD *)v15 + 13) = VirtualAddress;
          *((_QWORD *)v15 + 14) = v49;
          _InterlockedAdd((volatile signed __int32 *)v15 + 24, 1u);
          _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
          _InterlockedAdd(&g_VgpuNumAllocationsLocked, 1u);
          g_VgpuNumLockedBytes += *(_QWORD *)Length;
          v26->pData = VirtualAddress;
          goto LABEL_57;
        }
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)v38;
        WdLogSingleEntry1(2LL);
        v32 = L"MmRotatePhysicalView failed: 0x%I64x";
        WdLogGlobalForLineNumber = 11460;
        v31 = 0LL;
      }
      else
      {
        v17 = -1073741801;
        WdLogSingleEntry2(2LL, *((_QWORD *)this + 9), -1073741801LL);
        this = (DXG_GUEST_VIRTUALGPU_VMBUS *)*((_QWORD *)this + 9);
        v32 = L"Adapter 0x%I64x: Failed to allocate memory for CPU visible buffer, returning 0x%I64x";
        WdLogGlobalForLineNumber = 11445;
        v31 = -1073741801LL;
      }
    }
    else
    {
      v31 = v30;
      WdLogSingleEntry2(2LL, this, v30);
      v32 = L"Adapter 0x%I64x: Failed to allocate memory, returning 0x%I64x";
      WdLogGlobalForLineNumber = 11437;
    }
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v32, (__int64)this, v31, 0LL, 0LL, 0LL);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 11477;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
    if ( VirtualAddress )
    {
      if ( (*(_DWORD *)(v22 + 4) & 0x40000) != 0 )
      {
        MmUnmapLockedPages(VirtualAddress, v27);
      }
      else
      {
        v39 = DxgkGetVirtualMemoryInterface();
        (*((void (__fastcall **)(__int64, PVOID *, ULONG *, __int64))v39 + 2))(-1LL, &VirtualAddress, Length, 0x8000LL);
      }
    }
    if ( !v27 )
    {
LABEL_58:
      if ( v17 >= 0 )
      {
LABEL_60:
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v46);
        goto LABEL_61;
      }
LABEL_59:
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 11500;
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"VmBusSendLock2 failed: 0x%I64x", v17, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_60;
    }
LABEL_57:
    IoFreeMdl(v27);
    goto LABEL_58;
  }
  if ( _InterlockedIncrement((volatile signed __int32 *)v15 + 24) == 1 && !(v15[32] & 1 | ((v15[32] & 2) != 0)) )
    _InterlockedAdd(&g_VgpuNumAllocationsUnderCpuAccess, 1u);
  if ( (v15[32] & 2) != 0 && (*((_BYTE *)DXGGLOBAL::GetGlobal() + 1760) & 1) != 0 )
  {
    v18 = *(PVOID *)(*((_QWORD *)v15 + 13) + 32LL);
  }
  else
  {
    v19 = *((_BYTE *)v15 + 128);
    if ( (v19 & 1) != 0 )
    {
      v20 = *((_QWORD *)v15 + 13);
      if ( (*(_BYTE *)(v20 + 10) & 5) != 0 )
        v18 = *(PVOID *)(v20 + 24);
      else
        v18 = MmMapLockedPagesSpecifyCache((PMDL)v20, 0, MmCached, 0LL, 0, 0x40000010u);
    }
    else
    {
      if ( *((_BYTE *)this + 80) && (v19 & 2) == 0 )
      {
        v44 = 0LL;
        v45 = 0;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v44, this, 0x40u, 0LL, 0LL, 0LL);
        v21 = v44;
        *(_DWORD *)(v21 + 8) = DXGPROCESS::GetHostProcess(a2);
        *(_BYTE *)(v21 + 12) = 0;
        *(_DWORD *)(v21 + 12) &= 0x1FFu;
        *(_QWORD *)v21 = 0LL;
        *(_BYTE *)(v21 + 48) = 0;
        *(_QWORD *)(v21 + 52) = 0LL;
        *(_QWORD *)(v21 + 16) = 23LL;
        DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v43, (struct _KTHREAD **)a2);
        *(_DWORD *)(v21 + 28) = v15[5];
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v43);
        *(_DWORD *)(v21 + 24) = *((_DWORD *)a3 + 118);
        *(struct _D3DDDICB_LOCK2FLAGS::$8E8E2CD94D4182533FEB50916D5F70D0::$345C9315266921A5615E194C0B7E8CDB *)(v21 + 32) = a4->Flags.0;
        if ( a5 )
        {
          *(_BYTE *)(v21 + 48) = 1;
          *(_QWORD *)(v21 + 52) = 0LL;
        }
        LODWORD(VirtualAddress) = 16;
        if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(
                    this,
                    (struct DXGVMBUSMESSAGE *)&v44,
                    &v50,
                    (unsigned int *)&VirtualAddress) < 0
          || (unsigned int)VirtualAddress < 0x10 )
        {
          UnlockParavirtualizedAllocationOnGuest((struct DXGALLOCATION *)v15, 1);
          *((_QWORD *)v15 + 13) = 0LL;
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v44);
          v17 = -1073741823;
          goto LABEL_61;
        }
        DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v44);
      }
      v18 = (PVOID)*((_QWORD *)v15 + 13);
    }
  }
  a4->pData = v18;
  v17 = 0;
LABEL_61:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v42);
  return (unsigned int)v17;
}
