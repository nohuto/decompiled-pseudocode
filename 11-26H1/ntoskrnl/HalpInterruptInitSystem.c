/*
 * XREFs of HalpInterruptInitSystem @ 0x140BEB450
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 *     HalpInterruptEnablePerformanceEvents @ 0x1404298AC (HalpInterruptEnablePerformanceEvents.c)
 *     HalpInterruptEnableNmi @ 0x140429E90 (HalpInterruptEnableNmi.c)
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     HalpInterruptBuildGlobalStartupStub @ 0x14057C69C (HalpInterruptBuildGlobalStartupStub.c)
 *     HalpInitializeInterruptsBspLate @ 0x14057D120 (HalpInitializeInterruptsBspLate.c)
 *     HalpInitializeInterruptsPn @ 0x14057D1EC (HalpInitializeInterruptsPn.c)
 *     HalpInterruptInitializeGlobals @ 0x14057D470 (HalpInterruptInitializeGlobals.c)
 *     HalpIsPrebootMode @ 0x140584F08 (HalpIsPrebootMode.c)
 *     HalpInterruptInitPowerManagement @ 0x1405900B4 (HalpInterruptInitPowerManagement.c)
 *     HalpInterruptInitDiscard @ 0x140CAFAB4 (HalpInterruptInitDiscard.c)
 *     HalpPreAllocateKInterrupts @ 0x140CB30FC (HalpPreAllocateKInterrupts.c)
 */

__int64 __fastcall HalpInterruptInitSystem(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v4; // ebx
  __int64 v5; // rcx
  __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // r8

  v4 = 0;
  if ( (int)a1 > 16 )
  {
    switch ( (_DWORD)a1 )
    {
      case 0x11:
        HalpPreAllocateKInterrupts();
        HalpInitializeInterruptsBspLate(v5);
        result = HalpInterruptBuildGlobalStartupStub();
        v4 = result;
        if ( (int)result < 0 )
          return result;
        break;
      case 0x13:
        break;
      case 0x15:
        if ( HalpInterruptLastProblem && HalpInterruptLastProblem != 14 )
          KeBugCheckEx(
            0x5Cu,
            0x203uLL,
            *(int *)(HalpInterruptController + 240),
            HalpInterruptController,
            HalpInterruptLastProblem);
        break;
      case 0x1D:
        return (unsigned int)HalpInterruptInitPowerManagement();
      default:
        return v4;
    }
    if ( !HalpIsPrebootMode() && (unsigned int)HalpInterruptModel() == 1 )
      HalpInterruptEnableNmi();
    if ( (HalpFeatureBits & 1) != 0 )
      HalpInterruptEnablePerformanceEvents(0LL, v7, v8);
    return v4;
  }
  if ( (_DWORD)a1 == 16 )
  {
    HalpInterruptRegistrationAllowed = 0;
  }
  else if ( (_DWORD)a1 )
  {
    switch ( (_DWORD)a1 )
    {
      case 4:
        HalpInitializeInterruptsPn(a1, a2, a3, a4);
        break;
      case 7:
        HalpInterruptInitializeGlobals();
        break;
      case 9:
        HalpInterruptInitDiscard(a3);
        break;
      case 0xB:
        _enable();
        break;
    }
  }
  else
  {
    off_140E009F0[0] = (__int64 (__fastcall *)())HaliAddInterruptRemapping;
    off_140E009F8[0] = (__int64 (__fastcall *)())HaliRemoveInterruptRemapping;
    off_140E00A28[0] = (__int64 (__fastcall *)())HalpInterruptGetIdentifiers;
    off_140E00A68[0] = (__int64 (__fastcall *)())xHalQueryProcessorRestartEntryPoint;
    off_140E00AC8[0] = (__int64 (__fastcall *)())HalpInterruptSetDestination;
    off_140E00B98[0] = (__int64 (__fastcall *)())HalpConnectThermalInterrupt;
    off_140E00BD8[0] = (__int64 (__fastcall *)())HalpPreprocessNmi;
  }
  return v4;
}
