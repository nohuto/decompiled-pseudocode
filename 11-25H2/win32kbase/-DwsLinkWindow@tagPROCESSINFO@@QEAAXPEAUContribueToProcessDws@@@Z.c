/*
 * XREFs of ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A8044
 * Callers:
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401A7DC0 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 * Callees:
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x140166FA8 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagPROCESSINFO::DwsLinkWindow(tagPROCESSINFO *this, tagPROCESSINFO **a2)
{
  tagPROCESSINFO *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  int v7; // r8d

  if ( a2[1] != this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 331);
  v4 = (tagPROCESSINFO *)((char *)this + 1144);
  v5 = *((_QWORD *)this + 143);
  v6 = a2 + 5;
  if ( *(tagPROCESSINFO **)(v5 + 8) != (tagPROCESSINFO *)((char *)this + 1144) )
    __fastfail(3u);
  *v6 = v5;
  a2[6] = v4;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)v4 = v6;
  v7 = *((_DWORD *)*a2 + 99);
  if ( v7 != 5 )
    tagPROCESSINFO::OnDwsChanged(this, 5, v7);
}
