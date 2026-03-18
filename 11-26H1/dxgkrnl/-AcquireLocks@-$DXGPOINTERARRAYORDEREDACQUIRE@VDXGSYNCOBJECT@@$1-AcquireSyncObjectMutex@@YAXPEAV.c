/*
 * XREFs of ?AcquireLocks@?$DXGPOINTERARRAYORDEREDACQUIRE@VDXGSYNCOBJECT@@$1?AcquireSyncObjectMutex@@YAXPEAV1@@Z$1?ReleaseSyncObjectMutex@@YAX0@Z$01@@QEAAXXZ @ 0x14000DC50
 * Callers:
 *     ?WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDXGPROCESS@@PEAVDXGDEVICE@@PEAX@Z @ 0x140373CC0 (-WaitForSynchronizationObjectFromCpu@@YAJPEBU_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU@@PEAVDX.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000E53C (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 */

_UNKNOWN **__fastcall DXGPOINTERARRAYORDEREDACQUIRE<DXGSYNCOBJECT,&void AcquireSyncObjectMutex(DXGSYNCOBJECT *),&void ReleaseSyncObjectMutex(DXGSYNCOBJECT *),2>::AcquireLocks(
        __int64 a1)
{
  _UNKNOWN **result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // edx
  int v9; // ecx
  int v10; // r8d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v3 = 0LL;
  if ( *(_DWORD *)(a1 + 24) )
  {
    do
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v3);
      KeEnterCriticalRegion();
      if ( *(struct _KTHREAD **)(v4 + 56) == KeGetCurrentThread() )
      {
        if ( *(int *)(v4 + 64) <= 0 )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 504;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v15,
                v14,
                v16,
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
        ++*(_DWORD *)(v4 + 64);
      }
      else
      {
        if ( !(unsigned __int8)ExTryAcquirePushLockExclusiveEx(v4 + 40, 0LL) )
        {
          if ( bTracingEnabled )
          {
            v7 = *(unsigned int *)(v4 + 68);
            if ( (_DWORD)v7 != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
              McTemplateK0q_EtwWriteTransfer(v5, "g", v6, v7);
          }
          _InterlockedIncrement64((volatile signed __int64 *)(v4 + 48));
          ExAcquirePushLockExclusiveEx(v4 + 40, 0LL);
        }
        if ( *(_QWORD *)(v4 + 56) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 530;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v9,
                v8,
                v10,
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
        if ( *(_DWORD *)(v4 + 64) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 531;
          if ( bTracingEnabled )
          {
            if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000000LL) != 0 )
              McTemplateK0zqqzxxxxx_EtwWriteTransfer(
                v12,
                v11,
                v13,
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
        *(_QWORD *)(v4 + 56) = KeGetCurrentThread();
        *(_DWORD *)(v4 + 64) = 1;
      }
      result = (_UNKNOWN **)*(unsigned int *)(a1 + 24);
      ++v3;
    }
    while ( v3 < (unsigned __int64)result );
    *(_BYTE *)(a1 + 33) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 33) = 1;
  }
  return result;
}
