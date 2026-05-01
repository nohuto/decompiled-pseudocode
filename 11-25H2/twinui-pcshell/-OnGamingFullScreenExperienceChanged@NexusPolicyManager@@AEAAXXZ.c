/*
 * XREFs of ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE4C
 * Callers:
 *     _lambda_a06775f781a19836bfcc3e32fde9df01_::_lambda_invoker_cdecl_ @ 0x180359C60 (_lambda_a06775f781a19836bfcc3e32fde9df01_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x18035B1C8 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 *     ?UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ @ 0x18035B21C (-UpdateXInputFocusEnforcement@NexusPolicyManager@@AEAAXXZ.c)
 */

void __fastcall NexusPolicyManager::OnGamingFullScreenExperienceChanged(NexusPolicyManager *this)
{
  NexusPolicyManager *v1; // rcx

  NexusPolicyManager::UpdateNexusShellExclusiveValue(this, 0);
  NexusPolicyManager::UpdateXInputFocusEnforcement(v1);
}
