/*
 * XREFs of AlpcpStartInitialization @ 0x1409BC4D8
 * Callers:
 *     AlpcpCreateSection @ 0x1409BB8D8 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1409BC024 (AlpcpCreateReserve.c)
 *     AlpcpCreateSecurityContext @ 0x1409BC550 (AlpcpCreateSecurityContext.c)
 * Callees:
 *     KeAbPreAcquire @ 0x1402781A0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027DEB0 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027F6F0 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 */

void __fastcall AlpcpStartInitialization(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  unsigned __int64 *v4; // rdi
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rbx

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
  *(_BYTE *)(a1 - 32) |= 4u;
}
