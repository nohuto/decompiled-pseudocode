/*
 * XREFs of ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14013C2A4
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x14009B014 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A48E0 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C7EE0 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400C9AC0 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CC7D8 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D44B0 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x140191604 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1400A6440 (GetGlobalNamespace.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 */

__int64 __fastcall ndisRegisterKnobs(
        const struct KnobDescriptor *a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a4)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  KnobNamespace *GlobalNamespace; // rax
  unsigned __int64 v5; // rdx
  int (*v6)(void *, const struct KnobDescriptor *, unsigned __int64); // r9
  const struct KnobDescriptor *v7; // r10
  unsigned __int8 (*v9)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+20h] [rbp-28h]
  void *v10; // [rsp+30h] [rbp-18h]

  GlobalNamespace = GetGlobalNamespace();
  return KnobNamespace::BuildCollection(GlobalNamespace, v7, v5, 1, v9, v6, v10);
}
