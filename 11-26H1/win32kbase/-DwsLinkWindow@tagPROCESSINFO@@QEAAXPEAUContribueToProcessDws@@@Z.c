/*
 * XREFs of ?DwsLinkWindow@tagPROCESSINFO@@QEAAXPEAUContribueToProcessDws@@@Z @ 0x1401A7F18
 * Callers:
 *     ?DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z @ 0x1401CBC20 (-DwsLinkProcess@tagWND@@QEAAXPEAUtagPROCESSINFO@@W4DwsLinkSource@@@Z.c)
 * Callees:
 *     ?OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z @ 0x1401A81F0 (-OnDwsChanged@tagPROCESSINFO@@QEAAXW4_DOMINANT_WINDOW_STATE@@0@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall tagPROCESSINFO::DwsLinkWindow(tagPROCESSINFO *this, tagPROCESSINFO **a2)
{
  tagPROCESSINFO *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 v7; // r8

  if ( a2[1] != this )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 307LL);
  v4 = (tagPROCESSINFO *)((char *)this + 1168);
  v5 = *((_QWORD *)this + 146);
  v6 = a2 + 5;
  if ( *(tagPROCESSINFO **)(v5 + 8) != (tagPROCESSINFO *)((char *)this + 1168) )
    __fastfail(3u);
  *v6 = v5;
  a2[6] = v4;
  *(_QWORD *)(v5 + 8) = v6;
  *(_QWORD *)v4 = v6;
  v7 = *((unsigned int *)*a2 + 99);
  if ( (_DWORD)v7 != 5 )
    tagPROCESSINFO::OnDwsChanged(this, 5LL, v7);
}
