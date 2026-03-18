/*
 * XREFs of CmRegisterInternalCallback @ 0x140A04F70
 * Callers:
 *     VrpIncrementSiloCount @ 0x140A30890 (VrpIncrementSiloCount.c)
 * Callees:
 *     CmpRegisterCallbackInternal @ 0x140A0506C (CmpRegisterCallbackInternal.c)
 */

__int64 __fastcall CmRegisterInternalCallback(__int64 a1, int a2)
{
  if ( WheapPfaLock.AbWaitObject )
    return CmpRegisterCallbackInternal(
             (unsigned int)VrpRegistryCallback,
             0,
             a2,
             0,
             1,
             (__int64)&gLoadedDiffHivesLock.StackLimit);
  else
    return 3221225713LL;
}
