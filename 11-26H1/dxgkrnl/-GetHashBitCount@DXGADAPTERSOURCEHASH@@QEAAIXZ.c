/*
 * XREFs of ?GetHashBitCount@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x14000C444
 * Callers:
 *     DxgkDisplayConfigDeviceInfoNoAdapter @ 0x1402C9AB8 (DxgkDisplayConfigDeviceInfoNoAdapter.c)
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

__int64 __fastcall DXGADAPTERSOURCEHASH::GetHashBitCount(DXGADAPTERSOURCEHASH *this)
{
  DXGFASTMUTEX *v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // edx
  int v7; // r8d
  int v8; // edx
  int v9; // r8d
  unsigned int v10; // edi
  DXGFASTMUTEX *v11; // rbx
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  int v17; // r8d
  int v18; // edx
  int v19; // r8d
  int v20; // edx
  int v21; // r8d
  DXGFASTMUTEX *v22; // [rsp+60h] [rbp-38h]
  char v23; // [rsp+68h] [rbp-30h]

  v22 = this;
  v23 = 0;
  if ( !this )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 628;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          628,
          v18,
          v19,
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
  if ( DXGFASTMUTEX::IsOwner(v22) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 635;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          635,
          v20,
          v21,
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
  v2 = v22;
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
            v16,
            v17,
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
  v10 = *((_DWORD *)this + 17);
  v11 = v22;
  v23 = 0;
  if ( *((struct _KTHREAD **)v22 + 3) != KeGetCurrentThread() )
  {
    WdLogSingleEntry5(0LL, 275LL, 4LL, v22, 0LL, 0LL);
    WdLogGlobalForLineNumber = 553;
  }
  if ( *((int *)v11 + 8) <= 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 556;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          556,
          v14,
          v15,
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
  if ( (*((_DWORD *)v11 + 8))-- == 1 )
  {
    *((_QWORD *)v11 + 3) = 0LL;
    ExReleasePushLockExclusiveEx((char *)v11 + 8, 0LL);
  }
  KeLeaveCriticalRegion();
  return v10;
}
