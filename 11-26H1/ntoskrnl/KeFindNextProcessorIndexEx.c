/*
 * XREFs of KeFindNextProcessorIndexEx @ 0x14045EADC
 * Callers:
 *     PpmParkComputeUnparkMask @ 0x14025D7A0 (PpmParkComputeUnparkMask.c)
 *     KiSetSystemAffinityThread @ 0x14037C620 (KiSetSystemAffinityThread.c)
 *     PpmParkFindSpecificTopologyMask @ 0x14045E650 (PpmParkFindSpecificTopologyMask.c)
 * Callees:
 *     KeFindNextProcessorNumberEx @ 0x14045EB50 (KeFindNextProcessorNumberEx.c)
 */

__int64 __fastcall KeFindNextProcessorIndexEx(__int64 a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF
  int v5; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  v5 = 0;
  v2 = *(_DWORD *)(*(_QWORD *)&KiSupervisorXStateFeaturesLock.WaitBlockFill11[112] + 4LL * a2);
  HIWORD(v4) = v2 & 0x3F;
  LOWORD(v4) = v2 >> 6;
  if ( (unsigned int)KeFindNextProcessorNumberEx(a1, &v4, &v5) )
    return *((unsigned int *)&KiSupervisorXStateFeaturesLock.WaitBlock[2].Thread->Header.Lock
           + 64 * (unsigned __int16)v5
           + BYTE2(v5));
  else
    return 0xFFFFFFFFLL;
}
