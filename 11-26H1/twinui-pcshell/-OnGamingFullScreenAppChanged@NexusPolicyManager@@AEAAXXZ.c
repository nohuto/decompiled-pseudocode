/*
 * XREFs of ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x180361790
 * Callers:
 *     winrt::impl::delegate_winrt::Windows::Foundation::EventHandler_winrt::Windows::Foundation::IInspectable___lambda_f626797b4729018c6c4cb46d87a4371f___::Invoke @ 0x1803615C0 (winrt--impl--delegate_winrt--Windows--Foundation--EventHandler_winrt--Windows--Foundation--IInsp.c)
 * Callees:
 *     ?GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ @ 0x180361060 (-GamingAppRequestsLegacyNexus@NexusPolicyManager@@CA_NXZ.c)
 *     ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180361BD0 (-UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z.c)
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
      (void *)0x51,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\NexusPolicyManager.cpp",
      v2);
  }
}
