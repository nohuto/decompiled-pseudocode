/*
 * XREFs of ?Enabled@InputTraceLogging@@SA_NW4InputTraceKeywords@@E@Z @ 0x140122004
 * Callers:
 *     ?RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z @ 0x14011E084 (-RawInputListener@RawInput@InputTraceLogging@@SAXPEBUtagPROCESS_HID_TABLE@@@Z.c)
 *     ?CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z @ 0x140121080 (-CopyForGetRawInputBuffer@RawInput@InputTraceLogging@@SAXPEAUtagHIDDATA@@@Z.c)
 *     ?HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z @ 0x140121C88 (-HidePointer@Api@Cursor@InputTraceLogging@@SAX_N00@Z.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x140121EA8 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     ?SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracing_SetSystemCursorReason@@PEAGI@Z @ 0x1401220D0 (-SetSystemCursor@Cursor@InputTraceLogging@@SAXPEAUtagCURSOR@@KPEAU_UNICODE_STRING@@W4InputTracin.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x140226590 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLIED@@@Z @ 0x14026D0B8 (-ShellWindowPosApplied@Win32k@InputTraceLogging@@SAXPEBUtagWND@@AEBUtagSHELL_REQUESTED_POS_APPLI.c)
 *     ?InputCoreProviderCallbackWorker@@YAXXZ @ 0x14028D484 (-InputCoreProviderCallbackWorker@@YAXXZ.c)
 *     ?RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DC130 (-RequestCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x1402DC73C (-SetCursorSynchronizationMode@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 *     ?UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z @ 0x1402DC92C (-UserGetDwmCursorShape@Api@Cursor@InputTraceLogging@@SAXW4UserGetDwmCursorShapeResult@123@KK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall InputTraceLogging::Enabled(int a1, unsigned __int8 a2)
{
  unsigned int v2; // eax
  char v3; // dl

  v2 = a2;
  v3 = 0;
  if ( v2 < dword_14039BB50
    && (!a1
     || (a1 & (unsigned __int64)qword_14039BB60) != 0 && (a1 & (unsigned __int64)qword_14039BB68) == qword_14039BB68) )
  {
    return 1;
  }
  return v3;
}
