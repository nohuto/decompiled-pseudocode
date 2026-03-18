/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1401EDE60
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlock@DCOBJA@@QEAAXXZ @ 0x14016D160 (-vAltUnlock@DCOBJA@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(unsigned int **a1)
{
  if ( *a1 )
  {
    DCOBJA::vAltUnlock(a1);
    *a1 = 0LL;
  }
}
