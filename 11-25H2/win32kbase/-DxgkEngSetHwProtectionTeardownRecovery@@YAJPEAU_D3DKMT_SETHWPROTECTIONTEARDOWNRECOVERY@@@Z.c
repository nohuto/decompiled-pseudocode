/*
 * XREFs of ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1401D0540
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionEnableHwProtectionTeardown @ 0x140226544 (DCompositionEnableHwProtectionTeardown.c)
 */

__int64 __fastcall DxgkEngSetHwProtectionTeardownRecovery(struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY *a1)
{
  return DCompositionEnableHwProtectionTeardown(!a1->Recovered);
}
