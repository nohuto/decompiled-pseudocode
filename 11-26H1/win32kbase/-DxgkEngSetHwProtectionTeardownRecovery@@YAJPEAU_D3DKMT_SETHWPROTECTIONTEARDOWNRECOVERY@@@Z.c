/*
 * XREFs of ?DxgkEngSetHwProtectionTeardownRecovery@@YAJPEAU_D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY@@@Z @ 0x1401F9BD0
 * Callers:
 *     <none>
 * Callees:
 *     DCompositionEnableHwProtectionTeardown @ 0x140228790 (DCompositionEnableHwProtectionTeardown.c)
 */

__int64 __fastcall DxgkEngSetHwProtectionTeardownRecovery(struct _D3DKMT_SETHWPROTECTIONTEARDOWNRECOVERY *a1)
{
  return DCompositionEnableHwProtectionTeardown(!a1->Recovered);
}
