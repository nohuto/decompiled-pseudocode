/*
 * XREFs of ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400489D0
 * Callers:
 *     RealInternalRemoveProp @ 0x1400485B0 (RealInternalRemoveProp.c)
 *     CreateProp @ 0x14004A490 (CreateProp.c)
 *     ?SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z @ 0x1400DDB98 (-SetGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@KPEAPEAU_EPROCESS@@@Z.c)
 *     ??$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z @ 0x1400DE160 (--$GetProp@VGroupedFGBoostProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVGroupedFGBoostProp@@@Z.c)
 *     DeleteProperties @ 0x1400DE260 (DeleteProperties.c)
 *     ?ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z @ 0x1400DE4D0 (-ClearGroupedFGBoost@GroupedFGBoostProp@@SAJPEAUtagWND@@@Z.c)
 *     ?SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z @ 0x1400DEA38 (-SetProp@CWindowProp@@QEAAHPEAUtagWND@@@Z.c)
 *     InternalSetProp @ 0x1400DEB14 (InternalSetProp.c)
 *     RealInternalSetProp @ 0x1400DEB70 (RealInternalSetProp.c)
 *     ?DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z @ 0x1401EA218 (-DeleteBaseWindowProperties@@YAXPEAUtagBWND@@@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

void __fastcall LockRefactorStagingAssertOwned(struct _KTHREAD **a1, int a2, int a3)
{
  if ( !*(_DWORD *)(W32GetUserSessionState((_DWORD)a1, a2, a3) + 19792)
    && (unsigned int)GET_USERCRIT_DISPOSITION() != 2
    && (!(unsigned int)GET_USERCRIT_DISPOSITION() || KeGetCurrentThread() != a1[1]) )
  {
    __int2c();
  }
}
