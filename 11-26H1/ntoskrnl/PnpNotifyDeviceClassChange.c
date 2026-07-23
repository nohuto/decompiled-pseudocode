/*
 * XREFs of PnpNotifyDeviceClassChange @ 0x140A19910
 * Callers:
 *     PnpDeviceEventWorker @ 0x140A1A040 (PnpDeviceEventWorker.c)
 * Callees:
 *     PsGetCurrentServerSilo @ 0x1402161A0 (PsGetCurrentServerSilo.c)
 *     ExAcquireResourceExclusiveLite @ 0x140274770 (ExAcquireResourceExclusiveLite.c)
 *     ExAcquireFastMutex @ 0x1402775E0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     ExReleaseResourceLite @ 0x1402FF9C0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     PsGetServerSiloServiceSessionId @ 0x140480B10 (PsGetServerSiloServiceSessionId.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140735960 (RtlCompareMemory.c)
 *     PnpDereferenceNotify @ 0x140A1A800 (PnpDereferenceNotify.c)
 *     PnpNotifyDriverCallback @ 0x140A1A8A4 (PnpNotifyDriverCallback.c)
 *     IopGetSessionIdFromSymbolicName @ 0x140A9BCD0 (IopGetSessionIdFromSymbolicName.c)
 */

__int64 __fastcall PnpNotifyDeviceClassChange(__int128 *a1, _DWORD *a2, __int64 a3)
{
  __int128 v3; // xmm1
  int SessionIdFromSymbolicName; // edi
  __int128 v7; // xmm0
  _QWORD *v8; // r14
  _QWORD *v9; // rbx
  void *v10; // rbp
  unsigned __int64 CurrentServerSilo; // rax
  struct _KTHREAD *CurrentThread; // rcx
  _BYTE v14[8]; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v15[40]; // [rsp+28h] [rbp-70h] BYREF
  __int64 v16; // [rsp+50h] [rbp-48h]

  v3 = *(_OWORD *)a2;
  SessionIdFromSymbolicName = -1;
  memset(v15, 0, sizeof(v15));
  *(_DWORD *)v15 = 3145729;
  v16 = a3;
  v7 = *a1;
  *(_OWORD *)&v15[20] = v3;
  *(_OWORD *)&v15[4] = v7;
  ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
  v8 = (_QWORD *)((char *)&unk_140FD87B0 + 16 * ((*a2 + a2[1] + a2[2] + a2[3]) % 0xDu));
  v9 = (_QWORD *)*v8;
  while ( v9 != v8 )
  {
    v10 = v9;
    CurrentServerSilo = PsGetCurrentServerSilo();
    if ( *((_DWORD *)v9 + 5) != (unsigned int)PsGetServerSiloServiceSessionId(CurrentServerSilo) )
      SessionIdFromSymbolicName = IopGetSessionIdFromSymbolicName(a3);
    ++*((_WORD *)v9 + 28);
    KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite((PERESOURCE)v9[9], 1u);
    if ( (SessionIdFromSymbolicName == -1 || *((_DWORD *)v9 + 5) == SessionIdFromSymbolicName)
      && !*((_BYTE *)v9 + 58)
      && (v9 + 10 == (_QWORD *)a2 || RtlCompareMemory(v9 + 10, a2, 0x10uLL) == 16) )
    {
      PnpNotifyDriverCallback(v9, v15, v14);
    }
    ExReleaseResourceLite((PERESOURCE)v9[9]);
    KeLeaveCriticalRegion();
    ExAcquireFastMutex(&PnpDeviceClassNotifyLock);
    v9 = (_QWORD *)*v9;
    PnpDereferenceNotify(v10);
  }
  KeReleaseGuardedMutex(&PnpDeviceClassNotifyLock);
  return 0LL;
}
