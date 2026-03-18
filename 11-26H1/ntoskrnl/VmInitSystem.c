/*
 * XREFs of VmInitSystem @ 0x140C80258
 * Callers:
 *     InitBootProcessor @ 0x140CAA7CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 *     VmpAllocateFeaturesBitmap @ 0x14077BF28 (VmpAllocateFeaturesBitmap.c)
 *     ExRegisterHost @ 0x140840A68 (ExRegisterHost.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     VmInitializeProcessor @ 0x140C0D99C (VmInitializeProcessor.c)
 */

__int64 __fastcall VmInitSystem(int a1)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 result; // rax
  int v4; // [rsp+50h] [rbp+17h] BYREF
  __int64 (__fastcall **v5)(int, int, int, int, __int64, int); // [rsp+58h] [rbp+1Fh]
  _QWORD v6[6]; // [rsp+60h] [rbp+27h] BYREF

  v1 = 0;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v4 = 65537;
      v5 = &VmpHostInterface;
      v6[0] = 65544LL;
      v6[1] = &v4;
      v6[2] = 512LL;
      v6[3] = VmHostRegistrationCallback;
      v6[4] = 0LL;
      result = ExRegisterHost(&stru_140F066E8.InitialStack, 1LL, (unsigned __int16 *)v6);
      if ( (int)result < 0 )
        return result;
      ExInitializeLookasideListExInternal(
        &VmpLargeFaultBatchLookasideList.L.ListHead,
        0LL,
        0LL,
        512,
        0,
        0x8020uLL,
        1649175894,
        0,
        0);
    }
    else if ( a1 == 2 )
    {
      TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
        (__int64)&unk_140E08EE0,
        (__int64)VmpTracingEnabledCallback,
        0LL);
      stru_140F066E8.QuantumTarget = (unsigned __int64)&unk_140E08EE0;
    }
    return 0LL;
  }
  else
  {
    stru_140F066E8.StackBase = (void *)VmpAllocateFeaturesBitmap();
    if ( stru_140F066E8.StackBase && (stru_140F066E8.StackLimit = (void *volatile)VmpAllocateFeaturesBitmap()) != 0LL )
    {
      stru_140F066E8.ThreadLock = (unsigned __int64)stru_140F066E8.StackBase;
      v2 = VmInitializeProcessor((__int64)KeGetCurrentPrcb());
      if ( v2 < 0 )
        return (unsigned int)v2;
      return v1;
    }
    else
    {
      return 3221225626LL;
    }
  }
}
