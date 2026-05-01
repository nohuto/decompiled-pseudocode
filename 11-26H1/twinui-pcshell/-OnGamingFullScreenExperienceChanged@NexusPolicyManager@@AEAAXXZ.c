/*
 * XREFs of ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x1803617BC
 * Callers:
 *     _lambda_d19e6ffc7ca088ab1366ed8b1c01ea04_::_lambda_invoker_cdecl_ @ 0x180360540 (_lambda_d19e6ffc7ca088ab1366ed8b1c01ea04_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180361BD0 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 *     ?UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ @ 0x180361C28 (-UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ.c)
 */

void __fastcall NexusPolicyManager::OnGamingFullScreenExperienceChanged(NexusPolicyManager *this)
{
  NexusPolicyManager *v1; // rcx

  NexusPolicyManager::UpdateNexusShellExclusiveValue(this, 0);
  NexusPolicyManager::UpdateXInputFocusEnforcement(v1);
}
