/*
 * XREFs of KeFindNextProcessorIndexEx @ 0x14025F64C
 * Callers:
 *     PpmParkFindSpecificTopologyMask @ 0x14025DB70 (PpmParkFindSpecificTopologyMask.c)
 *     PpmParkComputeUnparkMask @ 0x14025E0F0 (PpmParkComputeUnparkMask.c)
 *     KiSetSystemAffinityThread @ 0x14037E3D0 (KiSetSystemAffinityThread.c)
 * Callees:
 *     KeFindNextProcessorNumberEx @ 0x14025F6C0 (KeFindNextProcessorNumberEx.c)
 */

__int64 __fastcall KeFindNextProcessorIndexEx(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = *((_DWORD *)&KiSupervisorXStateFeaturesLock.SchedulerApc.Thread->Header.Lock + a2);
  HIWORD(v4) = v2 & 0x3F;
  LOWORD(v4) = v2 >> 6;
  if ( (unsigned int)KeFindNextProcessorNumberEx(a1, &v4, &v5) )
    return *((unsigned int *)&KiSupervisorXStateFeaturesLock.SchedulerApc.ApcListEntry.Flink[16 * (unsigned __int16)v5].Flink
           + BYTE2(v5));
  else
    return 0xFFFFFFFFLL;
}
