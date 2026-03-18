/*
 * XREFs of ?InitializeOnHost@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x1401E3B80
 * Callers:
 *     ?Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z @ 0x14034F800 (-Initialize@DXGHWQUEUE@@IEAAJPEAU_D3DKMT_CREATEHWQUEUE@@PEAX@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x14003EC14 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z @ 0x140221014 (-MapGuestFenceCpuVaToHost@@YAJ_KPEAPEAXPEA_KPEAI@Z.c)
 *     ?VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z @ 0x14022D10C (-VmBusSendCreateHwQueue@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJIIPEAXPEAU_D3DKMT_CREATEHWQUEUE@@PEAI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGHWQUEUE::InitializeOnHost(DXGHWQUEUE *this, struct _D3DKMT_CREATEHWQUEUE *a2, void *a3)
{
  __int64 v6; // r9
  __int64 v7; // r15
  __int64 v8; // r13
  struct DXGPROCESS *Current; // rax
  _QWORD *v10; // r14
  unsigned int v11; // eax
  unsigned int v12; // edx
  unsigned int v14; // eax
  int v15; // ecx
  unsigned int v16; // ebx
  unsigned int HostProcess; // eax
  void *HwQueueProgressFenceCPUVirtualAddress; // rcx
  int v19; // eax
  __int64 v20; // rsi
  unsigned __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r8
  struct _D3DKMT_CREATEHWQUEUE *v25; // [rsp+20h] [rbp-78h]
  _BYTE v26[32]; // [rsp+50h] [rbp-48h] BYREF

  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
  v7 = *(_QWORD *)(v6 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 16LL);
  Current = DXGPROCESS::GetCurrent();
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v26, Current);
  v10 = (_QWORD *)(v7 + 280);
  v11 = HMGRTABLE::AllocHandle(v7 + 280, this, 15LL);
  *((_DWORD *)this + 6) = v11;
  v12 = v11;
  if ( v11 )
  {
    v14 = (v11 >> 6) & 0xFFFFFF;
    if ( v14 < *(_DWORD *)(v7 + 296) )
    {
      v15 = *(_DWORD *)(*v10 + 16LL * v14 + 8);
      if ( ((v12 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16LL * v14 + 8) & 0x60)
        && (v15 & 0x2000) == 0
        && (v15 & 0x1F) != 0 )
      {
        *(_DWORD *)(*v10 + 16LL * v14 + 8) = v15 | 0x2000;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    v16 = *(_DWORD *)(*((_QWORD *)this + 2) + 28LL);
    HostProcess = DXGPROCESS::GetHostProcess((DXGPROCESS *)v7);
    if ( (int)DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendCreateHwQueue(
                (DXG_GUEST_VIRTUALGPU_VMBUS *)(v8 + 4712),
                HostProcess,
                v16,
                a3,
                a2,
                (unsigned int *)this + 7) >= 0
      && *((_DWORD *)this + 7)
      && a2->hHwQueueProgressFence
      && (HwQueueProgressFenceCPUVirtualAddress = a2->HwQueueProgressFenceCPUVirtualAddress) != 0LL
      && a2->HwQueueProgressFenceGPUVirtualAddress )
    {
      v19 = MapGuestFenceCpuVaToHost(
              (unsigned __int64)HwQueueProgressFenceCPUVirtualAddress,
              (void **)this + 16,
              (unsigned __int64 *)this + 17,
              (unsigned int *)this + 36);
      v20 = v19;
      if ( v19 >= 0 )
      {
        a2->HwQueueProgressFenceCPUVirtualAddress = (void *)*((_QWORD *)this + 16);
        v21 = *((unsigned int *)this + 6);
        DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v7 + 248));
        v22 = ((unsigned int)v21 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v22 < *(_DWORD *)(v7 + 296)
          && (((unsigned int)v21 >> 25) & 0x60) == (*(_BYTE *)(*v10 + 16 * v22 + 8) & 0x60)
          && (*(_DWORD *)(*v10 + 16 * v22 + 8) & 0x1F) != 0 )
        {
          v23 = 16 * ((v21 >> 6) & 0xFFFFFF);
          if ( (*(_DWORD *)(v23 + *v10 + 8) & 0x2000) == 0 )
          {
            WdLogSingleEntry0(1LL);
            WdLogGlobalForLineNumber = 224;
            DxgkLogInternalTriageEvent(
              0LL,
              262146,
              -1,
              (__int64)L"m_pEntryTable[GetIndex(hObject)].Destroyed",
              224LL,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          *(_DWORD *)(*v10 + v23 + 8) &= ~0x2000u;
        }
        *(_QWORD *)(v7 + 256) = 0LL;
        ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
        KeLeaveCriticalRegion();
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x800) != 0 )
          McTemplateK0ppp_EtwWriteTransfer(
            (REGHANDLE *)&DxgkControlGuid_Context,
            &EventCreateHwQueue,
            v24,
            *((_QWORD *)this + 2),
            *((unsigned int *)this + 6),
            this);
        return 0LL;
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 260;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"MapCpuVaForParavirtualization failed, returning 0x%I64x",
          v20,
          0LL,
          0LL,
          0LL,
          0LL);
        return (unsigned int)v20;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      v25 = (struct _D3DKMT_CREATEHWQUEUE *)*((_QWORD *)this + 2);
      WdLogGlobalForLineNumber = 245;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"DXGCONTEXT 0x%I64x Failed to create HwQueue on the host",
        (__int64)v25,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225473LL;
    }
  }
  else
  {
    WdLogSingleEntry2(3LL, this, -1073741801LL);
    WdLogGlobalForLineNumber = 217;
    if ( *(struct _KTHREAD **)(v7 + 256) != KeGetCurrentThread() )
    {
      *(_QWORD *)(v7 + 256) = 0LL;
      ExReleasePushLockExclusiveEx(v7 + 248, 0LL);
      KeLeaveCriticalRegion();
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v26);
    return 3221225495LL;
  }
}
