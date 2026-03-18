/*
 * XREFs of GetUserHandedness @ 0x140204B90
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x14026E280 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     ?CreateDeadzone@InteractiveControlDevice@@QEAAJXZ @ 0x1402ECFCC (-CreateDeadzone@InteractiveControlDevice@@QEAAJXZ.c)
 *     ?PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1402EDA30 (-PerformInputActions@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     <none>
 */

__int64 GetUserHandedness()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)RIMIsDefaultUILanguageRTL() )
    LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v1, v0) + 19872) + 2056LL) == 0;
  else
    LOBYTE(v2) = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v1, v0) + 19872) + 2056LL) != 0;
  return v2;
}
