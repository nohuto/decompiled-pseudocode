/*
 * XREFs of ?RemoveGhostStatusFlag@CImmersiveApp@@UEAAJW4__MIDL___MIDL_itf_shpriv_core_0000_0331_0004@@@Z @ 0x180303B60
 * Callers:
 *     <none>
 * Callees:
 *     ?_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z @ 0x180137444 (-_RemoveGhostStatus@CImmersiveWindowCollection@CImmersiveApp@@AEAAXW4GHOST_STATUS@@@Z.c)
 *     ?_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ @ 0x1803055CC (-_UpdatePresentedWindow@CImmersiveApp@@AEAAXXZ.c)
 */

__int64 __fastcall CImmersiveApp::RemoveGhostStatusFlag(__int64 a1, int a2)
{
  int v4; // edx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 8;
  if ( a2 != 1 )
    v4 = 0;
  if ( (v4 & *(_DWORD *)(a1 + 404)) == v4 )
    CImmersiveApp::CImmersiveWindowCollection::_RemoveGhostStatus(a1 + 200, v4);
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)(a1 - 88));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
