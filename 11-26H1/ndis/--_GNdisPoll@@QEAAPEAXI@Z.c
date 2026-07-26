/*
 * XREFs of ??_GNdisPoll@@QEAAPEAXI@Z @ 0x140145EC0
 * Callers:
 *     NdisDeregisterPoll @ 0x1400CC930 (NdisDeregisterPoll.c)
 *     NdisRegisterPoll @ 0x140145F10 (NdisRegisterPoll.c)
 * Callees:
 *     ??1NdisPoll@@QEAA@XZ @ 0x14014632C (--1NdisPoll@@QEAA@XZ.c)
 */

NdisPoll *__fastcall NdisPoll::`scalar deleting destructor'(NdisPoll *P, char a2)
{
  NdisPoll::~NdisPoll(P);
  if ( (a2 & 1) != 0 && P )
    ExFreePoolWithTag(P, 0x78744345u);
  return P;
}
