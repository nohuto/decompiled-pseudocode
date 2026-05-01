/*
 * XREFs of ?UpdateNexusShellExclusiveValue@NexusPolicyManager@@AEAAX_N@Z @ 0x180361BD0
 * Callers:
 *     ?OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ @ 0x180361790 (-OnGamingFullScreenAppChanged@NexusPolicyManager@@AEAAXXZ.c)
 *     ?OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ @ 0x1803617BC (-OnGamingFullScreenExperienceChanged@NexusPolicyManager@@AEAAXXZ.c)
 *     ?SingletonInitialize@NexusPolicyManager@@QEAAXXZ @ 0x1803619D8 (-SingletonInitialize@NexusPolicyManager@@QEAAXXZ.c)
 * Callees:
 *     ?IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ @ 0x180361628 (-IsLegacyNexusEnabled@NexusPolicyManager@@QEBA_NXZ.c)
 *     ?SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z @ 0x1803618C8 (-SetNexusShellExclusiveWnf@NexusPolicyManager@@AEAAX_N@Z.c)
 */

void __fastcall NexusPolicyManager::UpdateNexusShellExclusiveValue(NexusPolicyManager *this, char a2)
{
  NexusPolicyManager *v4; // rcx
  char v5; // dl
  char v6; // al

  if ( (unsigned int)IsGamingFullScreenExperienceActive(this) )
    v5 = NexusPolicyManager::IsLegacyNexusEnabled(this) == 0;
  else
    v5 = 0;
  v6 = *((_BYTE *)this + 25);
  *((_BYTE *)this + 25) = v5;
  if ( a2 || v6 != v5 )
    NexusPolicyManager::SetNexusShellExclusiveWnf(v4, v5);
}
