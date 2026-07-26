/*
 * XREFs of ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400C9AC0
 * Callers:
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 * Callees:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1400CC0B4 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014A32C (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void __fastcall ndisInitializeDmaSubsystem(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  unsigned __int8 (*v3)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v4; // [rsp+20h] [rbp-18h]
  void *v5; // [rsp+20h] [rbp-18h]

  ndisRegisterKnobs(&stru_1400F6F20, 1uLL, a3, 0LL, v4);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_14011E880);
  ndisDmaTelemetryUpdateBucketSchema(0x4210900080204uLL);
  ndisRegisterKnobs(&stru_1400F6F50, 1uLL, v3, ndisDmaTelemetryKnobsUpdateRoutine, v5);
}
