/*
 * XREFs of ?DwsUnlinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A845C
 * Callers:
 *     ?DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z @ 0x1401A80D0 (-DwsUnlinkAllProcesses@tagWND@@QEAAXW4DwsLinkSource@@@Z.c)
 *     ?DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A82C0 (-DwsUnlinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 * Callees:
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140166FA8 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagPROCESSINFO::DwsUnlinkWindow(tagPROCESSINFO *this, struct ContribueToProcessDws *a2)
{
  __int64 v4; // rdx
  struct ContribueToProcessDws **v5; // rcx
  int v6; // edx

  if ( *((tagPROCESSINFO **)a2 + 1) != this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 349);
  v4 = *((_QWORD *)a2 + 5);
  if ( *(struct ContribueToProcessDws **)(v4 + 8) != (struct ContribueToProcessDws *)((char *)a2 + 40)
    || (v5 = (struct ContribueToProcessDws **)*((_QWORD *)a2 + 6),
        *v5 != (struct ContribueToProcessDws *)((char *)a2 + 40)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct ContribueToProcessDws *)v4;
  *(_QWORD *)(v4 + 8) = v5;
  v6 = *(_DWORD *)(*(_QWORD *)a2 + 396LL);
  if ( v6 != 5 )
    tagPROCESSINFO::OnDwsChanged(this, v6, 5);
}
