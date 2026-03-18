/*
 * XREFs of ?OverrideClip@CCursorClip@@QEAAX_N@Z @ 0x140217F8C
 * Callers:
 *     DisableDelegation @ 0x14021B3F0 (DisableDelegation.c)
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x14006EEBC (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14006EF14 (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CCursorClip::OverrideClip(CCursorClip *this, unsigned __int8 a2)
{
  int v3; // edi
  int v4; // eax
  bool v5; // sf

  v3 = a2;
  CPushLock::AcquireLockExclusive((CCursorClip *)((char *)this + 32));
  v4 = 2 * v3 - 1;
  v5 = v4 + *((_DWORD *)this + 62) < 0;
  *((_DWORD *)this + 62) += v4;
  if ( v5 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 99);
  CPushLock::ReleaseLock((CCursorClip *)((char *)this + 32));
}
