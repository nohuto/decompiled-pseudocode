/*
 * XREFs of DCompositionNotifyAdaptersChanged @ 0x140163690
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1401636E8 (-NotifyAdaptersChanged@CSynchronizationManager@DirectComposition@@QEAA_NPEBUCSM_TOKEN_ADAPTER_IN.c)
 */

__int64 __fastcall DCompositionNotifyAdaptersChanged(struct CSM_TOKEN_ADAPTER_INFO *a1, unsigned int a2)
{
  unsigned int v4; // ebx
  DirectComposition::CSynchronizationManager *v5; // rcx

  v4 = 0;
  v5 = *(DirectComposition::CSynchronizationManager **)(W32GetDCompSessionState(a1) + 24);
  if ( v5 )
    LOBYTE(v4) = DirectComposition::CSynchronizationManager::NotifyAdaptersChanged(v5, a1, a2);
  return v4;
}
