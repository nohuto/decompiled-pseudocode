/*
 * XREFs of DxgkUnlock2Internal @ 0x14028DB00
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     DxgkUnlock2 @ 0x14028E410 (DxgkUnlock2.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z @ 0x14000EB0C (-IsVidPnSourceOwner@ADAPTER_DISPLAY@@QEBAEPEBVDXGDEVICE@@I@Z.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ?GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z @ 0x140010BA4 (-GetDisplayedPrimary@DXGDEVICE@@QEAAPEBVDXGALLOCATION@@I@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z @ 0x1401BA9AC (-UnlockParavirtualizedAllocationOnGuest@@YAXPEAVDXGALLOCATION@@E@Z.c)
 *     ?UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z @ 0x1401E5A70 (-UpdateDodFrontBuffer@DXGDEVICE@@QEAAJPEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x14028D8E0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x14028E390 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z @ 0x1402FAC00 (-DxgkThreadObjectCreateDxgThread@@YAPEAVDXGTHREAD@@_N@Z.c)
 */

__int64 __fastcall DxgkUnlock2Internal(DXGADAPTER **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rdx
  int v12; // ecx
  struct DXGALLOCATION *v13; // rdx
  struct DXGALLOCATION *v14; // rbx
  DXGDEVICE *v15; // r9
  int v16; // eax
  int v17; // esi
  struct DXGTHREAD *DxgThread; // rax
  struct DXG_VMBUS_CHANNEL_BASE *v20; // r12
  __int64 v21; // rcx
  unsigned int v22; // eax
  __int64 v23; // rdx
  int v24; // ecx
  struct DXGALLOCATION *v25; // rdx
  struct DXGALLOCATION *v26; // rbx
  __int64 v27; // rsi
  unsigned int v28; // esi
  DXGADAPTER *v29; // r15
  unsigned int v30; // esi
  struct DXGKVMB_COMMAND_BASE *v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // [rsp+20h] [rbp-E0h]
  struct DXGALLOCATION *v35; // [rsp+50h] [rbp-B0h] BYREF
  struct DXGALLOCATION *v36[3]; // [rsp+58h] [rbp-A8h] BYREF
  struct DXGKVMB_COMMAND_BASE *v37[2]; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v38; // [rsp+80h] [rbp-80h]

  v4 = a3 + 248;
  v5 = *(_DWORD *)(a4 + 4);
  if ( !*(_BYTE *)(a2 + 209) )
  {
    KeEnterCriticalRegion();
    if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
    {
      if ( bTracingEnabled && *(_DWORD *)(v4 + 24) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v9, (__int64)"g");
      ExAcquirePushLockSharedEx(v4, 0LL);
    }
    _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
    v10 = (v5 >> 6) & 0xFFFFFF;
    if ( v10 < *(_DWORD *)(a3 + 296) )
    {
      v11 = *(_QWORD *)(a3 + 280) + 16LL * v10;
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v11 + 8) & 0x60) && (*(_DWORD *)(v11 + 8) & 0x2000) == 0 )
      {
        v12 = *(_DWORD *)(v11 + 8) & 0x1F;
        if ( v12 )
        {
          if ( v12 == 5 )
          {
            v13 = *(struct DXGALLOCATION **)v11;
            goto LABEL_14;
          }
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
        }
      }
    }
    v13 = 0LL;
