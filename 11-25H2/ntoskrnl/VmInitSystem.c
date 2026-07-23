/*
 * XREFs of VmInitSystem @ 0x140BCD898
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeLookasideListExInternal @ 0x140460CA0 (ExInitializeLookasideListExInternal.c)
 *     ExRegisterHost @ 0x1407B0F4C (ExRegisterHost.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     VmInitializeProcessor @ 0x140B5F5EC (VmInitializeProcessor.c)
 */

__int64 __fastcall VmInitSystem(int a1)
{
  __int64 result; // rax
  int v2; // [rsp+50h] [rbp+17h] BYREF
  __int64 (__fastcall **v3)(int, int, int, int, __int64, int); // [rsp+58h] [rbp+1Fh]
  _QWORD v4[2]; // [rsp+60h] [rbp+27h] BYREF
  int v5; // [rsp+70h] [rbp+37h]
  __int128 v6; // [rsp+74h] [rbp+3Bh]
  int v7; // [rsp+84h] [rbp+4Bh]

  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v2 = 1;
      v3 = &VmpHostInterface;
      v4[0] = 65544LL;
      v4[1] = &v2;
      v7 = 0;
      v6 = 0LL;
      v5 = 512;
      result = ExRegisterHost(&VmpExtensionHost, 1LL, (unsigned __int16 *)v4);
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
        (__int64)&unk_140E08FA8,
        (__int64)VmpTracingEnabledCallback,
        0LL);
      *(_QWORD *)&VmpTraceLoggingProvider = &unk_140E08FA8;
    }
    return 0LL;
  }
  result = VmInitializeProcessor((__int64)KeGetCurrentPrcb());
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
