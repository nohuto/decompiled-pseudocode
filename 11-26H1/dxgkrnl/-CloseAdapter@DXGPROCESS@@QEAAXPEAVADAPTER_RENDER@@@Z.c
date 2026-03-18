/*
 * XREFs of ?CloseAdapter@DXGPROCESS@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1402E7344
 * Callers:
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1402E6274 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z @ 0x140371584 (-OpenAdapter@DXGPROCESS@@QEAAJPEAVADAPTER_RENDER@@_N@Z.c)
 * Callees:
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREACCESS@@QEAA@XZ @ 0x140017110 (--1COREACCESS@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z @ 0x140293040 (-AcquireCoreResourceShared@DXGADAPTER@@AEAAXPEBD@Z.c)
 *     ?DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z @ 0x1402E75F4 (-DestroyAdapterInfo@DXGPROCESS@@QEAAXPEAUDXGPROCESS_RENDER_ADAPTER_INFO@@@Z.c)
 */

void __fastcall DXGPROCESS::CloseAdapter(DXGPROCESS *this, struct ADAPTER_RENDER *a2)
{
  volatile signed __int64 *v2; // rax
  char *v5; // rsi
  __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  _BYTE v10[8]; // [rsp+60h] [rbp-19h] BYREF
  __int64 v11; // [rsp+68h] [rbp-11h]
  DXGADAPTER *v12; // [rsp+70h] [rbp-9h]
  char v13; // [rsp+78h] [rbp-1h]
  __int64 v14; // [rsp+80h] [rbp+7h]

  v2 = (volatile signed __int64 *)*((_QWORD *)a2 + 2);
  v12 = (DXGADAPTER *)v2;
  v13 = 0;
  v14 = 0LL;
  if ( v2 )
  {
    _InterlockedIncrement64(v2 + 3);
    v11 = -1LL;
  }
  v5 = (char *)a2 + 72;
  while ( 1 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v5, 0LL);
    *((_QWORD *)v5 + 1) = KeGetCurrentThread();
    v6 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * *(unsigned int *)(*((_QWORD *)a2 + 2) + 240LL));
    if ( !v6 )
      break;
    if ( !*(_DWORD *)(v6 + 56) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2857;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pAdapterInfo->AdapterInfoReferenceCount > 0",
        2857LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*(_DWORD *)(v6 + 56))-- != 1 )
      break;
    if ( a2 != *(struct ADAPTER_RENDER **)(v6 + 80) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2860;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pRenderCore == pAdapterInfo->pRenderCore",
        2860LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( !*(_BYTE *)(v6 + 109) || DXGADAPTER::IsCoreResourceSharedOwner(*((DXGADAPTER **)a2 + 2)) )
    {
      DXGPROCESS::DestroyAdapterInfo(this, (struct DXGPROCESS_RENDER_ADAPTER_INFO *)v6);
      break;
    }
    ++*(_DWORD *)(v6 + 56);
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    if ( v13 )
    {
      WdLogSingleEntry5(0LL, 275LL, 4LL, v10, 0LL, 0LL);
      WdLogGlobalForLineNumber = 7648;
    }
    if ( KeGetCurrentThread() != *((struct _KTHREAD **)v12 + 23) )
    {
      if ( !KeReadStateEvent((PRKEVENT)v12 + 2) )
      {
        if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v9, (__int64)"g");
        KeWaitForSingleObject((char *)v12 + 48, Executive, 0, 0, 0LL);
      }
      DXGADAPTER::AcquireCoreResourceShared(v12, 0LL);
    }
    v14 = 0LL;
    v13 = 1;
  }
  *((_QWORD *)a2 + 10) = 0LL;
  ExReleasePushLockExclusiveEx(v5, 0LL);
  KeLeaveCriticalRegion();
  COREACCESS::~COREACCESS((COREACCESS *)v10, v8);
}
