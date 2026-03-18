/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140224650
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x14000E320 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1400808AC (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140084000 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1401F6460 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1401F7AB8 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1402E6CB0 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  struct DXGADAPTER_VMBUS_PACKET *v1; // r12
  __int64 v2; // rax
  __int64 v3; // r13
  char v4; // cl
  unsigned int v5; // r15d
  bool v6; // si
  __int64 v7; // rax
  const wchar_t *v8; // r9
  __int64 v9; // r14
  unsigned int v10; // eax
  bool v11; // di
  int v12; // eax
  DXGFASTMUTEX *v13; // rbx
  DXGPROCESSVM *v14; // rbx
  __int64 v15; // rax
  _QWORD *v16; // rsi
  unsigned int v17; // eax
  DXGPROCESSVM *v18; // rax
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // r8
  char v22; // al
  int v23; // edx
  __int64 v24; // rbx
  __int64 v25; // rbx
  struct VMBPACKETCOMPLETION__ *v26; // rcx
  int v28; // [rsp+6Ch] [rbp-35h] BYREF
  DXGPROCESSVM *v29; // [rsp+70h] [rbp-31h] BYREF
  _BYTE v30[24]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v31; // [rsp+90h] [rbp-11h] BYREF
  int v32; // [rsp+98h] [rbp-9h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-1h] BYREF

  v1 = a1;
  v31 = (__int64)a1;
  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return 0;
  v4 = *(_BYTE *)(v2 + 562);
  v5 = 0;
  v29 = 0LL;
  v6 = 0;
  if ( (v4 & 0x10) != 0 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 7379;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid process flag, bWslProcess is not supported",
      7379LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v31 = 58001484LL;
    v32 = 0;
    RtlLogUnexpectedCodepath(&v31);
    return 0;
  }
  if ( (v4 & 1) != 0 && (v4 & 2) != 0 || v4 & 1 | ((v4 & 2) != 0) && (v4 & 4) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v7 = 7388LL;
    v8 = L"Invalid process flags";
LABEL_9:
    WdLogGlobalForLineNumber = v7;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v8, v7, 0LL, 0LL, 0LL, 0LL);
    return 0;
  }
  v9 = *((_QWORD *)v1 + 12);
  v10 = *(_DWORD *)(*(_QWORD *)(v9 + 592) + 392LL);
  if ( v10 < 0x1F )
  {
    v11 = 0;
    if ( v10 < 0x1B )
      goto LABEL_17;
  }
  else
  {
    v11 = (v4 & 0x10) != 0;
  }
  v6 = (v4 & 8) != 0;
  if ( ((v4 & 8) != 0 || v11) && (v4 & 7) != 0 )
  {
    WdLogSingleEntry0(2LL);
    v7 = 7407LL;
    v8 = L"Invalid process Linux/WSL flags";
    goto LABEL_9;
  }
LABEL_17:
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v9 + 592)) < 0 )
  {
    WdLogSingleEntry0(2LL);
    v7 = 7415LL;
    v8 = L"To  many VM processes created";
    goto LABEL_9;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  v12 = DXGPROCESS::CreateDxgProcess(&v29, (struct DXGPROCESS *)v9, *(struct DXGPROCESS **)(v3 + 24), 0, 0LL);
  v28 = v12;
  if ( v12 < 0 )
  {
    v25 = v12;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 7518;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VM process: 0x%I64x",
      v25,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    v13 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal() + 376);
    DXGFASTMUTEX::Acquire(v13);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v9);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v13);
    v14 = v29;
    if ( v6 )
      *((_DWORD *)v29 + 102) |= 0x20u;
    if ( v11 )
    {
      v15 = *((_QWORD *)v14 + 8);
      *((_DWORD *)v14 + 102) |= 0x10u;
      *(_BYTE *)(v15 + 136) = 1;
    }
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
      (DXGHANDLETABLELOCKEXCLUSIVE *)v30,
      (struct DXGPROCESS *)v9);
    v16 = (_QWORD *)(v9 + 280);
    v17 = HMGRTABLE::AllocHandle(v9 + 280, v14, 12LL);
    v5 = v17;
    if ( !v17 )
    {
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 7456;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate process handle: 0x%I64x",
        7456LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGPROCESS::DestroyDxgProcess(v14);
      KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
      return 0;
    }
    v18 = (DXGPROCESSVM *)((v17 >> 6) & 0xFFFFFF);
    v19 = (unsigned int)v18;
    v29 = v18;
    if ( (unsigned int)v18 < *(_DWORD *)(v9 + 296) )
    {
      v20 = *(_DWORD *)(*v16 + 16LL * (unsigned int)v18 + 8);
      if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(*v16 + 16LL * (unsigned int)v18 + 8) & 0x60)
        && (v20 & 0x2000) == 0
        && (v20 & 0x1F) != 0 )
      {
        *(_DWORD *)(16LL * (unsigned int)v18 + *v16 + 8) |= 0x2000u;
      }
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v30);
    *((_DWORD *)v14 + 159) = v5;
    DXGPROCESSVM::SetVmProcessName(v14, (unsigned __int16 *)(v3 + 40));
    *(_QWORD *)(*((_QWORD *)v14 + 8) + 88LL) = *(_QWORD *)(v3 + 32);
    v22 = *(_BYTE *)(v3 + 562);
    if ( (v22 & 2) != 0 )
    {
      *((_DWORD *)v14 + 102) |= 4u;
    }
    else if ( (v22 & 1) != 0 )
    {
      *((_DWORD *)v14 + 102) |= 1u;
    }
    else if ( (v22 & 4) != 0 )
    {
      *((_DWORD *)v14 + 102) |= 8u;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        *((_QWORD *)v14 + 8),
        &EventCreateDxgProcessVm,
        v21,
        v14,
        *(_QWORD *)(*((_QWORD *)v14 + 8) + 80LL),
        *((_DWORD *)v14 + 122),
        *((_DWORD *)v14 + 102),
        *(_QWORD *)(*((_QWORD *)v14 + 8) + 88LL),
        *((_QWORD *)v14 + 75),
        *(_QWORD *)(*((_QWORD *)v14 + 74) + 592LL),
        v3 + 40);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 248));
    if ( (unsigned int)v29 < *(_DWORD *)(v9 + 296) )
    {
      v23 = *(_DWORD *)(*v16 + 16 * v19 + 8);
      if ( ((v5 >> 25) & 0x60) == (v23 & 0x60) && (v23 & 0x1F) != 0 )
      {
        v24 = 16LL * ((v5 >> 6) & 0xFFFFFF);
        if ( (*(_DWORD *)(*v16 + v24 + 8) & 0x2000) == 0 )
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
        *(_DWORD *)(*v16 + v24 + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v9 + 256) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 248, 0LL);
    KeLeaveCriticalRegion();
    v1 = (struct DXGADAPTER_VMBUS_PACKET *)v31;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( v28 >= 0 )
  {
    v26 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)v1 + 16);
    v28 = v5;
    VmBusCompletePacket(v26, &v28, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v9 + 592));
  return 0;
}
