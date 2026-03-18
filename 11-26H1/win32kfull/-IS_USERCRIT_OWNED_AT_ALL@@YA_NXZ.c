/*
 * XREFs of ?IS_USERCRIT_OWNED_AT_ALL@@YA_NXZ @ 0x140039250
 * Callers:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     xxxDoSysExpunge @ 0x140025A60 (xxxDoSysExpunge.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x14002AA18 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     xxxProcessNotifyWinEvent @ 0x1400441AC (xxxProcessNotifyWinEvent.c)
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x14006B018 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
 *     ClientPrinterThunk @ 0x1400D6294 (ClientPrinterThunk.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1400F9D10 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x1400FA018 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?DeBoostHook@@YAXPEAUtagHOOK@@@Z @ 0x140190964 (-DeBoostHook@@YAXPEAUtagHOOK@@@Z.c)
 *     PhkFirstGlobalValid @ 0x1401BE578 (PhkFirstGlobalValid.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14025F9C8 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool __fastcall IS_USERCRIT_OWNED_AT_ALL(__int64 a1, __int64 a2)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) != 0;
}
