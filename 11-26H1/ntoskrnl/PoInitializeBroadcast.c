/*
 * XREFs of PoInitializeBroadcast @ 0x140AC752C
 * Callers:
 *     PopDirectedDripsInitializeBroadcast @ 0x140AC7158 (PopDirectedDripsInitializeBroadcast.c)
 *     PnprQuiesceDevices @ 0x140BF80F0 (PnprQuiesceDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmBeginHighPerfRequest @ 0x14049F800 (PpmBeginHighPerfRequest.c)
 *     PopHaltDeviceIdle @ 0x1404F3A6C (PopHaltDeviceIdle.c)
 *     PopBuildDeviceNotifyList @ 0x140C0AED8 (PopBuildDeviceNotifyList.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 PoInitializeBroadcast()
{
  unsigned int v0; // edi
  _QWORD *Pool2; // rsi
  _QWORD *v2; // rcx
  _QWORD *v3; // rdx
  __int64 v4; // r8
  _QWORD *v5; // rax

  v0 = 0;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v2 = Pool2 + 9;
    Pool2[2] = KeGetCurrentThread();
    v3 = Pool2 + 11;
    Pool2[1] = 0LL;
    Pool2[55] = Pool2 + 54;
    v4 = 5LL;
    Pool2[54] = Pool2 + 54;
    do
    {
      v2[1] = v3 - 2;
      *v2 = v3 - 2;
      v2[3] = v3;
      v2[2] = v3;
      v2[5] = v3 + 2;
      v2[4] = v3 + 2;
      v2 += 9;
      v5 = v3 + 4;
      v3 += 9;
      *(v2 - 2) = v5;
      *(v2 - 3) = v5;
      --v4;
    }
    while ( v4 );
    PpmBeginHighPerfRequest();
    PopCurrentBroadcast = 0uLL;
    qword_140F103F0 = Pool2;
    PopBuildDeviceNotifyList(Pool2 + 6);
    PopHaltDeviceIdle();
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
