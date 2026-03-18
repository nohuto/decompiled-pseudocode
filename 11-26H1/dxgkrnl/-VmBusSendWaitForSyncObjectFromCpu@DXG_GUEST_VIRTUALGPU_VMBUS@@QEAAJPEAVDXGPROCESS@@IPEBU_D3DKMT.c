/*
 * XREFs of ?VmBusSendWaitForSyncObjectFromCpu@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@IPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@E@Z @ 0x14042BC04
 * Callers:
 *     ?OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z @ 0x1401EE398 (-OpenSharedSurfForDevice@DXGDXGIKEYEDMUTEX@@AEAAJPEAVDXGDEVICE@@@Z.c)
 *     ?WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z @ 0x140284414 (-WaitFence@BLTQUEUE@@QEAAJ_KPEAVDXGDEVICE@@@Z.c)
 *     ?DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@HPEAX1@Z @ 0x14034BD5C (-DxgkWaitForSynchronizationObjectFromCpuInternal@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFRO.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x14000F7F0 (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPEAU_MDL@@@Z @ 0x14018B25C (-VmBusSendSyncMessageStatusReturn@DXG_VMBUS_CHANNEL_BASE@@QEAAJPEAEPEAUDXGKVMB_COMMAND_BASE@@IPE.c)
 *     ?GetHostProcess@DXGPROCESS@@QEAAIXZ @ 0x14018B2BC (-GetHostProcess@DXGPROCESS@@QEAAIXZ.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendWaitForSyncObjectFromCpu(
        struct DXGADAPTER **this,
        struct DXGPROCESS *a2,
        int a3,
        const struct _D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU *a4,
        unsigned __int8 a5)
{
  bool v5; // cf
  struct DXGPROCESS *v7; // rdi
  struct _KEVENT *hAsyncEvent; // r14
  NTSTATUS v11; // eax
  int v12; // edi
  UINT ObjectCount; // eax
  struct DXGKVMB_COMMAND_BASE *v14; // r13
  _DWORD *v15; // r10
  UINT i; // r8d
  __int64 v17; // rdi
  D3DKMT_HANDLE v18; // edx
  unsigned int v19; // eax
  int v20; // r11d
  __int64 v21; // rcx
  __int64 v22; // rax
  char *v24; // [rsp+50h] [rbp-B0h]
  PVOID Object; // [rsp+58h] [rbp-A8h] BYREF
  PVOID v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v28[24]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v29[32]; // [rsp+A0h] [rbp-60h] BYREF
  struct DXGKVMB_COMMAND_BASE *v30[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v31; // [rsp+D0h] [rbp-30h]

  v5 = a4->ObjectCount < 0x2AAA;
  v7 = a2;
  v26[0] = a2;
  if ( !v5 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 9650;
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"ObjectCount is too big", 9650LL, 0LL, 0LL, 0LL, 0LL);
    return 3221225485LL;
  }
  DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29, this[9], a5 == 0);
  if ( *((_DWORD *)this[9] + 50) == 1 )
  {
    hAsyncEvent = (struct _KEVENT *)a4->hAsyncEvent;
    memset(&Event, 0, sizeof(Event));
    if ( hAsyncEvent )
    {
      if ( (*((_DWORD *)v7 + 102) & 0x10) == 0 )
      {
        Object = 0LL;
        v11 = ObReferenceObjectByHandle(hAsyncEvent, 2u, (POBJECT_TYPE)ExEventObjectType, 1, &Object, 0LL);
        hAsyncEvent = (struct _KEVENT *)Object;
        v12 = v11;
        if ( v11 < 0 )
        {
          WdLogSingleEntry2(3LL, a4->hAsyncEvent, v11);
          WdLogGlobalForLineNumber = 9678;
LABEL_8:
          DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
          return (unsigned int)v12;
        }
        v7 = (struct DXGPROCESS *)v26[0];
      }
    }
    else
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      hAsyncEvent = &Event;
    }
    ObjectCount = a4->ObjectCount;
    *(_OWORD *)v30 = 0LL;
    v31 = 0;
    DXGVMBUSMESSAGE::InitializeMessage(
      (DXGVMBUSMESSAGE *)v30,
      (struct DXG_VMBUS_CHANNEL_BASE *)this,
      12 * ObjectCount + 56,
      0LL,
      0LL,
      0LL);
    v14 = v30[0];
    if ( !v30[0] )
    {
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 9703;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Failed to allocate memory for DXGKVMB_COMMAND_WAITFORSYNCOBJECTFROMCPU",
        9703LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v12 = -1073741801;
      goto LABEL_13;
    }
    *((_BYTE *)v30[0] + 12) = 0;
    *((_DWORD *)v14 + 3) &= 0x1FFu;
    *(_QWORD *)v14 = 0LL;
    *((_DWORD *)v14 + 2) = 0;
    *((_QWORD *)v14 + 2) = 22LL;
    *((_DWORD *)v14 + 2) = DXGPROCESS::GetHostProcess(v7);
    *((_DWORD *)v14 + 8) = a4->Flags.0;
    *((_DWORD *)v14 + 6) = a3;
    *((_DWORD *)v14 + 7) = a4->ObjectCount;
    *((_QWORD *)v14 + 5) = hAsyncEvent;
    *((_BYTE *)v14 + 48) = hAsyncEvent != &Event;
    v24 = (char *)v14 + 4 * a4->ObjectCount + 56;
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v28, (struct _KTHREAD **)v7);
    v15 = v26[0];
    for ( i = 0; i < a4->ObjectCount; ++i )
    {
      v17 = i;
      v18 = a4->ObjectHandleArray[i];
      if ( v18 )
      {
        v19 = (v18 >> 6) & 0xFFFFFF;
        if ( v19 >= v15[74] )
          goto LABEL_30;
        v20 = *(_DWORD *)(*((_QWORD *)v15 + 35) + 16LL * v19 + 8);
        if ( ((v18 >> 25) & 0x60) != (*(_BYTE *)(*((_QWORD *)v15 + 35) + 16LL * v19 + 8) & 0x60)
          || (v20 & 0x2000) != 0
          || (v20 & 0x1F) == 0 )
        {
          goto LABEL_30;
        }
        v21 = *((_QWORD *)v15 + 35);
        if ( (*(_BYTE *)(v21 + 16LL * v19 + 8) & 0x1F) != 0xB )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 318;
          DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
LABEL_30:
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 9726;
LABEL_31:
          v12 = -1073741811;
          DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
          goto LABEL_13;
        }
        v22 = *(_QWORD *)(v21 + 16LL * v19);
        if ( !v22 )
          goto LABEL_30;
        *((_DWORD *)v14 + i + 14) = *(_DWORD *)(v22 + 44);
      }
      else if ( i )
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 9740;
        goto LABEL_31;
      }
      *(_QWORD *)&v24[8 * v17] = a4->FenceValueArray[v17];
    }
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v28);
    v12 = DXG_VMBUS_CHANNEL_BASE::VmBusSendSyncMessageStatusReturn(
            (DXG_VMBUS_CHANNEL_BASE *)this,
            (unsigned __int8 *)v30[1],
            v30[0],
            v31);
    if ( v12 < 0 )
      goto LABEL_13;
    if ( !a4->hAsyncEvent )
    {
      v26[0] = (char *)this[9] + 3136;
      v26[1] = hAsyncEvent;
      if ( !KeWaitForMultipleObjects(2u, v26, WaitAny, Executive, 0, 0, 0LL, 0LL) )
      {
        WdLogSingleEntry1(4LL);
        WdLogGlobalForLineNumber = 9764;
        v12 = -1073741130;
LABEL_13:
        if ( hAsyncEvent )
        {
          if ( hAsyncEvent != &Event )
            ObfDereferenceObject(hAsyncEvent);
        }
        goto LABEL_16;
      }
      v12 = 0;
    }
LABEL_16:
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)v30);
    goto LABEL_8;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 9657;
  DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v29);
  return 3221226166LL;
}
