/*
 * XREFs of ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C1A88
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140067260 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402C2E94 (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x14026F300 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 */

void __fastcall ShellWindowPos::FreePositionEvent(void **this, struct tagQMSG *a2)
{
  if ( *((_DWORD *)this + 8) < 2u )
    ShellWindowPos::SHELLPOSREQUEST::operator delete(this[5]);
  else
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1276);
}
