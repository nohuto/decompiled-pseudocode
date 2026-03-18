/*
 * XREFs of ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000D0FC
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 *     ?ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ @ 0x140318FCC (-ConvertLegacyQDCDWMClonePath@CCD_TOPOLOGY@@QEAAJXZ.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x14031F6F0 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x14033F860 (DxgkGetAllMonitorDevicesFromSessionView.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitMask(DXGADAPTERSOURCEHASH *this)
{
  DXGFASTMUTEX *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  DXGFASTMUTEX *v10; // rbx
  int v11; // ecx
  unsigned int v12; // edi
  int v15; // edx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  int v19; // edx
  int v20; // r8d
  int v21; // edx
  int v22; // r8d
  DXGFASTMUTEX *v23; // [rsp+60h] [rbp-38h]
  char v24; // [rsp+68h] [rbp-30h]

  v23 = this;
  v24 = 0;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          628,
          v19,
          v20,
          0,
          2,
          -1,
          (__int64)L"m_pMutex != NULL",
          628LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( DXGFASTMUTEX::IsOwner(v23) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          635,
          v21,
          v22,
          0,
          2,
          -1,
          (__int64)L"!m_pMutex->IsOwner()",
          635LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  v2 = v23;
  KeEnterCriticalRegion();
  if ( *((struct _KTHREAD **)v2 + 3) == KeGetCurrentThread() )
  {
    if ( *((int *)v2 + 8) <= 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 504;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            504,
            v17,
            v18,
            0,
            2,
            -1,
            (__int64)L"m_OwnerAcquireCount > 0",
            504LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    ++*((_DWORD *)v2 + 8);
  }
  else
  {
    if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx((char *)v2 + 8, 0LL) )
    {
      if ( bTracingEnabled )
      {
        v5 = *((unsigned int *)v2 + 9);
        if ( (_DWORD)v5 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
          McTemplateK0q_EtwWriteTransfer(v3, "g", v4, v5);
      }
      _InterlockedAdd64((volatile signed __int64 *)v2 + 2, 1uLL);
      ExAcquirePushLockExclusiveEx((char *)v2 + 8, 0LL);
    }
    if ( *((_QWORD *)v2 + 3) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 530;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            530,
            v6,
            v7,
            0,
            2,
            -1,
            (__int64)L"NULL == m_OwningThread",
            530LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    if ( *((_DWORD *)v2 + 8) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 531;
      if ( bTracingEnabled )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
          McTemplateK0zqqzxxxxx_EtwWriteTransfer(
            531,
            v8,
            v9,
            0,
            2,
            -1,
            (__int64)L"0 == m_OwnerAcquireCount",
            531LL,
            0LL,
            0LL,
            0LL,
            0LL);
      }
    }
    *((_QWORD *)v2 + 3) = KeGetCurrentThread();
    *((_DWORD *)v2 + 8) = 1;
  }
  v10 = v23;
  v11 = 32 - *((_DWORD *)this + 17);
  v24 = 0;
  v12 = 0xFFFFFFFF >> v11 << v11;
  if ( *((struct _KTHREAD **)v23 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v23, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v10 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          556,
          v15,
          v16,
          0,
          2,
          -1,
          (__int64)L"m_OwnerAcquireCount > 0",
          556LL,
          0LL,
          0LL,
          0LL,
          0LL);
    }
  }
  if ( (*((_DWORD *)v10 + 8))-- == 1 )
  {
    *((_QWORD *)v10 + 3) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v10 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  return v12;
}
