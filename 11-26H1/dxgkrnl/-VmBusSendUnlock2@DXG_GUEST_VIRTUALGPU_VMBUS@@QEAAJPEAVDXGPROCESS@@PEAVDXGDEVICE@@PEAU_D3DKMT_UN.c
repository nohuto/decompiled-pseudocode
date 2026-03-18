/*
 * XREFs of ?VmBusSendUnlock2@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAU_D3DKMT_UNLOCK2@@E@Z @ 0x140424B34
 * Callers:
 *     DxgkLock2 @ 0x14028F1F0 (DxgkLock2.c)
 *     ?Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z @ 0x1402BBB04 (-Unlock@DXGDEVICE@@QEAAJPEBU_D3DKMT_UNLOCK@@E@Z.c)
 *     ?Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESETLOCKSHARED@@PEAVCWin32kLocks@@PEAPEAV1@PEAUVIDSCH_SUBMIT_DATA_BASE@@@Z @ 0x140326BC0 (-Present@DXGCONTEXT@@QEAAJPEBUDXGK_PRESENT_PARAMS@@PEAVCOREDEVICEACCESS@@PEAVDXGADAPTERSTOPRESET.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x14000FC20 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401BA9AC (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendUnlock2(
        DXG_GUEST_VIRTUALGPU_VMBUS *this,
        struct DXGPROCESS *a2,
        struct DXGDEVICE *a3,
        struct _D3DKMT_UNLOCK2 *a4,
        unsigned __int8 a5)
{
  D3DKMT_HANDLE hAllocation; // ebx
  volatile signed __int32 *v6; // rdi
  unsigned int v11; // eax
  int v12; // r8d
  __int64 v13; // rcx
  struct _EX_RUNDOWN_REF *v14; // rdx
  struct DXGALLOCATION *v15; // rbx
  __int64 v17; // rdi
  struct DXGKVMB_COMMAND_BASE *v18; // rcx
  int v19; // eax
  __int64 v20; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION *v21[2]; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGKVMB_COMMAND_BASE *v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v23; // [rsp+70h] [rbp-90h]

  hAllocation = a4->hAllocation;
  v6 = (volatile signed __int32 *)((char *)a2 + 248);
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
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v21, v14);
  _InterlockedDecrement(v6 + 4);
  ExReleasePushLockSharedEx(v6, 0LL);
  KeLeaveCriticalRegion();
  v15 = v21[0];
  if ( !v21[0] )
  {
    WdLogSingleEntry1(2LL);
    v20 = a4->hAllocation;
    WdLogGlobalForLineNumber = 11516;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid allocation handle: 0x%I64x",
      v20,
      0LL,
      0LL,
      0LL,
      0LL);
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v21);
    return -1073741811LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v21[0] + 1) + 16LL) + 16LL) != *(_QWORD *)(*((_QWORD *)a3 + 2) + 16LL) )
  {
    LODWORD(v17) = -1073741811;
    WdLogSingleEntry3(2LL, a3, v21[0], -1073741811LL);
    WdLogGlobalForLineNumber = 11524;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
      (__int64)a3,
      (__int64)v21[0],
      -1073741811LL,
      0LL,
      0LL);
LABEL_20:
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v21);
    return (unsigned int)v17;
  }
  if ( *((_DWORD *)v21[0] + 24)
    && _InterlockedExchangeAdd((volatile signed __int32 *)v21[0] + 24, 0xFFFFFFFF) == 1
    && (*((_BYTE *)v15 + 128) & 3) == 0 )
  {
    _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
    if ( !*((_BYTE *)this + 80) )
      UnlockParavirtualizedAllocationOnGuest(v21[0], 1);
    v23 = 0;
    *(_OWORD *)v22 = 0LL;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v22, this, 0x28u, 0LL, 0LL, 0LL);
    v18 = v22[0];
    if ( v22[0] )
    {
      *((_DWORD *)v22[0] + 2) = *((_DWORD *)a2 + 122);
      *((_BYTE *)v18 + 12) = 0;
      *((_DWORD *)v18 + 3) &= 0x1FFu;
      *((_BYTE *)v18 + 32) = a5;
      *(_QWORD *)v18 = 0LL;
      *((_QWORD *)v18 + 2) = 24LL;
      *((_DWORD *)v18 + 7) = *((_DWORD *)v15 + 5);
      *((_DWORD *)v18 + 6) = *((_DWORD *)a3 + 118);
      v19 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(this, (unsigned __int8 *)v22[1], v22[0], v23);
      v17 = v19;
      if ( v19 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 11568;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"VmBusSendUnlock2 failed: 0x%I64x",
          v17,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v22);
    }
    else
    {
      DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v22);
      LODWORD(v17) = -1073741801;
    }
    goto LABEL_20;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v21);
  return 0LL;
}
