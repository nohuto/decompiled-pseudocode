/*
 * XREFs of CmRegisterInternalCallback @ 0x1409F0768
 * Callers:
 *     VrpIncrementSiloCount @ 0x140A4B7F0 (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x1409F085C (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( WheapPfaLock.KernelShadowStackInitial )
    return CmpRegisterCallbackInternal(
             (unsigned int)VrpRegistryCallback,
             0,
             a2,
             0,
             1,
             (__int64)&gLoadedDiffHivesLock.InitialStack);
  else
    return 3221225713LL;
}
