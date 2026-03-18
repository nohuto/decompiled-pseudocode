/*
 * XREFs of ?ForceSetCurrentCursorShape@CursorApiRouter@@QEAAXXZ @ 0x14025F994
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     EditionActivateMitInput @ 0x1402A9E80 (EditionActivateMitInput.c)
 * Callees:
 *     SetPointer @ 0x1400F7230 (SetPointer.c)
 *     ?ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z @ 0x14025F9C8 (-ForceSetCurrentCursorShape@Api@Cursor@InputTraceLogging@@SAX_N@Z.c)
 */

void __fastcall CursorApiRouter::ForceSetCurrentCursorShape(CursorApiRouter *this)
{
  bool v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 13) || *((_BYTE *)this + 12) )
    v1 = 1;
  InputTraceLogging::Cursor::Api::ForceSetCurrentCursorShape(v1);
  SetPointer(!v1);
}
