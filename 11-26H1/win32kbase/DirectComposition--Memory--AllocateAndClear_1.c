/*
 * XREFs of DirectComposition::Memory::AllocateAndClear_1 @ 0x140110AA4
 * Callers:
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z @ 0x1400A67C4 (-Synchronize@CSynchronizationManager@DirectComposition@@QEAAJPEAVCBatch@2@@Z.c)
 *     ?Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ @ 0x140110964 (-Initialize@CSynchronizationManager@DirectComposition@@IEAAJXZ.c)
 *     ?OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ @ 0x140110A28 (-OnSessionCreation@CSynchronizationManager@DirectComposition@@SAJXZ.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 */

__int64 __fastcall DirectComposition::Memory::AllocateAndClear_1(unsigned __int64 a1)
{
  return Win32AllocPoolZInitImpl(256LL, a1, 0x65734344u);
}
