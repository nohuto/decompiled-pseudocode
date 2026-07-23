/*
 * XREFs of ObQueryDeviceMapInformation @ 0x140A21800
 * Callers:
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402153F0 (PsGetCurrentServerSiloGlobals.c)
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ExfAcquirePushLockSharedEx @ 0x140277230 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140278140 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     ObpReferenceCurrentDeviceMap @ 0x140A21A50 (ObpReferenceCurrentDeviceMap.c)
 *     ObpDereferenceCurrentDeviceMap @ 0x140A221A0 (ObpDereferenceCurrentDeviceMap.c)
 */

__int64 __fastcall ObQueryDeviceMapInformation(_KPROCESS *a1, void *a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  unsigned int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 ProcessServerSilo; // rax
  char *ServerSiloGlobals; // rax
  struct _KLOCK_ENTRIES *v10; // r9
  char *v11; // r13
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v13; // rdi
  LegacyAutoBoost *v14; // r15
  signed __int64 v15; // rdx
  char v16; // r15
  __int64 v17; // rcx
  int v18; // r8d
  _BYTE *v19; // rdx
  __int64 v20; // r9
  unsigned int *p_FreezeCount; // rax
  __int64 v23; // [rsp+28h] [rbp-70h] BYREF
  _OWORD Src[2]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v25; // [rsp+58h] [rbp-40h]
  char v27; // [rsp+B8h] [rbp+20h]

  v27 = a4;
  v4 = a3;
  v6 = 0;
  v23 = 0LL;
  memset(Src, 0, sizeof(Src));
  v25 = 0LL;
  if ( (a3 & 0xFFFFFFFE) != 0 || a1 && KeGetCurrentThread()->ApcState.Process != a1 )
    return 3221225485LL;
  v7 = ObpReferenceCurrentDeviceMap(0LL, &v23, a3, a4);
  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo((__int64)a1);
    ServerSiloGlobals = (char *)PsGetServerSiloGlobals(ProcessServerSilo);
  }
  else
  {
    ServerSiloGlobals = (char *)PsGetCurrentServerSiloGlobals();
  }
  v11 = ServerSiloGlobals;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v13 = (volatile signed __int64 *)(v11 + 120);
  v14 = (LegacyAutoBoost *)KeAbPreAcquire((__int64)(v11 + 120), 0LL, 0LL, v10);
  v15 = 17LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v11 + 15, 17LL, 0LL) )
  {
    ExfAcquirePushLockSharedEx((signed __int64 *)v11 + 15, 0, v14, (struct _KTHREAD *)(v11 + 120));
    v15 = 17LL;
  }
  if ( v14 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v14, (void *)0x11);
    else
      *((_BYTE *)v14 + 10) = 1;
  }
  if ( v7 )
  {
    v16 = 1;
  }
  else
  {
    p_FreezeCount = &a1[1].FreezeCount;
    if ( !a1 )
      p_FreezeCount = (unsigned int *)v11;
    v7 = *(_QWORD *)p_FreezeCount & 0xFFFFFFFFFFFFFFF0uLL;
    v16 = 0;
  }
  if ( v7 )
  {
    v17 = 0LL;
    if ( (v4 & 1) == 0 )
      v17 = *(_QWORD *)(v7 + 24);
    LODWORD(Src[0]) = *(_DWORD *)(v7 + 256);
    v18 = 1;
    v19 = (char *)Src + 4;
    v20 = 32LL;
    do
    {
      *v19 = *(_BYTE *)(v19 - ((char *)Src + 4) + v7 + 260);
      if ( (v18 & *(_DWORD *)(v7 + 256)) == 0 && v17 )
      {
        *v19 = v19[v17 - ((_QWORD)Src + 4) + 260];
        LODWORD(Src[0]) |= v18 & *(_DWORD *)(v17 + 256);
      }
      ++v19;
      v18 *= 2;
      --v20;
    }
    while ( v20 );
    if ( _InterlockedCompareExchange64(v13, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v11 + 15);
    KeAbPostRelease((unsigned __int64)(v11 + 120));
    KeLeaveGuardedRegion();
    if ( v16 == 1 )
      ObpDereferenceCurrentDeviceMap(v7, v23);
    if ( v27 )
      RtlCopyToUser(a2, Src, 0x24uLL);
    else
      RtlCopyVolatileMemory(a2, Src, 0x24uLL);
  }
  else
  {
    if ( v15 != _InterlockedCompareExchange64(v13, 0LL, v15) )
      ExfReleasePushLockShared((signed __int64 *)v11 + 15);
    KeAbPostRelease((unsigned __int64)(v11 + 120));
    KeLeaveGuardedRegion();
    return (unsigned int)-1073741807;
  }
  return v6;
}
