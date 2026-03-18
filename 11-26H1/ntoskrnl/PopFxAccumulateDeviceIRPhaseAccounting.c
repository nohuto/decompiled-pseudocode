/*
 * XREFs of PopFxAccumulateDeviceIRPhaseAccounting @ 0x14042D5E8
 * Callers:
 *     PopFxUpdateDeviceIRPhaseAccounting @ 0x14042C9FC (PopFxUpdateDeviceIRPhaseAccounting.c)
 *     PopFxEndDeviceIRPhaseAccounting @ 0x14042D59C (PopFxEndDeviceIRPhaseAccounting.c)
 * Callees:
 *     <none>
 */

void __fastcall PopFxAccumulateDeviceIRPhaseAccounting(__int64 a1)
{
  unsigned __int64 v1; // rcx

  v1 = a1 - stru_140F10828.Padding[2];
  unk_140F10CF0 += v1;
  if ( v1 > stru_140F10828.Padding[4] )
    stru_140F10828.Padding[4] = v1;
  if ( v1 < unk_140F10CE8 )
    unk_140F10CE8 = v1;
  ++unk_140F10CF8;
  stru_140F10828.Padding[2] = 0LL;
}
