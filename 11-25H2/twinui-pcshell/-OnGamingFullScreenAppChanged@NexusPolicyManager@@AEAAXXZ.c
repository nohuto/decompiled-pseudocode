/*
 * XREFs of ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE20
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_3fbd826b401420cff0a83bf4ce7975f8___::Invoke @ 0x18035AC50 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInsp.c)
 * Callees:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x18035A718 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x18035B1C8 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
 */

void __fastcall NexusPolicyManager::OnGamingFullScreenAppChanged(NexusPolicyManager *this)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  try
  {
    *((_BYTE *)this + 24) = NexusPolicyManager::GamingAppRequestsLegacyNexus();
    NexusPolicyManager::UpdateNexusShellExclusiveValue(this, 0);
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x50,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\NexusPolicyManager.cpp",
      v2);
  }
}
