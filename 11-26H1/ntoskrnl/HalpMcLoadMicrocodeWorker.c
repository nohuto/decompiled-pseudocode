/*
 * XREFs of HalpMcLoadMicrocodeWorker @ 0x140595EF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptGetIdentifiers @ 0x1404F6820 (HalpInterruptGetIdentifiers.c)
 *     HalpMcUpdateMicrocode @ 0x14050A2B0 (HalpMcUpdateMicrocode.c)
 */

ULONG_PTR __fastcall HalpMcLoadMicrocodeWorker(ULONG_PTR Argument)
{
  unsigned int Number; // ecx
  unsigned int v2; // ebx
  int Identifiers; // eax
  int v4; // edi
  int v6; // [rsp+38h] [rbp+10h] BYREF

  Number = KeGetPcr()->Prcb.Number;
  v6 = 0;
  v2 = -KeGetCurrentPrcb()->LogicalProcessorsPerCore;
  Identifiers = HalpInterruptGetIdentifiers(Number, &v6, 0LL);
  v4 = v6;
  if ( Identifiers < 0 )
    v4 = -1;
  if ( (v2 & v4) == v4 )
    HalpMcUpdateMicrocode();
  _InterlockedDecrement(&HalpMcLoadSyncBarrier);
  while ( HalpMcLoadSyncBarrier > 0 )
    _mm_pause();
  if ( (v2 & v4) != v4 )
    HalpMcUpdateMicrocode();
  _InterlockedDecrement(&HalpMcSyncBarrier);
  while ( HalpMcSyncBarrier > 0 )
    _mm_pause();
  return 0LL;
}
