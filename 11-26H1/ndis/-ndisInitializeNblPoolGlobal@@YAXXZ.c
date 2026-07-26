/*
 * XREFs of ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CC7D8
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void ndisInitializeNblPoolGlobal(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v1; // [rsp+20h] [rbp-18h]

  KeInitializeSpinLock(&qword_14011E890);
  qword_14011F218 = (__int64)&qword_14011F210;
  qword_14011F210 = (__int64)&qword_14011F210;
  ndisRegisterKnobs(&stru_1400F6F90, 1uLL, v0, 0LL, v1);
}
