/*
 * XREFs of DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0
 * Callers:
 *     ?DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z @ 0x14031E890 (-DxgkGetMonitorDescriptor@@YAJU_LUID@@IEIPEAIPEAE@Z.c)
 *     ?DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z @ 0x14031F390 (-DxgkGetMonitorDeviceObject@@YAJPEBU_LUID@@IPEAPEAU_FILE_OBJECT@@PEAPEAU_DEVICE_OBJECT@@@Z.c)
 *     DxgkGetMonitorInternalInfo @ 0x140437F40 (DxgkGetMonitorInternalInfo.c)
 * Callees:
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C890 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000D0FC (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z @ 0x14031FD8C (-FindAdapterAndSourceForHash@DXGADAPTERSOURCEHASH@@QEAAJIPEAU_LUID@@PEAI@Z.c)
 *     DxgkIsAdapterVirtualTopologyEnabled @ 0x14031FE84 (DxgkIsAdapterVirtualTopologyEnabled.c)
 *     DxgkIsVirtualizationDisabledForTarget @ 0x1403200E0 (DxgkIsVirtualizationDisabledForTarget.c)
 */

__int64 __fastcall DxgkConvertLegacyQDCAdapterAndIdToActual(
        struct _LUID *a1,
        unsigned int a2,
        struct _LUID *a3,
        unsigned int *a4)
{
  struct DXGGLOBAL *Global; // rax
  DXGADAPTERSOURCEHASH *v9; // rbp
  DXGFASTMUTEX *v10; // rcx
  __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 result; // rax
  struct _LUID v15; // rcx
  __int64 v16; // rbx
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  int HashBitMask; // eax
  struct _LUID v21; // rbx
  __int64 v22; // rax
  volatile signed __int64 *v23; // [rsp+50h] [rbp-48h]
  unsigned int v24; // [rsp+A8h] [rbp+10h] BYREF
  struct _LUID v25; // [rsp+B0h] [rbp+18h] BYREF

  *a3 = *a1;
  *a4 = a2;
  Global = DXGGLOBAL::GetGlobal();
  v9 = (struct DXGGLOBAL *)((char *)Global + 1400);
  v10 = (struct DXGGLOBAL *)((char *)Global + 1400);
  v23 = (volatile signed __int64 *)((char *)Global + 1400);
  if ( Global == (struct DXGGLOBAL *)-1400LL )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pMutex != NULL", 628LL, 0LL, 0LL, 0LL, 0LL);
    v10 = (DXGFASTMUTEX *)v23;
  }
  if ( DXGFASTMUTEX::IsOwner(v10) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_pMutex->IsOwner()", 635LL, 0LL, 0LL, 0LL, 0LL);
  }
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v23 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v23 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 504LL, 0LL, 0LL, 0LL, 0LL);
    }
    ++*((_DWORD *)v23 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v23 + 1, 0LL) )
    {
      if ( bTracingEnabled && *((_DWORD *)v23 + 9) != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v11, (__int64)"g");
      _InterlockedIncrement64(v23 + 2);
      ExAcquirePushLockExclusiveEx(v23 + 1, 0LL);
    }
    if ( *((_QWORD *)v23 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_OwningThread", 530LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( *((_DWORD *)v23 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 == m_OwnerAcquireCount", 531LL, 0LL, 0LL, 0LL, 0LL);
    }
    *((_QWORD *)v23 + 3) = KeGetCurrentThread();
    *((_DWORD *)v23 + 8) = 1;
  }
  v12 = 0xFFFFFFFF >> (32 - *((_BYTE *)v9 + 68)) << (32 - *((_BYTE *)v9 + 68));
  if ( *((struct _KTHREAD **)v23 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v23 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_OwnerAcquireCount > 0", 556LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (*((_DWORD *)v23 + 8))-- == 1 )
  {
    *((_QWORD *)v23 + 3) = 0LL;
    ExReleasePushLockExclusiveEx(v23 + 1, 0LL);
  }
  KeLeaveCriticalRegion();
  if ( (v12 & a2) == 0 )
    return 0LL;
  v15 = *a1;
  v24 = 0;
  LODWORD(result) = DxgkIsAdapterVirtualTopologyEnabled(v15);
  v16 = (int)result;
  if ( (int)result < 0 )
    return (unsigned int)result;
  if ( !v24 )
    return 0LL;
  v25 = 0LL;
  v17 = a2 >> DXGADAPTERSOURCEHASH::GetHashBitShift(v9);
  if ( (int)DXGADAPTERSOURCEHASH::FindAdapterAndSourceForHash(v9, v17, &v25, &v24) < 0 )
  {
    v22 = WdLogNewEntry5_WdTrace(v19, v18);
    *(_QWORD *)(v22 + 24) = v17;
    *(_QWORD *)(v22 + 32) = v16;
    WdLogGlobalForLineNumber = 9230;
    return 0LL;
  }
  LOBYTE(v24) = 0;
  HashBitMask = DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
  v21 = v25;
  result = DxgkIsVirtualizationDisabledForTarget(v25, a2 & ~HashBitMask, 0LL, 0LL, 0LL, 0LL);
  if ( (int)result >= 0 )
  {
    if ( !(_BYTE)v24 )
    {
      *a3 = v21;
      *a4 = a2 & ~(unsigned int)DXGADAPTERSOURCEHASH::GetHashBitMask(v9);
    }
    return 0LL;
  }
  return result;
}
