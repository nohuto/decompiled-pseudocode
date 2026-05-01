/*
 * XREFs of ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x18035B1C8
 * Callers:
 *     ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE20 (-OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ.c)
 *     ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x18035AE4C (-OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x18035AFD4 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x18035ACB8 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z @ 0x18035AF58 (-SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z.c)
 */

void __fastcall NexusPolicyManager::UpdateNexusShellExclusiveValue(NexusPolicyManager *this, char a2)
{
  int v4; // eax
  NexusPolicyManager *v5; // rcx

  v4 = IsGamingFullScreenExperienceActive();
  if ( v4 )
    LOBYTE(v4) = NexusPolicyManager::IsLegacyNexusEnabled(this) ^ 1;
  LOBYTE(v5) = *((_BYTE *)this + 25);
  *((_BYTE *)this + 25) = v4;
  if ( a2 || (_BYTE)v5 != (_BYTE)v4 )
    NexusPolicyManager::SetNexusShellExclusiveWnf(v5, v4);
}
