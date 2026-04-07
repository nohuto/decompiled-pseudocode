/*
 * XREFs of ?UpdateShowContact@CIndirectTouchVisual@@QEAAJW4DWM_SHOWCONTACT@@@Z @ 0x1800B8ADC
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18005EA9C (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CIndirectTouchVisual::UpdateShowContact(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 276) = a2;
  return 0LL;
}
