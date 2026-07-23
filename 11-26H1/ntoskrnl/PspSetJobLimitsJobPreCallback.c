/*
 * XREFs of PspSetJobLimitsJobPreCallback @ 0x140ABD8A0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140277710 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14027D420 (ExfAcquirePushLockExclusiveEx.c)
 *     ?KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z @ 0x14027EC60 (-KiAbpPostAcquire@AutoBoost@@YAXPEAX@Z.c)
 *     PspSetEffectiveJobLimits @ 0x140ABD918 (PspSetEffectiveJobLimits.c)
 */

__int64 __fastcall PspSetJobLimitsJobPreCallback(__int64 a1, __int64 a2)
{
  struct _KLOCK_ENTRIES *v4; // r9
  AutoBoost *v6; // rax
  void *v7; // rdx
  AutoBoost *v8; // rdi

  PspSetEffectiveJobLimits(a1, a2);
  if ( (*(_DWORD *)(a2 + 8) & 1) == 0 && *(_QWORD *)a2 != a1 )
  {
    v6 = (AutoBoost *)KeAbPreAcquire((__int64)&stru_140FC11F0, 0LL, 0LL, v4);
    v8 = v6;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&stru_140FC11F0, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)&stru_140FC11F0, v6, (__int64)&stru_140FC11F0);
    if ( v8 )
    {
      if ( (KiAbpGlobalState & 1) != 0 )
        AutoBoost::KiAbpPostAcquire(v8, v7);
      else
        *((_BYTE *)v8 + 10) = 1;
    }
    _InterlockedOr((volatile signed __int32 *)(a1 + 1552), 0x100u);
  }
  return 0LL;
}
