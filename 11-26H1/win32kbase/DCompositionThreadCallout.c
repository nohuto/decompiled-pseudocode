/*
 * XREFs of DCompositionThreadCallout @ 0x140147D60
 * Callers:
 *     <none>
 * Callees:
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1401C6B38 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 */

__int64 __fastcall DCompositionThreadCallout(__int64 a1, int a2)
{
  if ( a2 == 1 && a1 == *(_QWORD *)(W32GetDCompSessionState(a1) + 8) )
    DirectComposition::CConnection::OnDwmRenderThreadExit();
  return 0LL;
}
