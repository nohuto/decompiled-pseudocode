/*
 * XREFs of ?SignalVSyncEvent@BLTQUEUE@@AEAAXXZ @ 0x140066AE8
 * Callers:
 *     ?ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z @ 0x140446230 (-ProcessBltQueue@BLTQUEUE@@AEAAJW4_QUEUEEVENT@1@PEAU__BLTWAITINFO@1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Acquire@DXGAUTOSPINLOCK@@QEAAXXZ @ 0x14003BB1C (-Acquire@DXGAUTOSPINLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOSPINLOCK@@QEAA@XZ @ 0x14003CDA8 (--1DXGAUTOSPINLOCK@@QEAA@XZ.c)
 *     ?TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z @ 0x14003E84C (-TriggerRemoteVsync@HOSTVMMONITORMAPPING@@QEAAXU_LUID@@IJ_K@Z.c)
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1400423A0 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z @ 0x140042610 (-LogVsyncInterval@BLTQUEUE@@AEAAXT_LARGE_INTEGER@@0@Z.c)
 *     Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline @ 0x14004B5C4 (Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x14005B3AC (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     ?QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z @ 0x14006680C (-QuantizeVSync@BLTQUEUE@@QEAAXKPEA_J0@Z.c)
 *     Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline @ 0x14006783C (Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline @ 0x14009B7EC (Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline.c)
 *     McTemplateK0xqqiqqq_EtwWriteTransfer @ 0x14009B844 (McTemplateK0xqqiqqq_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall BLTQUEUE::SignalVSyncEvent(BLTQUEUE *this)
{
  __int64 v2; // rbx
  _DWORD *v3; // rbx
  unsigned int v4; // esi
  __int64 v5; // rcx
  __int64 v6; // r8
  struct DXGGLOBAL *Global; // rax
  bool v8; // cc
  LARGE_INTEGER v9; // rbx
  __int64 v10; // r8
  struct DXGGLOBAL *v11; // rax
  int v12; // r14d
  char LowPart; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  char v16[8]; // [rsp+20h] [rbp-59h]
  _BYTE v17[24]; // [rsp+60h] [rbp-19h] BYREF
  _BYTE v18[8]; // [rsp+78h] [rbp-1h] BYREF
  char *v19; // [rsp+80h] [rbp+7h]
  char v20; // [rsp+A0h] [rbp+27h]
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+E0h] [rbp+67h] BYREF
  __int64 QuadPart; // [rsp+E8h] [rbp+6Fh] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, (struct _KTHREAD **)this + 53, 0);
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v17);
  if ( (unsigned int)Feature_SafeDodBltQueueAccesses__private_IsEnabledDeviceUsageNoInline() )
  {
    v20 = 0;
    v19 = (char *)this + 456;
    if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
      DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v18);
    PerformanceFrequency.QuadPart = 0LL;
    QuadPart = KeQueryPerformanceCounter(&PerformanceFrequency).QuadPart;
    v2 = QuadPart;
    BLTQUEUE::LogVsyncInterval(this, (union _LARGE_INTEGER)QuadPart, PerformanceFrequency);
    *((_QWORD *)this + 61) = v2;
    v3 = (_DWORD *)((char *)this + 136);
    if ( *((_DWORD *)this + 34) != 1 )
    {
      if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v18);
      BLTQUEUE::QuantizeVSync(this, 0, (__int64 *)&PerformanceFrequency, &QuadPart);
      if ( (unsigned int)Feature_DodVsyncEnsureLocked__private_IsEnabledDeviceUsageNoInline() )
        DXGAUTOSPINLOCK::Acquire((DXGAUTOSPINLOCK *)v18);
    }
    v4 = *((_DWORD *)this + 118);
    DXGAUTOSPINLOCK::~DXGAUTOSPINLOCK((DXGAUTOSPINLOCK *)v18);
    if ( *v3 != 1 )
    {
      if ( *((_DWORD *)this + 103) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            v5,
            &EventDWMVsyncSignal,
            v6,
            *((_DWORD *)this + 102),
            v4,
            0,
            *((_DWORD *)this + 103),
            *v3);
        KePulseEvent(*((PRKEVENT *)this + 49), 0, 0);
        if ( *(_QWORD *)this )
        {
          Global = DXGGLOBAL::GetGlobal();
          HOSTVMMONITORMAPPING::TriggerRemoteVsync(
            (KSPIN_LOCK *)Global + 38166,
            *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL) + 412LL),
            *((_DWORD *)this + 65),
            0,
            0LL);
        }
      }
      if ( *((_QWORD *)this + 50) )
      {
        v8 = *((_DWORD *)this + 102) <= v4;
        goto LABEL_27;
      }
    }
  }
  else
  {
    PerformanceFrequency.QuadPart = 0LL;
    v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
    BLTQUEUE::LogVsyncInterval(this, v9, PerformanceFrequency);
    *((LARGE_INTEGER *)this + 61) = v9;
    v3 = (_DWORD *)((char *)this + 136);
    if ( *((_DWORD *)this + 34) != 1 )
    {
      BLTQUEUE::QuantizeVSync(this, 0, (__int64 *)&PerformanceFrequency, (__int64 *)this + 61);
      if ( *((_DWORD *)this + 103) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0qqqqq_EtwWriteTransfer(
            *((unsigned int *)this + 118),
            &EventDWMVsyncSignal,
            v10,
            *((_DWORD *)this + 102),
            *((_DWORD *)this + 118),
            0,
            *((_DWORD *)this + 103),
            *v3);
        KePulseEvent(*((PRKEVENT *)this + 49), 0, 0);
        if ( *(_QWORD *)this )
        {
          v11 = DXGGLOBAL::GetGlobal();
          HOSTVMMONITORMAPPING::TriggerRemoteVsync(
            (KSPIN_LOCK *)v11 + 38166,
            *(struct _LUID *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL) + 412LL),
            *((_DWORD *)this + 65),
            0,
            0LL);
        }
      }
      if ( *((_QWORD *)this + 50) )
      {
        v8 = *((_DWORD *)this + 102) <= *((_DWORD *)this + 118);
LABEL_27:
        if ( v8 )
        {
          if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
            McTemplateK0q_EtwWriteTransfer(v5, (__int64)&EventBltQueueSignalPrivateDwmVSync);
          KeSetEvent(*((PRKEVENT *)this + 50), 0, 0);
        }
      }
    }
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17);
  if ( *v3 != 2 && (*((_DWORD *)this + 268) & 2) != 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  if ( (unsigned int)Feature_RemoteVsyncWaiterFix__private_IsEnabledDeviceUsageNoInline() )
  {
    v12 = *((_DWORD *)this + 103);
    if ( *(_QWORD *)this )
      *((_DWORD *)this + 103) = *((_DWORD *)this + 756)
                              + DXGADAPTER::NumberOfVSyncWaiter(
                                  *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL),
                                  *((_DWORD *)this + 64));
    else
      *((_DWORD *)this + 103) = 0;
    if ( bTracingEnabled )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          McTemplateK0xqqiqqq_EtwWriteTransfer(
            *((_DWORD *)this + 103),
            *((_DWORD *)this + 64),
            *((_DWORD *)this + 65),
            *((_QWORD *)this + 31),
            *((_DWORD *)this + 65),
            *((_DWORD *)this + 64),
            LowPart,
            v12,
            *((_DWORD *)this + 103),
            *((_DWORD *)this + 104));
      }
    }
  }
  else
  {
    if ( *(_QWORD *)this )
      *((_DWORD *)this + 103) = *((_DWORD *)this + 756)
                              + DXGADAPTER::NumberOfVSyncWaiter(
                                  *(DXGADAPTER **)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL),
                                  *((_DWORD *)this + 64));
    if ( bTracingEnabled )
    {
      if ( *(_QWORD *)this )
      {
        KeQueryPerformanceCounter(0LL);
        if ( bTracingEnabled )
        {
          if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
          {
            *(_DWORD *)v16 = *((_DWORD *)this + 65);
            McTemplateK0pqxqqipqx_EtwWriteTransfer(
              *(_QWORD *)this,
              v14,
              v15,
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 88LL) + 16LL),
              *(_QWORD *)v16);
          }
        }
      }
    }
  }
}
