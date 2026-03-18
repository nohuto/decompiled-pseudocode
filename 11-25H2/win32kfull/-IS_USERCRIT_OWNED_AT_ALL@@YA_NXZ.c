/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x1400C7990
 * Callers:
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x1400606D8 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x1400607F0 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     xxxHkCallHook @ 0x1400C5590 (xxxHkCallHook.c)
 *     PhkFirstValid @ 0x1400C5E60 (PhkFirstValid.c)
 *     PhkNextValid @ 0x1400C5F24 (PhkNextValid.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x1400C5FF0 (-xxxCallHook@@YAHH_K_JH@Z.c)
 *     xxxLoadHmodIndex @ 0x1400C7330 (xxxLoadHmodIndex.c)
 *     ?LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z @ 0x1400C7900 (-LockRefactorStagingAssertAny@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z @ 0x1400C79AC (-LockRefactorStagingAssertOwned@@YAXAEBUtagDomLock@@@Z.c)
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x1400C8628 (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     ClientPrinterThunk @ 0x1400D44B4 (ClientPrinterThunk.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x140121C88 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1401C6D38 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x140226590 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140271CD8 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool IS_USERCRIT_OWNED_AT_ALL(void)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION() != 0;
}
