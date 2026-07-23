/*
 * XREFs of HalpInterruptSetProcessorStartContext @ 0x14057F260
 * Callers:
 *     HalpSetupRealModeResume @ 0x140727B50 (HalpSetupRealModeResume.c)
 *     HalpInterruptStartProcessor @ 0x140BF0190 (HalpInterruptStartProcessor.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     KeForceEnableNx @ 0x140BFB2A0 (KeForceEnableNx.c)
 */

__int64 __fastcall HalpInterruptSetProcessorStartContext(__int64 a1, const void *a2, char a3)
{
  int v4; // ecx

  if ( a2 )
    memmove((char *)HalpInterruptGlobalStartupBlock + 160, a2, 0x5E0uLL);
  v4 = (unsigned __int8)KeForceEnableNx() != 0;
  if ( HalpInterruptProcessorHidden )
    v4 |= 4u;
  *((_DWORD *)HalpInterruptGlobalStartupBlock + 32) = v4;
  *((_QWORD *)HalpInterruptGlobalStartupBlock + 18) = HalpLMStub;
  if ( a3 )
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) = HalpBlkTiledMemoryMapPa;
  else
    *((_QWORD *)HalpInterruptGlobalStartupBlock + 17) = HIDWORD(HalpDeviceBlockUnblockPushLock.Spare18);
  return 0LL;
}
