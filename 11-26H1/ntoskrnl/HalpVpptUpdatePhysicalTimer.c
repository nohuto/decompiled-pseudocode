/*
 * XREFs of HalpVpptUpdatePhysicalTimer @ 0x140434048
 * Callers:
 *     HalpVpptAcknowledgeInterrupt @ 0x140433E70 (HalpVpptAcknowledgeInterrupt.c)
 *     HalpVpptArmTimer @ 0x140585660 (HalpVpptArmTimer.c)
 *     HalpVpptStop @ 0x140585850 (HalpVpptStop.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     HalpTimerGetInternalData @ 0x140433FD0 (HalpTimerGetInternalData.c)
 *     ExtEnvSetVpptTarget @ 0x1404358D0 (ExtEnvSetVpptTarget.c)
 *     HalpSetTimerAnyMode @ 0x140435C08 (HalpSetTimerAnyMode.c)
 *     ExtEnvCriticalFailure @ 0x140530120 (ExtEnvCriticalFailure.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalpVpptUpdatePhysicalTimer(__int64 a1)
{
  unsigned int v1; // ebx
  LARGE_INTEGER v2; // rdi
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rbx
  __int64 result; // rax
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  __int64 InternalData; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_DWORD *)(*(_QWORD *)&HalpVpptQueue + 16LL);
  v2 = *(LARGE_INTEGER *)(*(_QWORD *)&HalpVpptQueue + 32LL);
  if ( HalpVpptPhysicalTimerTarget != v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 228LL) != 3 )
    {
      InternalData = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
      guard_dispatch_icall_no_overrides(InternalData, v11);
      if ( (*(_DWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 224LL) & 0x200000) == 0 )
      {
        v12 = HalpTimerGetInternalData(*(__int64 *)&HalpVpptPhysicalTimer);
        guard_dispatch_icall_no_overrides(v12, v13);
      }
    }
    if ( HalpVpptPhysicalTimerTarget != v1 )
    {
      v8 = ExtEnvSetVpptTarget(a1, v1);
      if ( v8 < 0 )
        ExtEnvCriticalFailure(v9, 276, HalpVpptPhysicalTimerTarget, v1, v8);
      HalpVpptPhysicalTimerTarget = v1;
    }
  }
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v4 = 0LL;
  if ( InterruptTimePrecise.QuadPart <= (unsigned __int64)v2.QuadPart )
    v4 = v2.QuadPart - InterruptTimePrecise.QuadPart;
  v5 = 0x989680uLL / *(_QWORD *)(*(_QWORD *)&HalpVpptPhysicalTimer + 192LL);
  if ( v5 < 0x1388 )
    v5 = 5000LL;
  if ( v4 >= v5 )
    v5 = v4;
  result = HalpSetTimerAnyMode(*(_QWORD *)&HalpVpptPhysicalTimer, v5, v4, &PerformanceCounter);
  if ( (int)result < 0 )
    ExtEnvCriticalFailure(v7, 277, HalpVpptPhysicalTimer, v5, (int)result);
  return result;
}
