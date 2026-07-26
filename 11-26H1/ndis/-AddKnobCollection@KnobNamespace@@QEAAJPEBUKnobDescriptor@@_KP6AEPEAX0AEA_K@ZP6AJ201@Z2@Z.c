/*
 * XREFs of ?AddKnobCollection@KnobNamespace@@QEAAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x140164E40
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x14017AAB0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x140164E70 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 */

__int64 __fastcall KnobNamespace::AddKnobCollection(
        KnobNamespace *this,
        const struct KnobDescriptor *a2,
        unsigned __int64 a3,
        unsigned __int8 (*a4)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a5)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  unsigned __int8 (*v6)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+20h] [rbp-28h]
  void *v7; // [rsp+30h] [rbp-18h]

  return KnobNamespace::BuildCollection(this, a2, a3, 1, v6, a5, v7);
}