LABEL_14:
    DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v35, v13);
    _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
    ExReleasePushLockSharedEx(v4, 0LL);
    KeLeaveCriticalRegion();
    v14 = v35;
    if ( v35 )
    {
      v15 = (DXGDEVICE *)*((_QWORD *)v35 + 1);
      if ( *(_QWORD *)(*((_QWORD *)v15 + 2) + 16LL) != *((_QWORD *)this[2] + 2) )
      {
        WdLogSingleEntry3(3LL, this, v35, -1073741811LL);
        WdLogGlobalForLineNumber = 1092;
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35);
        return 3221225485LL;
      }
      if ( *((_QWORD *)v35 + 3) )
      {
        if ( v15 == (DXGDEVICE *)this )
        {
          if ( !*((_DWORD *)this + 116) )
          {
            v28 = *(_DWORD *)(*((_QWORD *)v35 + 6) + 4LL);
            if ( (v28 & 4) != 0 )
            {
              v29 = this[237];
              v30 = (v28 >> 6) & 0xF;
              if ( v29 )
              {
                if ( !DXGADAPTER::IsCoreResourceSharedOwner(this[237]) )
                {
                  WdLogSingleEntry0(1LL);
                  WdLogGlobalForLineNumber = 1182;
                  DxgkLogInternalTriageEvent(
                    0LL,
                    262146,
                    -1,
                    (__int64)L"pDisplayAdapter->IsCoreResourceSharedOwner()",
                    1182LL,
                    0LL,
                    0LL,
                    0LL,
                    0LL);
                }
                if ( *((_DWORD *)this + 152) == 1
                  && ADAPTER_DISPLAY::IsVidPnSourceOwner(
                       *((ADAPTER_DISPLAY **)v29 + 395),
                       (const struct DXGDEVICE *)this,
                       v30)
                  && DXGDEVICE::GetDisplayedPrimary(this, v30) == v14 )
                {
                  DXGDEVICE::UpdateDodFrontBuffer(this, v14);
                }
              }
            }
          }
          v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*((_QWORD *)this[2] + 95) + 8LL) + 776LL))(
                  *((_QWORD *)this[2] + 96),
                  *((_QWORD *)v14 + 3));
          v17 = v16;
          if ( v16 >= 0 )
          {
            if ( v35 )
              ExReleaseRundownProtection((PEX_RUNDOWN_REF)v35 + 11);
            if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 344) )
            {
              v36[0] = 0LL;
              if ( (int)PsTlsGetValue(g_DxgkThreadTlsId, v36) >= 0 )
              {
                DxgThread = v36[0];
                if ( v36[0] || (DxgThread = DxgkThreadObjectCreateDxgThread(1), (v36[0] = DxgThread) != 0LL) )
                {
                  if ( *((_DWORD *)DxgThread + 12) )
                  {
                    WdLogSingleEntry5(0LL, 275LL, 38LL, *((int *)DxgThread + 12), 0LL, 0LL);
                    WdLogGlobalForLineNumber = 73;
                  }
                }
              }
            }
            return 0LL;
          }
          WdLogSingleEntry3(3LL, this, v14, v16);
          WdLogGlobalForLineNumber = 1201;
        }
        else
        {
          v17 = -1073741811;
          WdLogSingleEntry4(3LL, v35, this, v15, -1073741811LL);
          WdLogGlobalForLineNumber = 1165;
        }
        WdLogSingleEntry2(2LL, v35, v17);
        WdLogGlobalForLineNumber = 1111;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to unlock allocation 0x%p, returning 0x%x",
          (__int64)v35,
          v17,
          0LL,
          0LL,
          0LL);
        DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35);
        return (unsigned int)v17;
      }
      WdLogSingleEntry2(3LL, *(unsigned int *)(a4 + 4), v35);
      WdLogGlobalForLineNumber = 1101;
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 1083;
    }
    DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)&v35);
    return -1073741811LL;
  }
  v20 = (struct DXG_VMBUS_CHANNEL_BASE *)(a2 + 4712);
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    if ( bTracingEnabled && *(_DWORD *)(v4 + 24) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0q_EtwWriteTransfer(v21, (__int64)"g");
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v4 + 16));
  v22 = (v5 >> 6) & 0xFFFFFF;
  if ( v22 >= *(_DWORD *)(a3 + 296) )
    goto LABEL_59;
  v23 = *(_QWORD *)(a3 + 280) + 16LL * v22;
  if ( ((v5 >> 25) & 0x60) != (*(_BYTE *)(v23 + 8) & 0x60) )
    goto LABEL_59;
  if ( (*(_DWORD *)(v23 + 8) & 0x2000) != 0 )
    goto LABEL_59;
  v24 = *(_DWORD *)(v23 + 8) & 0x1F;
  if ( !v24 )
    goto LABEL_59;
  if ( v24 != 5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_59:
    v25 = 0LL;
    goto LABEL_40;
  }
  v25 = *(struct DXGALLOCATION **)v23;
LABEL_40:
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)v36, v25);
  _InterlockedDecrement((volatile signed __int32 *)(v4 + 16));
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  v26 = v36[0];
  if ( v36[0] )
  {
    if ( *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v36[0] + 1) + 16LL) + 16LL) == *((_QWORD *)this[2] + 2) )
    {
      if ( *((_DWORD *)v36[0] + 24)
        && _InterlockedExchangeAdd((volatile signed __int32 *)v36[0] + 24, 0xFFFFFFFF) == 1
        && (*((_BYTE *)v26 + 128) & 3) == 0 )
      {
        _InterlockedDecrement(&g_VgpuNumAllocationsUnderCpuAccess);
        if ( !*((_BYTE *)v20 + 80) )
          UnlockParavirtualizedAllocationOnGuest(v36[0], 1);
        *(_OWORD *)v37 = 0LL;
        v38 = 0;
        DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)v37, v20, 0x28u, 0LL, 0LL, 0LL);
        v31 = v37[0];
        if ( v37[0] )
        {
          v32 = *(_DWORD *)(a3 + 488);
          *((_BYTE *)v37[0] + 12) = 0;
          *((_DWORD *)v31 + 3) &= 0x1FFu;
          *(_QWORD *)v31 = 0LL;
          *((_DWORD *)v31 + 2) = v32;
          *((_QWORD *)v31 + 2) = 24LL;
          *((_BYTE *)v31 + 32) = 0;
          *((_DWORD *)v31 + 7) = *((_DWORD *)v26 + 5);
          *((_DWORD *)v31 + 6) = *((_DWORD *)this + 118);
          v33 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(v20, (unsigned __int8 *)v37[1], v37[0], v38);
          v27 = v33;
          if ( v33 < 0 )
          {
            WdLogSingleEntry1(2LL);
            WdLogGlobalForLineNumber = 11568;
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"VmBusSendUnlock2 failed: 0x%I64x",
              v27,
              0LL,
              0LL,
              0LL,
              0LL);
          }
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
        }
        else
        {
          DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v37);
          LODWORD(v27) = -1073741801;
        }
      }
      else
      {
        LODWORD(v27) = 0;
      }
    }
    else
    {
      LODWORD(v27) = -1073741811;
      WdLogSingleEntry3(2LL, this, v36[0], -1073741811LL);
      WdLogGlobalForLineNumber = 11524;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Device 0x%p does not match allocation 0x%p owner, returning 0x%I64x",
        (__int64)this,
        (__int64)v36[0],
        -1073741811LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry1(2LL);
    v34 = *(unsigned int *)(a4 + 4);
    WdLogGlobalForLineNumber = 11516;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid allocation handle: 0x%I64x",
      v34,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v27) = -1073741811;
  }
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE((struct _EX_RUNDOWN_REF **)v36);
  return (unsigned int)v27;
}
