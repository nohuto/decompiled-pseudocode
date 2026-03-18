/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x140310F70
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x1401CB3B0 (-vAltUnlock@DCOBJA@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(DCOBJA *a1)
{
  if ( *(_QWORD *)a1 )
  {
    DCOBJA::vAltUnlock(a1);
    *(_QWORD *)a1 = 0LL;
  }
}
