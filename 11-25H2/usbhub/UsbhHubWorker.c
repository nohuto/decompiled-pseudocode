/*
 * XREFs of UsbhHubWorker @ 0x140034020
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UsbhHubWorker(__int64 a1, __int64 a2))(__int64)
{
  __int64 v2; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  KSPIN_LOCK *v7; // rbx
  void (__fastcall *v8)(_QWORD, __int64, __int64); // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  KIRQL v11; // al
  __int64 v12; // r9
  _QWORD *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 (__fastcall *result)(__int64); // rax

  v2 = *(unsigned int *)(a2 + 4);
  if ( (_DWORD)v2 != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = *(_QWORD *)(v5 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v5 + 880)) & *(_DWORD *)(v5 + 884));
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_DWORD *)v6 = 1380669288;
        *(_QWORD *)(v6 + 16) = v2;
        *(_QWORD *)(v6 + 24) = a2;
      }
    }
  }
  v7 = (KSPIN_LOCK *)FdoExt(*(_QWORD *)(a2 + 16));
  _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
  v8 = *(void (__fastcall **)(_QWORD, __int64, __int64))(a2 + 24);
  v9 = *(_QWORD *)(a2 + 32);
  v10 = *(unsigned int *)(a2 + 12);
  *(_QWORD *)(a2 + 64) = KeGetCurrentThread();
  v8(*(_QWORD *)(a2 + 16), v10, v9);
  v11 = KeAcquireSpinLockRaiseToDpc(v7 + 350);
  v12 = *(_QWORD *)(a2 + 48);
  if ( *(_QWORD *)(v12 + 8) != a2 + 48 || (v13 = *(_QWORD **)(a2 + 56), *v13 != a2 + 48) )
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  KeReleaseSpinLock(v7 + 350, v11);
  v14 = *(_QWORD *)(a2 + 40);
  if ( *(_DWORD *)(a2 + 4) != 2001228627 && (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = 0LL;
        *(_DWORD *)v16 = 1716213608;
        *(_QWORD *)(v16 + 24) = a2;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a2, 0);
  result = (__int64 (__fastcall *)(__int64))*((_QWORD *)FdoExt(a1) + 597);
  if ( result )
    return (__int64 (__fastcall *)(__int64))result(v14);
  return result;
}
