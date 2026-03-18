/*
 * XREFs of DirectComposition::Memory::AllocateAndClear_1 @ 0x1400CC828
 * Callers:
 *     ?GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z @ 0x14004EB38 (-GetSyncData@CSynchronizationManager@DirectComposition@@IEAAPEAVCSyncData@2@_KPEAVCBatch@2@@Z.c)
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x1400CC6E8 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x1400CC7AC (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::AllocateAndClear_1(unsigned __int64 a1)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x65734344u);
}
