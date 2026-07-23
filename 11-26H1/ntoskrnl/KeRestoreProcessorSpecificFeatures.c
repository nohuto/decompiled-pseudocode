/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x1405322F4
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x140BF8260 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140C08EA0 (PopHandleNextState.c)
 * Callees:
 *     KiRestoreFeatureBits @ 0x140510000 (KiRestoreFeatureBits.c)
 *     KiRestoreXSaveSupport @ 0x140BEF008 (KiRestoreXSaveSupport.c)
 *     KiSetPageAttributesTable @ 0x140C1275C (KiSetPageAttributesTable.c)
 */

__int64 __fastcall KeRestoreProcessorSpecificFeatures(__int64 a1)
{
  unsigned __int64 v7; // rax

  KiSetPageAttributesTable();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    v7 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v7);
    __writemsr(0xC0000080, v7);
  }
  KiRestoreXSaveSupport(a1, _RDX);
  return KiRestoreFeatureBits();
}
