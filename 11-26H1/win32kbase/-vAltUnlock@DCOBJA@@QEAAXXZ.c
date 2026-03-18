/*
 * XREFs of ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x14016D160
 * Callers:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1401EDE60 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z.c)
 *     ??$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z @ 0x1401F2058 (--$vGarbageCollectObject@VDCOBJA@@@@YAXAEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@@Z.c)
 * Callees:
 *     HmgDecrementShareReferenceCount @ 0x140019C10 (HmgDecrementShareReferenceCount.c)
 */

void __fastcall DCOBJA::vAltUnlock(unsigned int **this)
{
  __int64 SessionState; // rax

  if ( *this )
  {
    SessionState = W32GetSessionState(this);
    HmgDecrementShareReferenceCount(*(_QWORD *)(SessionState + 88), *this);
    *this = 0LL;
  }
}
