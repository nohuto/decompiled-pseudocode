/*
 * XREFs of ?ReadKnobFromKey@InterfaceProfileKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163830
 * Callers:
 *     <none>
 * Callees:
 *     ?ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140163860 (-ReadKnobFromKey@RegistryKnobCollection@@MEAAJAEAVKRegKey@@AEBUKnobDescriptor@@AEAUKnobState@@@Z.c)
 */

__int64 __fastcall InterfaceProfileKnobCollection::ReadKnobFromKey(
        InterfaceProfileKnobCollection *this,
        struct KRegKey *a2,
        const struct KnobDescriptor *a3,
        struct KnobState *a4)
{
  if ( a2->m_ptr )
    return RegistryKnobCollection::ReadKnobFromKey(this, a2, a3, a4);
  else
    return 3221226021LL;
}
