/*
 * XREFs of ?CreatePeriodicFrameNotification@BLTQUEUE@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x14028270C
 * Callers:
 *     ?CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_KIPEAU_D3DDDI_SYNCHRONIZATIONOBJECTINFO2@@PEA_K@Z @ 0x1402829C8 (-CreatePeriodicFrameNotification@DXGDODPRESENT@@QEAAJPEAVDXGADAPTER@@PEAU_VIDSCH_SYNC_OBJECT@@_K.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x140017080 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x14002EF70 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

__int64 __fastcall BLTQUEUE::CreatePeriodicFrameNotification(
        struct _KTHREAD **this,
        struct DXGADAPTER *a2,
        struct _VIDSCH_SYNC_OBJECT *a3,
        __int64 a4,
        unsigned int a5,
        struct _D3DDDI_SYNCHRONIZATIONOBJECTINFO2 *a6,
        unsigned __int64 *a7)
{
  unsigned int v10; // ebx
  __int64 FenceValueCPUVirtualAddress; // rbp
  unsigned __int64 v12; // rcx
  __int64 i; // rsi
  __int64 v14; // rsi
  struct _KTHREAD *v15; // rax
  __int64 v16; // rdx
  struct _KTHREAD *v17; // rcx
  __int64 v18; // rcx
  _BYTE v20[32]; // [rsp+50h] [rbp-38h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, this + 373, 0);
  v10 = 0;
  *a7 = 0LL;
  if ( !this[377] )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 4565;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"BltQueue ran out of unique bits for periodic monitored fence ID assignment",
      4565LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v10 = -1073741801;
LABEL_13:
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
    return v10;
  }
  FenceValueCPUVirtualAddress = (__int64)a6->MonitoredFence.FenceValueCPUVirtualAddress;
  if ( FenceValueCPUVirtualAddress >= 0
    && FenceValueCPUVirtualAddress <= (unsigned int)(10000000 * *((_DWORD *)this + 97)) / *((_DWORD *)this + 96) )
  {
    DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v20);
    v12 = 0LL;
    for ( i = 0LL; ; ++i )
    {
      if ( v12 >= 0x200 )
        goto LABEL_14;
      if ( !*(_QWORD *)((char *)this[379] + v12 + 48) )
        break;
      v12 += 64LL;
    }
    v14 = i << 6;
    *(_QWORD *)((char *)this[379] + v14) = ExAllocateTimer(0LL, 0LL, 4LL);
    v15 = this[379];
    if ( !*(_QWORD *)((char *)v15 + v14) )
    {
LABEL_14:
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4609;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to allocate DOD periodic frame notification",
        4609LL,
        0LL,
        0LL,
        0LL,
        0LL);
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
      return 3221225495LL;
    }
    DXGADAPTER_REFERENCE::Assign((struct _KTHREAD *)((char *)v15 + v14 + 16), a2);
    v16 = 0LL;
    *(_QWORD *)((char *)this[379] + v14 + 8) = a3;
    *(_QWORD *)((char *)this[379] + v14 + 32) = FenceValueCPUVirtualAddress;
    *(_QWORD *)((char *)this[379] + v14 + 40) = 0LL;
    v17 = this[377];
    this[377] = (struct _KTHREAD *)((char *)v17 + 1);
    *(_QWORD *)((char *)this[379] + v14 + 48) = v17;
    do
    {
      v18 = v14 + v16++;
      *((_BYTE *)this[379] + v18 + 56) = 0;
    }
    while ( v16 < 2 );
    ++*((_DWORD *)this + 756);
    *a7 = *(_QWORD *)((char *)this[379] + v14 + 48);
    goto LABEL_13;
  }
  WdLogSingleEntry1(2LL);
  WdLogGlobalForLineNumber = 4575;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to create DOD periodic frame notification, invalid offset: %lld",
    FenceValueCPUVirtualAddress,
    0LL,
    0LL,
    0LL,
    0LL);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20);
  return 3221225485LL;
}
