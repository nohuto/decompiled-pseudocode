/*
 * XREFs of VmInitSystem @ 0x140C86258
 * Callers:
 *     InitBootProcessor @ 0x140CB07CC (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140492B20 (ExInitializeLookasideListExInternal.c)
 *     VmpAllocateFeaturesBitmap @ 0x14077EAA8 (VmpAllocateFeaturesBitmap.c)
 *     ExRegisterHost @ 0x140846CA8 (ExRegisterHost.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     VmInitializeProcessor @ 0x140C13BAC (VmInitializeProcessor.c)
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
      result = ExRegisterHost(&stru_140F06A28.StackLimit, 1LL, (unsigned __int16 *)v6);
      if ( (int)result < 0 )
        return result;
      ExInitializeLookasideListExInternal(
        &VmpLargeFaultBatchLookasideList,
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
        (__int64)&unk_140E08ED8,
        (__int64)VmpTracingEnabledCallback,
        0LL);
      stru_140F06A28.InitialStack = &unk_140E08ED8;
    }
    return 0LL;
  }
  else
  {
    stru_140F06A28.ThreadLock = VmpAllocateFeaturesBitmap();
    if ( stru_140F06A28.ThreadLock && (stru_140F06A28.CycleTime = VmpAllocateFeaturesBitmap()) != 0 )
    {
      stru_140F06A28.StackBase = (void *)stru_140F06A28.ThreadLock;
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
