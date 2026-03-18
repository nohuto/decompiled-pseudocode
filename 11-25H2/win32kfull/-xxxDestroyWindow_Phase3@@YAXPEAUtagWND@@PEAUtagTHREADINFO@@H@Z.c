/*
 * XREFs of ?xxxDestroyWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@H@Z @ 0x1402B5DE8
 * Callers:
 *     xxxDestroyWindow @ 0x14017EBE0 (xxxDestroyWindow.c)
 * Callees:
 *     SetOrClrWF @ 0x1400373A0 (SetOrClrWF.c)
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 *     UnlinkWindow @ 0x14004BBDC (UnlinkWindow.c)
 *     zzzAttachThreadInput @ 0x1401E910C (zzzAttachThreadInput.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DisassociateShellFrameAppThreads2 @ 0x14028A248 (DisassociateShellFrameAppThreads2.c)
 */

void __fastcall xxxDestroyWindow_Phase3(struct tagWND *a1, struct tagTHREADINFO *a2, int a3)
{
  __int64 v3; // rdi
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 *v9; // rdx

  v3 = *((_QWORD *)a1 + 13);
  if ( v3 && !a3 )
  {
    v6 = *(_QWORD *)(v3 + 16);
    if ( *(struct tagWND **)(v6 + 1592) == a1 )
    {
      HMAssignmentUnlock(v6 + 1592);
      DisassociateShellFrameAppThreads2(v6, (__int64)a2);
    }
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 5) + 31LL) & 0xC0) == 0x40 && !IsTopLevelWindow((__int64)a1) )
    {
      v7 = *((_QWORD *)a1 + 2);
      v8 = *(_QWORD *)(*((_QWORD *)a1 + 13) + 16LL);
      if ( v7 != v8 )
        zzzAttachThreadInput(v7, v8, 0);
    }
    v9 = (__int64 *)*((_QWORD *)a1 + 13);
    if ( v9 )
      UnlinkWindow((__int64 *)a1, v9);
  }
  if ( a1 == *(struct tagWND **)(*((_QWORD *)a2 + 59) + 128LL) )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 4279);
  SetOrClrWF(1, a1, 0x380u, 1);
}
