/*
 * XREFs of HalpBlkProcessorStartup @ 0x140C82870
 * Callers:
 *     <none>
 * Callees:
 *     HalpBlkApicInitializeLocalUnit @ 0x140C821F0 (HalpBlkApicInitializeLocalUnit.c)
 *     HalpBlkMceInitialize @ 0x140C827A0 (HalpBlkMceInitialize.c)
 *     HalpBlkIdleLoop @ 0x140C827E0 (HalpBlkIdleLoop.c)
 */

void __fastcall __noreturn HalpBlkProcessorStartup(unsigned __int64 a1)
{
  _disable();
  __writemsr(0xC0000101, a1);
  __writemsr(0xC0000102, a1);
  HalpBlkApicInitializeLocalUnit();
  HalpBlkMceInitialize();
  _InterlockedIncrement64(MK_FP(__GS__, 16LL));
  HalpBlkIdleLoop();
}
