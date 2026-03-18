/*
 * XREFs of HalpTimerInitializeEarlyStallSource @ 0x14057797C
 * Callers:
 *     HalpTimerInitSystem @ 0x1405774F0 (HalpTimerInitSystem.c)
 * Callees:
 *     HalpTimerSetProblemEx @ 0x1404FEB94 (HalpTimerSetProblemEx.c)
 *     Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline @ 0x140576A60 (Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpTimerInitialize @ 0x1405778D8 (HalpTimerInitialize.c)
 *     HalpFindTimer @ 0x140581834 (HalpFindTimer.c)
 *     HalpTimerRegisterBuiltinPluginsCommon @ 0x140582E04 (HalpTimerRegisterBuiltinPluginsCommon.c)
 */

__int64 __fastcall HalpTimerInitializeEarlyStallSource(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax
  int v5; // r10d
  ULONG_PTR Timer; // rax
  __int64 v7; // rbx
  unsigned int v8; // eax
  bool v9; // zf
  unsigned __int64 v10; // rcx

  LODWORD(HalpRegisteredTimerCount) = 0;
  qword_140FBD468 = (__int64)&HalpRegisteredTimers;
  HalpRegisteredTimers = (ULONG_PTR)&HalpRegisteredTimers;
  HalpTimerLoaderBlock = a1;
  if ( (unsigned int)Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 )
    {
      v4 = *(_QWORD *)(a1 + 240);
      if ( v4 )
      {
        if ( *(_DWORD *)(v4 + 2808) && *(_DWORD *)(v4 + 2812) )
          HalpWatchdogAbnormalResetDetected = 1;
      }
    }
  }
  v5 = HalpTimerRegisterBuiltinPluginsCommon(0LL, v2, v3);
  if ( v5 >= 0 )
  {
    if ( (_DWORD)HalpRegisteredTimerCount && (Timer = HalpFindTimer(0, 2, 0, 0, 1), (v7 = Timer) != 0) )
    {
      HalpPerformanceCounter = Timer;
      HalpStallCounter = Timer;
      v5 = HalpTimerInitialize(Timer);
      if ( v5 >= 0 )
      {
        v8 = *(_DWORD *)(v7 + 184) & 0xFFFFFFFB;
        v9 = *(_QWORD *)(v7 + 192) == 0LL;
        *(_DWORD *)(v7 + 184) = v8;
        if ( v9 )
        {
          *(_DWORD *)(v7 + 184) = v8 | 8;
          v10 = *(_QWORD *)(*(_QWORD *)(a1 + 240) + 2496LL);
          *(_QWORD *)(v7 + 192) = v10;
          if ( v10 < 0x3E8 )
          {
            *(_QWORD *)(v7 + 192) = 15625000LL;
            HalpTimerSetProblemEx(v7, 40, 0, (__int64)"minkernel\\hals\\lib\\timers\\common\\timer.c", 0x4C3u);
          }
        }
        else
        {
          HalpTimerProcessorFrequencyKnown = 1;
        }
      }
    }
    else
    {
      v5 = -1073741823;
      HalpTimerLastProblem = 21;
    }
  }
  else
  {
    HalpTimerLastProblem = 14;
  }
  return (unsigned int)v5;
}
