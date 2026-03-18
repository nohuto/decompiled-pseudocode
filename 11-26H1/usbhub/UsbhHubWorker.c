/*
 * XREFs of UsbhHubWorker @ 0x14002F030
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UsbhHubWorker(__int64 a1, __int64 a2))(__int64)
{
  __int64 v2; // r8
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx
  KSPIN_LOCK *v10; // rbx
  void (__fastcall *v11)(_QWORD, __int64, __int64); // rax
  __int64 v12; // r8
  __int64 v13; // rdx
  KIRQL v14; // al
  __int64 v15; // r9
  _QWORD *v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rcx
  signed __int32 v19; // eax
  unsigned int v20; // edx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 (__fastcall *result)(__int64); // rax

  v2 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v2 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 1380669288;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = v2;
        *(_QWORD *)(v9 + v8 + 24) = a2;
      }
    }
  }
  v10 = (KSPIN_LOCK *)FdoExt(*(_QWORD *)(a2 + 16));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v11 = *(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24);
  v12 = *(_QWORD *)(a2 + 32);
  v13 = *(unsigned int *)(a2 + 12);
  *(_QWORD *)(a2 + 64) = KeGetCurrentThread();
  v11(*(_QWORD *)(a2 + 16), v13, v12);
  v14 = KeAcquireSpinLockRaiseToDpc(v10 + 350);
  v15 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(v15 + 8) != a2 + 48 || (v16 = *(_QWORD **)(a2 + 56), *v16 != a2 + 48) )
    __fastfail(3u);
  *v16 = v15;
  *(_QWORD *)(v15 + 8) = v16;
  KeReleaseSpinLock(v10 + 350, v14);
  v17 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v18 = *(_QWORD *)(a1 + 64);
      if ( v18 )
      {
        v19 = _InterlockedExchangeAdd((volatile signed __int32 *)(v18 + 880), 0xFFFFFFFF);
        v20 = *(_DWORD *)(v18 + 884);
        v21 = *(_QWORD *)(v18 + 888);
        v22 = 32LL * ((v19 - 1) & v20);
        *(_DWORD *)(v22 + v21) = 1716213608;
        *(_QWORD *)(v22 + v21 + 8) = 0LL;
        *(_QWORD *)(v22 + v21 + 16) = 0LL;
        *(_QWORD *)(v22 + v21 + 24) = a2;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a2, 0);
  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 597);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(v17);
  return result;
}
