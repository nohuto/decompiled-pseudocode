/*
 * XREFs of ?UpdateWindowShadows@CDesktopManager@@QEAAXXZ @ 0x18008AC20
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJPEAK@Z @ 0x1800335CC (-UpdateSettings@CDesktopManager@@QEAAJPEAK@Z.c)
 *     ?UpdateRemotingMode@CDesktopManager@@AEAA_NXZ @ 0x180090028 (-UpdateRemotingMode@CDesktopManager@@AEAA_NXZ.c)
 *     ??0CDesktopManager@@AEAA@XZ @ 0x1800ABE5C (--0CDesktopManager@@AEAA@XZ.c)
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
