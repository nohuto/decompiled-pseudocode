/*
 * XREFs of AlpcpDeleteBlob @ 0x140992A94
 * Callers:
 *     AlpcpMapLegacyPortView @ 0x1408EB9BC (AlpcpMapLegacyPortView.c)
 *     AlpcpFlushResourcesPort @ 0x1408F1178 (AlpcpFlushResourcesPort.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14098DF10 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x140991F30 (NtAlpcDeleteSecurityContext.c)
 *     AlpcpDeleteView @ 0x140992A34 (AlpcpDeleteView.c)
 *     NtAlpcDeleteResourceReserve @ 0x140A97850 (NtAlpcDeleteResourceReserve.c)
 *     NtAlpcCreateSecurityContext @ 0x140A9E020 (NtAlpcCreateSecurityContext.c)
 *     NtAlpcDeletePortSection @ 0x140A9E320 (NtAlpcDeletePortSection.c)
 *     NtAlpcCreatePortSection @ 0x140AB7DB0 (NtAlpcCreatePortSection.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rbx
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi
  char v9; // al

  v4 = (unsigned __int64 *)(a1 - 16);
  v6 = (AutoBoost *)KeAbPreAcquire(a1 - 16, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (__int64)v4);
  if ( v8 )
  {
    if ( (KiAbpGlobalState & 1) != 0 )
      AutoBoost::KiAbpPostAcquire(v8, v7);
    else
      *((_BYTE *)v8 + 10) = 1;
  }
  v9 = *(_BYTE *)(a1 - 32);
  if ( (v9 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v9 | 8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease((unsigned __int64)v4);
    guard_dispatch_icall_no_overrides(a1, (__int64)AlpcpRegisteredTypes);
    return 1;
  }
}
