/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x180072A64
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x18004AD98 (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x180071F78 (--0CDesktopManager@@AEAA@XZ.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180087B04 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CDesktopManager::UpdateWindowShadows(CDesktopManager *this)
{
  if ( *((int *)this + 8) > 2 )
    *((_BYTE *)this + 17) = 0;
  else
    SystemParametersInfoW(0x1024u, 0, (char *)this + 17, 0);
}
