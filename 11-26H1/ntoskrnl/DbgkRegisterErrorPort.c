/*
 * XREFs of DbgkRegisterErrorPort @ 0x140B581C4
 * Callers:
 *     NtSetSystemInformation @ 0x140833840 (NtSetSystemInformation.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402BA1B0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExfTryToWakePushLock @ 0x1403170A0 (ExfTryToWakePushLock.c)
 *     PsIsHostSilo @ 0x14046E630 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 *     DbgkpDereferenceErrorPort @ 0x140532ABC (DbgkpDereferenceErrorPort.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwAlpcConnectPort @ 0x140724350 (ZwAlpcConnectPort.c)
 *     ZwAlpcDisconnectPort @ 0x1407244B0 (ZwAlpcDisconnectPort.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall DbgkRegisterErrorPort(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  void *Pool2; // rax
  __int64 v6; // rax
  _QWORD *v7; // r15
  unsigned int v8; // ebx
  int v9; // eax
  struct _KTHREAD *CurrentThread; // r13
  __int64 ProcessServerSilo; // r12
  char *v12; // rsi
  struct _KLOCK_ENTRIES *v13; // r9
  AutoBoost *v14; // rax
  void *v15; // rdx
  AutoBoost *v16; // r14
  __int64 v17; // r14
  __int64 v18; // rdx
  PVOID P[2]; // [rsp+70h] [rbp-F8h] BYREF
  _KPROCESS *Process; // [rsp+80h] [rbp-E8h]
  __int128 v21; // [rsp+88h] [rbp-E0h]
  __int128 v22; // [rsp+98h] [rbp-D0h]
  __int128 v23; // [rsp+A8h] [rbp-C0h]
  __int128 v24; // [rsp+B8h] [rbp-B0h]
  __int128 v25; // [rsp+C8h] [rbp-A0h]
  __int64 v26; // [rsp+D8h] [rbp-90h]
  int v27[4]; // [rsp+E0h] [rbp-88h] BYREF
  __int64 v28; // [rsp+F0h] [rbp-78h]
  __int64 v29; // [rsp+100h] [rbp-68h]

  v2 = Size;
  *(_OWORD *)P = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  *(_QWORD *)&v23 = 0LL;
  DWORD2(v23) = 0;
  memset_0(v27, 0, 0x48uLL);
  if ( !v2 || (v2 & 1) != 0 || v2 > 0xFFFF )
    return 3221225485LL;
  Pool2 = (void *)ExAllocatePool2(0x101uLL);
  P[1] = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  WORD1(P[0]) = v2;
  LOWORD(P[0]) = v2;
  RtlCopyFromUser(Pool2, Src, v2);
  v6 = ExAllocatePool2(0x101uLL);
  v7 = (_QWORD *)v6;
  if ( v6 )
  {
    *(_DWORD *)((char *)&v24 + 2) = -2147483608;
    v28 = 272LL;
    v29 = 8704LL;
    v27[0] = 0x100000;
    LODWORD(v21) = 48;
    *((_QWORD *)&v21 + 1) = 0LL;
    DWORD2(v22) = 512;
    *(_QWORD *)&v22 = 0LL;
    v23 = 0LL;
    v9 = ZwAlpcConnectPort(v6 + 8, (__int64)P);
    v8 = v9;
    if ( v9 == 192 )
    {
      v8 = -1073741749;
    }
    else if ( v9 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      *v7 = 1LL;
      Process = CurrentThread->ApcState.Process;
      ProcessServerSilo = PsGetProcessServerSilo((__int64)Process);
      v12 = (char *)PsGetServerSiloGlobals(ProcessServerSilo) + 936;
      --CurrentThread->KernelApcDisable;
      v14 = (AutoBoost *)KeAbPreAcquire((__int64)v12, 0LL, 0LL, v13);
      v16 = v14;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v12, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v12, v14, (__int64)v12);
      if ( v16 )
      {
        if ( (KiAbpGlobalState & 1) != 0 )
          AutoBoost::KiAbpPostAcquire(v16, v15);
        else
          *((_BYTE *)v16 + 10) = 1;
      }
      v17 = *((_QWORD *)v12 + 1);
      if ( !v17 && PsIsHostSilo(ProcessServerSilo) )
        _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 0);
      *((_QWORD *)v12 + 1) = v7;
      *((_QWORD *)v12 + 2) = Process;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v12, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v12);
      KeAbPostRelease((unsigned __int64)v12);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v18);
      v8 = 0;
      v7 = 0LL;
      if ( v17 )
      {
        if ( !_interlockedbittestandset((volatile signed __int32 *)(v17 + 4), 0) )
          ZwAlpcDisconnectPort(*(_QWORD *)(v17 + 8), 0LL);
        DbgkpDereferenceErrorPort((volatile signed __int32 *)v17);
      }
      KeSetEvent(*((PRKEVENT *)v12 + 3), 0, 0);
    }
    if ( v7 )
      ExFreePoolWithTag(v7, 0);
  }
  else
  {
    v8 = -1073741670;
  }
  if ( P[1] )
    ExFreePool(P[1]);
  return v8;
}
