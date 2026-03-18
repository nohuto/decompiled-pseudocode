/*
 * XREFs of ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x140039C58
 * Callers:
 *     ?LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z @ 0x14001019C (-LockRefactorStagingAssertOwned@@YAXAEBUtagObjLock@@@Z.c)
 *     xxxDoSysExpunge @ 0x140025A60 (xxxDoSysExpunge.c)
 *     FreeHook @ 0x1400267F0 (FreeHook.c)
 *     ?MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z @ 0x14002AA18 (-MovePointerAsync@Api@Cursor@InputTraceLogging@@SAXHHK@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z @ 0x14006B018 (-MovePointer@Api@Cursor@InputTraceLogging@@SAXHHKPEAX_K@Z.c)
 *     ?SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z @ 0x1400F9D10 (-SetPointerShape@Api@Cursor@InputTraceLogging@@SAXPEAXKK@Z.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x1400FA018 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     FlushWEFCOMPOSITEDDCEBounds @ 0x14011E010 (FlushWEFCOMPOSITEDDCEBounds.c)
 *     ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z @ 0x14013E448 (-ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@@Z.c)
 *     FreeWindowStation @ 0x1401B1640 (FreeWindowStation.c)
 *     EnsurePointerDeviceHasMonitor @ 0x1401C8B10 (EnsurePointerDeviceHasMonitor.c)
 *     UnmapDesktop @ 0x1401D2ED0 (UnmapDesktop.c)
 *     EditionParseDesktop @ 0x1401E3580 (EditionParseDesktop.c)
 *     ??0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ @ 0x1401F7948 (--0xxxLeaveSharedEnterExclusiveLeaveReEnterSharedIfRequired@@QEAA@XZ.c)
 *     EnterEditionCrit @ 0x1401FF7B0 (EnterEditionCrit.c)
 *     DestroyWindowStation @ 0x1401FF8C0 (DestroyWindowStation.c)
 *     UserDetachQueueFromInputWindow @ 0x140206238 (UserDetachQueueFromInputWindow.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14025F9C8 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ @ 0x140287E1C (-DestroyGreTrailsTimerIfExists@CursorApiRouter@@AEBAXXZ.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 */

bool __fastcall IS_USERCRIT_OWNED_EXCLUSIVE(__int64 a1, __int64 a2)
{
  return (unsigned int)GET_USERCRIT_DISPOSITION(a1, a2) == 2;
}
