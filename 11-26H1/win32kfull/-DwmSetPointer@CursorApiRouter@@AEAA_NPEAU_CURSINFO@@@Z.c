/*
 * XREFs of ?DwmSetPointer@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@@Z @ 0x1402EE65C
 * Callers:
 *     ?MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z @ 0x14002A724 (-MovePointerImpl@CursorApiRouter@@AEAAXPEAUHDEV__@@HHKW4CursorMoveMode@1@PEAX_K@Z.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     ?SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z @ 0x1400F9E04 (-SetPointerShape@CursorApiRouter@@QEAAXPEAU_CURSINFO@@KKK@Z.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1400FA110 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 * Callees:
 *     ?SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z @ 0x1402EEAFC (-SendMITCursorShape@CursorApiRouter@@AEAA_NPEAU_CURSINFO@@W4_MIT_CURSOR_SHAPEINFO_TRAITS@@I@Z.c)
 */

char __fastcall CursorApiRouter::DwmSetPointer(CursorApiRouter *this, struct _CURSINFO *a2)
{
  _OWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF

  if ( a2 )
    return CursorApiRouter::SendMITCursorShape(this, a2, *((unsigned int *)this + 1), *((unsigned int *)this + 2));
  memset(v4, 0, sizeof(v4));
  SendShape(v4);
  *((_QWORD *)this + 14) = *((_QWORD *)&v4[0] + 1);
  return 1;
}
