/*
 * XREFs of ?FreePositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DB348
 * Callers:
 *     ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x140096A20 (-CleanEventMessage@@YAXPEAUtagQMSG@@@Z.c)
 *     ?xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z @ 0x1402DC50C (-xxxProcessPositionEvent@ShellWindowPos@@YAXPEAUtagQMSG@@@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ??3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z @ 0x140296E84 (--3SHELLPOSREQUEST@ShellWindowPos@@SAXPEAX@Z.c)
 */

void __fastcall ShellWindowPos::FreePositionEvent(void **this, struct tagQMSG *a2)
{
  if ( *((_DWORD *)this + 8) < 2u )
    ShellWindowPos::SHELLPOSREQUEST::operator delete(this[5]);
  else
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1277);
}
