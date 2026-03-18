/*
 * XREFs of ?SetDWMTargetVsync@BLTQUEUE@@QEAAXI@Z @ 0x1400534B8
 * Callers:
 *     ?DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z @ 0x14029FF9C (-DxgkSetSyncRefreshCountWaitTargetInternal@@YAJIIII@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z @ 0x1402A1330 (-SetSyncRefreshCountWaitTarget@ADAPTER_DISPLAY@@QEAAJIIIPEAE@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x140009790 (-AcquireExclusive@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0qqqqq_EtwWriteTransfer @ 0x140012A50 (McTemplateK0qqqqq_EtwWriteTransfer.c)
 */

void __fastcall BLTQUEUE::SetDWMTargetVsync(BLTQUEUE *this, unsigned int a2)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  int v6; // edx
  int v7; // r8d
  _BYTE v8[8]; // [rsp+60h] [rbp-28h] BYREF
  char *v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]

  v10 = 0;
  v9 = (char *)this + 424;
  if ( this != (BLTQUEUE *)-424LL && *((struct _KTHREAD **)this + 54) == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          1495,
          v6,
          v7,
          0LL,
          2,
          -1,
          (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
          1495LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  DXGAUTOPUSHLOCK::AcquireExclusive((DXGAUTOPUSHLOCK *)v8);
  KeResetEvent(*((PRKEVENT *)this + 50));
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
    McTemplateK0qqqqq_EtwWriteTransfer(
      v4,
      &EventDWMVsyncCountWait,
      v5,
      a2,
      *((_DWORD *)this + 118),
      0,
      0,
      *((_DWORD *)this + 34));
  *((_DWORD *)this + 102) = a2;
  if ( a2 <= *((_DWORD *)this + 118) && a2 )
    KeSetEvent(*((PRKEVENT *)this + 50), 0, 0);
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8);
}
