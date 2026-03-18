/*
 * XREFs of ?DwmMovePointer@CursorApiRouter@@AEAAXHHW4CursorMoveMode@1@PEAX_K@Z @ 0x140252BA8
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     DwmAsyncUpdateCursorPosition @ 0x14034766C (DwmAsyncUpdateCursorPosition.c)
 */

__int64 __fastcall CursorApiRouter::DwmMovePointer(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *v10; // rax
  unsigned __int64 v11; // [rsp+30h] [rbp+8h] BYREF
  int v12; // [rsp+38h] [rbp+10h]

  v11 = __PAIR64__(a3, a2);
  if ( a4 == 1 || !(unsigned __int8)IsKSTThread() )
    result = SendPositionChanged(&v11);
  else
    result = InvokeMouseCursorPositionCallout(a5, v11, a6);
  if ( *(_BYTE *)(a1 + 14) )
  {
    v10 = (void *)ReferenceDwmApiPort(v9, v8);
    result = DwmAsyncUpdateCursorPosition(v10);
    if ( (int)result < 0 )
    {
      v12 = 0x20000;
      return MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 556LL);
    }
  }
  return result;
}
