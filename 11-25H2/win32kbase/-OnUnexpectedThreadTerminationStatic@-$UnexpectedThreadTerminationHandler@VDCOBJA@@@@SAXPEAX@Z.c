/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJA@@@@SAXPEAX@Z @ 0x1401C76D0
 * Callers:
 *     <none>
 * Callees:
 *     ?vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x14001C980 (-vAltUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJA>::OnUnexpectedThreadTerminationStatic(
        struct _BASEOBJECT **a1)
{
  if ( *a1 )
  {
    XDCOBJ::vAltUnlockNoNullSet(a1);
    *a1 = 0LL;
  }
}
