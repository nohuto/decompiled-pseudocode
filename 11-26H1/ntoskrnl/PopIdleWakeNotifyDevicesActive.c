/*
 * XREFs of PopIdleWakeNotifyDevicesActive @ 0x140421964
 * Callers:
 *     PopFxPlatformStateAvailable @ 0x140420E2C (PopFxPlatformStateAvailable.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 */

void __fastcall PopIdleWakeNotifyDevicesActive(unsigned __int8 a1)
{
  int v1; // edi
  KIRQL v2; // al
  _QWORD *v3; // rbx
  KIRQL v4; // si
  int v5; // edx
  LARGE_INTEGER v6; // rcx
  LONGLONG v7; // rax
  LARGE_INTEGER PerformanceCounter; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  PerformanceCounter.QuadPart = 0LL;
  v2 = KeAcquireSpinLockRaiseToDpc(&PopIdleWakeContextLock);
  v3 = PopIdleWakeContext;
  v4 = v2;
  if ( PopIdleWakeContext )
  {
    v5 = *(_DWORD *)PopIdleWakeContext;
    if ( (*(_DWORD *)PopIdleWakeContext & 0x10) != 0 && (*(_DWORD *)PopIdleWakeContext & 1) != v1 )
    {
      *(_DWORD *)PopIdleWakeContext = v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1;
      if ( (((unsigned __int8)v5 ^ ((unsigned __int8)v1 ^ (unsigned __int8)v5) & 1) & 2) == 0 )
      {
        RtlGetInterruptTimePrecise(&PerformanceCounter);
        v6 = PerformanceCounter;
        v7 = PerformanceCounter.QuadPart - v3[1];
        if ( (_BYTE)v1 )
          v3[4] += v7;
        else
          v3[3] += v7;
        v3[1] = v6.QuadPart;
      }
    }
  }
  KeReleaseSpinLock(&PopIdleWakeContextLock, v4);
}
