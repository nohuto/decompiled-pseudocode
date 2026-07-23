/*
 * XREFs of TpWaitForAlpcCompletion @ 0x1800C6F30
 * Callers:
 *     <none>
 * Callees:
 *     TppBarrierAdjust @ 0x180018390 (TppBarrierAdjust.c)
 *     TppAlpcpValidateAlpc @ 0x1800C712C (TppAlpcpValidateAlpc.c)
 *     ZwAlpcQueryInformation @ 0x18015FF90 (ZwAlpcQueryInformation.c)
 */

void __cdecl TpWaitForAlpcCompletion(PTP_ALPC Alpc)
{
  int PortInformation; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)TppAlpcpValidateAlpc(Alpc, 0LL, 0LL) )
  {
    PortInformation = Alpc->DeferredSendCount;
    if ( PortInformation )
      ZwAlpcQueryInformation(Alpc->AlpcPort, AlpcWaitForPortReferences, &PortInformation, 4u, 0LL);
    TppBarrierAdjust((_RTL_SRWLOCK *)&Alpc->CleanupGroupMember.CallbackBarrier, 0, 1);
  }
}
