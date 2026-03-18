/*
 * XREFs of ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x1402DB6EC
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x140060500 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x14025CB6C (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DwmAsyncUpdateCursorPosition @ 0x140325280 (DwmAsyncUpdateCursorPosition.c)
 */

void __fastcall CursorApiRouter::DwmMovePointer(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+38h] [rbp+10h]

  v10 = __PAIR64__(a3, a2);
  if ( a4 == 1 || !(unsigned __int8)IsKSTThread() )
    SendPositionChanged(&v10);
  else
    InvokeMouseCursorPositionCallout(a5, v10, a6);
  if ( *(_BYTE *)(a1 + 14) )
  {
    v9 = (void *)ReferenceDwmApiPort(v8, v7);
    if ( (int)DwmAsyncUpdateCursorPosition(v9) < 0 )
    {
      v11 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 556);
    }
  }
}
