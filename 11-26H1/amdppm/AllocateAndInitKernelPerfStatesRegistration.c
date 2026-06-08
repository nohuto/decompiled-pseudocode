/*
 * XREFs of AllocateAndInitKernelPerfStatesRegistration @ 0x14003232C
 * Callers:
 *     InitLegacyPccInternal @ 0x14000AE10 (InitLegacyPccInternal.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 *     InitPerfFeedbackInternal @ 0x140034294 (InitPerfFeedbackInternal.c)
 *     InitPerfStatesInternal @ 0x1400345C8 (InitPerfStatesInternal.c)
 *     RegisterKernelPepPerf @ 0x140036490 (RegisterKernelPepPerf.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AllocateAndInitKernelPerfStatesRegistration(__int64 a1, int a2, int a3)
{
  unsigned int v6; // r14d
  unsigned int v7; // r15d
  __int64 result; // rax

  v6 = 32 * a2 + 592;
  v7 = v6 + 24 * a3;
  result = ExAllocatePool2(64LL, v7 + 8 * a3 * a2, 1919119952LL);
  if ( result )
  {
    *(_DWORD *)result = 87;
    *(_QWORD *)(result + 576) = result + 592;
    *(_DWORD *)(result + 16) = a2;
    *(_QWORD *)(result + 568) = result + v6;
    *(_DWORD *)(result + 36) = a3;
    *(_QWORD *)(result + 584) = result + v7;
    if ( *(_BYTE *)(a1 + 1138) )
      *(_QWORD *)(result + 544) = PepParkPreference;
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x28u) )
    {
      *(_QWORD *)(result + 552) = PepParkMask;
      *(_QWORD *)(result + 560) = PepPerfCheckComplete;
      *(_QWORD *)(result + 96) = *(_QWORD *)(a1 + 1120);
    }
    if ( _bittest64((const signed __int64 *)(a1 + 280), 0x23u) )
      *(_QWORD *)(result + 520) = HwDebugUpdateProcessorData;
    *(_QWORD *)(result + 528) = PepProcQueryMeasCapabilities;
    *(_QWORD *)(result + 536) = PepProcQueryMeasValues;
  }
  return result;
}
