/*
 * XREFs of ??1FxAutoRegKey@@QEAA@XZ @ 0x140067C5C
 * Callers:
 *     GetEnhancedVerifierOptions @ 0x14003D1A8 (GetEnhancedVerifierOptions.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x140042F64 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z @ 0x14006D3E0 (-IsCorrectVersionRegistered@_FX_DRIVER_GLOBALS@@QEAAEPEBU_UNICODE_STRING@@@Z.c)
 *     RegistryReadLastLoggedTime @ 0x140073798 (RegistryReadLastLoggedTime.c)
 *     RegistryWriteCurrentTime @ 0x14007CE50 (RegistryWriteCurrentTime.c)
 *     ?FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z @ 0x14008D078 (-FxIFRGetDriverMultiString@@YAJKPEAGPEAK@Z.c)
 *     FxLibraryGlobalsQueryRegistrySettings @ 0x1400967C8 (FxLibraryGlobalsQueryRegistrySettings.c)
 *     ?RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z @ 0x14009893C (-RegisterClientVersion@_FX_DRIVER_GLOBALS@@QEAAXPEBU_UNICODE_STRING@@@Z.c)
 *     ?CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ @ 0x1400A6A4C (-CheckWakeFromShutdownOptIn@FxPkgPnp@@AEAAXXZ.c)
 *     ?ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z @ 0x1400A7CE8 (-ReadRegistrySxWake@FxPkgPnp@@AEAAXPEBU_UNICODE_STRING@@PEAE@Z.c)
 *     ?SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ @ 0x1400A7F14 (-SleepStudyEvaluateParticipation@FxPkgPnp@@QEAAXXZ.c)
 *     ?PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ @ 0x1400AADCC (-PnpCheckAndIncrementRestartCount@FxPkgPnp@@AEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxAutoRegKey::~FxAutoRegKey(FxAutoRegKey *this)
{
  void *m_Key; // rcx

  m_Key = this->m_Key;
  if ( m_Key )
    ZwClose(m_Key);
}
