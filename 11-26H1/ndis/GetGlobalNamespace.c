/*
 * XREFs of GetGlobalNamespace @ 0x1400A6440
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x14013BA78 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     <none>
 */

KnobNamespace *GetGlobalNamespace()
{
  return &stru_14011E830;
}
