/*
 * XREFs of ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x140007F98
 * Callers:
 *     DxgkReleaseKeyedMutex @ 0x1401FFE30 (DxgkReleaseKeyedMutex.c)
 *     DxgkReleaseKeyedMutex2 @ 0x140200110 (DxgkReleaseKeyedMutex2.c)
 *     ?AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z @ 0x1402B20F4 (-AcquireSync@DXGKEYEDMUTEX@@SAJI_KHPEAT_LARGE_INTEGER@@PEA_KPEAXI2_N@Z.c)
 *     ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1403B7534 (-SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 * Callees:
 *     ?LogEvent@DXGPUSHLOCK@@IEAAXXZ @ 0x140009804 (-LogEvent@DXGPUSHLOCK@@IEAAXXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

DXGKEYEDMUTEXBYHANDLE *__fastcall DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE(
        DXGKEYEDMUTEXBYHANDLE *this,
        unsigned int a2,
        struct _KTHREAD **a3,
        struct DXGKEYEDMUTEX **a4)
{
  volatile signed __int32 *v4; // rbx
  unsigned int v9; // eax
  int v10; // r8d
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdx
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d

  v4 = (volatile signed __int32 *)(a3 + 31);
  if ( a3 != (struct _KTHREAD **)-248LL && a3[32] == KeGetCurrentThread() )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1495;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          1495,
          v14,
          v15,
          0,
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
  KeEnterCriticalRegion();
  if ( !(unsigned __int8)ExTryAcquirePushLockSharedEx(v4, 0LL) )
  {
    DXGPUSHLOCK::LogEvent((DXGPUSHLOCK *)v4);
    ExAcquirePushLockSharedEx(v4, 0LL);
  }
  _InterlockedIncrement(v4 + 4);
  v9 = (a2 >> 6) & 0xFFFFFF;
  if ( v9 >= *((_DWORD *)a3 + 74) )
    goto LABEL_14;
  v10 = *((_DWORD *)a3[35] + 4 * v9 + 2);
  if ( ((a2 >> 25) & 0x60) != (*((_BYTE *)a3[35] + 16 * v9 + 8) & 0x60) || (v10 & 0x2000) != 0 || (v10 & 0x1F) == 0 )
    goto LABEL_14;
  v11 = a3[35];
  if ( (*((_BYTE *)v11 + 16 * v9 + 8) & 0x1F) != 9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 318;
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
      McTemplateK0zqqzxxxxx_EtwWriteTransfer(
        318,
        v16,
        v17,
        0,
        0,
        -1,
        (__int64)L"Handle type mismatch",
        318LL,
        0LL,
        0LL,
        0LL,
        0LL);
LABEL_14:
    *(_QWORD *)this = 0LL;
    goto LABEL_13;
  }
  v12 = *((_QWORD *)v11 + 2 * v9);
  *(_QWORD *)this = v12;
  if ( v12 && _InterlockedAdd64((volatile signed __int64 *)(v12 + 24), 1uLL) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 975;
    DxgkLogInternalTriageEvent(0, 262146, -1, (unsigned int)L"NewReferenceCount > 0", 975LL, 0LL, 0LL, 0LL, 0LL);
  }
LABEL_13:
  *a4 = *(struct DXGKEYEDMUTEX **)this;
  _InterlockedDecrement(v4 + 4);
  ExReleasePushLockSharedEx(v4, 0LL);
  KeLeaveCriticalRegion();
  return this;
}
